; ContainerRemoteTankUIController$$Update
; void ContainerRemoteTankUIController__Update (ContainerRemoteTankUIController_o* __this, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000dde248 <__start_il2cpp@@Base+0x949824>:
  dde248:	f81b0ff9 	str	x25, [sp, #-80]!
  dde24c:	a9015ff8 	stp	x24, x23, [sp, #16]
  dde250:	a90257f6 	stp	x22, x21, [sp, #32]
  dde254:	a9034ff4 	stp	x20, x19, [sp, #48]
  dde258:	a9047bfd 	stp	x29, x30, [sp, #64]
  dde25c:	910103fd 	add	x29, sp, #0x40
  dde260:	90002b54 	adrp	x20, 1346000 <__bss_start__@@Base+0x7930>
  dde264:	397a3288 	ldrb	w8, [x20, #3724]
  dde268:	aa0003f3 	mov	x19, x0
  dde26c:	37000488 	tbnz	w8, #0, dde2fc <__start_il2cpp@@Base+0x9498d8>
  dde270:	b0002460 	adrp	x0, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dde274:	f9446c00 	ldr	x0, [x0, #2264]
  dde278:	97d95131 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde27c:	d0002500 	adrp	x0, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dde280:	f9440800 	ldr	x0, [x0, #2064]
  dde284:	97d9512e 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde288:	90002540 	adrp	x0, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  dde28c:	f9452000 	ldr	x0, [x0, #2624]
  dde290:	97d9512b 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde294:	90002540 	adrp	x0, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  dde298:	f943e800 	ldr	x0, [x0, #2000]
  dde29c:	97d95128 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2a0:	b0002540 	adrp	x0, 1287000 <_ZTISt10bad_typeid@@Base+0x24650>
  dde2a4:	f944f400 	ldr	x0, [x0, #2536]
  dde2a8:	97d95125 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2ac:	d00024e0 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dde2b0:	f9454800 	ldr	x0, [x0, #2704]
  dde2b4:	97d95122 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2b8:	f0002540 	adrp	x0, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dde2bc:	f941f800 	ldr	x0, [x0, #1008]
  dde2c0:	97d9511f 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2c4:	900024e0 	adrp	x0, 127a000 <_ZTISt10bad_typeid@@Base+0x17650>
  dde2c8:	f9401800 	ldr	x0, [x0, #48]
  dde2cc:	97d9511c 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2d0:	90002500 	adrp	x0, 127e000 <_ZTISt10bad_typeid@@Base+0x1b650>
  dde2d4:	f944fc00 	ldr	x0, [x0, #2552]
  dde2d8:	97d95119 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2dc:	90002440 	adrp	x0, 1266000 <_ZTISt10bad_typeid@@Base+0x3650>
  dde2e0:	f9475400 	ldr	x0, [x0, #3752]
  dde2e4:	97d95116 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2e8:	90002560 	adrp	x0, 128a000 <_ZTISt10bad_typeid@@Base+0x27650>
  dde2ec:	f947b400 	ldr	x0, [x0, #3944]
  dde2f0:	97d95113 	bl	43273c <WriteZStream@@Base+0xa25c>
  dde2f4:	320003e8 	orr	w8, wzr, #0x1
  dde2f8:	393a3288 	strb	w8, [x20, #3724]
  dde2fc:	f0002556 	adrp	x22, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dde300:	f941fad6 	ldr	x22, [x22, #1008]
  dde304:	f94002c0 	ldr	x0, [x22]
  dde308:	3944cc08 	ldrb	w8, [x0, #307]
  dde30c:	361000a8 	tbz	w8, #2, dde320 <__start_il2cpp@@Base+0x9498fc>
  dde310:	b940e008 	ldr	w8, [x0, #224]
  dde314:	35000068 	cbnz	w8, dde320 <__start_il2cpp@@Base+0x9498fc>
  dde318:	97d95135 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde31c:	f94002c0 	ldr	x0, [x22]
  dde320:	f9405c08 	ldr	x8, [x0, #184]
  dde324:	39408108 	ldrb	w8, [x8, #32]
  dde328:	340049a8 	cbz	w8, ddec5c <__start_il2cpp@@Base+0x94a238>
  dde32c:	f9404e60 	ldr	x0, [x19, #152]
  dde330:	b4004a20 	cbz	x0, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde334:	b0002554 	adrp	x20, 1287000 <_ZTISt10bad_typeid@@Base+0x24650>
  dde338:	f944f694 	ldr	x20, [x20, #2536]
  dde33c:	f9400281 	ldr	x1, [x20]
  dde340:	97db0fb5 	bl	4a2214 <__start_il2cpp@@Base+0xd7f0>
  dde344:	b4004980 	cbz	x0, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde348:	f9404a68 	ldr	x8, [x19, #144]
  dde34c:	b4004948 	cbz	x8, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde350:	f9400281 	ldr	x1, [x20]
  dde354:	b9408019 	ldr	w25, [x0, #128]
  dde358:	aa0803e0 	mov	x0, x8
  dde35c:	97db0fae 	bl	4a2214 <__start_il2cpp@@Base+0xd7f0>
  dde360:	b40048a0 	cbz	x0, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde364:	90002557 	adrp	x23, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  dde368:	b9408018 	ldr	w24, [x0, #128]
  dde36c:	f94522f7 	ldr	x23, [x23, #2624]
  dde370:	52800141 	mov	w1, #0xa                   	// #10
  dde374:	f94002e0 	ldr	x0, [x23]
  dde378:	97d950f6 	bl	432750 <WriteZStream@@Base+0xa270>
  dde37c:	aa1303f4 	mov	x20, x19
  dde380:	f8028e80 	str	x0, [x20, #40]!
  dde384:	aa0003e1 	mov	x1, x0
  dde388:	aa1403e0 	mov	x0, x20
  dde38c:	97d950d5 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dde390:	f94002c0 	ldr	x0, [x22]
  dde394:	3944cc08 	ldrb	w8, [x0, #307]
  dde398:	361000a8 	tbz	w8, #2, dde3ac <__start_il2cpp@@Base+0x949988>
  dde39c:	b940e008 	ldr	w8, [x0, #224]
  dde3a0:	35000068 	cbnz	w8, dde3ac <__start_il2cpp@@Base+0x949988>
  dde3a4:	97d95112 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde3a8:	f94002c0 	ldr	x0, [x22]
  dde3ac:	f9405c08 	ldr	x8, [x0, #184]
  dde3b0:	b9405108 	ldr	w8, [x8, #80]
  dde3b4:	7100051f 	cmp	w8, #0x1
  dde3b8:	54000061 	b.ne	dde3c4 <__start_il2cpp@@Base+0x9499a0>  // b.any
  dde3bc:	2a1f03e1 	mov	w1, wzr
  dde3c0:	1400000e 	b	dde3f8 <__start_il2cpp@@Base+0x9499d4>
  dde3c4:	3944cc09 	ldrb	w9, [x0, #307]
  dde3c8:	361000e9 	tbz	w9, #2, dde3e4 <__start_il2cpp@@Base+0x9499c0>
  dde3cc:	b940e009 	ldr	w9, [x0, #224]
  dde3d0:	350000a9 	cbnz	w9, dde3e4 <__start_il2cpp@@Base+0x9499c0>
  dde3d4:	97d95106 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde3d8:	f94002c8 	ldr	x8, [x22]
  dde3dc:	f9405d08 	ldr	x8, [x8, #184]
  dde3e0:	b9405108 	ldr	w8, [x8, #80]
  dde3e4:	3100051f 	cmn	w8, #0x1
  dde3e8:	54000060 	b.eq	dde3f4 <__start_il2cpp@@Base+0x9499d0>  // b.none
  dde3ec:	2a1f03f5 	mov	w21, wzr
  dde3f0:	14000007 	b	dde40c <__start_il2cpp@@Base+0x9499e8>
  dde3f4:	320003e1 	orr	w1, wzr, #0x1
  dde3f8:	320003e2 	orr	w2, wzr, #0x1
  dde3fc:	2a1f03e0 	mov	w0, wzr
  dde400:	aa1f03e3 	mov	x3, xzr
  dde404:	97e86319 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  dde408:	2a0003f5 	mov	w21, w0
  dde40c:	f94002c0 	ldr	x0, [x22]
  dde410:	3944cc08 	ldrb	w8, [x0, #307]
  dde414:	361000a8 	tbz	w8, #2, dde428 <__start_il2cpp@@Base+0x949a04>
  dde418:	b940e008 	ldr	w8, [x0, #224]
  dde41c:	35000068 	cbnz	w8, dde428 <__start_il2cpp@@Base+0x949a04>
  dde420:	97d950f3 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde424:	f94002c0 	ldr	x0, [x22]
  dde428:	f9405c08 	ldr	x8, [x0, #184]
  dde42c:	b9404d08 	ldr	w8, [x8, #76]
  dde430:	7100051f 	cmp	w8, #0x1
  dde434:	54000061 	b.ne	dde440 <__start_il2cpp@@Base+0x949a1c>  // b.any
  dde438:	321f03e1 	orr	w1, wzr, #0x2
  dde43c:	1400000c 	b	dde46c <__start_il2cpp@@Base+0x949a48>
  dde440:	3944cc09 	ldrb	w9, [x0, #307]
  dde444:	361000e9 	tbz	w9, #2, dde460 <__start_il2cpp@@Base+0x949a3c>
  dde448:	b940e009 	ldr	w9, [x0, #224]
  dde44c:	350000a9 	cbnz	w9, dde460 <__start_il2cpp@@Base+0x949a3c>
  dde450:	97d950e7 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde454:	f94002c8 	ldr	x8, [x22]
  dde458:	f9405d08 	ldr	x8, [x8, #184]
  dde45c:	b9404d08 	ldr	w8, [x8, #76]
  dde460:	3100051f 	cmn	w8, #0x1
  dde464:	540000e1 	b.ne	dde480 <__start_il2cpp@@Base+0x949a5c>  // b.any
  dde468:	320007e1 	orr	w1, wzr, #0x3
  dde46c:	320003e2 	orr	w2, wzr, #0x1
  dde470:	2a1503e0 	mov	w0, w21
  dde474:	aa1f03e3 	mov	x3, xzr
  dde478:	97e862fc 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  dde47c:	2a0003f5 	mov	w21, w0
  dde480:	71000b3f 	cmp	w25, #0x2
  dde484:	540000e1 	b.ne	dde4a0 <__start_il2cpp@@Base+0x949a7c>  // b.any
  dde488:	321e03e1 	orr	w1, wzr, #0x4
  dde48c:	320003e2 	orr	w2, wzr, #0x1
  dde490:	2a1503e0 	mov	w0, w21
  dde494:	aa1f03e3 	mov	x3, xzr
  dde498:	97e862f4 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  dde49c:	2a0003f5 	mov	w21, w0
  dde4a0:	b9407e68 	ldr	w8, [x19, #124]
  dde4a4:	71000b1f 	cmp	w24, #0x2
  dde4a8:	54000141 	b.ne	dde4d0 <__start_il2cpp@@Base+0x949aac>  // b.any
  dde4ac:	35000208 	cbnz	w8, dde4ec <__start_il2cpp@@Base+0x949ac8>
  dde4b0:	b9407a68 	ldr	w8, [x19, #120]
  dde4b4:	7100f51f 	cmp	w8, #0x3d
  dde4b8:	540001ab 	b.lt	dde4ec <__start_il2cpp@@Base+0x949ac8>  // b.tstop
  dde4bc:	320003e8 	orr	w8, wzr, #0x1
  dde4c0:	52800289 	mov	w9, #0x14                  	// #20
  dde4c4:	b9007e68 	str	w8, [x19, #124]
  dde4c8:	b9008669 	str	w9, [x19, #132]
  dde4cc:	14000008 	b	dde4ec <__start_il2cpp@@Base+0x949ac8>
  dde4d0:	350000c8 	cbnz	w8, dde4e8 <__start_il2cpp@@Base+0x949ac4>
  dde4d4:	b9407a68 	ldr	w8, [x19, #120]
  dde4d8:	71000d1f 	cmp	w8, #0x3
  dde4dc:	5400006b 	b.lt	dde4e8 <__start_il2cpp@@Base+0x949ac4>  // b.tstop
  dde4e0:	52800288 	mov	w8, #0x14                  	// #20
  dde4e4:	b9008268 	str	w8, [x19, #128]
  dde4e8:	f9003e7f 	str	xzr, [x19, #120]
  dde4ec:	b9408268 	ldr	w8, [x19, #128]
  dde4f0:	7100051f 	cmp	w8, #0x1
  dde4f4:	540000eb 	b.lt	dde510 <__start_il2cpp@@Base+0x949aec>  // b.tstop
  dde4f8:	528000a1 	mov	w1, #0x5                   	// #5
  dde4fc:	320003e2 	orr	w2, wzr, #0x1
  dde500:	2a1503e0 	mov	w0, w21
  dde504:	aa1f03e3 	mov	x3, xzr
  dde508:	97e862d8 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  dde50c:	2a0003f5 	mov	w21, w0
  dde510:	b9408668 	ldr	w8, [x19, #132]
  dde514:	7100051f 	cmp	w8, #0x1
  dde518:	540000eb 	b.lt	dde534 <__start_il2cpp@@Base+0x949b10>  // b.tstop
  dde51c:	321f07e1 	orr	w1, wzr, #0x6
  dde520:	320003e2 	orr	w2, wzr, #0x1
  dde524:	2a1503e0 	mov	w0, w21
  dde528:	aa1f03e3 	mov	x3, xzr
  dde52c:	97e862cf 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  dde530:	2a0003f5 	mov	w21, w0
  dde534:	f94002c0 	ldr	x0, [x22]
  dde538:	3944cc08 	ldrb	w8, [x0, #307]
  dde53c:	361000a8 	tbz	w8, #2, dde550 <__start_il2cpp@@Base+0x949b2c>
  dde540:	b940e008 	ldr	w8, [x0, #224]
  dde544:	35000068 	cbnz	w8, dde550 <__start_il2cpp@@Base+0x949b2c>
  dde548:	97d950a9 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde54c:	f94002c0 	ldr	x0, [x22]
  dde550:	f9405c08 	ldr	x8, [x0, #184]
  dde554:	f00001c9 	adrp	x9, e19000 <__stop_il2cpp@@Base+0x26130>
  dde558:	bd468120 	ldr	s0, [x9, #1664]
  dde55c:	f00001c9 	adrp	x9, e19000 <__stop_il2cpp@@Base+0x26130>
  dde560:	2d528901 	ldp	s1, s2, [x8, #148]
  dde564:	bd452523 	ldr	s3, [x9, #1316]
  dde568:	b9407668 	ldr	w8, [x19, #116]
  dde56c:	1e200821 	fmul	s1, s1, s0
  dde570:	1e200840 	fmul	s0, s2, s0
  dde574:	1e22c022 	fcvt	d2, s1
  dde578:	1e232020 	fcmp	s1, s3
  dde57c:	1e22c004 	fcvt	d4, s0
  dde580:	1e614041 	fneg	d1, d2
  dde584:	1e620c21 	fcsel	d1, d1, d2, eq	// eq = none
  dde588:	1e614082 	fneg	d2, d4
  dde58c:	1e232000 	fcmp	s0, s3
  dde590:	1e640c40 	fcsel	d0, d2, d4, eq	// eq = none
  dde594:	34000068 	cbz	w8, dde5a0 <__start_il2cpp@@Base+0x949b7c>
  dde598:	b9407268 	ldr	w8, [x19, #112]
  dde59c:	14000009 	b	dde5c0 <__start_il2cpp@@Base+0x949b9c>
  dde5a0:	b9407268 	ldr	w8, [x19, #112]
  dde5a4:	321e07e9 	orr	w9, wzr, #0xc
  dde5a8:	b9007669 	str	w9, [x19, #116]
  dde5ac:	11000509 	add	w9, w8, #0x1
  dde5b0:	7103ed3f 	cmp	w9, #0xfb
  dde5b4:	320003e9 	orr	w9, wzr, #0x1
  dde5b8:	1a88a528 	csinc	w8, w9, w8, ge	// ge = tcont
  dde5bc:	b9007268 	str	w8, [x19, #112]
  dde5c0:	f9400289 	ldr	x9, [x20]
  dde5c4:	b4003589 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde5c8:	b940192a 	ldr	w10, [x9, #24]
  dde5cc:	3400356a 	cbz	w10, ddec78 <__start_il2cpp@@Base+0x94a254>
  dde5d0:	39008135 	strb	w21, [x9, #32]
  dde5d4:	f9400289 	ldr	x9, [x20]
  dde5d8:	b40034e9 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde5dc:	b940192a 	ldr	w10, [x9, #24]
  dde5e0:	7100055f 	cmp	w10, #0x1
  dde5e4:	540034a9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde5e8:	3900853f 	strb	wzr, [x9, #33]
  dde5ec:	f9400289 	ldr	x9, [x20]
  dde5f0:	b4003429 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde5f4:	b940192a 	ldr	w10, [x9, #24]
  dde5f8:	7100095f 	cmp	w10, #0x2
  dde5fc:	540033e9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde600:	1e78002a 	fcvtzs	w10, d1
  dde604:	3900892a 	strb	w10, [x9, #34]
  dde608:	f9400289 	ldr	x9, [x20]
  dde60c:	b4003349 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde610:	b940192a 	ldr	w10, [x9, #24]
  dde614:	71000d5f 	cmp	w10, #0x3
  dde618:	54003309 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde61c:	1e78000a 	fcvtzs	w10, d0
  dde620:	39008d2a 	strb	w10, [x9, #35]
  dde624:	f9400289 	ldr	x9, [x20]
  dde628:	b4003269 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde62c:	b940192a 	ldr	w10, [x9, #24]
  dde630:	7100115f 	cmp	w10, #0x4
  dde634:	54003229 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde638:	3900913f 	strb	wzr, [x9, #36]
  dde63c:	f9400289 	ldr	x9, [x20]
  dde640:	b40031a9 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde644:	b940192a 	ldr	w10, [x9, #24]
  dde648:	7100155f 	cmp	w10, #0x5
  dde64c:	54003169 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde650:	3900953f 	strb	wzr, [x9, #37]
  dde654:	f9400289 	ldr	x9, [x20]
  dde658:	b40030e9 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde65c:	b940192a 	ldr	w10, [x9, #24]
  dde660:	7100195f 	cmp	w10, #0x6
  dde664:	540030a9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde668:	39009928 	strb	w8, [x9, #38]
  dde66c:	a9428660 	ldp	x0, x1, [x19, #40]
  dde670:	aa1f03e2 	mov	x2, xzr
  dde674:	97e861ed 	bl	7f6e28 <__start_il2cpp@@Base+0x362404>
  dde678:	370016e0 	tbnz	w0, #0, dde954 <__start_il2cpp@@Base+0x949f30>
  dde67c:	b9403a68 	ldr	w8, [x19, #56]
  dde680:	350016a8 	cbnz	w8, dde954 <__start_il2cpp@@Base+0x949f30>
  dde684:	a9428660 	ldp	x0, x1, [x19, #40]
  dde688:	aa1f03e2 	mov	x2, xzr
  dde68c:	97e86207 	bl	7f6ea8 <__start_il2cpp@@Base+0x362484>
  dde690:	f94002e0 	ldr	x0, [x23]
  dde694:	52800261 	mov	w1, #0x13                  	// #19
  dde698:	97d9502e 	bl	432750 <WriteZStream@@Base+0xa270>
  dde69c:	b4002ec0 	cbz	x0, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde6a0:	b9401808 	ldr	w8, [x0, #24]
  dde6a4:	aa0003f5 	mov	x21, x0
  dde6a8:	34002e88 	cbz	w8, ddec78 <__start_il2cpp@@Base+0x94a254>
  dde6ac:	39406269 	ldrb	w9, [x19, #24]
  dde6b0:	7100051f 	cmp	w8, #0x1
  dde6b4:	390082a9 	strb	w9, [x21, #32]
  dde6b8:	54002e00 	b.eq	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.none
  dde6bc:	39406a68 	ldrb	w8, [x19, #26]
  dde6c0:	390086a8 	strb	w8, [x21, #33]
  dde6c4:	f94002c0 	ldr	x0, [x22]
  dde6c8:	3944cc08 	ldrb	w8, [x0, #307]
  dde6cc:	361000a8 	tbz	w8, #2, dde6e0 <__start_il2cpp@@Base+0x949cbc>
  dde6d0:	b940e008 	ldr	w8, [x0, #224]
  dde6d4:	35000068 	cbnz	w8, dde6e0 <__start_il2cpp@@Base+0x949cbc>
  dde6d8:	97d95045 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde6dc:	f94002c0 	ldr	x0, [x22]
  dde6e0:	f9405c08 	ldr	x8, [x0, #184]
  dde6e4:	f9400d09 	ldr	x9, [x8, #24]
  dde6e8:	b4002c69 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde6ec:	b9401928 	ldr	w8, [x9, #24]
  dde6f0:	34002c48 	cbz	w8, ddec78 <__start_il2cpp@@Base+0x94a254>
  dde6f4:	f9400ea8 	ldr	x8, [x21, #24]
  dde6f8:	7100091f 	cmp	w8, #0x2
  dde6fc:	54002be9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde700:	39408129 	ldrb	w9, [x9, #32]
  dde704:	39008aa9 	strb	w9, [x21, #34]
  dde708:	f94002c9 	ldr	x9, [x22]
  dde70c:	f9405d29 	ldr	x9, [x9, #184]
  dde710:	f9400d29 	ldr	x9, [x9, #24]
  dde714:	b4002b09 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde718:	b940192a 	ldr	w10, [x9, #24]
  dde71c:	7100055f 	cmp	w10, #0x1
  dde720:	54002ac9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde724:	71000d1f 	cmp	w8, #0x3
  dde728:	54002a89 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde72c:	39408529 	ldrb	w9, [x9, #33]
  dde730:	39008ea9 	strb	w9, [x21, #35]
  dde734:	f94002c9 	ldr	x9, [x22]
  dde738:	f9405d29 	ldr	x9, [x9, #184]
  dde73c:	f9400d29 	ldr	x9, [x9, #24]
  dde740:	b40029a9 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde744:	b940192a 	ldr	w10, [x9, #24]
  dde748:	7100095f 	cmp	w10, #0x2
  dde74c:	54002969 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde750:	7100111f 	cmp	w8, #0x4
  dde754:	54002929 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde758:	39408929 	ldrb	w9, [x9, #34]
  dde75c:	d00024f6 	adrp	x22, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dde760:	390092a9 	strb	w9, [x21, #36]
  dde764:	f9454ad6 	ldr	x22, [x22, #2704]
  dde768:	f94002c0 	ldr	x0, [x22]
  dde76c:	3944cc09 	ldrb	w9, [x0, #307]
  dde770:	361000a9 	tbz	w9, #2, dde784 <__start_il2cpp@@Base+0x949d60>
  dde774:	b940e009 	ldr	w9, [x0, #224]
  dde778:	35000069 	cbnz	w9, dde784 <__start_il2cpp@@Base+0x949d60>
  dde77c:	97d9501c 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde780:	f9400ea8 	ldr	x8, [x21, #24]
  dde784:	7100151f 	cmp	w8, #0x5
  dde788:	54002789 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde78c:	f94002c9 	ldr	x9, [x22]
  dde790:	7100191f 	cmp	w8, #0x6
  dde794:	f9405d29 	ldr	x9, [x9, #184]
  dde798:	39404929 	ldrb	w9, [x9, #18]
  dde79c:	390096a9 	strb	w9, [x21, #37]
  dde7a0:	540026c0 	b.eq	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.none
  dde7a4:	f94002c9 	ldr	x9, [x22]
  dde7a8:	71001d1f 	cmp	w8, #0x7
  dde7ac:	f9405d29 	ldr	x9, [x9, #184]
  dde7b0:	39404d29 	ldrb	w9, [x9, #19]
  dde7b4:	39009aa9 	strb	w9, [x21, #38]
  dde7b8:	54002609 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde7bc:	f94002c9 	ldr	x9, [x22]
  dde7c0:	f9405d29 	ldr	x9, [x9, #184]
  dde7c4:	39405129 	ldrb	w9, [x9, #20]
  dde7c8:	39009ea9 	strb	w9, [x21, #39]
  dde7cc:	f9400289 	ldr	x9, [x20]
  dde7d0:	b4002529 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde7d4:	b940192a 	ldr	w10, [x9, #24]
  dde7d8:	3400250a 	cbz	w10, ddec78 <__start_il2cpp@@Base+0x94a254>
  dde7dc:	7100211f 	cmp	w8, #0x8
  dde7e0:	540024c9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde7e4:	39408129 	ldrb	w9, [x9, #32]
  dde7e8:	3900a2a9 	strb	w9, [x21, #40]
  dde7ec:	f9400289 	ldr	x9, [x20]
  dde7f0:	b4002429 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde7f4:	b940192a 	ldr	w10, [x9, #24]
  dde7f8:	7100055f 	cmp	w10, #0x1
  dde7fc:	540023e9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde800:	7100251f 	cmp	w8, #0x9
  dde804:	540023a9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde808:	39408529 	ldrb	w9, [x9, #33]
  dde80c:	3900a6a9 	strb	w9, [x21, #41]
  dde810:	f9400289 	ldr	x9, [x20]
  dde814:	b4002309 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde818:	b940192a 	ldr	w10, [x9, #24]
  dde81c:	7100095f 	cmp	w10, #0x2
  dde820:	540022c9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde824:	7100291f 	cmp	w8, #0xa
  dde828:	54002289 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde82c:	39408929 	ldrb	w9, [x9, #34]
  dde830:	3900aaa9 	strb	w9, [x21, #42]
  dde834:	f9400289 	ldr	x9, [x20]
  dde838:	b40021e9 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde83c:	b940192a 	ldr	w10, [x9, #24]
  dde840:	71000d5f 	cmp	w10, #0x3
  dde844:	540021a9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde848:	71002d1f 	cmp	w8, #0xb
  dde84c:	54002169 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde850:	39408d29 	ldrb	w9, [x9, #35]
  dde854:	3900aea9 	strb	w9, [x21, #43]
  dde858:	f9400289 	ldr	x9, [x20]
  dde85c:	b40020c9 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde860:	b940192a 	ldr	w10, [x9, #24]
  dde864:	7100115f 	cmp	w10, #0x4
  dde868:	54002089 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde86c:	7100311f 	cmp	w8, #0xc
  dde870:	54002049 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde874:	39409129 	ldrb	w9, [x9, #36]
  dde878:	3900b2a9 	strb	w9, [x21, #44]
  dde87c:	f9400289 	ldr	x9, [x20]
  dde880:	b4001fa9 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde884:	b940192a 	ldr	w10, [x9, #24]
  dde888:	7100155f 	cmp	w10, #0x5
  dde88c:	54001f69 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde890:	7100351f 	cmp	w8, #0xd
  dde894:	54001f29 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde898:	39409529 	ldrb	w9, [x9, #37]
  dde89c:	3900b6a9 	strb	w9, [x21, #45]
  dde8a0:	f9400289 	ldr	x9, [x20]
  dde8a4:	b4001e89 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde8a8:	b940192a 	ldr	w10, [x9, #24]
  dde8ac:	7100195f 	cmp	w10, #0x6
  dde8b0:	54001e49 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde8b4:	7100391f 	cmp	w8, #0xe
  dde8b8:	54001e09 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde8bc:	39409929 	ldrb	w9, [x9, #38]
  dde8c0:	3900baa9 	strb	w9, [x21, #46]
  dde8c4:	f9400289 	ldr	x9, [x20]
  dde8c8:	b4001d69 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde8cc:	b940192a 	ldr	w10, [x9, #24]
  dde8d0:	71001d5f 	cmp	w10, #0x7
  dde8d4:	54001d29 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde8d8:	71003d1f 	cmp	w8, #0xf
  dde8dc:	54001ce9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde8e0:	39409d29 	ldrb	w9, [x9, #39]
  dde8e4:	3900bea9 	strb	w9, [x21, #47]
  dde8e8:	f9400289 	ldr	x9, [x20]
  dde8ec:	b4001c49 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde8f0:	b940192a 	ldr	w10, [x9, #24]
  dde8f4:	7100215f 	cmp	w10, #0x8
  dde8f8:	54001c09 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde8fc:	7100411f 	cmp	w8, #0x10
  dde900:	54001bc9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde904:	3940a129 	ldrb	w9, [x9, #40]
  dde908:	3900c2a9 	strb	w9, [x21, #48]
  dde90c:	f9400289 	ldr	x9, [x20]
  dde910:	b4001b29 	cbz	x9, ddec74 <__start_il2cpp@@Base+0x94a250>
  dde914:	b940192a 	ldr	w10, [x9, #24]
  dde918:	7100255f 	cmp	w10, #0x9
  dde91c:	54001ae9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde920:	7100451f 	cmp	w8, #0x11
  dde924:	54001aa9 	b.ls	ddec78 <__start_il2cpp@@Base+0x94a254>  // b.plast
  dde928:	3940a528 	ldrb	w8, [x9, #41]
  dde92c:	aa1303f4 	mov	x20, x19
  dde930:	aa1503e1 	mov	x1, x21
  dde934:	3900c6a8 	strb	w8, [x21, #49]
  dde938:	f8020e95 	str	x21, [x20, #32]!
  dde93c:	aa1403e0 	mov	x0, x20
  dde940:	97d94f68 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dde944:	320003e8 	orr	w8, wzr, #0x1
  dde948:	320007e9 	orr	w9, wzr, #0x3
  dde94c:	381fd288 	sturb	w8, [x20, #-3]
  dde950:	b9001a89 	str	w9, [x20, #24]
  dde954:	39407668 	ldrb	w8, [x19, #29]
  dde958:	34001228 	cbz	w8, ddeb9c <__start_il2cpp@@Base+0x94a178>
  dde95c:	3900767f 	strb	wzr, [x19, #29]
  dde960:	90002576 	adrp	x22, 128a000 <_ZTISt10bad_typeid@@Base+0x27650>
  dde964:	f947b6d6 	ldr	x22, [x22, #3944]
  dde968:	f94002c0 	ldr	x0, [x22]
  dde96c:	3944cc08 	ldrb	w8, [x0, #307]
  dde970:	361000a8 	tbz	w8, #2, dde984 <__start_il2cpp@@Base+0x949f60>
  dde974:	b940e008 	ldr	w8, [x0, #224]
  dde978:	35000068 	cbnz	w8, dde984 <__start_il2cpp@@Base+0x949f60>
  dde97c:	97d94f9c 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde980:	f94002c0 	ldr	x0, [x22]
  dde984:	f9405c08 	ldr	x8, [x0, #184]
  dde988:	f9401514 	ldr	x20, [x8, #40]
  dde98c:	b5000374 	cbnz	x20, dde9f8 <__start_il2cpp@@Base+0x949fd4>
  dde990:	3944cc09 	ldrb	w9, [x0, #307]
  dde994:	361000c9 	tbz	w9, #2, dde9ac <__start_il2cpp@@Base+0x949f88>
  dde998:	b940e009 	ldr	w9, [x0, #224]
  dde99c:	35000089 	cbnz	w9, dde9ac <__start_il2cpp@@Base+0x949f88>
  dde9a0:	97d94f93 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde9a4:	f94002c8 	ldr	x8, [x22]
  dde9a8:	f9405d08 	ldr	x8, [x8, #184]
  dde9ac:	f9400115 	ldr	x21, [x8]
  dde9b0:	d0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dde9b4:	f9440908 	ldr	x8, [x8, #2064]
  dde9b8:	f9400100 	ldr	x0, [x8]
  dde9bc:	97d94f93 	bl	432808 <WriteZStream@@Base+0xa328>
  dde9c0:	900024e8 	adrp	x8, 127a000 <_ZTISt10bad_typeid@@Base+0x17650>
  dde9c4:	b0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dde9c8:	f9401908 	ldr	x8, [x8, #48]
  dde9cc:	f9446d29 	ldr	x9, [x9, #2264]
  dde9d0:	aa1503e1 	mov	x1, x21
  dde9d4:	aa0003f4 	mov	x20, x0
  dde9d8:	f9400102 	ldr	x2, [x8]
  dde9dc:	f9400123 	ldr	x3, [x9]
  dde9e0:	97ee9f72 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dde9e4:	f94002c8 	ldr	x8, [x22]
  dde9e8:	aa1403e1 	mov	x1, x20
  dde9ec:	f9405d00 	ldr	x0, [x8, #184]
  dde9f0:	f8028c14 	str	x20, [x0, #40]!
  dde9f4:	97d94f3b 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dde9f8:	d00024f7 	adrp	x23, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dde9fc:	f9454af7 	ldr	x23, [x23, #2704]
  ddea00:	f94002e0 	ldr	x0, [x23]
  ddea04:	3944cc08 	ldrb	w8, [x0, #307]
  ddea08:	36100088 	tbz	w8, #2, ddea18 <__start_il2cpp@@Base+0x949ff4>
  ddea0c:	b940e008 	ldr	w8, [x0, #224]
  ddea10:	35000048 	cbnz	w8, ddea18 <__start_il2cpp@@Base+0x949ff4>
  ddea14:	97d94f76 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddea18:	aa1403e0 	mov	x0, x20
  ddea1c:	aa1f03e1 	mov	x1, xzr
  ddea20:	97ff9607 	bl	dc423c <__start_il2cpp@@Base+0x92f818>
  ddea24:	f94002c0 	ldr	x0, [x22]
  ddea28:	3944cc08 	ldrb	w8, [x0, #307]
  ddea2c:	361000a8 	tbz	w8, #2, ddea40 <__start_il2cpp@@Base+0x94a01c>
  ddea30:	b940e008 	ldr	w8, [x0, #224]
  ddea34:	35000068 	cbnz	w8, ddea40 <__start_il2cpp@@Base+0x94a01c>
  ddea38:	97d94f6d 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddea3c:	f94002c0 	ldr	x0, [x22]
  ddea40:	f9405c08 	ldr	x8, [x0, #184]
  ddea44:	f9401914 	ldr	x20, [x8, #48]
  ddea48:	b5000374 	cbnz	x20, ddeab4 <__start_il2cpp@@Base+0x94a090>
  ddea4c:	3944cc09 	ldrb	w9, [x0, #307]
  ddea50:	361000c9 	tbz	w9, #2, ddea68 <__start_il2cpp@@Base+0x94a044>
  ddea54:	b940e009 	ldr	w9, [x0, #224]
  ddea58:	35000089 	cbnz	w9, ddea68 <__start_il2cpp@@Base+0x94a044>
  ddea5c:	97d94f64 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddea60:	f94002c8 	ldr	x8, [x22]
  ddea64:	f9405d08 	ldr	x8, [x8, #184]
  ddea68:	f9400115 	ldr	x21, [x8]
  ddea6c:	d0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  ddea70:	f9440908 	ldr	x8, [x8, #2064]
  ddea74:	f9400100 	ldr	x0, [x8]
  ddea78:	97d94f64 	bl	432808 <WriteZStream@@Base+0xa328>
  ddea7c:	90002508 	adrp	x8, 127e000 <_ZTISt10bad_typeid@@Base+0x1b650>
  ddea80:	b0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  ddea84:	f944fd08 	ldr	x8, [x8, #2552]
  ddea88:	f9446d29 	ldr	x9, [x9, #2264]
  ddea8c:	aa1503e1 	mov	x1, x21
  ddea90:	aa0003f4 	mov	x20, x0
  ddea94:	f9400102 	ldr	x2, [x8]
  ddea98:	f9400123 	ldr	x3, [x9]
  ddea9c:	97ee9f43 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  ddeaa0:	f94002c8 	ldr	x8, [x22]
  ddeaa4:	aa1403e1 	mov	x1, x20
  ddeaa8:	f9405d00 	ldr	x0, [x8, #184]
  ddeaac:	f8030c14 	str	x20, [x0, #48]!
  ddeab0:	97d94f0c 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddeab4:	f94002e0 	ldr	x0, [x23]
  ddeab8:	f9401275 	ldr	x21, [x19, #32]
  ddeabc:	3944cc08 	ldrb	w8, [x0, #307]
  ddeac0:	36100088 	tbz	w8, #2, ddead0 <__start_il2cpp@@Base+0x94a0ac>
  ddeac4:	b940e008 	ldr	w8, [x0, #224]
  ddeac8:	35000048 	cbnz	w8, ddead0 <__start_il2cpp@@Base+0x94a0ac>
  ddeacc:	97d94f48 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddead0:	aa1403e0 	mov	x0, x20
  ddead4:	aa1503e1 	mov	x1, x21
  ddead8:	aa1f03e2 	mov	x2, xzr
  ddeadc:	97ff955e 	bl	dc4054 <__start_il2cpp@@Base+0x92f630>
  ddeae0:	f94002c0 	ldr	x0, [x22]
  ddeae4:	3944cc08 	ldrb	w8, [x0, #307]
  ddeae8:	361000a8 	tbz	w8, #2, ddeafc <__start_il2cpp@@Base+0x94a0d8>
  ddeaec:	b940e008 	ldr	w8, [x0, #224]
  ddeaf0:	35000068 	cbnz	w8, ddeafc <__start_il2cpp@@Base+0x94a0d8>
  ddeaf4:	97d94f3e 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddeaf8:	f94002c0 	ldr	x0, [x22]
  ddeafc:	f9405c08 	ldr	x8, [x0, #184]
  ddeb00:	f9401d14 	ldr	x20, [x8, #56]
  ddeb04:	b5000374 	cbnz	x20, ddeb70 <__start_il2cpp@@Base+0x94a14c>
  ddeb08:	3944cc09 	ldrb	w9, [x0, #307]
  ddeb0c:	361000c9 	tbz	w9, #2, ddeb24 <__start_il2cpp@@Base+0x94a100>
  ddeb10:	b940e009 	ldr	w9, [x0, #224]
  ddeb14:	35000089 	cbnz	w9, ddeb24 <__start_il2cpp@@Base+0x94a100>
  ddeb18:	97d94f35 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddeb1c:	f94002c8 	ldr	x8, [x22]
  ddeb20:	f9405d08 	ldr	x8, [x8, #184]
  ddeb24:	f9400115 	ldr	x21, [x8]
  ddeb28:	d0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  ddeb2c:	f9440908 	ldr	x8, [x8, #2064]
  ddeb30:	f9400100 	ldr	x0, [x8]
  ddeb34:	97d94f35 	bl	432808 <WriteZStream@@Base+0xa328>
  ddeb38:	90002448 	adrp	x8, 1266000 <_ZTISt10bad_typeid@@Base+0x3650>
  ddeb3c:	b0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  ddeb40:	f9475508 	ldr	x8, [x8, #3752]
  ddeb44:	f9446d29 	ldr	x9, [x9, #2264]
  ddeb48:	aa1503e1 	mov	x1, x21
  ddeb4c:	aa0003f4 	mov	x20, x0
  ddeb50:	f9400102 	ldr	x2, [x8]
  ddeb54:	f9400123 	ldr	x3, [x9]
  ddeb58:	97ee9f14 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  ddeb5c:	f94002c8 	ldr	x8, [x22]
  ddeb60:	aa1403e1 	mov	x1, x20
  ddeb64:	f9405d00 	ldr	x0, [x8, #184]
  ddeb68:	f8038c14 	str	x20, [x0, #56]!
  ddeb6c:	97d94edd 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddeb70:	f94002e0 	ldr	x0, [x23]
  ddeb74:	f9401275 	ldr	x21, [x19, #32]
  ddeb78:	3944cc08 	ldrb	w8, [x0, #307]
  ddeb7c:	36100088 	tbz	w8, #2, ddeb8c <__start_il2cpp@@Base+0x94a168>
  ddeb80:	b940e008 	ldr	w8, [x0, #224]
  ddeb84:	35000048 	cbnz	w8, ddeb8c <__start_il2cpp@@Base+0x94a168>
  ddeb88:	97d94f19 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddeb8c:	aa1403e0 	mov	x0, x20
  ddeb90:	aa1503e1 	mov	x1, x21
  ddeb94:	aa1f03e2 	mov	x2, xzr
  ddeb98:	97ff952f 	bl	dc4054 <__start_il2cpp@@Base+0x92f630>
  ddeb9c:	9400003a 	bl	ddec84 <__start_il2cpp@@Base+0x94a260>
  ddeba0:	90002555 	adrp	x21, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  ddeba4:	f943eab5 	ldr	x21, [x21, #2000]
  ddeba8:	aa0003f4 	mov	x20, x0
  ddebac:	f94002a8 	ldr	x8, [x21]
  ddebb0:	3944cd09 	ldrb	w9, [x8, #307]
  ddebb4:	361000c9 	tbz	w9, #2, ddebcc <__start_il2cpp@@Base+0x94a1a8>
  ddebb8:	b940e109 	ldr	w9, [x8, #224]
  ddebbc:	35000089 	cbnz	w9, ddebcc <__start_il2cpp@@Base+0x94a1a8>
  ddebc0:	aa0803e0 	mov	x0, x8
  ddebc4:	97d94f0a 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddebc8:	f94002a8 	ldr	x8, [x21]
  ddebcc:	f9405d08 	ldr	x8, [x8, #184]
  ddebd0:	f9400108 	ldr	x8, [x8]
  ddebd4:	cb080288 	sub	x8, x20, x8
  ddebd8:	f100511f 	cmp	x8, #0x14
  ddebdc:	5400040b 	b.lt	ddec5c <__start_il2cpp@@Base+0x94a238>  // b.tstop
  ddebe0:	94000029 	bl	ddec84 <__start_il2cpp@@Base+0x94a260>
  ddebe4:	f94002a8 	ldr	x8, [x21]
  ddebe8:	aa0003f4 	mov	x20, x0
  ddebec:	3944cd09 	ldrb	w9, [x8, #307]
  ddebf0:	361000c9 	tbz	w9, #2, ddec08 <__start_il2cpp@@Base+0x94a1e4>
  ddebf4:	b940e109 	ldr	w9, [x8, #224]
  ddebf8:	35000089 	cbnz	w9, ddec08 <__start_il2cpp@@Base+0x94a1e4>
  ddebfc:	aa0803e0 	mov	x0, x8
  ddec00:	97d94efb 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddec04:	f94002a8 	ldr	x8, [x21]
  ddec08:	f9405d08 	ldr	x8, [x8, #184]
  ddec0c:	f9000114 	str	x20, [x8]
  ddec10:	b9407a68 	ldr	w8, [x19, #120]
  ddec14:	b9408669 	ldr	w9, [x19, #132]
  ddec18:	1100050a 	add	w10, w8, #0x1
  ddec1c:	71000528 	subs	w8, w9, #0x1
  ddec20:	b9007a6a 	str	w10, [x19, #120]
  ddec24:	5400004b 	b.lt	ddec2c <__start_il2cpp@@Base+0x94a208>  // b.tstop
  ddec28:	b9008668 	str	w8, [x19, #132]
  ddec2c:	b9408268 	ldr	w8, [x19, #128]
  ddec30:	71000508 	subs	w8, w8, #0x1
  ddec34:	5400004b 	b.lt	ddec3c <__start_il2cpp@@Base+0x94a218>  // b.tstop
  ddec38:	b9008268 	str	w8, [x19, #128]
  ddec3c:	b9403a68 	ldr	w8, [x19, #56]
  ddec40:	71000508 	subs	w8, w8, #0x1
  ddec44:	5400004b 	b.lt	ddec4c <__start_il2cpp@@Base+0x94a228>  // b.tstop
  ddec48:	b9003a68 	str	w8, [x19, #56]
  ddec4c:	b9407668 	ldr	w8, [x19, #116]
  ddec50:	71000508 	subs	w8, w8, #0x1
  ddec54:	5400004b 	b.lt	ddec5c <__start_il2cpp@@Base+0x94a238>  // b.tstop
  ddec58:	b9007668 	str	w8, [x19, #116]
  ddec5c:	a9447bfd 	ldp	x29, x30, [sp, #64]
  ddec60:	a9434ff4 	ldp	x20, x19, [sp, #48]
  ddec64:	a94257f6 	ldp	x22, x21, [sp, #32]
  ddec68:	a9415ff8 	ldp	x24, x23, [sp, #16]
  ddec6c:	f84507f9 	ldr	x25, [sp], #80
  ddec70:	d65f03c0 	ret
  ddec74:	97d94ee7 	bl	432810 <WriteZStream@@Base+0xa330>
  ddec78:	97d94ef1 	bl	43283c <WriteZStream@@Base+0xa35c>
  ddec7c:	aa1f03e1 	mov	x1, xzr
  ddec80:	97d94ed7 	bl	4327dc <WriteZStream@@Base+0xa2fc>
