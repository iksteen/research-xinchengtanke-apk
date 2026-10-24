; ContainerRemoteCarUIController$$Update
; void ContainerRemoteCarUIController__Update (ContainerRemoteCarUIController_o* __this, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000dd8f6c <__start_il2cpp@@Base+0x944548>:
  dd8f6c:	f81c0ff7 	str	x23, [sp, #-64]!
  dd8f70:	a90157f6 	stp	x22, x21, [sp, #16]
  dd8f74:	a9024ff4 	stp	x20, x19, [sp, #32]
  dd8f78:	a9037bfd 	stp	x29, x30, [sp, #48]
  dd8f7c:	9100c3fd 	add	x29, sp, #0x30
  dd8f80:	d0002b74 	adrp	x20, 1346000 <__bss_start__@@Base+0x7930>
  dd8f84:	3979be88 	ldrb	w8, [x20, #3695]
  dd8f88:	aa0003f3 	mov	x19, x0
  dd8f8c:	37000428 	tbnz	w8, #0, dd9010 <__start_il2cpp@@Base+0x9445ec>
  dd8f90:	f0002480 	adrp	x0, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dd8f94:	f9446c00 	ldr	x0, [x0, #2264]
  dd8f98:	97d965e9 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8f9c:	90002540 	adrp	x0, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dd8fa0:	f9440800 	ldr	x0, [x0, #2064]
  dd8fa4:	97d965e6 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8fa8:	d0002560 	adrp	x0, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  dd8fac:	f9452000 	ldr	x0, [x0, #2624]
  dd8fb0:	97d965e3 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8fb4:	90002520 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dd8fb8:	f944f800 	ldr	x0, [x0, #2544]
  dd8fbc:	97d965e0 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8fc0:	90002520 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dd8fc4:	f9454800 	ldr	x0, [x0, #2704]
  dd8fc8:	97d965dd 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8fcc:	b0002580 	adrp	x0, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dd8fd0:	f941f800 	ldr	x0, [x0, #1008]
  dd8fd4:	97d965da 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8fd8:	d00024a0 	adrp	x0, 126e000 <_ZTISt10bad_typeid@@Base+0xb650>
  dd8fdc:	f9450400 	ldr	x0, [x0, #2568]
  dd8fe0:	97d965d7 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8fe4:	f0002500 	adrp	x0, 127b000 <_ZTISt10bad_typeid@@Base+0x18650>
  dd8fe8:	f9454000 	ldr	x0, [x0, #2688]
  dd8fec:	97d965d4 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8ff0:	f0002580 	adrp	x0, 128b000 <_ZTISt10bad_typeid@@Base+0x28650>
  dd8ff4:	f941e400 	ldr	x0, [x0, #968]
  dd8ff8:	97d965d1 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd8ffc:	f0002560 	adrp	x0, 1287000 <_ZTISt10bad_typeid@@Base+0x24650>
  dd9000:	f942c000 	ldr	x0, [x0, #1408]
  dd9004:	97d965ce 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd9008:	320003e8 	orr	w8, wzr, #0x1
  dd900c:	3939be88 	strb	w8, [x20, #3695]
  dd9010:	90002596 	adrp	x22, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dd9014:	f941fad6 	ldr	x22, [x22, #1008]
  dd9018:	f94002c0 	ldr	x0, [x22]
  dd901c:	3944cc08 	ldrb	w8, [x0, #307]
  dd9020:	361000a8 	tbz	w8, #2, dd9034 <__start_il2cpp@@Base+0x944610>
  dd9024:	b940e008 	ldr	w8, [x0, #224]
  dd9028:	35000068 	cbnz	w8, dd9034 <__start_il2cpp@@Base+0x944610>
  dd902c:	97d965f0 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9030:	f94002c0 	ldr	x0, [x22]
  dd9034:	f9405c08 	ldr	x8, [x0, #184]
  dd9038:	39408108 	ldrb	w8, [x8, #32]
  dd903c:	340040c8 	cbz	w8, dd9854 <__start_il2cpp@@Base+0x944e30>
  dd9040:	b0002577 	adrp	x23, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  dd9044:	f94522f7 	ldr	x23, [x23, #2624]
  dd9048:	52800141 	mov	w1, #0xa                   	// #10
  dd904c:	f94002e0 	ldr	x0, [x23]
  dd9050:	97d965c0 	bl	432750 <WriteZStream@@Base+0xa270>
  dd9054:	aa1303f4 	mov	x20, x19
  dd9058:	f8028e80 	str	x0, [x20, #40]!
  dd905c:	aa0003e1 	mov	x1, x0
  dd9060:	aa1403e0 	mov	x0, x20
  dd9064:	97d9659f 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dd9068:	f94002c0 	ldr	x0, [x22]
  dd906c:	3944cc08 	ldrb	w8, [x0, #307]
  dd9070:	361000a8 	tbz	w8, #2, dd9084 <__start_il2cpp@@Base+0x944660>
  dd9074:	b940e008 	ldr	w8, [x0, #224]
  dd9078:	35000068 	cbnz	w8, dd9084 <__start_il2cpp@@Base+0x944660>
  dd907c:	97d965dc 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9080:	f94002c0 	ldr	x0, [x22]
  dd9084:	f9405c08 	ldr	x8, [x0, #184]
  dd9088:	b9405108 	ldr	w8, [x8, #80]
  dd908c:	7100051f 	cmp	w8, #0x1
  dd9090:	54000061 	b.ne	dd909c <__start_il2cpp@@Base+0x944678>  // b.any
  dd9094:	2a1f03e1 	mov	w1, wzr
  dd9098:	1400000e 	b	dd90d0 <__start_il2cpp@@Base+0x9446ac>
  dd909c:	3944cc09 	ldrb	w9, [x0, #307]
  dd90a0:	361000e9 	tbz	w9, #2, dd90bc <__start_il2cpp@@Base+0x944698>
  dd90a4:	b940e009 	ldr	w9, [x0, #224]
  dd90a8:	350000a9 	cbnz	w9, dd90bc <__start_il2cpp@@Base+0x944698>
  dd90ac:	97d965d0 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd90b0:	f94002c8 	ldr	x8, [x22]
  dd90b4:	f9405d08 	ldr	x8, [x8, #184]
  dd90b8:	b9405108 	ldr	w8, [x8, #80]
  dd90bc:	3100051f 	cmn	w8, #0x1
  dd90c0:	54000060 	b.eq	dd90cc <__start_il2cpp@@Base+0x9446a8>  // b.none
  dd90c4:	2a1f03f5 	mov	w21, wzr
  dd90c8:	14000007 	b	dd90e4 <__start_il2cpp@@Base+0x9446c0>
  dd90cc:	320003e1 	orr	w1, wzr, #0x1
  dd90d0:	320003e2 	orr	w2, wzr, #0x1
  dd90d4:	2a1f03e0 	mov	w0, wzr
  dd90d8:	aa1f03e3 	mov	x3, xzr
  dd90dc:	97e877e3 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  dd90e0:	2a0003f5 	mov	w21, w0
  dd90e4:	f94002c0 	ldr	x0, [x22]
  dd90e8:	3944cc08 	ldrb	w8, [x0, #307]
  dd90ec:	361000a8 	tbz	w8, #2, dd9100 <__start_il2cpp@@Base+0x9446dc>
  dd90f0:	b940e008 	ldr	w8, [x0, #224]
  dd90f4:	35000068 	cbnz	w8, dd9100 <__start_il2cpp@@Base+0x9446dc>
  dd90f8:	97d965bd 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd90fc:	f94002c0 	ldr	x0, [x22]
  dd9100:	f9405c08 	ldr	x8, [x0, #184]
  dd9104:	b9404d08 	ldr	w8, [x8, #76]
  dd9108:	7100051f 	cmp	w8, #0x1
  dd910c:	54000061 	b.ne	dd9118 <__start_il2cpp@@Base+0x9446f4>  // b.any
  dd9110:	321f03e1 	orr	w1, wzr, #0x2
  dd9114:	1400000c 	b	dd9144 <__start_il2cpp@@Base+0x944720>
  dd9118:	3944cc09 	ldrb	w9, [x0, #307]
  dd911c:	361000e9 	tbz	w9, #2, dd9138 <__start_il2cpp@@Base+0x944714>
  dd9120:	b940e009 	ldr	w9, [x0, #224]
  dd9124:	350000a9 	cbnz	w9, dd9138 <__start_il2cpp@@Base+0x944714>
  dd9128:	97d965b1 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd912c:	f94002c8 	ldr	x8, [x22]
  dd9130:	f9405d08 	ldr	x8, [x8, #184]
  dd9134:	b9404d08 	ldr	w8, [x8, #76]
  dd9138:	3100051f 	cmn	w8, #0x1
  dd913c:	540000e1 	b.ne	dd9158 <__start_il2cpp@@Base+0x944734>  // b.any
  dd9140:	320007e1 	orr	w1, wzr, #0x3
  dd9144:	320003e2 	orr	w2, wzr, #0x1
  dd9148:	2a1503e0 	mov	w0, w21
  dd914c:	aa1f03e3 	mov	x3, xzr
  dd9150:	97e877c6 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  dd9154:	2a0003f5 	mov	w21, w0
  dd9158:	f94002c0 	ldr	x0, [x22]
  dd915c:	3944cc08 	ldrb	w8, [x0, #307]
  dd9160:	361000a8 	tbz	w8, #2, dd9174 <__start_il2cpp@@Base+0x944750>
  dd9164:	b940e008 	ldr	w8, [x0, #224]
  dd9168:	35000068 	cbnz	w8, dd9174 <__start_il2cpp@@Base+0x944750>
  dd916c:	97d965a0 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9170:	f94002c0 	ldr	x0, [x22]
  dd9174:	f9405c08 	ldr	x8, [x0, #184]
  dd9178:	90000209 	adrp	x9, e19000 <__stop_il2cpp@@Base+0x26130>
  dd917c:	bd468120 	ldr	s0, [x9, #1664]
  dd9180:	90000209 	adrp	x9, e19000 <__stop_il2cpp@@Base+0x26130>
  dd9184:	2d538901 	ldp	s1, s2, [x8, #156]
  dd9188:	bd452523 	ldr	s3, [x9, #1316]
  dd918c:	b9404268 	ldr	w8, [x19, #64]
  dd9190:	1e200821 	fmul	s1, s1, s0
  dd9194:	1e200840 	fmul	s0, s2, s0
  dd9198:	1e22c022 	fcvt	d2, s1
  dd919c:	1e232020 	fcmp	s1, s3
  dd91a0:	1e22c004 	fcvt	d4, s0
  dd91a4:	1e614041 	fneg	d1, d2
  dd91a8:	1e620c21 	fcsel	d1, d1, d2, eq	// eq = none
  dd91ac:	1e614082 	fneg	d2, d4
  dd91b0:	1e232000 	fcmp	s0, s3
  dd91b4:	1e640c40 	fcsel	d0, d2, d4, eq	// eq = none
  dd91b8:	34000068 	cbz	w8, dd91c4 <__start_il2cpp@@Base+0x9447a0>
  dd91bc:	b9403e68 	ldr	w8, [x19, #60]
  dd91c0:	14000009 	b	dd91e4 <__start_il2cpp@@Base+0x9447c0>
  dd91c4:	b9403e68 	ldr	w8, [x19, #60]
  dd91c8:	321e07e9 	orr	w9, wzr, #0xc
  dd91cc:	b9004269 	str	w9, [x19, #64]
  dd91d0:	11000509 	add	w9, w8, #0x1
  dd91d4:	7103ed3f 	cmp	w9, #0xfb
  dd91d8:	320003e9 	orr	w9, wzr, #0x1
  dd91dc:	1a88a528 	csinc	w8, w9, w8, ge	// ge = tcont
  dd91e0:	b9003e68 	str	w8, [x19, #60]
  dd91e4:	f9400289 	ldr	x9, [x20]
  dd91e8:	b4003469 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd91ec:	b940192a 	ldr	w10, [x9, #24]
  dd91f0:	340033ca 	cbz	w10, dd9868 <__start_il2cpp@@Base+0x944e44>
  dd91f4:	39008135 	strb	w21, [x9, #32]
  dd91f8:	f9400289 	ldr	x9, [x20]
  dd91fc:	b40033c9 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9200:	b940192a 	ldr	w10, [x9, #24]
  dd9204:	7100055f 	cmp	w10, #0x1
  dd9208:	54003309 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd920c:	3900853f 	strb	wzr, [x9, #33]
  dd9210:	f9400289 	ldr	x9, [x20]
  dd9214:	b4003309 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9218:	b940192a 	ldr	w10, [x9, #24]
  dd921c:	7100095f 	cmp	w10, #0x2
  dd9220:	54003249 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9224:	1e78002a 	fcvtzs	w10, d1
  dd9228:	3900892a 	strb	w10, [x9, #34]
  dd922c:	f9400289 	ldr	x9, [x20]
  dd9230:	b4003229 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9234:	b940192a 	ldr	w10, [x9, #24]
  dd9238:	71000d5f 	cmp	w10, #0x3
  dd923c:	54003169 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9240:	1e78000a 	fcvtzs	w10, d0
  dd9244:	39008d2a 	strb	w10, [x9, #35]
  dd9248:	f9400289 	ldr	x9, [x20]
  dd924c:	b4003149 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9250:	b940192a 	ldr	w10, [x9, #24]
  dd9254:	7100115f 	cmp	w10, #0x4
  dd9258:	54003089 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd925c:	3900913f 	strb	wzr, [x9, #36]
  dd9260:	f9400289 	ldr	x9, [x20]
  dd9264:	b4003089 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9268:	b940192a 	ldr	w10, [x9, #24]
  dd926c:	7100155f 	cmp	w10, #0x5
  dd9270:	54002fc9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9274:	3900953f 	strb	wzr, [x9, #37]
  dd9278:	f9400289 	ldr	x9, [x20]
  dd927c:	b4002fc9 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9280:	b940192a 	ldr	w10, [x9, #24]
  dd9284:	7100195f 	cmp	w10, #0x6
  dd9288:	54002f09 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd928c:	39009928 	strb	w8, [x9, #38]
  dd9290:	a9428660 	ldp	x0, x1, [x19, #40]
  dd9294:	aa1f03e2 	mov	x2, xzr
  dd9298:	97e876e4 	bl	7f6e28 <__start_il2cpp@@Base+0x362404>
  dd929c:	370016e0 	tbnz	w0, #0, dd9578 <__start_il2cpp@@Base+0x944b54>
  dd92a0:	b9403a68 	ldr	w8, [x19, #56]
  dd92a4:	350016a8 	cbnz	w8, dd9578 <__start_il2cpp@@Base+0x944b54>
  dd92a8:	a9428660 	ldp	x0, x1, [x19, #40]
  dd92ac:	aa1f03e2 	mov	x2, xzr
  dd92b0:	97e876fe 	bl	7f6ea8 <__start_il2cpp@@Base+0x362484>
  dd92b4:	f94002e0 	ldr	x0, [x23]
  dd92b8:	52800261 	mov	w1, #0x13                  	// #19
  dd92bc:	97d96525 	bl	432750 <WriteZStream@@Base+0xa270>
  dd92c0:	b4002da0 	cbz	x0, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd92c4:	b9401808 	ldr	w8, [x0, #24]
  dd92c8:	aa0003f5 	mov	x21, x0
  dd92cc:	34002ce8 	cbz	w8, dd9868 <__start_il2cpp@@Base+0x944e44>
  dd92d0:	39406269 	ldrb	w9, [x19, #24]
  dd92d4:	7100051f 	cmp	w8, #0x1
  dd92d8:	390082a9 	strb	w9, [x21, #32]
  dd92dc:	54002c60 	b.eq	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.none
  dd92e0:	39406a68 	ldrb	w8, [x19, #26]
  dd92e4:	390086a8 	strb	w8, [x21, #33]
  dd92e8:	f94002c0 	ldr	x0, [x22]
  dd92ec:	3944cc08 	ldrb	w8, [x0, #307]
  dd92f0:	361000a8 	tbz	w8, #2, dd9304 <__start_il2cpp@@Base+0x9448e0>
  dd92f4:	b940e008 	ldr	w8, [x0, #224]
  dd92f8:	35000068 	cbnz	w8, dd9304 <__start_il2cpp@@Base+0x9448e0>
  dd92fc:	97d9653c 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9300:	f94002c0 	ldr	x0, [x22]
  dd9304:	f9405c08 	ldr	x8, [x0, #184]
  dd9308:	f9400d09 	ldr	x9, [x8, #24]
  dd930c:	b4002b49 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9310:	b9401928 	ldr	w8, [x9, #24]
  dd9314:	34002aa8 	cbz	w8, dd9868 <__start_il2cpp@@Base+0x944e44>
  dd9318:	f9400ea8 	ldr	x8, [x21, #24]
  dd931c:	7100091f 	cmp	w8, #0x2
  dd9320:	54002a49 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9324:	39408129 	ldrb	w9, [x9, #32]
  dd9328:	39008aa9 	strb	w9, [x21, #34]
  dd932c:	f94002c9 	ldr	x9, [x22]
  dd9330:	f9405d29 	ldr	x9, [x9, #184]
  dd9334:	f9400d29 	ldr	x9, [x9, #24]
  dd9338:	b40029e9 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd933c:	b940192a 	ldr	w10, [x9, #24]
  dd9340:	7100055f 	cmp	w10, #0x1
  dd9344:	54002929 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9348:	71000d1f 	cmp	w8, #0x3
  dd934c:	540028e9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9350:	39408529 	ldrb	w9, [x9, #33]
  dd9354:	39008ea9 	strb	w9, [x21, #35]
  dd9358:	f94002c9 	ldr	x9, [x22]
  dd935c:	f9405d29 	ldr	x9, [x9, #184]
  dd9360:	f9400d29 	ldr	x9, [x9, #24]
  dd9364:	b4002889 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9368:	b940192a 	ldr	w10, [x9, #24]
  dd936c:	7100095f 	cmp	w10, #0x2
  dd9370:	540027c9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9374:	7100111f 	cmp	w8, #0x4
  dd9378:	54002789 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd937c:	39408929 	ldrb	w9, [x9, #34]
  dd9380:	f0002516 	adrp	x22, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dd9384:	390092a9 	strb	w9, [x21, #36]
  dd9388:	f9454ad6 	ldr	x22, [x22, #2704]
  dd938c:	f94002c0 	ldr	x0, [x22]
  dd9390:	3944cc09 	ldrb	w9, [x0, #307]
  dd9394:	361000a9 	tbz	w9, #2, dd93a8 <__start_il2cpp@@Base+0x944984>
  dd9398:	b940e009 	ldr	w9, [x0, #224]
  dd939c:	35000069 	cbnz	w9, dd93a8 <__start_il2cpp@@Base+0x944984>
  dd93a0:	97d96513 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd93a4:	f9400ea8 	ldr	x8, [x21, #24]
  dd93a8:	7100151f 	cmp	w8, #0x5
  dd93ac:	540025e9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd93b0:	f94002c9 	ldr	x9, [x22]
  dd93b4:	7100191f 	cmp	w8, #0x6
  dd93b8:	f9405d29 	ldr	x9, [x9, #184]
  dd93bc:	39404929 	ldrb	w9, [x9, #18]
  dd93c0:	390096a9 	strb	w9, [x21, #37]
  dd93c4:	54002520 	b.eq	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.none
  dd93c8:	f94002c9 	ldr	x9, [x22]
  dd93cc:	71001d1f 	cmp	w8, #0x7
  dd93d0:	f9405d29 	ldr	x9, [x9, #184]
  dd93d4:	39404d29 	ldrb	w9, [x9, #19]
  dd93d8:	39009aa9 	strb	w9, [x21, #38]
  dd93dc:	54002469 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd93e0:	f94002c9 	ldr	x9, [x22]
  dd93e4:	f9405d29 	ldr	x9, [x9, #184]
  dd93e8:	39405129 	ldrb	w9, [x9, #20]
  dd93ec:	39009ea9 	strb	w9, [x21, #39]
  dd93f0:	f9400289 	ldr	x9, [x20]
  dd93f4:	b4002409 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd93f8:	b940192a 	ldr	w10, [x9, #24]
  dd93fc:	3400236a 	cbz	w10, dd9868 <__start_il2cpp@@Base+0x944e44>
  dd9400:	7100211f 	cmp	w8, #0x8
  dd9404:	54002329 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9408:	39408129 	ldrb	w9, [x9, #32]
  dd940c:	3900a2a9 	strb	w9, [x21, #40]
  dd9410:	f9400289 	ldr	x9, [x20]
  dd9414:	b4002309 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9418:	b940192a 	ldr	w10, [x9, #24]
  dd941c:	7100055f 	cmp	w10, #0x1
  dd9420:	54002249 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9424:	7100251f 	cmp	w8, #0x9
  dd9428:	54002209 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd942c:	39408529 	ldrb	w9, [x9, #33]
  dd9430:	3900a6a9 	strb	w9, [x21, #41]
  dd9434:	f9400289 	ldr	x9, [x20]
  dd9438:	b40021e9 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd943c:	b940192a 	ldr	w10, [x9, #24]
  dd9440:	7100095f 	cmp	w10, #0x2
  dd9444:	54002129 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9448:	7100291f 	cmp	w8, #0xa
  dd944c:	540020e9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9450:	39408929 	ldrb	w9, [x9, #34]
  dd9454:	3900aaa9 	strb	w9, [x21, #42]
  dd9458:	f9400289 	ldr	x9, [x20]
  dd945c:	b40020c9 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9460:	b940192a 	ldr	w10, [x9, #24]
  dd9464:	71000d5f 	cmp	w10, #0x3
  dd9468:	54002009 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd946c:	71002d1f 	cmp	w8, #0xb
  dd9470:	54001fc9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9474:	39408d29 	ldrb	w9, [x9, #35]
  dd9478:	3900aea9 	strb	w9, [x21, #43]
  dd947c:	f9400289 	ldr	x9, [x20]
  dd9480:	b4001fa9 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9484:	b940192a 	ldr	w10, [x9, #24]
  dd9488:	7100115f 	cmp	w10, #0x4
  dd948c:	54001ee9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9490:	7100311f 	cmp	w8, #0xc
  dd9494:	54001ea9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9498:	39409129 	ldrb	w9, [x9, #36]
  dd949c:	3900b2a9 	strb	w9, [x21, #44]
  dd94a0:	f9400289 	ldr	x9, [x20]
  dd94a4:	b4001e89 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd94a8:	b940192a 	ldr	w10, [x9, #24]
  dd94ac:	7100155f 	cmp	w10, #0x5
  dd94b0:	54001dc9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd94b4:	7100351f 	cmp	w8, #0xd
  dd94b8:	54001d89 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd94bc:	39409529 	ldrb	w9, [x9, #37]
  dd94c0:	3900b6a9 	strb	w9, [x21, #45]
  dd94c4:	f9400289 	ldr	x9, [x20]
  dd94c8:	b4001d69 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd94cc:	b940192a 	ldr	w10, [x9, #24]
  dd94d0:	7100195f 	cmp	w10, #0x6
  dd94d4:	54001ca9 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd94d8:	7100391f 	cmp	w8, #0xe
  dd94dc:	54001c69 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd94e0:	39409929 	ldrb	w9, [x9, #38]
  dd94e4:	3900baa9 	strb	w9, [x21, #46]
  dd94e8:	f9400289 	ldr	x9, [x20]
  dd94ec:	b4001c49 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd94f0:	b940192a 	ldr	w10, [x9, #24]
  dd94f4:	71001d5f 	cmp	w10, #0x7
  dd94f8:	54001b89 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd94fc:	71003d1f 	cmp	w8, #0xf
  dd9500:	54001b49 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9504:	39409d29 	ldrb	w9, [x9, #39]
  dd9508:	3900bea9 	strb	w9, [x21, #47]
  dd950c:	f9400289 	ldr	x9, [x20]
  dd9510:	b4001b29 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9514:	b940192a 	ldr	w10, [x9, #24]
  dd9518:	7100215f 	cmp	w10, #0x8
  dd951c:	54001a69 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9520:	7100411f 	cmp	w8, #0x10
  dd9524:	54001a29 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9528:	3940a129 	ldrb	w9, [x9, #40]
  dd952c:	3900c2a9 	strb	w9, [x21, #48]
  dd9530:	f9400289 	ldr	x9, [x20]
  dd9534:	b4001a09 	cbz	x9, dd9874 <__start_il2cpp@@Base+0x944e50>
  dd9538:	b940192a 	ldr	w10, [x9, #24]
  dd953c:	7100255f 	cmp	w10, #0x9
  dd9540:	54001949 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd9544:	7100451f 	cmp	w8, #0x11
  dd9548:	54001909 	b.ls	dd9868 <__start_il2cpp@@Base+0x944e44>  // b.plast
  dd954c:	3940a528 	ldrb	w8, [x9, #41]
  dd9550:	aa1303f4 	mov	x20, x19
  dd9554:	aa1503e1 	mov	x1, x21
  dd9558:	3900c6a8 	strb	w8, [x21, #49]
  dd955c:	f8020e95 	str	x21, [x20, #32]!
  dd9560:	aa1403e0 	mov	x0, x20
  dd9564:	97d9645f 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dd9568:	320003e8 	orr	w8, wzr, #0x1
  dd956c:	320007e9 	orr	w9, wzr, #0x3
  dd9570:	381fd288 	sturb	w8, [x20, #-3]
  dd9574:	b9001a89 	str	w9, [x20, #24]
  dd9578:	39407668 	ldrb	w8, [x19, #29]
  dd957c:	34001228 	cbz	w8, dd97c0 <__start_il2cpp@@Base+0x944d9c>
  dd9580:	3900767f 	strb	wzr, [x19, #29]
  dd9584:	d0002576 	adrp	x22, 1287000 <_ZTISt10bad_typeid@@Base+0x24650>
  dd9588:	f942c2d6 	ldr	x22, [x22, #1408]
  dd958c:	f94002c0 	ldr	x0, [x22]
  dd9590:	3944cc08 	ldrb	w8, [x0, #307]
  dd9594:	361000a8 	tbz	w8, #2, dd95a8 <__start_il2cpp@@Base+0x944b84>
  dd9598:	b940e008 	ldr	w8, [x0, #224]
  dd959c:	35000068 	cbnz	w8, dd95a8 <__start_il2cpp@@Base+0x944b84>
  dd95a0:	97d96493 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd95a4:	f94002c0 	ldr	x0, [x22]
  dd95a8:	f9405c08 	ldr	x8, [x0, #184]
  dd95ac:	f9401514 	ldr	x20, [x8, #40]
  dd95b0:	b5000374 	cbnz	x20, dd961c <__start_il2cpp@@Base+0x944bf8>
  dd95b4:	3944cc09 	ldrb	w9, [x0, #307]
  dd95b8:	361000c9 	tbz	w9, #2, dd95d0 <__start_il2cpp@@Base+0x944bac>
  dd95bc:	b940e009 	ldr	w9, [x0, #224]
  dd95c0:	35000089 	cbnz	w9, dd95d0 <__start_il2cpp@@Base+0x944bac>
  dd95c4:	97d9648a 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd95c8:	f94002c8 	ldr	x8, [x22]
  dd95cc:	f9405d08 	ldr	x8, [x8, #184]
  dd95d0:	f9400115 	ldr	x21, [x8]
  dd95d4:	f0002528 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dd95d8:	f9440908 	ldr	x8, [x8, #2064]
  dd95dc:	f9400100 	ldr	x0, [x8]
  dd95e0:	97d9648a 	bl	432808 <WriteZStream@@Base+0xa328>
  dd95e4:	b00024a8 	adrp	x8, 126e000 <_ZTISt10bad_typeid@@Base+0xb650>
  dd95e8:	d0002489 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dd95ec:	f9450508 	ldr	x8, [x8, #2568]
  dd95f0:	f9446d29 	ldr	x9, [x9, #2264]
  dd95f4:	aa1503e1 	mov	x1, x21
  dd95f8:	aa0003f4 	mov	x20, x0
  dd95fc:	f9400102 	ldr	x2, [x8]
  dd9600:	f9400123 	ldr	x3, [x9]
  dd9604:	97eeb469 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dd9608:	f94002c8 	ldr	x8, [x22]
  dd960c:	aa1403e1 	mov	x1, x20
  dd9610:	f9405d00 	ldr	x0, [x8, #184]
  dd9614:	f8028c14 	str	x20, [x0, #40]!
  dd9618:	97d96432 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dd961c:	f0002517 	adrp	x23, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dd9620:	f9454af7 	ldr	x23, [x23, #2704]
  dd9624:	f94002e0 	ldr	x0, [x23]
  dd9628:	3944cc08 	ldrb	w8, [x0, #307]
  dd962c:	36100088 	tbz	w8, #2, dd963c <__start_il2cpp@@Base+0x944c18>
  dd9630:	b940e008 	ldr	w8, [x0, #224]
  dd9634:	35000048 	cbnz	w8, dd963c <__start_il2cpp@@Base+0x944c18>
  dd9638:	97d9646d 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd963c:	aa1403e0 	mov	x0, x20
  dd9640:	aa1f03e1 	mov	x1, xzr
  dd9644:	97ffaafe 	bl	dc423c <__start_il2cpp@@Base+0x92f818>
  dd9648:	f94002c0 	ldr	x0, [x22]
  dd964c:	3944cc08 	ldrb	w8, [x0, #307]
  dd9650:	361000a8 	tbz	w8, #2, dd9664 <__start_il2cpp@@Base+0x944c40>
  dd9654:	b940e008 	ldr	w8, [x0, #224]
  dd9658:	35000068 	cbnz	w8, dd9664 <__start_il2cpp@@Base+0x944c40>
  dd965c:	97d96464 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9660:	f94002c0 	ldr	x0, [x22]
  dd9664:	f9405c08 	ldr	x8, [x0, #184]
  dd9668:	f9401914 	ldr	x20, [x8, #48]
  dd966c:	b5000374 	cbnz	x20, dd96d8 <__start_il2cpp@@Base+0x944cb4>
  dd9670:	3944cc09 	ldrb	w9, [x0, #307]
  dd9674:	361000c9 	tbz	w9, #2, dd968c <__start_il2cpp@@Base+0x944c68>
  dd9678:	b940e009 	ldr	w9, [x0, #224]
  dd967c:	35000089 	cbnz	w9, dd968c <__start_il2cpp@@Base+0x944c68>
  dd9680:	97d9645b 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9684:	f94002c8 	ldr	x8, [x22]
  dd9688:	f9405d08 	ldr	x8, [x8, #184]
  dd968c:	f9400115 	ldr	x21, [x8]
  dd9690:	f0002528 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dd9694:	f9440908 	ldr	x8, [x8, #2064]
  dd9698:	f9400100 	ldr	x0, [x8]
  dd969c:	97d9645b 	bl	432808 <WriteZStream@@Base+0xa328>
  dd96a0:	d0002508 	adrp	x8, 127b000 <_ZTISt10bad_typeid@@Base+0x18650>
  dd96a4:	d0002489 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dd96a8:	f9454108 	ldr	x8, [x8, #2688]
  dd96ac:	f9446d29 	ldr	x9, [x9, #2264]
  dd96b0:	aa1503e1 	mov	x1, x21
  dd96b4:	aa0003f4 	mov	x20, x0
  dd96b8:	f9400102 	ldr	x2, [x8]
  dd96bc:	f9400123 	ldr	x3, [x9]
  dd96c0:	97eeb43a 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dd96c4:	f94002c8 	ldr	x8, [x22]
  dd96c8:	aa1403e1 	mov	x1, x20
  dd96cc:	f9405d00 	ldr	x0, [x8, #184]
  dd96d0:	f8030c14 	str	x20, [x0, #48]!
  dd96d4:	97d96403 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dd96d8:	f94002e0 	ldr	x0, [x23]
  dd96dc:	f9401275 	ldr	x21, [x19, #32]
  dd96e0:	3944cc08 	ldrb	w8, [x0, #307]
  dd96e4:	36100088 	tbz	w8, #2, dd96f4 <__start_il2cpp@@Base+0x944cd0>
  dd96e8:	b940e008 	ldr	w8, [x0, #224]
  dd96ec:	35000048 	cbnz	w8, dd96f4 <__start_il2cpp@@Base+0x944cd0>
  dd96f0:	97d9643f 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd96f4:	aa1403e0 	mov	x0, x20
  dd96f8:	aa1503e1 	mov	x1, x21
  dd96fc:	aa1f03e2 	mov	x2, xzr
  dd9700:	97ffaa55 	bl	dc4054 <__start_il2cpp@@Base+0x92f630>
  dd9704:	f94002c0 	ldr	x0, [x22]
  dd9708:	3944cc08 	ldrb	w8, [x0, #307]
  dd970c:	361000a8 	tbz	w8, #2, dd9720 <__start_il2cpp@@Base+0x944cfc>
  dd9710:	b940e008 	ldr	w8, [x0, #224]
  dd9714:	35000068 	cbnz	w8, dd9720 <__start_il2cpp@@Base+0x944cfc>
  dd9718:	97d96435 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd971c:	f94002c0 	ldr	x0, [x22]
  dd9720:	f9405c08 	ldr	x8, [x0, #184]
  dd9724:	f9401d14 	ldr	x20, [x8, #56]
  dd9728:	b5000374 	cbnz	x20, dd9794 <__start_il2cpp@@Base+0x944d70>
  dd972c:	3944cc09 	ldrb	w9, [x0, #307]
  dd9730:	361000c9 	tbz	w9, #2, dd9748 <__start_il2cpp@@Base+0x944d24>
  dd9734:	b940e009 	ldr	w9, [x0, #224]
  dd9738:	35000089 	cbnz	w9, dd9748 <__start_il2cpp@@Base+0x944d24>
  dd973c:	97d9642c 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9740:	f94002c8 	ldr	x8, [x22]
  dd9744:	f9405d08 	ldr	x8, [x8, #184]
  dd9748:	f9400115 	ldr	x21, [x8]
  dd974c:	f0002528 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dd9750:	f9440908 	ldr	x8, [x8, #2064]
  dd9754:	f9400100 	ldr	x0, [x8]
  dd9758:	97d9642c 	bl	432808 <WriteZStream@@Base+0xa328>
  dd975c:	d0002588 	adrp	x8, 128b000 <_ZTISt10bad_typeid@@Base+0x28650>
  dd9760:	d0002489 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dd9764:	f941e508 	ldr	x8, [x8, #968]
  dd9768:	f9446d29 	ldr	x9, [x9, #2264]
  dd976c:	aa1503e1 	mov	x1, x21
  dd9770:	aa0003f4 	mov	x20, x0
  dd9774:	f9400102 	ldr	x2, [x8]
  dd9778:	f9400123 	ldr	x3, [x9]
  dd977c:	97eeb40b 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dd9780:	f94002c8 	ldr	x8, [x22]
  dd9784:	aa1403e1 	mov	x1, x20
  dd9788:	f9405d00 	ldr	x0, [x8, #184]
  dd978c:	f8038c14 	str	x20, [x0, #56]!
  dd9790:	97d963d4 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dd9794:	f94002e0 	ldr	x0, [x23]
  dd9798:	f9401275 	ldr	x21, [x19, #32]
  dd979c:	3944cc08 	ldrb	w8, [x0, #307]
  dd97a0:	36100088 	tbz	w8, #2, dd97b0 <__start_il2cpp@@Base+0x944d8c>
  dd97a4:	b940e008 	ldr	w8, [x0, #224]
  dd97a8:	35000048 	cbnz	w8, dd97b0 <__start_il2cpp@@Base+0x944d8c>
  dd97ac:	97d96410 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd97b0:	aa1403e0 	mov	x0, x20
  dd97b4:	aa1503e1 	mov	x1, x21
  dd97b8:	aa1f03e2 	mov	x2, xzr
  dd97bc:	97ffaa26 	bl	dc4054 <__start_il2cpp@@Base+0x92f630>
  dd97c0:	9400002e 	bl	dd9878 <__start_il2cpp@@Base+0x944e54>
  dd97c4:	f0002515 	adrp	x21, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dd97c8:	f944fab5 	ldr	x21, [x21, #2544]
  dd97cc:	aa0003f4 	mov	x20, x0
  dd97d0:	f94002a8 	ldr	x8, [x21]
  dd97d4:	3944cd09 	ldrb	w9, [x8, #307]
  dd97d8:	361000c9 	tbz	w9, #2, dd97f0 <__start_il2cpp@@Base+0x944dcc>
  dd97dc:	b940e109 	ldr	w9, [x8, #224]
  dd97e0:	35000089 	cbnz	w9, dd97f0 <__start_il2cpp@@Base+0x944dcc>
  dd97e4:	aa0803e0 	mov	x0, x8
  dd97e8:	97d96401 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd97ec:	f94002a8 	ldr	x8, [x21]
  dd97f0:	f9405d08 	ldr	x8, [x8, #184]
  dd97f4:	f9400108 	ldr	x8, [x8]
  dd97f8:	cb080288 	sub	x8, x20, x8
  dd97fc:	f100511f 	cmp	x8, #0x14
  dd9800:	540002ab 	b.lt	dd9854 <__start_il2cpp@@Base+0x944e30>  // b.tstop
  dd9804:	9400001d 	bl	dd9878 <__start_il2cpp@@Base+0x944e54>
  dd9808:	f94002a8 	ldr	x8, [x21]
  dd980c:	aa0003f4 	mov	x20, x0
  dd9810:	3944cd09 	ldrb	w9, [x8, #307]
  dd9814:	361000c9 	tbz	w9, #2, dd982c <__start_il2cpp@@Base+0x944e08>
  dd9818:	b940e109 	ldr	w9, [x8, #224]
  dd981c:	35000089 	cbnz	w9, dd982c <__start_il2cpp@@Base+0x944e08>
  dd9820:	aa0803e0 	mov	x0, x8
  dd9824:	97d963f2 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd9828:	f94002a8 	ldr	x8, [x21]
  dd982c:	f9405d08 	ldr	x8, [x8, #184]
  dd9830:	f9000114 	str	x20, [x8]
  dd9834:	b9403a68 	ldr	w8, [x19, #56]
  dd9838:	71000508 	subs	w8, w8, #0x1
  dd983c:	5400004b 	b.lt	dd9844 <__start_il2cpp@@Base+0x944e20>  // b.tstop
  dd9840:	b9003a68 	str	w8, [x19, #56]
  dd9844:	b9404268 	ldr	w8, [x19, #64]
  dd9848:	71000508 	subs	w8, w8, #0x1
  dd984c:	5400004b 	b.lt	dd9854 <__start_il2cpp@@Base+0x944e30>  // b.tstop
  dd9850:	b9004268 	str	w8, [x19, #64]
  dd9854:	a9437bfd 	ldp	x29, x30, [sp, #48]
  dd9858:	a9424ff4 	ldp	x20, x19, [sp, #32]
  dd985c:	a94157f6 	ldp	x22, x21, [sp, #16]
  dd9860:	f84407f7 	ldr	x23, [sp], #64
  dd9864:	d65f03c0 	ret
  dd9868:	97d963f5 	bl	43283c <WriteZStream@@Base+0xa35c>
  dd986c:	aa1f03e1 	mov	x1, xzr
  dd9870:	97d963db 	bl	4327dc <WriteZStream@@Base+0xa2fc>
  dd9874:	97d963e7 	bl	432810 <WriteZStream@@Base+0xa330>
