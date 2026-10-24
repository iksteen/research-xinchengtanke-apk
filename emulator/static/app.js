import * as THREE from 'three';
import {OrbitControls} from './vendor/OrbitControls.js';

const $ = id => document.getElementById(id);
const keys = new Set();
let socket, state, toastTimer, lastLog = -1, cameraMode = 'follow', lastSent = 0;
const hex = n => n.toString(16).padStart(2,'0').toUpperCase();
function toast(message) { $('toast').textContent=message; $('toast').style.display='block'; clearTimeout(toastTimer); toastTimer=setTimeout(()=>$('toast').style.display='none',5000); }
function send(action, extra={}) { if(socket?.readyState===WebSocket.OPEN) socket.send(JSON.stringify({action,...extra})); }
function connect() {
  socket=new WebSocket(`${location.protocol==='https:'?'wss':'ws'}://${location.host}/ws`);
  socket.onopen=()=>{$('connection-dot').classList.remove('off');$('connection-label').textContent='Simulator online';};
  socket.onclose=()=>{$('connection-dot').classList.add('off');$('connection-label').textContent='Reconnecting…';keys.clear();setTimeout(connect,1500);};
  socket.onmessage=e=>{const data=JSON.parse(e.data);if(data.type==='state'){state=data;updateUI();}else if(data.type==='error')toast(data.message);else if(data.reply)toast(`Reply: ${data.reply}`);};
}
function updateUI() {
  const c=state.car,b=state.bluetooth;
  $('device-id').textContent=c.device_id.toUpperCase().match(/../g).join(' ');
  $('controller-id').textContent=c.controller?c.controller.toUpperCase().match(/../g).join(' '):'—';
  $('pair-status').textContent=c.paired?'PAIRED':'UNPAIRED';$('pair-status').classList.toggle('paired',c.paired);
  $('pair-button').disabled=b.enabled;$('pair-button').firstChild.textContent=b.enabled?(c.paired?'Android app connected ':'Listening for Android app… '):'Connect Android app ';$('release-button').disabled=!c.paired&&!b.enabled;
  $('local-button').disabled=c.paired&&c.controller==='73696d'&&!b.enabled;
  $('bluetooth-button').setAttribute('aria-checked',String(b.enabled));
  $('bluetooth-status').textContent=b.error||(b.enabled?`${b.adapter} · ${c.paired?'Controller paired':'Select the car in the Android app and open its Bluetooth pairing screen.'}`:c.paired?'Radio off · local simulation':'Connect, then open the car’s Bluetooth pairing screen in the Android app.');
  $('bluetooth-status').classList.toggle('error',Boolean(b.error));
  document.querySelectorAll('.dpad button,#power').forEach(el=>el.disabled=b.enabled);
  $('speed').innerHTML=`${(Math.abs(c.speed)*3.6).toFixed(1)} <small>km/h</small>`;
  $('throttle').innerHTML=`${Math.round(c.throttle*100)}<small>%</small>`;
  $('steering').innerHTML=`${Math.round(c.steering_angle*180/Math.PI)}<small>°</small>`;
  $('distance').innerHTML=`${c.distance.toFixed(1)} <small>m</small>`;
  $('activity-label').textContent=c.watchdog?'Signal timeout · car stopped':!c.paired?'Ready for a controller':Math.abs(c.speed)>.1?(c.speed<0?'Reversing':'Driving'):`Paired · ${c.source==='bluetooth'?'Android controller':'local controller'}`;
  for(const name of ['rx','tx']) $(name).textContent=c[name];$('drops').textContent=c.rejected;
  const packet=c.last_rx?.hex.split(' ');
  $('packet-bytes').replaceChildren(...Array.from({length:19},(_,i)=>{const span=document.createElement('div');span.className='packet-byte '+(i<2?'family':i<8?'identity':i===18?'checksum':'control');span.append(packet?packet[i].toUpperCase():'··');const small=document.createElement('small');small.textContent=String(i).padStart(2,'0');span.append(small);return span;}));
  $('opcode').textContent=packet?`0x${packet[1].toUpperCase()}`:'—';$('flags').textContent=`0x${hex(c.flags)}`;$('counter').textContent=c.counter;
  $('checksum-status').textContent=packet?'● Checksum valid':'Awaiting packet';
  const newest=c.log[0]?.id??0;
  if(newest!==lastLog){lastLog=newest;$('packet-log').replaceChildren(...c.log.slice(0,15).map(entry=>{const row=document.createElement('div');row.className='log-row';for(const [text,cls] of [[new Date(entry.time*1000).toLocaleTimeString('en-GB'),'time'],[entry.direction,'direction '+entry.direction.toLowerCase()],[entry.note,'note'],[entry.source,'source']]){const span=document.createElement('span');span.className=cls;span.textContent=text;row.append(span);}row.title=entry.hex;return row;}));}
}
function updateKeys() { document.querySelectorAll('[data-key]').forEach(el=>el.classList.toggle('active',keys.has(el.dataset.key))); $('brake-button').classList.toggle('active',keys.has('brake')); }
function drive(force=false){
  updateKeys();if(!state||state.bluetooth.enabled||socket?.readyState!==WebSocket.OPEN)return;
  const active=keys.size>0;
  if(!active&&!force&&(!state.car.paired||state.car.controller!=='73696d'))return;
  if(state.car.paired&&state.car.controller!=='73696d')return;
  if(keys.has('brake')){send('brake');return;}
  const power=Number($('power').value)/100;
  const throttle=((keys.has('forward')?1:0)-(keys.has('reverse')?1:0))*power;
  const steering=(keys.has('right')?1:0)-(keys.has('left')?1:0);
  send('drive',{throttle,steering});lastSent=performance.now();
}
const keyMap={KeyW:'forward',ArrowUp:'forward',KeyS:'reverse',ArrowDown:'reverse',KeyA:'left',ArrowLeft:'left',KeyD:'right',ArrowRight:'right',Space:'brake'};
window.addEventListener('keydown',e=>{if(['INPUT','TEXTAREA'].includes(e.target.tagName))return;const key=keyMap[e.code];if(!key)return;e.preventDefault();if(!keys.has(key)){keys.add(key);drive(true);}});
window.addEventListener('keyup',e=>{const key=keyMap[e.code];if(key){e.preventDefault();keys.delete(key);drive(true);}});
window.addEventListener('blur',()=>{keys.clear();drive(true);});
document.querySelectorAll('[data-key]').forEach(button=>{button.onpointerdown=e=>{button.setPointerCapture(e.pointerId);keys.add(button.dataset.key);drive(true);};const release=()=>{keys.delete(button.dataset.key);drive(true);};button.onpointerup=release;button.onpointercancel=release;button.onlostpointercapture=release;});
$('brake-button').onpointerdown=e=>{e.currentTarget.setPointerCapture(e.pointerId);keys.add('brake');drive(true);};
for(const event of ['pointerup','pointercancel','lostpointercapture'])$('brake-button').addEventListener(event,()=>{keys.delete('brake');drive(true);});
$('power').oninput=()=>{$('power-value').textContent=$('power').value+'%';drive(true);};
$('pair-button').onclick=()=>send('bluetooth',{enabled:true});$('release-button').onclick=()=>{keys.clear();send('release');};
$('local-button').onclick=()=>send('local');
$('reset-button').onclick=()=>{keys.clear();send('reset');};
$('bluetooth-button').onclick=()=>{keys.clear();send('bluetooth',{enabled:!state?.bluetooth.enabled});};
$('packet-form').onsubmit=e=>{e.preventDefault();send('packet',{hex:$('packet-input').value});};
setInterval(()=>{if(performance.now()-lastSent>=50)drive();},25);

