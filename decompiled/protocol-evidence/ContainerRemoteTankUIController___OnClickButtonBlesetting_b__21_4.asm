; ContainerRemoteTankUIController$$<OnClickButtonBlesetting>b__21_4
; void ContainerRemoteTankUIController___OnClickButtonBlesetting_b__21_4 (ContainerRemoteTankUIController_o* __this, System_String_o* data, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000ddf128 <__start_il2cpp@@Base+0x94a704>:
  ddf128:	a9bb67fa 	stp	x26, x25, [sp, #-80]!
  ddf12c:	a9015ff8 	stp	x24, x23, [sp, #16]
  ddf130:	a90257f6 	stp	x22, x21, [sp, #32]
  ddf134:	a9034ff4 	stp	x20, x19, [sp, #48]
  ddf138:	a9047bfd 	stp	x29, x30, [sp, #64]
  ddf13c:	910103fd 	add	x29, sp, #0x40
  ddf140:	f0002b34 	adrp	x20, 1346000 <__bss_start__@@Base+0x7930>
  ddf144:	397a4288 	ldrb	w8, [x20, #3728]
  ddf148:	aa0103f5 	mov	x21, x1
  ddf14c:	aa0003f3 	mov	x19, x0
  ddf150:	37000248 	tbnz	w8, #0, ddf198 <__start_il2cpp@@Base+0x94a774>
  ddf154:	f0002520 	adrp	x0, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  ddf158:	f9452000 	ldr	x0, [x0, #2624]
  ddf15c:	97d94d78 	bl	43273c <WriteZStream@@Base+0xa25c>
  ddf160:	90002500 	adrp	x0, 127f000 <_ZTISt10bad_typeid@@Base+0x1c650>
  ddf164:	f9465c00 	ldr	x0, [x0, #3256]
  ddf168:	97d94d75 	bl	43273c <WriteZStream@@Base+0xa25c>
  ddf16c:	900024e0 	adrp	x0, 127b000 <_ZTISt10bad_typeid@@Base+0x18650>
  ddf170:	f9406c00 	ldr	x0, [x0, #216]
  ddf174:	97d94d72 	bl	43273c <WriteZStream@@Base+0xa25c>
  ddf178:	b00024e0 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  ddf17c:	f9454800 	ldr	x0, [x0, #2704]
  ddf180:	97d94d6f 	bl	43273c <WriteZStream@@Base+0xa25c>
  ddf184:	d0002540 	adrp	x0, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  ddf188:	f941f800 	ldr	x0, [x0, #1008]
  ddf18c:	97d94d6c 	bl	43273c <WriteZStream@@Base+0xa25c>
  ddf190:	320003e8 	orr	w8, wzr, #0x1
  ddf194:	393a4288 	strb	w8, [x20, #3728]
  ddf198:	f0002538 	adrp	x24, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  ddf19c:	f9452318 	ldr	x24, [x24, #2624]
  ddf1a0:	321f03e1 	orr	w1, wzr, #0x2
  ddf1a4:	f9400300 	ldr	x0, [x24]
  ddf1a8:	97d94d6a 	bl	432750 <WriteZStream@@Base+0xa270>
  ddf1ac:	900024e8 	adrp	x8, 127b000 <_ZTISt10bad_typeid@@Base+0x18650>
  ddf1b0:	f9406d08 	ldr	x8, [x8, #216]
  ddf1b4:	aa0003f4 	mov	x20, x0
  ddf1b8:	f9400108 	ldr	x8, [x8]
  ddf1bc:	3944cd09 	ldrb	w9, [x8, #307]
  ddf1c0:	361000a9 	tbz	w9, #2, ddf1d4 <__start_il2cpp@@Base+0x94a7b0>
  ddf1c4:	b940e109 	ldr	w9, [x8, #224]
  ddf1c8:	35000069 	cbnz	w9, ddf1d4 <__start_il2cpp@@Base+0x94a7b0>
  ddf1cc:	aa0803e0 	mov	x0, x8
  ddf1d0:	97d94d87 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf1d4:	aa1503e0 	mov	x0, x21
  ddf1d8:	aa1f03e1 	mov	x1, xzr
  ddf1dc:	97e6ef86 	bl	79aff4 <__start_il2cpp@@Base+0x3065d0>
  ddf1e0:	b00024f9 	adrp	x25, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  ddf1e4:	f9454b39 	ldr	x25, [x25, #2704]
  ddf1e8:	39406276 	ldrb	w22, [x19, #24]
  ddf1ec:	39406e77 	ldrb	w23, [x19, #27]
  ddf1f0:	aa0003f5 	mov	x21, x0
  ddf1f4:	f9400328 	ldr	x8, [x25]
  ddf1f8:	3944cd09 	ldrb	w9, [x8, #307]
  ddf1fc:	361000c9 	tbz	w9, #2, ddf214 <__start_il2cpp@@Base+0x94a7f0>
  ddf200:	b940e109 	ldr	w9, [x8, #224]
  ddf204:	35000089 	cbnz	w9, ddf214 <__start_il2cpp@@Base+0x94a7f0>
  ddf208:	aa0803e0 	mov	x0, x8
  ddf20c:	97d94d78 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf210:	f9400328 	ldr	x8, [x25]
  ddf214:	f9405d08 	ldr	x8, [x8, #184]
  ddf218:	aa1503e0 	mov	x0, x21
  ddf21c:	2a1603e1 	mov	w1, w22
  ddf220:	2a1703e2 	mov	w2, w23
  ddf224:	39405105 	ldrb	w5, [x8, #20]
  ddf228:	39404d04 	ldrb	w4, [x8, #19]
  ddf22c:	39404903 	ldrb	w3, [x8, #18]
  ddf230:	aa1403e6 	mov	x6, x20
  ddf234:	aa1f03e7 	mov	x7, xzr
  ddf238:	97ff9589 	bl	dc485c <__start_il2cpp@@Base+0x92fe38>
  ddf23c:	36002180 	tbz	w0, #0, ddf66c <__start_il2cpp@@Base+0x94ac48>
  ddf240:	d0002557 	adrp	x23, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  ddf244:	f941faf7 	ldr	x23, [x23, #1008]
  ddf248:	f94002e0 	ldr	x0, [x23]
  ddf24c:	3944cc08 	ldrb	w8, [x0, #307]
  ddf250:	361000a8 	tbz	w8, #2, ddf264 <__start_il2cpp@@Base+0x94a840>
  ddf254:	b940e008 	ldr	w8, [x0, #224]
  ddf258:	35000068 	cbnz	w8, ddf264 <__start_il2cpp@@Base+0x94a840>
  ddf25c:	97d94d64 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf260:	f94002e0 	ldr	x0, [x23]
  ddf264:	9000251a 	adrp	x26, 127f000 <_ZTISt10bad_typeid@@Base+0x1c650>
  ddf268:	f9465f5a 	ldr	x26, [x26, #3256]
  ddf26c:	f9405c09 	ldr	x9, [x0, #184]
  ddf270:	f9400348 	ldr	x8, [x26]
  ddf274:	f9407936 	ldr	x22, [x9, #240]
  ddf278:	3944cd0a 	ldrb	w10, [x8, #307]
  ddf27c:	361000ca 	tbz	w10, #2, ddf294 <__start_il2cpp@@Base+0x94a870>
  ddf280:	b940e109 	ldr	w9, [x8, #224]
  ddf284:	35000089 	cbnz	w9, ddf294 <__start_il2cpp@@Base+0x94a870>
  ddf288:	aa0803e0 	mov	x0, x8
  ddf28c:	97d94d58 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf290:	f9400348 	ldr	x8, [x26]
  ddf294:	f9405d00 	ldr	x0, [x8, #184]
  ddf298:	aa1603e1 	mov	x1, x22
  ddf29c:	f9000016 	str	x22, [x0]
  ddf2a0:	97d94d10 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddf2a4:	f9400340 	ldr	x0, [x26]
  ddf2a8:	f9405c08 	ldr	x8, [x0, #184]
  ddf2ac:	38409d09 	ldrb	w9, [x8, #9]!
  ddf2b0:	35000169 	cbnz	w9, ddf2dc <__start_il2cpp@@Base+0x94a8b8>
  ddf2b4:	3944cc09 	ldrb	w9, [x0, #307]
  ddf2b8:	361000e9 	tbz	w9, #2, ddf2d4 <__start_il2cpp@@Base+0x94a8b0>
  ddf2bc:	b940e009 	ldr	w9, [x0, #224]
  ddf2c0:	350000a9 	cbnz	w9, ddf2d4 <__start_il2cpp@@Base+0x94a8b0>
  ddf2c4:	97d94d4a 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf2c8:	f9400348 	ldr	x8, [x26]
  ddf2cc:	f9405d08 	ldr	x8, [x8, #184]
  ddf2d0:	91002508 	add	x8, x8, #0x9
  ddf2d4:	320003e9 	orr	w9, wzr, #0x1
  ddf2d8:	39000109 	strb	w9, [x8]
  ddf2dc:	f9400320 	ldr	x0, [x25]
  ddf2e0:	3944cc08 	ldrb	w8, [x0, #307]
  ddf2e4:	36100088 	tbz	w8, #2, ddf2f4 <__start_il2cpp@@Base+0x94a8d0>
  ddf2e8:	b940e008 	ldr	w8, [x0, #224]
  ddf2ec:	35000048 	cbnz	w8, ddf2f4 <__start_il2cpp@@Base+0x94a8d0>
  ddf2f0:	97d94d3f 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf2f4:	aa1f03e0 	mov	x0, xzr
  ddf2f8:	97ff9592 	bl	dc4940 <__start_il2cpp@@Base+0x92ff1c>
  ddf2fc:	f94002e8 	ldr	x8, [x23]
  ddf300:	2a0003f6 	mov	w22, w0
  ddf304:	3944cd09 	ldrb	w9, [x8, #307]
  ddf308:	361000c9 	tbz	w9, #2, ddf320 <__start_il2cpp@@Base+0x94a8fc>
  ddf30c:	b940e109 	ldr	w9, [x8, #224]
  ddf310:	35000089 	cbnz	w9, ddf320 <__start_il2cpp@@Base+0x94a8fc>
  ddf314:	aa0803e0 	mov	x0, x8
  ddf318:	97d94d35 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf31c:	f94002e8 	ldr	x8, [x23]
  ddf320:	b4002515 	cbz	x21, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf324:	b9401aa9 	ldr	w9, [x21, #24]
  ddf328:	6b0902df 	cmp	w22, w9
  ddf32c:	54002442 	b.cs	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.hs, b.nlast
  ddf330:	f9405d08 	ldr	x8, [x8, #184]
  ddf334:	f9400d08 	ldr	x8, [x8, #24]
  ddf338:	b4002448 	cbz	x8, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf33c:	b9401909 	ldr	w9, [x8, #24]
  ddf340:	340023a9 	cbz	w9, ddf7b4 <__start_il2cpp@@Base+0x94ad90>
  ddf344:	8b36c2a9 	add	x9, x21, w22, sxtw
  ddf348:	39408129 	ldrb	w9, [x9, #32]
  ddf34c:	39008109 	strb	w9, [x8, #32]
  ddf350:	b9401aa9 	ldr	w9, [x21, #24]
  ddf354:	110006c8 	add	w8, w22, #0x1
  ddf358:	6b09011f 	cmp	w8, w9
  ddf35c:	540022c2 	b.cs	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.hs, b.nlast
  ddf360:	f94002e9 	ldr	x9, [x23]
  ddf364:	f9405d29 	ldr	x9, [x9, #184]
  ddf368:	f9400d29 	ldr	x9, [x9, #24]
  ddf36c:	b40022a9 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf370:	b940192a 	ldr	w10, [x9, #24]
  ddf374:	7100055f 	cmp	w10, #0x1
  ddf378:	540021e9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf37c:	8b28c2a8 	add	x8, x21, w8, sxtw
  ddf380:	39408108 	ldrb	w8, [x8, #32]
  ddf384:	39008528 	strb	w8, [x9, #33]
  ddf388:	b9401aa9 	ldr	w9, [x21, #24]
  ddf38c:	11000ac8 	add	w8, w22, #0x2
  ddf390:	6b09011f 	cmp	w8, w9
  ddf394:	54002102 	b.cs	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.hs, b.nlast
  ddf398:	f94002e9 	ldr	x9, [x23]
  ddf39c:	f9405d29 	ldr	x9, [x9, #184]
  ddf3a0:	f9400d29 	ldr	x9, [x9, #24]
  ddf3a4:	b40020e9 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf3a8:	b940192a 	ldr	w10, [x9, #24]
  ddf3ac:	7100095f 	cmp	w10, #0x2
  ddf3b0:	54002029 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf3b4:	8b28c2a8 	add	x8, x21, w8, sxtw
  ddf3b8:	39408108 	ldrb	w8, [x8, #32]
  ddf3bc:	52800261 	mov	w1, #0x13                  	// #19
  ddf3c0:	39008928 	strb	w8, [x9, #34]
  ddf3c4:	f94002e8 	ldr	x8, [x23]
  ddf3c8:	320003e9 	orr	w9, wzr, #0x1
  ddf3cc:	f9405d08 	ldr	x8, [x8, #184]
  ddf3d0:	39008109 	strb	w9, [x8, #32]
  ddf3d4:	f9400300 	ldr	x0, [x24]
  ddf3d8:	97d94cde 	bl	432750 <WriteZStream@@Base+0xa270>
  ddf3dc:	b4001f20 	cbz	x0, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf3e0:	b9401808 	ldr	w8, [x0, #24]
  ddf3e4:	aa0003e1 	mov	x1, x0
  ddf3e8:	34001e68 	cbz	w8, ddf7b4 <__start_il2cpp@@Base+0x94ad90>
  ddf3ec:	39406269 	ldrb	w9, [x19, #24]
  ddf3f0:	7100051f 	cmp	w8, #0x1
  ddf3f4:	39008029 	strb	w9, [x1, #32]
  ddf3f8:	54001de0 	b.eq	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.none
  ddf3fc:	39406a69 	ldrb	w9, [x19, #26]
  ddf400:	39008429 	strb	w9, [x1, #33]
  ddf404:	f94002e9 	ldr	x9, [x23]
  ddf408:	f9405d29 	ldr	x9, [x9, #184]
  ddf40c:	f9400d29 	ldr	x9, [x9, #24]
  ddf410:	b4001d89 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf414:	b940192a 	ldr	w10, [x9, #24]
  ddf418:	34001cea 	cbz	w10, ddf7b4 <__start_il2cpp@@Base+0x94ad90>
  ddf41c:	7100091f 	cmp	w8, #0x2
  ddf420:	54001ca9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf424:	39408129 	ldrb	w9, [x9, #32]
  ddf428:	39008829 	strb	w9, [x1, #34]
  ddf42c:	f94002e9 	ldr	x9, [x23]
  ddf430:	f9405d29 	ldr	x9, [x9, #184]
  ddf434:	f9400d29 	ldr	x9, [x9, #24]
  ddf438:	b4001c49 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf43c:	b940192a 	ldr	w10, [x9, #24]
  ddf440:	7100055f 	cmp	w10, #0x1
  ddf444:	54001b89 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf448:	71000d1f 	cmp	w8, #0x3
  ddf44c:	54001b49 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf450:	39408529 	ldrb	w9, [x9, #33]
  ddf454:	39008c29 	strb	w9, [x1, #35]
  ddf458:	f94002e9 	ldr	x9, [x23]
  ddf45c:	f9405d29 	ldr	x9, [x9, #184]
  ddf460:	f9400d29 	ldr	x9, [x9, #24]
  ddf464:	b4001ae9 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf468:	b940192a 	ldr	w10, [x9, #24]
  ddf46c:	7100095f 	cmp	w10, #0x2
  ddf470:	54001a29 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf474:	7100111f 	cmp	w8, #0x4
  ddf478:	540019e9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf47c:	39408929 	ldrb	w9, [x9, #34]
  ddf480:	7100151f 	cmp	w8, #0x5
  ddf484:	39009029 	strb	w9, [x1, #36]
  ddf488:	54001960 	b.eq	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.none
  ddf48c:	f9400329 	ldr	x9, [x25]
  ddf490:	7100191f 	cmp	w8, #0x6
  ddf494:	f9405d29 	ldr	x9, [x9, #184]
  ddf498:	39404929 	ldrb	w9, [x9, #18]
  ddf49c:	39009429 	strb	w9, [x1, #37]
  ddf4a0:	540018a9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf4a4:	f9400329 	ldr	x9, [x25]
  ddf4a8:	71001d1f 	cmp	w8, #0x7
  ddf4ac:	f9405d29 	ldr	x9, [x9, #184]
  ddf4b0:	39404d29 	ldrb	w9, [x9, #19]
  ddf4b4:	39009829 	strb	w9, [x1, #38]
  ddf4b8:	540017e0 	b.eq	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.none
  ddf4bc:	f9400329 	ldr	x9, [x25]
  ddf4c0:	aa1303f6 	mov	x22, x19
  ddf4c4:	f9405d29 	ldr	x9, [x9, #184]
  ddf4c8:	39405129 	ldrb	w9, [x9, #20]
  ddf4cc:	39009c29 	strb	w9, [x1, #39]
  ddf4d0:	f8428ec9 	ldr	x9, [x22, #40]!
  ddf4d4:	b4001769 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf4d8:	b940192a 	ldr	w10, [x9, #24]
  ddf4dc:	340016ca 	cbz	w10, ddf7b4 <__start_il2cpp@@Base+0x94ad90>
  ddf4e0:	7100211f 	cmp	w8, #0x8
  ddf4e4:	54001689 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf4e8:	39408129 	ldrb	w9, [x9, #32]
  ddf4ec:	3900a029 	strb	w9, [x1, #40]
  ddf4f0:	f94002c9 	ldr	x9, [x22]
  ddf4f4:	b4001669 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf4f8:	b940192a 	ldr	w10, [x9, #24]
  ddf4fc:	7100055f 	cmp	w10, #0x1
  ddf500:	540015a9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf504:	7100251f 	cmp	w8, #0x9
  ddf508:	54001569 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf50c:	39408529 	ldrb	w9, [x9, #33]
  ddf510:	3900a429 	strb	w9, [x1, #41]
  ddf514:	f94002c9 	ldr	x9, [x22]
  ddf518:	b4001549 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf51c:	b940192a 	ldr	w10, [x9, #24]
  ddf520:	7100095f 	cmp	w10, #0x2
  ddf524:	54001489 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf528:	7100291f 	cmp	w8, #0xa
  ddf52c:	54001449 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf530:	39408929 	ldrb	w9, [x9, #34]
  ddf534:	3900a829 	strb	w9, [x1, #42]
  ddf538:	f94002c9 	ldr	x9, [x22]
  ddf53c:	b4001429 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf540:	b940192a 	ldr	w10, [x9, #24]
  ddf544:	71000d5f 	cmp	w10, #0x3
  ddf548:	54001369 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf54c:	71002d1f 	cmp	w8, #0xb
  ddf550:	54001329 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf554:	39408d29 	ldrb	w9, [x9, #35]
  ddf558:	3900ac29 	strb	w9, [x1, #43]
  ddf55c:	f94002c9 	ldr	x9, [x22]
  ddf560:	b4001309 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf564:	b940192a 	ldr	w10, [x9, #24]
  ddf568:	7100115f 	cmp	w10, #0x4
  ddf56c:	54001249 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf570:	7100311f 	cmp	w8, #0xc
  ddf574:	54001209 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf578:	39409129 	ldrb	w9, [x9, #36]
  ddf57c:	3900b029 	strb	w9, [x1, #44]
  ddf580:	f94002c9 	ldr	x9, [x22]
  ddf584:	b40011e9 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf588:	b940192a 	ldr	w10, [x9, #24]
  ddf58c:	7100155f 	cmp	w10, #0x5
  ddf590:	54001129 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf594:	7100351f 	cmp	w8, #0xd
  ddf598:	540010e9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf59c:	39409529 	ldrb	w9, [x9, #37]
  ddf5a0:	3900b429 	strb	w9, [x1, #45]
  ddf5a4:	f94002c9 	ldr	x9, [x22]
  ddf5a8:	b40010c9 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf5ac:	b940192a 	ldr	w10, [x9, #24]
  ddf5b0:	7100195f 	cmp	w10, #0x6
  ddf5b4:	54001009 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf5b8:	7100391f 	cmp	w8, #0xe
  ddf5bc:	54000fc9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf5c0:	39409929 	ldrb	w9, [x9, #38]
  ddf5c4:	3900b829 	strb	w9, [x1, #46]
  ddf5c8:	f94002c9 	ldr	x9, [x22]
  ddf5cc:	b4000fa9 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf5d0:	b940192a 	ldr	w10, [x9, #24]
  ddf5d4:	71001d5f 	cmp	w10, #0x7
  ddf5d8:	54000ee9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf5dc:	71003d1f 	cmp	w8, #0xf
  ddf5e0:	54000ea9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf5e4:	39409d29 	ldrb	w9, [x9, #39]
  ddf5e8:	3900bc29 	strb	w9, [x1, #47]
  ddf5ec:	f94002c9 	ldr	x9, [x22]
  ddf5f0:	b4000e89 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf5f4:	b940192a 	ldr	w10, [x9, #24]
  ddf5f8:	7100215f 	cmp	w10, #0x8
  ddf5fc:	54000dc9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf600:	7100411f 	cmp	w8, #0x10
  ddf604:	54000d89 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf608:	3940a129 	ldrb	w9, [x9, #40]
  ddf60c:	3900c029 	strb	w9, [x1, #48]
  ddf610:	f94002c9 	ldr	x9, [x22]
  ddf614:	b4000d69 	cbz	x9, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf618:	b940192a 	ldr	w10, [x9, #24]
  ddf61c:	7100255f 	cmp	w10, #0x9
  ddf620:	54000ca9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf624:	7100451f 	cmp	w8, #0x11
  ddf628:	54000c69 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf62c:	3940a528 	ldrb	w8, [x9, #41]
  ddf630:	aa1303f7 	mov	x23, x19
  ddf634:	3900c428 	strb	w8, [x1, #49]
  ddf638:	f8020ee1 	str	x1, [x23, #32]!
  ddf63c:	aa1703e0 	mov	x0, x23
  ddf640:	97d94c28 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddf644:	528000a8 	mov	w8, #0x5                   	// #5
  ddf648:	381fd2ff 	sturb	wzr, [x23, #-3]
  ddf64c:	b9001ae8 	str	w8, [x23, #24]
  ddf650:	f9400300 	ldr	x0, [x24]
  ddf654:	52800141 	mov	w1, #0xa                   	// #10
  ddf658:	97d94c3e 	bl	432750 <WriteZStream@@Base+0xa270>
  ddf65c:	aa0003e1 	mov	x1, x0
  ddf660:	f90006e0 	str	x0, [x23, #8]
  ddf664:	aa1603e0 	mov	x0, x22
  ddf668:	97d94c1e 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddf66c:	f9400320 	ldr	x0, [x25]
  ddf670:	39406276 	ldrb	w22, [x19, #24]
  ddf674:	39407277 	ldrb	w23, [x19, #28]
  ddf678:	3944cc08 	ldrb	w8, [x0, #307]
  ddf67c:	361000a8 	tbz	w8, #2, ddf690 <__start_il2cpp@@Base+0x94ac6c>
  ddf680:	b940e008 	ldr	w8, [x0, #224]
  ddf684:	35000068 	cbnz	w8, ddf690 <__start_il2cpp@@Base+0x94ac6c>
  ddf688:	97d94c59 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf68c:	f9400320 	ldr	x0, [x25]
  ddf690:	f9405c08 	ldr	x8, [x0, #184]
  ddf694:	aa1503e0 	mov	x0, x21
  ddf698:	2a1603e1 	mov	w1, w22
  ddf69c:	2a1703e2 	mov	w2, w23
  ddf6a0:	39405105 	ldrb	w5, [x8, #20]
  ddf6a4:	39404d04 	ldrb	w4, [x8, #19]
  ddf6a8:	39404903 	ldrb	w3, [x8, #18]
  ddf6ac:	aa1403e6 	mov	x6, x20
  ddf6b0:	aa1f03e7 	mov	x7, xzr
  ddf6b4:	97ff946a 	bl	dc485c <__start_il2cpp@@Base+0x92fe38>
  ddf6b8:	36000720 	tbz	w0, #0, ddf79c <__start_il2cpp@@Base+0x94ad78>
  ddf6bc:	b4000834 	cbz	x20, ddf7c0 <__start_il2cpp@@Base+0x94ad9c>
  ddf6c0:	b9401a88 	ldr	w8, [x20, #24]
  ddf6c4:	34000788 	cbz	w8, ddf7b4 <__start_il2cpp@@Base+0x94ad90>
  ddf6c8:	39408289 	ldrb	w9, [x20, #32]
  ddf6cc:	7100093f 	cmp	w9, #0x2
  ddf6d0:	54000661 	b.ne	ddf79c <__start_il2cpp@@Base+0x94ad78>  // b.any
  ddf6d4:	7100051f 	cmp	w8, #0x1
  ddf6d8:	540006e9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf6dc:	d0002555 	adrp	x21, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  ddf6e0:	f941fab5 	ldr	x21, [x21, #1008]
  ddf6e4:	39408696 	ldrb	w22, [x20, #33]
  ddf6e8:	f94002a0 	ldr	x0, [x21]
  ddf6ec:	3944cc08 	ldrb	w8, [x0, #307]
  ddf6f0:	361000a8 	tbz	w8, #2, ddf704 <__start_il2cpp@@Base+0x94ace0>
  ddf6f4:	b940e008 	ldr	w8, [x0, #224]
  ddf6f8:	35000068 	cbnz	w8, ddf704 <__start_il2cpp@@Base+0x94ace0>
  ddf6fc:	97d94c3c 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf700:	f94002a0 	ldr	x0, [x21]
  ddf704:	f9405c08 	ldr	x8, [x0, #184]
  ddf708:	b84a4d09 	ldr	w9, [x8, #164]!
  ddf70c:	6b16013f 	cmp	w9, w22
  ddf710:	54000460 	b.eq	ddf79c <__start_il2cpp@@Base+0x94ad78>  // b.none
  ddf714:	b9401a89 	ldr	w9, [x20, #24]
  ddf718:	7100053f 	cmp	w9, #0x1
  ddf71c:	540004c9 	b.ls	ddf7b4 <__start_il2cpp@@Base+0x94ad90>  // b.plast
  ddf720:	3944cc09 	ldrb	w9, [x0, #307]
  ddf724:	39408694 	ldrb	w20, [x20, #33]
  ddf728:	361000e9 	tbz	w9, #2, ddf744 <__start_il2cpp@@Base+0x94ad20>
  ddf72c:	b940e009 	ldr	w9, [x0, #224]
  ddf730:	350000a9 	cbnz	w9, ddf744 <__start_il2cpp@@Base+0x94ad20>
  ddf734:	97d94c2e 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf738:	f94002a0 	ldr	x0, [x21]
  ddf73c:	f9405c08 	ldr	x8, [x0, #184]
  ddf740:	91029108 	add	x8, x8, #0xa4
  ddf744:	b9000114 	str	w20, [x8]
  ddf748:	f9405c08 	ldr	x8, [x0, #184]
  ddf74c:	b84a8d09 	ldr	w9, [x8, #168]!
  ddf750:	7100053f 	cmp	w9, #0x1
  ddf754:	5400024b 	b.lt	ddf79c <__start_il2cpp@@Base+0x94ad78>  // b.tstop
  ddf758:	3944cc0a 	ldrb	w10, [x0, #307]
  ddf75c:	361000ea 	tbz	w10, #2, ddf778 <__start_il2cpp@@Base+0x94ad54>
  ddf760:	b940e00a 	ldr	w10, [x0, #224]
  ddf764:	350000aa 	cbnz	w10, ddf778 <__start_il2cpp@@Base+0x94ad54>
  ddf768:	97d94c21 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddf76c:	f94002a8 	ldr	x8, [x21]
  ddf770:	f9405d08 	ldr	x8, [x8, #184]
  ddf774:	b84a8d09 	ldr	w9, [x8, #168]!
  ddf778:	51000529 	sub	w9, w9, #0x1
  ddf77c:	b9000109 	str	w9, [x8]
  ddf780:	aa1303e0 	mov	x0, x19
  ddf784:	a9447bfd 	ldp	x29, x30, [sp, #64]
  ddf788:	a9434ff4 	ldp	x20, x19, [sp, #48]
  ddf78c:	a94257f6 	ldp	x22, x21, [sp, #32]
  ddf790:	a9415ff8 	ldp	x24, x23, [sp, #16]
  ddf794:	a8c567fa 	ldp	x26, x25, [sp], #80
  ddf798:	17fff83e 	b	ddd890 <__start_il2cpp@@Base+0x948e6c>
  ddf79c:	a9447bfd 	ldp	x29, x30, [sp, #64]
  ddf7a0:	a9434ff4 	ldp	x20, x19, [sp, #48]
  ddf7a4:	a94257f6 	ldp	x22, x21, [sp, #32]
  ddf7a8:	a9415ff8 	ldp	x24, x23, [sp, #16]
  ddf7ac:	a8c567fa 	ldp	x26, x25, [sp], #80
  ddf7b0:	d65f03c0 	ret
  ddf7b4:	97d94c22 	bl	43283c <WriteZStream@@Base+0xa35c>
  ddf7b8:	aa1f03e1 	mov	x1, xzr
  ddf7bc:	97d94c08 	bl	4327dc <WriteZStream@@Base+0xa2fc>
  ddf7c0:	97d94c14 	bl	432810 <WriteZStream@@Base+0xa330>
  ddf7c4:	14000400 	b	de07c4 <__start_il2cpp@@Base+0x94bda0>
  ddf7c8:	f9400101 	ldr	x1, [x8]
  ddf7cc:	17fffe10 	b	ddf00c <__start_il2cpp@@Base+0x94a5e8>
	...
