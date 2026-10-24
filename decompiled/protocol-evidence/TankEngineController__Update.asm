; TankEngineController$$Update
; void TankEngineController__Update (TankEngineController_o* __this, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

00000000006e0428 <__start_il2cpp@@Base+0x24ba04>:
  6e0428:	6dbc23e9 	stp	d9, d8, [sp, #-64]!
  6e042c:	a90157f6 	stp	x22, x21, [sp, #16]
  6e0430:	a9024ff4 	stp	x20, x19, [sp, #32]
  6e0434:	a9037bfd 	stp	x29, x30, [sp, #48]
  6e0438:	9100c3fd 	add	x29, sp, #0x30
  6e043c:	f00062f4 	adrp	x20, 133f000 <__bss_start__@@Base+0x930>
  6e0440:	394dea88 	ldrb	w8, [x20, #890]
  6e0444:	aa0003f3 	mov	x19, x0
  6e0448:	37000248 	tbnz	w8, #0, 6e0490 <__start_il2cpp@@Base+0x24ba6c>
  6e044c:	f0005d20 	adrp	x0, 1287000 <_ZTISt10bad_typeid@@Base+0x24650>
  6e0450:	f944f400 	ldr	x0, [x0, #2536]
  6e0454:	97f548ba 	bl	43273c <WriteZStream@@Base+0xa25c>
  6e0458:	d0005ce0 	adrp	x0, 127e000 <_ZTISt10bad_typeid@@Base+0x1b650>
  6e045c:	f943b800 	ldr	x0, [x0, #1904]
  6e0460:	97f548b7 	bl	43273c <WriteZStream@@Base+0xa25c>
  6e0464:	90005c80 	adrp	x0, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e0468:	f9412c00 	ldr	x0, [x0, #600]
  6e046c:	97f548b4 	bl	43273c <WriteZStream@@Base+0xa25c>
  6e0470:	b0005d40 	adrp	x0, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0474:	f941f800 	ldr	x0, [x0, #1008]
  6e0478:	97f548b1 	bl	43273c <WriteZStream@@Base+0xa25c>
  6e047c:	b0005cc0 	adrp	x0, 1279000 <_ZTISt10bad_typeid@@Base+0x16650>
  6e0480:	f947bc00 	ldr	x0, [x0, #3960]
  6e0484:	97f548ae 	bl	43273c <WriteZStream@@Base+0xa25c>
  6e0488:	320003e8 	orr	w8, wzr, #0x1
  6e048c:	390dea88 	strb	w8, [x20, #890]
  6e0490:	f9402e60 	ldr	x0, [x19, #88]
  6e0494:	b4005b60 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0498:	f0005d28 	adrp	x8, 1287000 <_ZTISt10bad_typeid@@Base+0x24650>
  6e049c:	f944f508 	ldr	x8, [x8, #2536]
  6e04a0:	f9400101 	ldr	x1, [x8]
  6e04a4:	97f7075c 	bl	4a2214 <__start_il2cpp@@Base+0xd7f0>
  6e04a8:	b4005ac0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e04ac:	b9408008 	ldr	w8, [x0, #128]
  6e04b0:	7100091f 	cmp	w8, #0x2
  6e04b4:	540001a1 	b.ne	6e04e8 <__start_il2cpp@@Base+0x24bac4>  // b.any
  6e04b8:	f9403660 	ldr	x0, [x19, #104]
  6e04bc:	320003e8 	orr	w8, wzr, #0x1
  6e04c0:	b9008e68 	str	w8, [x19, #140]
  6e04c4:	b40059e0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e04c8:	39422274 	ldrb	w20, [x19, #136]
  6e04cc:	aa1f03e1 	mov	x1, xzr
  6e04d0:	9407f83e 	bl	8de5c8 <__start_il2cpp@@Base+0x449ba4>
  6e04d4:	340001b4 	cbz	w20, 6e0508 <__start_il2cpp@@Base+0x24bae4>
  6e04d8:	b4005940 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e04dc:	d0003a28 	adrp	x8, e26000 <__stop_il2cpp@@Base+0x33130>
  6e04e0:	bd4e4d01 	ldr	s1, [x8, #3660]
  6e04e4:	1400000c 	b	6e0514 <__start_il2cpp@@Base+0x24baf0>
  6e04e8:	b9408e68 	ldr	w8, [x19, #140]
  6e04ec:	7100051f 	cmp	w8, #0x1
  6e04f0:	540001c1 	b.ne	6e0528 <__start_il2cpp@@Base+0x24bb04>  // b.any
  6e04f4:	39422268 	ldrb	w8, [x19, #136]
  6e04f8:	b9008e7f 	str	wzr, [x19, #140]
  6e04fc:	34000a68 	cbz	w8, 6e0648 <__start_il2cpp@@Base+0x24bc24>
  6e0500:	3902227f 	strb	wzr, [x19, #136]
  6e0504:	14000009 	b	6e0528 <__start_il2cpp@@Base+0x24bb04>
  6e0508:	b40057c0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e050c:	b00039c8 	adrp	x8, e19000 <__stop_il2cpp@@Base+0x26130>
  6e0510:	bd4cd501 	ldr	s1, [x8, #3284]
  6e0514:	1e2703e0 	fmov	s0, wzr
  6e0518:	1e2703e2 	fmov	s2, wzr
  6e051c:	320003e1 	orr	w1, wzr, #0x1
  6e0520:	aa1f03e2 	mov	x2, xzr
  6e0524:	9402478e 	bl	77235c <__start_il2cpp@@Base+0x2dd938>
  6e0528:	b940aa68 	ldr	w8, [x19, #168]
  6e052c:	35004248 	cbnz	w8, 6e0d74 <__start_il2cpp@@Base+0x24c350>
  6e0530:	f9403e60 	ldr	x0, [x19, #120]
  6e0534:	b4005660 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0538:	d0005cf4 	adrp	x20, 127e000 <_ZTISt10bad_typeid@@Base+0x1b650>
  6e053c:	f943ba94 	ldr	x20, [x20, #1904]
  6e0540:	f9400281 	ldr	x1, [x20]
  6e0544:	97f70734 	bl	4a2214 <__start_il2cpp@@Base+0xd7f0>
  6e0548:	f9404268 	ldr	x8, [x19, #128]
  6e054c:	b40055a8 	cbz	x8, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0550:	f9400281 	ldr	x1, [x20]
  6e0554:	aa0003f6 	mov	x22, x0
  6e0558:	aa0803e0 	mov	x0, x8
  6e055c:	97f7072e 	bl	4a2214 <__start_il2cpp@@Base+0xd7f0>
  6e0560:	b4005516 	cbz	x22, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0564:	aa0003f4 	mov	x20, x0
  6e0568:	aa1603e0 	mov	x0, x22
  6e056c:	aa1f03e1 	mov	x1, xzr
  6e0570:	94045b4d 	bl	7f72a4 <__start_il2cpp@@Base+0x362880>
  6e0574:	d0003a28 	adrp	x8, e26000 <__stop_il2cpp@@Base+0x33130>
  6e0578:	fd475109 	ldr	d9, [x8, #3744]
  6e057c:	1e22c020 	fcvt	d0, s1
  6e0580:	1e692000 	fcmp	d0, d9
  6e0584:	54000225 	b.pl	6e05c8 <__start_il2cpp@@Base+0x24bba4>  // b.nfrst
  6e0588:	b0005d55 	adrp	x21, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e058c:	f941fab5 	ldr	x21, [x21, #1008]
  6e0590:	f94002a0 	ldr	x0, [x21]
  6e0594:	3944cc08 	ldrb	w8, [x0, #307]
  6e0598:	361000a8 	tbz	w8, #2, 6e05ac <__start_il2cpp@@Base+0x24bb88>
  6e059c:	b940e008 	ldr	w8, [x0, #224]
  6e05a0:	35000068 	cbnz	w8, 6e05ac <__start_il2cpp@@Base+0x24bb88>
  6e05a4:	97f54892 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e05a8:	f94002a0 	ldr	x0, [x21]
  6e05ac:	f9405c08 	ldr	x8, [x0, #184]
  6e05b0:	12800009 	mov	w9, #0xffffffff            	// #-1
  6e05b4:	320003e1 	orr	w1, wzr, #0x1
  6e05b8:	320003e2 	orr	w2, wzr, #0x1
  6e05bc:	2a1f03e0 	mov	w0, wzr
  6e05c0:	b9005109 	str	w9, [x8, #80]
  6e05c4:	14000018 	b	6e0624 <__start_il2cpp@@Base+0x24bc00>
  6e05c8:	aa1603e0 	mov	x0, x22
  6e05cc:	aa1f03e1 	mov	x1, xzr
  6e05d0:	94045b35 	bl	7f72a4 <__start_il2cpp@@Base+0x362880>
  6e05d4:	b0005d55 	adrp	x21, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e05d8:	f941fab5 	ldr	x21, [x21, #1008]
  6e05dc:	d0003a28 	adrp	x8, e26000 <__stop_il2cpp@@Base+0x33130>
  6e05e0:	fd475500 	ldr	d0, [x8, #3752]
  6e05e4:	1e22c021 	fcvt	d1, s1
  6e05e8:	f94002a0 	ldr	x0, [x21]
  6e05ec:	1e602020 	fcmp	d1, d0
  6e05f0:	79426408 	ldrh	w8, [x0, #306]
  6e05f4:	5400030d 	b.le	6e0654 <__start_il2cpp@@Base+0x24bc30>
  6e05f8:	365000a8 	tbz	w8, #10, 6e060c <__start_il2cpp@@Base+0x24bbe8>
  6e05fc:	b940e008 	ldr	w8, [x0, #224]
  6e0600:	35000068 	cbnz	w8, 6e060c <__start_il2cpp@@Base+0x24bbe8>
  6e0604:	97f5487a 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0608:	f94002a0 	ldr	x0, [x21]
  6e060c:	f9405c08 	ldr	x8, [x0, #184]
  6e0610:	320003e9 	orr	w9, wzr, #0x1
  6e0614:	320003e2 	orr	w2, wzr, #0x1
  6e0618:	2a1f03e0 	mov	w0, wzr
  6e061c:	b9005109 	str	w9, [x8, #80]
  6e0620:	2a1f03e1 	mov	w1, wzr
  6e0624:	aa1f03e3 	mov	x3, xzr
  6e0628:	94045a90 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  6e062c:	2a0003f5 	mov	w21, w0
  6e0630:	aa1603e0 	mov	x0, x22
  6e0634:	aa1f03e1 	mov	x1, xzr
  6e0638:	94045b1b 	bl	7f72a4 <__start_il2cpp@@Base+0x362880>
  6e063c:	4ea11c28 	mov	v8.16b, v1.16b
  6e0640:	b50001f4 	cbnz	x20, 6e067c <__start_il2cpp@@Base+0x24bc58>
  6e0644:	1400026f 	b	6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0648:	320003e8 	orr	w8, wzr, #0x1
  6e064c:	39022268 	strb	w8, [x19, #136]
  6e0650:	17ffffb6 	b	6e0528 <__start_il2cpp@@Base+0x24bb04>
  6e0654:	365000a8 	tbz	w8, #10, 6e0668 <__start_il2cpp@@Base+0x24bc44>
  6e0658:	b940e008 	ldr	w8, [x0, #224]
  6e065c:	35000068 	cbnz	w8, 6e0668 <__start_il2cpp@@Base+0x24bc44>
  6e0660:	97f54863 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0664:	f94002a0 	ldr	x0, [x21]
  6e0668:	f9405c08 	ldr	x8, [x0, #184]
  6e066c:	2a1f03f5 	mov	w21, wzr
  6e0670:	1e2703e8 	fmov	s8, wzr
  6e0674:	b900511f 	str	wzr, [x8, #80]
  6e0678:	b4004c54 	cbz	x20, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e067c:	aa1403e0 	mov	x0, x20
  6e0680:	aa1f03e1 	mov	x1, xzr
  6e0684:	94045b08 	bl	7f72a4 <__start_il2cpp@@Base+0x362880>
  6e0688:	1e22c000 	fcvt	d0, s0
  6e068c:	1e692000 	fcmp	d0, d9
  6e0690:	540001c5 	b.pl	6e06c8 <__start_il2cpp@@Base+0x24bca4>  // b.nfrst
  6e0694:	b0005d56 	adrp	x22, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0698:	f941fad6 	ldr	x22, [x22, #1008]
  6e069c:	f94002c0 	ldr	x0, [x22]
  6e06a0:	3944cc08 	ldrb	w8, [x0, #307]
  6e06a4:	361000a8 	tbz	w8, #2, 6e06b8 <__start_il2cpp@@Base+0x24bc94>
  6e06a8:	b940e008 	ldr	w8, [x0, #224]
  6e06ac:	35000068 	cbnz	w8, 6e06b8 <__start_il2cpp@@Base+0x24bc94>
  6e06b0:	97f5484f 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e06b4:	f94002c0 	ldr	x0, [x22]
  6e06b8:	f9405c08 	ldr	x8, [x0, #184]
  6e06bc:	320003e9 	orr	w9, wzr, #0x1
  6e06c0:	321f03e1 	orr	w1, wzr, #0x2
  6e06c4:	14000015 	b	6e0718 <__start_il2cpp@@Base+0x24bcf4>
  6e06c8:	aa1403e0 	mov	x0, x20
  6e06cc:	aa1f03e1 	mov	x1, xzr
  6e06d0:	94045af5 	bl	7f72a4 <__start_il2cpp@@Base+0x362880>
  6e06d4:	b0005d56 	adrp	x22, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e06d8:	f941fad6 	ldr	x22, [x22, #1008]
  6e06dc:	d0003a28 	adrp	x8, e26000 <__stop_il2cpp@@Base+0x33130>
  6e06e0:	fd475501 	ldr	d1, [x8, #3752]
  6e06e4:	1e22c000 	fcvt	d0, s0
  6e06e8:	f94002c0 	ldr	x0, [x22]
  6e06ec:	1e612000 	fcmp	d0, d1
  6e06f0:	79426408 	ldrh	w8, [x0, #306]
  6e06f4:	5400028d 	b.le	6e0744 <__start_il2cpp@@Base+0x24bd20>
  6e06f8:	365000a8 	tbz	w8, #10, 6e070c <__start_il2cpp@@Base+0x24bce8>
  6e06fc:	b940e008 	ldr	w8, [x0, #224]
  6e0700:	35000068 	cbnz	w8, 6e070c <__start_il2cpp@@Base+0x24bce8>
  6e0704:	97f5483a 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0708:	f94002c0 	ldr	x0, [x22]
  6e070c:	f9405c08 	ldr	x8, [x0, #184]
  6e0710:	12800009 	mov	w9, #0xffffffff            	// #-1
  6e0714:	320007e1 	orr	w1, wzr, #0x3
  6e0718:	b9004d09 	str	w9, [x8, #76]
  6e071c:	320003e2 	orr	w2, wzr, #0x1
  6e0720:	2a1503e0 	mov	w0, w21
  6e0724:	aa1f03e3 	mov	x3, xzr
  6e0728:	94045a50 	bl	7f7068 <__start_il2cpp@@Base+0x362644>
  6e072c:	2a0003f5 	mov	w21, w0
  6e0730:	aa1403e0 	mov	x0, x20
  6e0734:	aa1f03e1 	mov	x1, xzr
  6e0738:	94045adb 	bl	7f72a4 <__start_il2cpp@@Base+0x362880>
  6e073c:	4ea01c09 	mov	v9.16b, v0.16b
  6e0740:	14000009 	b	6e0764 <__start_il2cpp@@Base+0x24bd40>
  6e0744:	365000a8 	tbz	w8, #10, 6e0758 <__start_il2cpp@@Base+0x24bd34>
  6e0748:	b940e008 	ldr	w8, [x0, #224]
  6e074c:	35000068 	cbnz	w8, 6e0758 <__start_il2cpp@@Base+0x24bd34>
  6e0750:	97f54827 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0754:	f94002c0 	ldr	x0, [x22]
  6e0758:	f9405c08 	ldr	x8, [x0, #184]
  6e075c:	1e2703e9 	fmov	s9, wzr
  6e0760:	b9004d1f 	str	wzr, [x8, #76]
  6e0764:	12001ea8 	and	w8, w21, #0xff
  6e0768:	51000508 	sub	w8, w8, #0x1
  6e076c:	7100391f 	cmp	w8, #0xe
  6e0770:	54003d68 	b.hi	6e0f1c <__start_il2cpp@@Base+0x24c4f8>  // b.pmore
  6e0774:	d0003a29 	adrp	x9, e26000 <__stop_il2cpp@@Base+0x33130>
  6e0778:	913bd129 	add	x9, x9, #0xef4
  6e077c:	b8a87928 	ldrsw	x8, [x9, x8, lsl #2]
  6e0780:	8b090108 	add	x8, x8, x9
  6e0784:	d61f0100 	br	x8
  6e0788:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e078c:	f9412d08 	ldr	x8, [x8, #600]
  6e0790:	f9400100 	ldr	x0, [x8]
  6e0794:	3944cc08 	ldrb	w8, [x0, #307]
  6e0798:	36100088 	tbz	w8, #2, 6e07a8 <__start_il2cpp@@Base+0x24bd84>
  6e079c:	b940e008 	ldr	w8, [x0, #224]
  6e07a0:	35000048 	cbnz	w8, 6e07a8 <__start_il2cpp@@Base+0x24bd84>
  6e07a4:	97f54812 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e07a8:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e07ac:	f941fa94 	ldr	x20, [x20, #1008]
  6e07b0:	1e20c128 	fabs	s8, s9
  6e07b4:	f9400280 	ldr	x0, [x20]
  6e07b8:	3944cc08 	ldrb	w8, [x0, #307]
  6e07bc:	361000a8 	tbz	w8, #2, 6e07d0 <__start_il2cpp@@Base+0x24bdac>
  6e07c0:	b940e008 	ldr	w8, [x0, #224]
  6e07c4:	35000068 	cbnz	w8, 6e07d0 <__start_il2cpp@@Base+0x24bdac>
  6e07c8:	97f54809 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e07cc:	f9400280 	ldr	x0, [x20]
  6e07d0:	f9405c08 	ldr	x8, [x0, #184]
  6e07d4:	2a1f03e1 	mov	w1, wzr
  6e07d8:	bd009508 	str	s8, [x8, #148]
  6e07dc:	f9405c08 	ldr	x8, [x0, #184]
  6e07e0:	aa1303e0 	mov	x0, x19
  6e07e4:	bd009908 	str	s8, [x8, #152]
  6e07e8:	97fffec0 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e07ec:	f9400e60 	ldr	x0, [x19, #24]
  6e07f0:	b4004080 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e07f4:	1e2703e0 	fmov	s0, wzr
  6e07f8:	aa1f03e1 	mov	x1, xzr
  6e07fc:	941b95dd 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0800:	f9401660 	ldr	x0, [x19, #40]
  6e0804:	b4003fe0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0808:	1e2703e0 	fmov	s0, wzr
  6e080c:	aa1f03e1 	mov	x1, xzr
  6e0810:	941b95d8 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0814:	f9401e60 	ldr	x0, [x19, #56]
  6e0818:	b4003f40 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e081c:	1e2703e0 	fmov	s0, wzr
  6e0820:	aa1f03e1 	mov	x1, xzr
  6e0824:	941b95d3 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0828:	f9402660 	ldr	x0, [x19, #72]
  6e082c:	b4003ea0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0830:	1e2703e0 	fmov	s0, wzr
  6e0834:	aa1f03e1 	mov	x1, xzr
  6e0838:	941b95ce 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e083c:	f9401260 	ldr	x0, [x19, #32]
  6e0840:	b4003e00 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0844:	bd407260 	ldr	s0, [x19, #112]
  6e0848:	1e231001 	fmov	s1, #6.000000000000000000e+00
  6e084c:	140000c8 	b	6e0b6c <__start_il2cpp@@Base+0x24c148>
  6e0850:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e0854:	f9412d08 	ldr	x8, [x8, #600]
  6e0858:	f9400100 	ldr	x0, [x8]
  6e085c:	3944cc08 	ldrb	w8, [x0, #307]
  6e0860:	36100088 	tbz	w8, #2, 6e0870 <__start_il2cpp@@Base+0x24be4c>
  6e0864:	b940e008 	ldr	w8, [x0, #224]
  6e0868:	35000048 	cbnz	w8, 6e0870 <__start_il2cpp@@Base+0x24be4c>
  6e086c:	97f547e0 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0870:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0874:	f941fa94 	ldr	x20, [x20, #1008]
  6e0878:	1e20c108 	fabs	s8, s8
  6e087c:	f9400280 	ldr	x0, [x20]
  6e0880:	3944cc08 	ldrb	w8, [x0, #307]
  6e0884:	361000a8 	tbz	w8, #2, 6e0898 <__start_il2cpp@@Base+0x24be74>
  6e0888:	b940e008 	ldr	w8, [x0, #224]
  6e088c:	35000068 	cbnz	w8, 6e0898 <__start_il2cpp@@Base+0x24be74>
  6e0890:	97f547d7 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0894:	f9400280 	ldr	x0, [x20]
  6e0898:	f9405c08 	ldr	x8, [x0, #184]
  6e089c:	2a1f03e1 	mov	w1, wzr
  6e08a0:	bd009508 	str	s8, [x8, #148]
  6e08a4:	f9405c08 	ldr	x8, [x0, #184]
  6e08a8:	aa1303e0 	mov	x0, x19
  6e08ac:	bd009908 	str	s8, [x8, #152]
  6e08b0:	97fffe8e 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e08b4:	f9400e60 	ldr	x0, [x19, #24]
  6e08b8:	b4003a40 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e08bc:	bd407260 	ldr	s0, [x19, #112]
  6e08c0:	1e2f1001 	fmov	s1, #1.500000000000000000e+00
  6e08c4:	1400005f 	b	6e0a40 <__start_il2cpp@@Base+0x24c01c>
  6e08c8:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e08cc:	f9412d08 	ldr	x8, [x8, #600]
  6e08d0:	f9400100 	ldr	x0, [x8]
  6e08d4:	3944cc08 	ldrb	w8, [x0, #307]
  6e08d8:	36100088 	tbz	w8, #2, 6e08e8 <__start_il2cpp@@Base+0x24bec4>
  6e08dc:	b940e008 	ldr	w8, [x0, #224]
  6e08e0:	35000048 	cbnz	w8, 6e08e8 <__start_il2cpp@@Base+0x24bec4>
  6e08e4:	97f547c2 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e08e8:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e08ec:	f941fa94 	ldr	x20, [x20, #1008]
  6e08f0:	1e20c128 	fabs	s8, s9
  6e08f4:	f9400280 	ldr	x0, [x20]
  6e08f8:	3944cc08 	ldrb	w8, [x0, #307]
  6e08fc:	361000a8 	tbz	w8, #2, 6e0910 <__start_il2cpp@@Base+0x24beec>
  6e0900:	b940e008 	ldr	w8, [x0, #224]
  6e0904:	35000068 	cbnz	w8, 6e0910 <__start_il2cpp@@Base+0x24beec>
  6e0908:	97f547b9 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e090c:	f9400280 	ldr	x0, [x20]
  6e0910:	f9405c08 	ldr	x8, [x0, #184]
  6e0914:	bd009508 	str	s8, [x8, #148]
  6e0918:	f9405c08 	ldr	x8, [x0, #184]
  6e091c:	bd009908 	str	s8, [x8, #152]
  6e0920:	f9403260 	ldr	x0, [x19, #96]
  6e0924:	b40036e0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0928:	aa1f03e1 	mov	x1, xzr
  6e092c:	9407f727 	bl	8de5c8 <__start_il2cpp@@Base+0x449ba4>
  6e0930:	aa0003f4 	mov	x20, x0
  6e0934:	aa1f03e0 	mov	x0, xzr
  6e0938:	940207da 	bl	7628a0 <__start_il2cpp@@Base+0x2cde7c>
  6e093c:	b4003634 	cbz	x20, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0940:	1e214103 	fneg	s3, s8
  6e0944:	1e230800 	fmul	s0, s0, s3
  6e0948:	1e230821 	fmul	s1, s1, s3
  6e094c:	1e230842 	fmul	s2, s2, s3
  6e0950:	140000bd 	b	6e0c44 <__start_il2cpp@@Base+0x24c220>
  6e0954:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e0958:	f9412d08 	ldr	x8, [x8, #600]
  6e095c:	f9400100 	ldr	x0, [x8]
  6e0960:	3944cc08 	ldrb	w8, [x0, #307]
  6e0964:	36100088 	tbz	w8, #2, 6e0974 <__start_il2cpp@@Base+0x24bf50>
  6e0968:	b940e008 	ldr	w8, [x0, #224]
  6e096c:	35000048 	cbnz	w8, 6e0974 <__start_il2cpp@@Base+0x24bf50>
  6e0970:	97f5479f 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0974:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0978:	f941fa94 	ldr	x20, [x20, #1008]
  6e097c:	1e20c128 	fabs	s8, s9
  6e0980:	f9400280 	ldr	x0, [x20]
  6e0984:	3944cc08 	ldrb	w8, [x0, #307]
  6e0988:	361000a8 	tbz	w8, #2, 6e099c <__start_il2cpp@@Base+0x24bf78>
  6e098c:	b940e008 	ldr	w8, [x0, #224]
  6e0990:	35000068 	cbnz	w8, 6e099c <__start_il2cpp@@Base+0x24bf78>
  6e0994:	97f54796 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0998:	f9400280 	ldr	x0, [x20]
  6e099c:	f9405c08 	ldr	x8, [x0, #184]
  6e09a0:	2a1f03e1 	mov	w1, wzr
  6e09a4:	bd009508 	str	s8, [x8, #148]
  6e09a8:	f9405c08 	ldr	x8, [x0, #184]
  6e09ac:	aa1303e0 	mov	x0, x19
  6e09b0:	bd009908 	str	s8, [x8, #152]
  6e09b4:	97fffe4d 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e09b8:	f9400e60 	ldr	x0, [x19, #24]
  6e09bc:	b4003220 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e09c0:	bd407260 	ldr	s0, [x19, #112]
  6e09c4:	1e231001 	fmov	s1, #6.000000000000000000e+00
  6e09c8:	140000c0 	b	6e0cc8 <__start_il2cpp@@Base+0x24c2a4>
  6e09cc:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e09d0:	f9412d08 	ldr	x8, [x8, #600]
  6e09d4:	f9400100 	ldr	x0, [x8]
  6e09d8:	3944cc08 	ldrb	w8, [x0, #307]
  6e09dc:	36100088 	tbz	w8, #2, 6e09ec <__start_il2cpp@@Base+0x24bfc8>
  6e09e0:	b940e008 	ldr	w8, [x0, #224]
  6e09e4:	35000048 	cbnz	w8, 6e09ec <__start_il2cpp@@Base+0x24bfc8>
  6e09e8:	97f54781 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e09ec:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e09f0:	f941fa94 	ldr	x20, [x20, #1008]
  6e09f4:	1e20c108 	fabs	s8, s8
  6e09f8:	f9400280 	ldr	x0, [x20]
  6e09fc:	3944cc08 	ldrb	w8, [x0, #307]
  6e0a00:	361000a8 	tbz	w8, #2, 6e0a14 <__start_il2cpp@@Base+0x24bff0>
  6e0a04:	b940e008 	ldr	w8, [x0, #224]
  6e0a08:	35000068 	cbnz	w8, 6e0a14 <__start_il2cpp@@Base+0x24bff0>
  6e0a0c:	97f54778 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0a10:	f9400280 	ldr	x0, [x20]
  6e0a14:	f9405c08 	ldr	x8, [x0, #184]
  6e0a18:	2a1f03e1 	mov	w1, wzr
  6e0a1c:	bd009508 	str	s8, [x8, #148]
  6e0a20:	f9405c08 	ldr	x8, [x0, #184]
  6e0a24:	aa1303e0 	mov	x0, x19
  6e0a28:	bd009908 	str	s8, [x8, #152]
  6e0a2c:	97fffe2f 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e0a30:	f9400e60 	ldr	x0, [x19, #24]
  6e0a34:	b4002e60 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0a38:	bd407260 	ldr	s0, [x19, #112]
  6e0a3c:	1e3f1001 	fmov	s1, #-1.500000000000000000e+00
  6e0a40:	1e210908 	fmul	s8, s8, s1
  6e0a44:	1e200900 	fmul	s0, s8, s0
  6e0a48:	aa1f03e1 	mov	x1, xzr
  6e0a4c:	941b9549 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0a50:	f9401660 	ldr	x0, [x19, #40]
  6e0a54:	b4002d60 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0a58:	bd407260 	ldr	s0, [x19, #112]
  6e0a5c:	aa1f03e1 	mov	x1, xzr
  6e0a60:	1e200900 	fmul	s0, s8, s0
  6e0a64:	941b9543 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0a68:	f9401e60 	ldr	x0, [x19, #56]
  6e0a6c:	b4002ca0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0a70:	bd407260 	ldr	s0, [x19, #112]
  6e0a74:	aa1f03e1 	mov	x1, xzr
  6e0a78:	1e200900 	fmul	s0, s8, s0
  6e0a7c:	941b953d 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0a80:	f9402660 	ldr	x0, [x19, #72]
  6e0a84:	b4002be0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0a88:	bd407260 	ldr	s0, [x19, #112]
  6e0a8c:	aa1f03e1 	mov	x1, xzr
  6e0a90:	1e200900 	fmul	s0, s8, s0
  6e0a94:	941b9537 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0a98:	f9401260 	ldr	x0, [x19, #32]
  6e0a9c:	b4002b20 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0aa0:	bd407260 	ldr	s0, [x19, #112]
  6e0aa4:	14000033 	b	6e0b70 <__start_il2cpp@@Base+0x24c14c>
  6e0aa8:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e0aac:	f9412d08 	ldr	x8, [x8, #600]
  6e0ab0:	f9400100 	ldr	x0, [x8]
  6e0ab4:	3944cc08 	ldrb	w8, [x0, #307]
  6e0ab8:	36100088 	tbz	w8, #2, 6e0ac8 <__start_il2cpp@@Base+0x24c0a4>
  6e0abc:	b940e008 	ldr	w8, [x0, #224]
  6e0ac0:	35000048 	cbnz	w8, 6e0ac8 <__start_il2cpp@@Base+0x24c0a4>
  6e0ac4:	97f5474a 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0ac8:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0acc:	f941fa94 	ldr	x20, [x20, #1008]
  6e0ad0:	1e20c128 	fabs	s8, s9
  6e0ad4:	f9400280 	ldr	x0, [x20]
  6e0ad8:	3944cc08 	ldrb	w8, [x0, #307]
  6e0adc:	361000a8 	tbz	w8, #2, 6e0af0 <__start_il2cpp@@Base+0x24c0cc>
  6e0ae0:	b940e008 	ldr	w8, [x0, #224]
  6e0ae4:	35000068 	cbnz	w8, 6e0af0 <__start_il2cpp@@Base+0x24c0cc>
  6e0ae8:	97f54741 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0aec:	f9400280 	ldr	x0, [x20]
  6e0af0:	f9405c08 	ldr	x8, [x0, #184]
  6e0af4:	2a1f03e1 	mov	w1, wzr
  6e0af8:	bd009508 	str	s8, [x8, #148]
  6e0afc:	f9405c08 	ldr	x8, [x0, #184]
  6e0b00:	aa1303e0 	mov	x0, x19
  6e0b04:	bd009908 	str	s8, [x8, #152]
  6e0b08:	97fffdf8 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e0b0c:	f9400e60 	ldr	x0, [x19, #24]
  6e0b10:	b4002780 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0b14:	1e2703e0 	fmov	s0, wzr
  6e0b18:	aa1f03e1 	mov	x1, xzr
  6e0b1c:	941b9515 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0b20:	f9401660 	ldr	x0, [x19, #40]
  6e0b24:	b40026e0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0b28:	1e2703e0 	fmov	s0, wzr
  6e0b2c:	aa1f03e1 	mov	x1, xzr
  6e0b30:	941b9510 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0b34:	f9401e60 	ldr	x0, [x19, #56]
  6e0b38:	b4002640 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0b3c:	1e2703e0 	fmov	s0, wzr
  6e0b40:	aa1f03e1 	mov	x1, xzr
  6e0b44:	941b950b 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0b48:	f9402660 	ldr	x0, [x19, #72]
  6e0b4c:	b40025a0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0b50:	1e2703e0 	fmov	s0, wzr
  6e0b54:	aa1f03e1 	mov	x1, xzr
  6e0b58:	941b9506 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0b5c:	f9401260 	ldr	x0, [x19, #32]
  6e0b60:	b4002500 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0b64:	bd407260 	ldr	s0, [x19, #112]
  6e0b68:	1e331001 	fmov	s1, #-6.000000000000000000e+00
  6e0b6c:	1e210908 	fmul	s8, s8, s1
  6e0b70:	1e200900 	fmul	s0, s8, s0
  6e0b74:	aa1f03e1 	mov	x1, xzr
  6e0b78:	941b94fe 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0b7c:	f9401a60 	ldr	x0, [x19, #48]
  6e0b80:	b4002400 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0b84:	bd407260 	ldr	s0, [x19, #112]
  6e0b88:	aa1f03e1 	mov	x1, xzr
  6e0b8c:	1e200900 	fmul	s0, s8, s0
  6e0b90:	941b94f8 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0b94:	f9402260 	ldr	x0, [x19, #64]
  6e0b98:	b4002340 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0b9c:	bd407260 	ldr	s0, [x19, #112]
  6e0ba0:	aa1f03e1 	mov	x1, xzr
  6e0ba4:	1e200900 	fmul	s0, s8, s0
  6e0ba8:	941b94f2 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0bac:	f9402a60 	ldr	x0, [x19, #80]
  6e0bb0:	b4002280 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0bb4:	bd407260 	ldr	s0, [x19, #112]
  6e0bb8:	1e200900 	fmul	s0, s8, s0
  6e0bbc:	1400006b 	b	6e0d68 <__start_il2cpp@@Base+0x24c344>
  6e0bc0:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e0bc4:	f9412d08 	ldr	x8, [x8, #600]
  6e0bc8:	f9400100 	ldr	x0, [x8]
  6e0bcc:	3944cc08 	ldrb	w8, [x0, #307]
  6e0bd0:	36100088 	tbz	w8, #2, 6e0be0 <__start_il2cpp@@Base+0x24c1bc>
  6e0bd4:	b940e008 	ldr	w8, [x0, #224]
  6e0bd8:	35000048 	cbnz	w8, 6e0be0 <__start_il2cpp@@Base+0x24c1bc>
  6e0bdc:	97f54704 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0be0:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0be4:	f941fa94 	ldr	x20, [x20, #1008]
  6e0be8:	1e20c128 	fabs	s8, s9
  6e0bec:	f9400280 	ldr	x0, [x20]
  6e0bf0:	3944cc08 	ldrb	w8, [x0, #307]
  6e0bf4:	361000a8 	tbz	w8, #2, 6e0c08 <__start_il2cpp@@Base+0x24c1e4>
  6e0bf8:	b940e008 	ldr	w8, [x0, #224]
  6e0bfc:	35000068 	cbnz	w8, 6e0c08 <__start_il2cpp@@Base+0x24c1e4>
  6e0c00:	97f546fb 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0c04:	f9400280 	ldr	x0, [x20]
  6e0c08:	f9405c08 	ldr	x8, [x0, #184]
  6e0c0c:	bd009508 	str	s8, [x8, #148]
  6e0c10:	f9405c08 	ldr	x8, [x0, #184]
  6e0c14:	bd009908 	str	s8, [x8, #152]
  6e0c18:	f9403260 	ldr	x0, [x19, #96]
  6e0c1c:	b4001f20 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0c20:	aa1f03e1 	mov	x1, xzr
  6e0c24:	9407f669 	bl	8de5c8 <__start_il2cpp@@Base+0x449ba4>
  6e0c28:	aa0003f4 	mov	x20, x0
  6e0c2c:	aa1f03e0 	mov	x0, xzr
  6e0c30:	9402071c 	bl	7628a0 <__start_il2cpp@@Base+0x2cde7c>
  6e0c34:	b4001e74 	cbz	x20, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0c38:	1e200900 	fmul	s0, s8, s0
  6e0c3c:	1e210901 	fmul	s1, s8, s1
  6e0c40:	1e220902 	fmul	s2, s8, s2
  6e0c44:	aa1403e0 	mov	x0, x20
  6e0c48:	aa1f03e1 	mov	x1, xzr
  6e0c4c:	94024615 	bl	7724a0 <__start_il2cpp@@Base+0x2dda7c>
  6e0c50:	14000048 	b	6e0d70 <__start_il2cpp@@Base+0x24c34c>
  6e0c54:	90005c88 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  6e0c58:	f9412d08 	ldr	x8, [x8, #600]
  6e0c5c:	f9400100 	ldr	x0, [x8]
  6e0c60:	3944cc08 	ldrb	w8, [x0, #307]
  6e0c64:	36100088 	tbz	w8, #2, 6e0c74 <__start_il2cpp@@Base+0x24c250>
  6e0c68:	b940e008 	ldr	w8, [x0, #224]
  6e0c6c:	35000048 	cbnz	w8, 6e0c74 <__start_il2cpp@@Base+0x24c250>
  6e0c70:	97f546df 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0c74:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0c78:	f941fa94 	ldr	x20, [x20, #1008]
  6e0c7c:	1e20c128 	fabs	s8, s9
  6e0c80:	f9400280 	ldr	x0, [x20]
  6e0c84:	3944cc08 	ldrb	w8, [x0, #307]
  6e0c88:	361000a8 	tbz	w8, #2, 6e0c9c <__start_il2cpp@@Base+0x24c278>
  6e0c8c:	b940e008 	ldr	w8, [x0, #224]
  6e0c90:	35000068 	cbnz	w8, 6e0c9c <__start_il2cpp@@Base+0x24c278>
  6e0c94:	97f546d6 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0c98:	f9400280 	ldr	x0, [x20]
  6e0c9c:	f9405c08 	ldr	x8, [x0, #184]
  6e0ca0:	2a1f03e1 	mov	w1, wzr
  6e0ca4:	bd009508 	str	s8, [x8, #148]
  6e0ca8:	f9405c08 	ldr	x8, [x0, #184]
  6e0cac:	aa1303e0 	mov	x0, x19
  6e0cb0:	bd009908 	str	s8, [x8, #152]
  6e0cb4:	97fffd8d 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e0cb8:	f9400e60 	ldr	x0, [x19, #24]
  6e0cbc:	b4001a20 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0cc0:	bd407260 	ldr	s0, [x19, #112]
  6e0cc4:	1e331001 	fmov	s1, #-6.000000000000000000e+00
  6e0cc8:	1e210908 	fmul	s8, s8, s1
  6e0ccc:	1e200900 	fmul	s0, s8, s0
  6e0cd0:	aa1f03e1 	mov	x1, xzr
  6e0cd4:	941b94a7 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0cd8:	f9401660 	ldr	x0, [x19, #40]
  6e0cdc:	b4001920 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0ce0:	bd407260 	ldr	s0, [x19, #112]
  6e0ce4:	aa1f03e1 	mov	x1, xzr
  6e0ce8:	1e200900 	fmul	s0, s8, s0
  6e0cec:	941b94a1 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0cf0:	f9401e60 	ldr	x0, [x19, #56]
  6e0cf4:	b4001860 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0cf8:	bd407260 	ldr	s0, [x19, #112]
  6e0cfc:	aa1f03e1 	mov	x1, xzr
  6e0d00:	1e200900 	fmul	s0, s8, s0
  6e0d04:	941b949b 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0d08:	f9402660 	ldr	x0, [x19, #72]
  6e0d0c:	b40017a0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0d10:	bd407260 	ldr	s0, [x19, #112]
  6e0d14:	aa1f03e1 	mov	x1, xzr
  6e0d18:	1e200900 	fmul	s0, s8, s0
  6e0d1c:	941b9495 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0d20:	f9401260 	ldr	x0, [x19, #32]
  6e0d24:	b40016e0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0d28:	1e2703e0 	fmov	s0, wzr
  6e0d2c:	aa1f03e1 	mov	x1, xzr
  6e0d30:	941b9490 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0d34:	f9401a60 	ldr	x0, [x19, #48]
  6e0d38:	b4001640 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0d3c:	1e2703e0 	fmov	s0, wzr
  6e0d40:	aa1f03e1 	mov	x1, xzr
  6e0d44:	941b948b 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0d48:	f9402260 	ldr	x0, [x19, #64]
  6e0d4c:	b40015a0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0d50:	1e2703e0 	fmov	s0, wzr
  6e0d54:	aa1f03e1 	mov	x1, xzr
  6e0d58:	941b9486 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0d5c:	f9402a60 	ldr	x0, [x19, #80]
  6e0d60:	b4001500 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0d64:	1e2703e0 	fmov	s0, wzr
  6e0d68:	aa1f03e1 	mov	x1, xzr
  6e0d6c:	941b9481 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0d70:	b940aa68 	ldr	w8, [x19, #168]
  6e0d74:	7100091f 	cmp	w8, #0x2
  6e0d78:	54000460 	b.eq	6e0e04 <__start_il2cpp@@Base+0x24c3e0>  // b.none
  6e0d7c:	7100051f 	cmp	w8, #0x1
  6e0d80:	540007a1 	b.ne	6e0e74 <__start_il2cpp@@Base+0x24c450>  // b.any
  6e0d84:	b940ae68 	ldr	w8, [x19, #172]
  6e0d88:	35000768 	cbnz	w8, 6e0e74 <__start_il2cpp@@Base+0x24c450>
  6e0d8c:	0f000440 	movi	v0.2s, #0x2
  6e0d90:	aa1303e0 	mov	x0, x19
  6e0d94:	2a1f03e1 	mov	w1, wzr
  6e0d98:	fd005660 	str	d0, [x19, #168]
  6e0d9c:	97fffd53 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e0da0:	f9400e60 	ldr	x0, [x19, #24]
  6e0da4:	b40012e0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0da8:	bd407260 	ldr	s0, [x19, #112]
  6e0dac:	aa1f03e1 	mov	x1, xzr
  6e0db0:	1e202800 	fadd	s0, s0, s0
  6e0db4:	941b946f 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0db8:	f9401260 	ldr	x0, [x19, #32]
  6e0dbc:	b4001220 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0dc0:	bd407260 	ldr	s0, [x19, #112]
  6e0dc4:	aa1f03e1 	mov	x1, xzr
  6e0dc8:	1e202800 	fadd	s0, s0, s0
  6e0dcc:	941b9469 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0dd0:	f9402660 	ldr	x0, [x19, #72]
  6e0dd4:	b4001160 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0dd8:	bd407260 	ldr	s0, [x19, #112]
  6e0ddc:	aa1f03e1 	mov	x1, xzr
  6e0de0:	1e202800 	fadd	s0, s0, s0
  6e0de4:	941b9463 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0de8:	f9402a60 	ldr	x0, [x19, #80]
  6e0dec:	b40010a0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0df0:	bd407260 	ldr	s0, [x19, #112]
  6e0df4:	aa1f03e1 	mov	x1, xzr
  6e0df8:	1e202800 	fadd	s0, s0, s0
  6e0dfc:	941b945d 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0e00:	1400001d 	b	6e0e74 <__start_il2cpp@@Base+0x24c450>
  6e0e04:	b940ae68 	ldr	w8, [x19, #172]
  6e0e08:	35000368 	cbnz	w8, 6e0e74 <__start_il2cpp@@Base+0x24c450>
  6e0e0c:	f9400e60 	ldr	x0, [x19, #24]
  6e0e10:	b900aa7f 	str	wzr, [x19, #168]
  6e0e14:	b4000f60 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0e18:	1e2703e0 	fmov	s0, wzr
  6e0e1c:	aa1f03e1 	mov	x1, xzr
  6e0e20:	941b9454 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0e24:	f9401260 	ldr	x0, [x19, #32]
  6e0e28:	b4000ec0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0e2c:	1e2703e0 	fmov	s0, wzr
  6e0e30:	aa1f03e1 	mov	x1, xzr
  6e0e34:	941b944f 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0e38:	f9402660 	ldr	x0, [x19, #72]
  6e0e3c:	b4000e20 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0e40:	1e2703e0 	fmov	s0, wzr
  6e0e44:	aa1f03e1 	mov	x1, xzr
  6e0e48:	941b944a 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0e4c:	f9402a60 	ldr	x0, [x19, #80]
  6e0e50:	b4000d80 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0e54:	1e2703e0 	fmov	s0, wzr
  6e0e58:	aa1f03e1 	mov	x1, xzr
  6e0e5c:	941b9445 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0e60:	320003e1 	orr	w1, wzr, #0x1
  6e0e64:	aa1303e0 	mov	x0, x19
  6e0e68:	97fffd20 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e0e6c:	321e03e8 	orr	w8, wzr, #0x4
  6e0e70:	b900b268 	str	w8, [x19, #176]
  6e0e74:	94000064 	bl	6e1004 <__start_il2cpp@@Base+0x24c5e0>
  6e0e78:	b0005cd5 	adrp	x21, 1279000 <_ZTISt10bad_typeid@@Base+0x16650>
  6e0e7c:	f947beb5 	ldr	x21, [x21, #3960]
  6e0e80:	aa0003f4 	mov	x20, x0
  6e0e84:	f94002a8 	ldr	x8, [x21]
  6e0e88:	3944cd09 	ldrb	w9, [x8, #307]
  6e0e8c:	361000c9 	tbz	w9, #2, 6e0ea4 <__start_il2cpp@@Base+0x24c480>
  6e0e90:	b940e109 	ldr	w9, [x8, #224]
  6e0e94:	35000089 	cbnz	w9, 6e0ea4 <__start_il2cpp@@Base+0x24c480>
  6e0e98:	aa0803e0 	mov	x0, x8
  6e0e9c:	97f54654 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0ea0:	f94002a8 	ldr	x8, [x21]
  6e0ea4:	f9405d08 	ldr	x8, [x8, #184]
  6e0ea8:	f9400108 	ldr	x8, [x8]
  6e0eac:	cb080288 	sub	x8, x20, x8
  6e0eb0:	f101911f 	cmp	x8, #0x64
  6e0eb4:	540002ab 	b.lt	6e0f08 <__start_il2cpp@@Base+0x24c4e4>  // b.tstop
  6e0eb8:	94000053 	bl	6e1004 <__start_il2cpp@@Base+0x24c5e0>
  6e0ebc:	f94002a8 	ldr	x8, [x21]
  6e0ec0:	aa0003f4 	mov	x20, x0
  6e0ec4:	3944cd09 	ldrb	w9, [x8, #307]
  6e0ec8:	361000c9 	tbz	w9, #2, 6e0ee0 <__start_il2cpp@@Base+0x24c4bc>
  6e0ecc:	b940e109 	ldr	w9, [x8, #224]
  6e0ed0:	35000089 	cbnz	w9, 6e0ee0 <__start_il2cpp@@Base+0x24c4bc>
  6e0ed4:	aa0803e0 	mov	x0, x8
  6e0ed8:	97f54645 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0edc:	f94002a8 	ldr	x8, [x21]
  6e0ee0:	f9405d08 	ldr	x8, [x8, #184]
  6e0ee4:	f9000114 	str	x20, [x8]
  6e0ee8:	b940b268 	ldr	w8, [x19, #176]
  6e0eec:	71000508 	subs	w8, w8, #0x1
  6e0ef0:	5400004b 	b.lt	6e0ef8 <__start_il2cpp@@Base+0x24c4d4>  // b.tstop
  6e0ef4:	b900b268 	str	w8, [x19, #176]
  6e0ef8:	b940ae68 	ldr	w8, [x19, #172]
  6e0efc:	71000508 	subs	w8, w8, #0x1
  6e0f00:	5400004b 	b.lt	6e0f08 <__start_il2cpp@@Base+0x24c4e4>  // b.tstop
  6e0f04:	b900ae68 	str	w8, [x19, #172]
  6e0f08:	a9437bfd 	ldp	x29, x30, [sp, #48]
  6e0f0c:	a9424ff4 	ldp	x20, x19, [sp, #32]
  6e0f10:	a94157f6 	ldp	x22, x21, [sp, #16]
  6e0f14:	6cc423e9 	ldp	d9, d8, [sp], #64
  6e0f18:	d65f03c0 	ret
  6e0f1c:	b0005d54 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  6e0f20:	f941fa94 	ldr	x20, [x20, #1008]
  6e0f24:	f9400280 	ldr	x0, [x20]
  6e0f28:	3944cc08 	ldrb	w8, [x0, #307]
  6e0f2c:	361000a8 	tbz	w8, #2, 6e0f40 <__start_il2cpp@@Base+0x24c51c>
  6e0f30:	b940e008 	ldr	w8, [x0, #224]
  6e0f34:	35000068 	cbnz	w8, 6e0f40 <__start_il2cpp@@Base+0x24c51c>
  6e0f38:	97f5462d 	bl	4327ec <WriteZStream@@Base+0xa30c>
  6e0f3c:	f9400280 	ldr	x0, [x20]
  6e0f40:	f9405c08 	ldr	x8, [x0, #184]
  6e0f44:	b900951f 	str	wzr, [x8, #148]
  6e0f48:	f9405c08 	ldr	x8, [x0, #184]
  6e0f4c:	b900991f 	str	wzr, [x8, #152]
  6e0f50:	f9400e60 	ldr	x0, [x19, #24]
  6e0f54:	b4000560 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0f58:	1e2703e0 	fmov	s0, wzr
  6e0f5c:	aa1f03e1 	mov	x1, xzr
  6e0f60:	941b9404 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0f64:	f9401660 	ldr	x0, [x19, #40]
  6e0f68:	b40004c0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0f6c:	1e2703e0 	fmov	s0, wzr
  6e0f70:	aa1f03e1 	mov	x1, xzr
  6e0f74:	941b93ff 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0f78:	f9401e60 	ldr	x0, [x19, #56]
  6e0f7c:	b4000420 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0f80:	1e2703e0 	fmov	s0, wzr
  6e0f84:	aa1f03e1 	mov	x1, xzr
  6e0f88:	941b93fa 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0f8c:	f9401260 	ldr	x0, [x19, #32]
  6e0f90:	b4000380 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0f94:	1e2703e0 	fmov	s0, wzr
  6e0f98:	aa1f03e1 	mov	x1, xzr
  6e0f9c:	941b93f5 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0fa0:	f9401a60 	ldr	x0, [x19, #48]
  6e0fa4:	b40002e0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0fa8:	1e2703e0 	fmov	s0, wzr
  6e0fac:	aa1f03e1 	mov	x1, xzr
  6e0fb0:	941b93f0 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0fb4:	f9402260 	ldr	x0, [x19, #64]
  6e0fb8:	b4000240 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0fbc:	1e2703e0 	fmov	s0, wzr
  6e0fc0:	aa1f03e1 	mov	x1, xzr
  6e0fc4:	941b93eb 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0fc8:	f9402660 	ldr	x0, [x19, #72]
  6e0fcc:	b40001a0 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0fd0:	1e2703e0 	fmov	s0, wzr
  6e0fd4:	aa1f03e1 	mov	x1, xzr
  6e0fd8:	941b93e6 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0fdc:	f9402a60 	ldr	x0, [x19, #80]
  6e0fe0:	b4000100 	cbz	x0, 6e1000 <__start_il2cpp@@Base+0x24c5dc>
  6e0fe4:	1e2703e0 	fmov	s0, wzr
  6e0fe8:	aa1f03e1 	mov	x1, xzr
  6e0fec:	941b93e1 	bl	dc5f70 <__start_il2cpp@@Base+0x93154c>
  6e0ff0:	320003e1 	orr	w1, wzr, #0x1
  6e0ff4:	aa1303e0 	mov	x0, x19
  6e0ff8:	97fffcbc 	bl	6e02e8 <__start_il2cpp@@Base+0x24b8c4>
  6e0ffc:	17ffff5d 	b	6e0d70 <__start_il2cpp@@Base+0x24c34c>
  6e1000:	97f54604 	bl	432810 <WriteZStream@@Base+0xa330>