const host=$('scene');
let renderer,scene,camera,controls,carRoot,floor,grid,sun,wheels=[],clock=new THREE.Clock(),distance=0;
let targetPosition=new THREE.Vector3(),currentPosition=new THREE.Vector3();
const cameraMount=new THREE.Vector3(),cameraAim=new THREE.Vector3();
const followOffset=new THREE.Vector3(4,3.3,-5.8);
const cameraModes=['follow','spoiler','orbit'];
const cameraLabels={follow:'Follow view',spoiler:'Spoiler POV',orbit:'Orbit view'};
function setCameraMode(mode){
  cameraMode=mode;controls.enabled=mode==='orbit';camera.fov=mode==='spoiler'?70:38;camera.updateProjectionMatrix();
  const next=cameraModes[(cameraModes.indexOf(mode)+1)%cameraModes.length];
  $('camera-button').querySelector('span').textContent=cameraLabels[mode];
  $('camera-button').setAttribute('aria-label',`Camera: ${cameraLabels[mode]}. Switch to ${cameraLabels[next]}`);
  $('camera-hint').textContent=mode==='orbit'?'Drag to orbit · scroll to zoom':mode==='spoiler'?'Spoiler POV · camera follows the car':'Follow view · camera tracks the car';
  carRoot.updateMatrixWorld(true);
  if(mode==='spoiler'){
    camera.position.copy(carRoot.localToWorld(cameraMount.clone()));camera.lookAt(carRoot.localToWorld(cameraAim.clone()));
  }else{
    camera.position.copy(carRoot.localToWorld(mode==='follow'?followOffset.clone():new THREE.Vector3(5.2,4.2,6.8)));
    controls.target.copy(currentPosition).add(new THREE.Vector3(0,.55,0));camera.lookAt(controls.target);
    if(mode==='orbit')controls.update();
  }
}
function meshNode(node,material) {
  const group=new THREE.Group();group.name=node.name;
  group.position.fromArray(node.position);group.quaternion.fromArray(node.rotation);group.scale.fromArray(node.scale);
  if(node.mesh){const data=node.mesh,g=new THREE.BufferGeometry();g.setAttribute('position',new THREE.Float32BufferAttribute(data.vertices.flat(),3));g.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals.flat(),3));g.setAttribute('uv',new THREE.Float32BufferAttribute(data.uv.flat(),2));g.setIndex(data.indices);const mesh=new THREE.Mesh(g,material);mesh.castShadow=true;mesh.receiveShadow=true;group.add(mesh);}
  node.children.forEach(child=>{const n=meshNode(child,material);group.add(n);});
  if(node.name.includes('TsunamiWheel'))wheels.push({group,base:group.quaternion.clone(),front:node.name.endsWith('LF')||node.name.endsWith('RF')});
  return group;
}
async function setupScene(){
  renderer=new THREE.WebGLRenderer({antialias:true,alpha:true});renderer.setPixelRatio(Math.min(devicePixelRatio,2));renderer.shadowMap.enabled=true;renderer.shadowMap.type=THREE.PCFSoftShadowMap;renderer.outputColorSpace=THREE.SRGBColorSpace;renderer.toneMapping=THREE.ACESFilmicToneMapping;renderer.toneMappingExposure=1.35;host.appendChild(renderer.domElement);
  scene=new THREE.Scene();scene.background=new THREE.Color('#141e28');scene.fog=new THREE.Fog('#141e28',65,190);
  camera=new THREE.PerspectiveCamera(38,1,.04,400);
  controls=new OrbitControls(camera,renderer.domElement);controls.target.set(0,.55,0);controls.enableDamping=true;controls.enablePan=false;controls.minDistance=4;controls.maxDistance=25;controls.maxPolarAngle=Math.PI*.47;controls.enabled=false;
  scene.add(new THREE.HemisphereLight(0xc7e5ff,0x59656a,2.8));
  sun=new THREE.DirectionalLight(0xfff1dd,4.5);sun.position.set(6,12,5);sun.castShadow=true;sun.shadow.mapSize.set(2048,2048);Object.assign(sun.shadow.camera,{left:-16,right:16,top:14,bottom:-14,near:.1,far:40});sun.shadow.bias=-.0005;sun.shadow.normalBias=.03;scene.add(sun,sun.target);
  const rim=new THREE.DirectionalLight(0x91bfff,2.5);rim.position.set(-5,4,-7);scene.add(rim);
  const loader=new THREE.TextureLoader();const [model,texture,floorTexture]=await Promise.all([fetch('/static/assets/race-car.json').then(r=>{if(!r.ok)throw Error('Car asset unavailable');return r.json();}),loader.loadAsync('/static/assets/race-car.png'),loader.loadAsync('/static/assets/asphalt.jpg')]);
  texture.colorSpace=THREE.SRGBColorSpace;texture.anisotropy=renderer.capabilities.getMaxAnisotropy();
  floorTexture.colorSpace=THREE.SRGBColorSpace;floorTexture.wrapS=floorTexture.wrapT=THREE.RepeatWrapping;floorTexture.repeat.set(120,120);floorTexture.anisotropy=renderer.capabilities.getMaxAnisotropy();
  // Recenter beyond the fog in whole texture periods, keeping an endless world fixed under the tyres.
  floor=new THREE.Mesh(new THREE.PlaneGeometry(1000,1000),new THREE.MeshStandardMaterial({map:floorTexture,color:0x4e5f6b,roughness:1}));floor.rotation.x=-Math.PI/2;floor.receiveShadow=true;scene.add(floor);
  grid=new THREE.GridHelper(1000,1000,0x426076,0x426076);grid.position.y=.005;grid.material.transparent=true;grid.material.opacity=.16;scene.add(grid);
  const coneGeometry=new THREE.ConeGeometry(.15,.44,12),coneMaterial=new THREE.MeshStandardMaterial({color:0xffa260,roughness:.6});
  for(let i=0;i<6;i++){for(const sign of [-1,1]){const cone=new THREE.Mesh(coneGeometry,coneMaterial);cone.position.set(sign*7,.22,-7+i*2.8);cone.castShadow=true;scene.add(cone);}}
  // A start grid and white/orange curb markers keep the scene readable at speed.
  for(let i=0;i<10;i++){for(let j=0;j<2;j++){const tile=new THREE.Mesh(new THREE.PlaneGeometry(.24,.24),new THREE.MeshBasicMaterial({color:(i+j)%2?0x263642:0xb6c4ce}));tile.rotation.x=-Math.PI/2;tile.position.set((i-4.5)*.24,.015,-2.7+j*.24);scene.add(tile);}}
  const root=meshNode(model,new THREE.MeshStandardMaterial({map:texture,roughness:.34,metalness:.25}));
  carRoot=new THREE.Group();carRoot.add(root);scene.add(carRoot);
  root.scale.multiplyScalar(.72);root.updateMatrixWorld(true);const box=new THREE.Box3().setFromObject(root);root.position.y-=box.min.y;
  const center=box.getCenter(new THREE.Vector3());root.position.x-=center.x;root.position.z-=center.z;
  const size=box.getSize(new THREE.Vector3());
  cameraMount.set(0,size.y+.20,-size.z/2+.15);
  cameraAim.set(0,size.y+.05,12);
  $('loading').remove();
  new ResizeObserver(()=>{const {width,height}=host.getBoundingClientRect();renderer.setSize(width,height);camera.aspect=width/height;camera.updateProjectionMatrix();}).observe(host);
  $('camera-button').onclick=()=>setCameraMode(cameraModes[(cameraModes.indexOf(cameraMode)+1)%cameraModes.length]);
  setCameraMode('follow');
  animate();
}
function animate(){
  requestAnimationFrame(animate);const dt=Math.min(clock.getDelta(),.1);
  if(state&&carRoot){const c=state.car;const previous=currentPosition.clone();targetPosition.set(c.x,0,c.z);currentPosition.lerp(targetPosition,1-Math.exp(-dt*18));carRoot.position.copy(currentPosition);
    const turn=Math.atan2(Math.sin(c.heading-carRoot.rotation.y),Math.cos(c.heading-carRoot.rotation.y));carRoot.rotation.y+=turn*(1-Math.exp(-dt*18));carRoot.updateMatrixWorld(true);
    if(cameraMode==='spoiler'){camera.position.copy(carRoot.localToWorld(cameraMount.clone()));camera.lookAt(carRoot.localToWorld(cameraAim.clone()));}
    else if(cameraMode==='follow'){camera.position.lerp(carRoot.localToWorld(followOffset.clone()),1-Math.exp(-dt*3));camera.lookAt(currentPosition.clone().add(new THREE.Vector3(0,.55,0)));}
    else{camera.position.add(currentPosition.clone().sub(previous));controls.target.copy(currentPosition).add(new THREE.Vector3(0,.55,0));controls.update();}
    floor.position.x=grid.position.x=Math.round(currentPosition.x/100)*100;
    floor.position.z=grid.position.z=Math.round(currentPosition.z/100)*100;
    sun.position.copy(currentPosition).add(new THREE.Vector3(6,12,5));sun.target.position.copy(currentPosition);
    distance+=c.speed*dt/.34;
    for(const wheel of wheels){wheel.group.quaternion.copy(wheel.base);if(wheel.front)wheel.group.rotateZ(-c.steering_angle);wheel.group.rotateX(distance);}
  }
  renderer.render(scene,camera);
}
connect();setupScene().catch(error=>{$('loading').textContent='The 3D view could not load. Refresh with WebGL enabled.';console.error(error);});
// Expose only read-only diagnostics for browser tests and local inspection.
window.emulatorState=()=>state;
window.emulatorView=()=>({mode:cameraMode,camera:camera?.position.toArray(),car:carRoot?.position.toArray(),heading:carRoot?.rotation.y,mount:cameraMount.toArray(),ground:floor?.position.toArray()});
