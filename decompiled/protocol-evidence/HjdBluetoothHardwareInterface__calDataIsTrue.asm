; HjdBluetoothHardwareInterface$$calDataIsTrue
; bool HjdBluetoothHardwareInterface__calDataIsTrue (System_Byte_array* codes, uint8_t machine_type, uint8_t revice_duima, uint8_t machine_a, uint8_t machine_b, uint8_t machine_c, System_Byte_array* resultdata, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000dc485c <__start_il2cpp@@Base+0x92fe38>:
  dc485c:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
  dc4860:	910003fd 	mov	x29, sp
  dc4864:	b40006c0 	cbz	x0, dc493c <__start_il2cpp@@Base+0x92ff18>
  dc4868:	f9400c08 	ldr	x8, [x0, #24]
  dc486c:	b40005c8 	cbz	x8, dc4924 <__start_il2cpp@@Base+0x92ff00>
  dc4870:	34000608 	cbz	w8, dc4930 <__start_il2cpp@@Base+0x92ff0c>
  dc4874:	39408009 	ldrb	w9, [x0, #32]
  dc4878:	7100593f 	cmp	w9, #0x16
  dc487c:	54000541 	b.ne	dc4924 <__start_il2cpp@@Base+0x92ff00>  // b.any
  dc4880:	7100111f 	cmp	w8, #0x4
  dc4884:	54000569 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc4888:	39409009 	ldrb	w9, [x0, #36]
  dc488c:	6b21013f 	cmp	w9, w1, uxtb
  dc4890:	540004a1 	b.ne	dc4924 <__start_il2cpp@@Base+0x92ff00>  // b.any
  dc4894:	7100151f 	cmp	w8, #0x5
  dc4898:	540004c9 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc489c:	39409409 	ldrb	w9, [x0, #37]
  dc48a0:	6b22013f 	cmp	w9, w2, uxtb
  dc48a4:	54000401 	b.ne	dc4924 <__start_il2cpp@@Base+0x92ff00>  // b.any
  dc48a8:	7100251f 	cmp	w8, #0x9
  dc48ac:	54000429 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc48b0:	3940a409 	ldrb	w9, [x0, #41]
  dc48b4:	6b23013f 	cmp	w9, w3, uxtb
  dc48b8:	54000361 	b.ne	dc4924 <__start_il2cpp@@Base+0x92ff00>  // b.any
  dc48bc:	7100291f 	cmp	w8, #0xa
  dc48c0:	54000389 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc48c4:	3940a809 	ldrb	w9, [x0, #42]
  dc48c8:	6b24013f 	cmp	w9, w4, uxtb
  dc48cc:	540002c1 	b.ne	dc4924 <__start_il2cpp@@Base+0x92ff00>  // b.any
  dc48d0:	71002d1f 	cmp	w8, #0xb
  dc48d4:	540002e9 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc48d8:	3940ac09 	ldrb	w9, [x0, #43]
  dc48dc:	6b25013f 	cmp	w9, w5, uxtb
  dc48e0:	54000221 	b.ne	dc4924 <__start_il2cpp@@Base+0x92ff00>  // b.any
  dc48e4:	7100311f 	cmp	w8, #0xc
  dc48e8:	54000249 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc48ec:	b4000286 	cbz	x6, dc493c <__start_il2cpp@@Base+0x92ff18>
  dc48f0:	b94018c8 	ldr	w8, [x6, #24]
  dc48f4:	340001e8 	cbz	w8, dc4930 <__start_il2cpp@@Base+0x92ff0c>
  dc48f8:	3940b009 	ldrb	w9, [x0, #44]
  dc48fc:	390080c9 	strb	w9, [x6, #32]
  dc4900:	b9401809 	ldr	w9, [x0, #24]
  dc4904:	7100353f 	cmp	w9, #0xd
  dc4908:	54000149 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc490c:	7100051f 	cmp	w8, #0x1
  dc4910:	54000109 	b.ls	dc4930 <__start_il2cpp@@Base+0x92ff0c>  // b.plast
  dc4914:	3940b408 	ldrb	w8, [x0, #45]
  dc4918:	320003e0 	orr	w0, wzr, #0x1
  dc491c:	390084c8 	strb	w8, [x6, #33]
  dc4920:	14000002 	b	dc4928 <__start_il2cpp@@Base+0x92ff04>
  dc4924:	2a1f03e0 	mov	w0, wzr
  dc4928:	a8c17bfd 	ldp	x29, x30, [sp], #16
  dc492c:	d65f03c0 	ret
  dc4930:	97d9b7c3 	bl	43283c <WriteZStream@@Base+0xa35c>
  dc4934:	aa1f03e1 	mov	x1, xzr
  dc4938:	97d9b7a9 	bl	4327dc <WriteZStream@@Base+0xa2fc>
  dc493c:	97d9b7b5 	bl	432810 <WriteZStream@@Base+0xa330>
