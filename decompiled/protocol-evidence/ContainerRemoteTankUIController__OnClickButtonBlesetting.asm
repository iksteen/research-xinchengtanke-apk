; ContainerRemoteTankUIController$$OnClickButtonBlesetting
; void ContainerRemoteTankUIController__OnClickButtonBlesetting (ContainerRemoteTankUIController_o* __this, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000dddc3c <__start_il2cpp@@Base+0x949218>:
  dddc3c:	a9bc5ff8 	stp	x24, x23, [sp, #-64]!
  dddc40:	a90157f6 	stp	x22, x21, [sp, #16]
  dddc44:	a9024ff4 	stp	x20, x19, [sp, #32]
  dddc48:	a9037bfd 	stp	x29, x30, [sp, #48]
  dddc4c:	9100c3fd 	add	x29, sp, #0x30
  dddc50:	b0002b54 	adrp	x20, 1346000 <__bss_start__@@Base+0x7930>
  dddc54:	397a2a88 	ldrb	w8, [x20, #3722]
  dddc58:	aa0003f3 	mov	x19, x0
  dddc5c:	37000548 	tbnz	w8, #0, dddd04 <__start_il2cpp@@Base+0x9492e0>
  dddc60:	d0002460 	adrp	x0, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dddc64:	f9446c00 	ldr	x0, [x0, #2264]
  dddc68:	97d952b5 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddc6c:	f0002500 	adrp	x0, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dddc70:	f9440800 	ldr	x0, [x0, #2064]
  dddc74:	97d952b2 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddc78:	b0002540 	adrp	x0, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  dddc7c:	f9452000 	ldr	x0, [x0, #2624]
  dddc80:	97d952af 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddc84:	d0002500 	adrp	x0, 127f000 <_ZTISt10bad_typeid@@Base+0x1c650>
  dddc88:	f9465c00 	ldr	x0, [x0, #3256]
  dddc8c:	97d952ac 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddc90:	d0002500 	adrp	x0, 127f000 <_ZTISt10bad_typeid@@Base+0x1c650>
  dddc94:	f9472c00 	ldr	x0, [x0, #3672]
  dddc98:	97d952a9 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddc9c:	f00024e0 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dddca0:	f9454800 	ldr	x0, [x0, #2704]
  dddca4:	97d952a6 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddca8:	90002560 	adrp	x0, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dddcac:	f941f800 	ldr	x0, [x0, #1008]
  dddcb0:	97d952a3 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddcb4:	d00024a0 	adrp	x0, 1273000 <_ZTISt10bad_typeid@@Base+0x10650>
  dddcb8:	f940e000 	ldr	x0, [x0, #448]
  dddcbc:	97d952a0 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddcc0:	b0002440 	adrp	x0, 1266000 <_ZTISt10bad_typeid@@Base+0x3650>
  dddcc4:	f9436400 	ldr	x0, [x0, #1736]
  dddcc8:	97d9529d 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddccc:	f0002480 	adrp	x0, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  dddcd0:	f940c000 	ldr	x0, [x0, #384]
  dddcd4:	97d9529a 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddcd8:	f0002540 	adrp	x0, 1288000 <_ZTISt10bad_typeid@@Base+0x25650>
  dddcdc:	f9413c00 	ldr	x0, [x0, #632]
  dddce0:	97d95297 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddce4:	b0002560 	adrp	x0, 128a000 <_ZTISt10bad_typeid@@Base+0x27650>
  dddce8:	f947b400 	ldr	x0, [x0, #3944]
  dddcec:	97d95294 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddcf0:	f00024e0 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dddcf4:	f9464c00 	ldr	x0, [x0, #3224]
  dddcf8:	97d95291 	bl	43273c <WriteZStream@@Base+0xa25c>
  dddcfc:	320003e8 	orr	w8, wzr, #0x1
  dddd00:	393a2a88 	strb	w8, [x20, #3722]
  dddd04:	d0002515 	adrp	x21, 127f000 <_ZTISt10bad_typeid@@Base+0x1c650>
  dddd08:	f9465eb5 	ldr	x21, [x21, #3256]
  dddd0c:	f94002a0 	ldr	x0, [x21]
  dddd10:	3944cc08 	ldrb	w8, [x0, #307]
  dddd14:	361000a8 	tbz	w8, #2, dddd28 <__start_il2cpp@@Base+0x949304>
  dddd18:	b940e008 	ldr	w8, [x0, #224]
  dddd1c:	35000068 	cbnz	w8, dddd28 <__start_il2cpp@@Base+0x949304>
  dddd20:	97d952b3 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddd24:	f94002a0 	ldr	x0, [x21]
  dddd28:	f9405c08 	ldr	x8, [x0, #184]
  dddd2c:	90002574 	adrp	x20, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dddd30:	3900251f 	strb	wzr, [x8, #9]
  dddd34:	f941fa94 	ldr	x20, [x20, #1008]
  dddd38:	f9400280 	ldr	x0, [x20]
  dddd3c:	3944cc08 	ldrb	w8, [x0, #307]
  dddd40:	36100088 	tbz	w8, #2, dddd50 <__start_il2cpp@@Base+0x94932c>
  dddd44:	b940e008 	ldr	w8, [x0, #224]
  dddd48:	35000048 	cbnz	w8, dddd50 <__start_il2cpp@@Base+0x94932c>
  dddd4c:	97d952a8 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddd50:	aa1f03e0 	mov	x0, xzr
  dddd54:	97e56c97 	bl	738fb0 <__start_il2cpp@@Base+0x2a458c>
  dddd58:	b4002760 	cbz	x0, dde244 <__start_il2cpp@@Base+0x949820>
  dddd5c:	f00024e8 	adrp	x8, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dddd60:	f9464d08 	ldr	x8, [x8, #3224]
  dddd64:	321e03e1 	orr	w1, wzr, #0x4
  dddd68:	aa1f03e3 	mov	x3, xzr
  dddd6c:	f9400102 	ldr	x2, [x8]
  dddd70:	97e56db7 	bl	73944c <__start_il2cpp@@Base+0x2a4a28>
  dddd74:	f00024f7 	adrp	x23, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dddd78:	f9454af7 	ldr	x23, [x23, #2704]
  dddd7c:	f94002e0 	ldr	x0, [x23]
  dddd80:	3944cc08 	ldrb	w8, [x0, #307]
  dddd84:	361000a8 	tbz	w8, #2, dddd98 <__start_il2cpp@@Base+0x949374>
  dddd88:	b940e008 	ldr	w8, [x0, #224]
  dddd8c:	35000068 	cbnz	w8, dddd98 <__start_il2cpp@@Base+0x949374>
  dddd90:	97d95297 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddd94:	f94002e0 	ldr	x0, [x23]
  dddd98:	f9405c08 	ldr	x8, [x0, #184]
  dddd9c:	f9400280 	ldr	x0, [x20]
  dddda0:	39404509 	ldrb	w9, [x8, #17]
  dddda4:	79426408 	ldrh	w8, [x0, #306]
  dddda8:	340021a9 	cbz	w9, dde1dc <__start_il2cpp@@Base+0x9497b8>
  ddddac:	365000a8 	tbz	w8, #10, ddddc0 <__start_il2cpp@@Base+0x94939c>
  ddddb0:	b940e008 	ldr	w8, [x0, #224]
  ddddb4:	35000068 	cbnz	w8, ddddc0 <__start_il2cpp@@Base+0x94939c>
  ddddb8:	97d9528d 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddddbc:	f9400280 	ldr	x0, [x20]
  ddddc0:	f9405c08 	ldr	x8, [x0, #184]
  ddddc4:	3900811f 	strb	wzr, [x8, #32]
  ddddc8:	f94002a8 	ldr	x8, [x21]
  ddddcc:	f9405c09 	ldr	x9, [x0, #184]
  ddddd0:	3944cd0a 	ldrb	w10, [x8, #307]
  ddddd4:	f9406134 	ldr	x20, [x9, #192]
  ddddd8:	361000ca 	tbz	w10, #2, ddddf0 <__start_il2cpp@@Base+0x9493cc>
  dddddc:	b940e109 	ldr	w9, [x8, #224]
  dddde0:	35000089 	cbnz	w9, ddddf0 <__start_il2cpp@@Base+0x9493cc>
  dddde4:	aa0803e0 	mov	x0, x8
  dddde8:	97d95281 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddddec:	f94002a8 	ldr	x8, [x21]
  ddddf0:	f9405d00 	ldr	x0, [x8, #184]
  ddddf4:	aa1403e1 	mov	x1, x20
  ddddf8:	f9000014 	str	x20, [x0]
  ddddfc:	97d95239 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddde00:	b0002548 	adrp	x8, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  ddde04:	f9452108 	ldr	x8, [x8, #2624]
  ddde08:	52800261 	mov	w1, #0x13                  	// #19
  ddde0c:	f9400100 	ldr	x0, [x8]
  ddde10:	97d95250 	bl	432750 <WriteZStream@@Base+0xa270>
  ddde14:	b4002180 	cbz	x0, dde244 <__start_il2cpp@@Base+0x949820>
  ddde18:	f9400c08 	ldr	x8, [x0, #24]
  ddde1c:	aa0003f4 	mov	x20, x0
  ddde20:	340020c8 	cbz	w8, dde238 <__start_il2cpp@@Base+0x949814>
  ddde24:	39406269 	ldrb	w9, [x19, #24]
  ddde28:	7100051f 	cmp	w8, #0x1
  ddde2c:	39008289 	strb	w9, [x20, #32]
  ddde30:	54002040 	b.eq	dde238 <__start_il2cpp@@Base+0x949814>  // b.none
  ddde34:	39406669 	ldrb	w9, [x19, #25]
  ddde38:	39008689 	strb	w9, [x20, #33]
  ddde3c:	f94002e0 	ldr	x0, [x23]
  ddde40:	3944cc09 	ldrb	w9, [x0, #307]
  ddde44:	361000a9 	tbz	w9, #2, ddde58 <__start_il2cpp@@Base+0x949434>
  ddde48:	b940e009 	ldr	w9, [x0, #224]
  ddde4c:	35000069 	cbnz	w9, ddde58 <__start_il2cpp@@Base+0x949434>
  ddde50:	97d95267 	bl	4327ec <WriteZStream@@Base+0xa30c>
  ddde54:	f9400e88 	ldr	x8, [x20, #24]
  ddde58:	7100151f 	cmp	w8, #0x5
  ddde5c:	54001ee9 	b.ls	dde238 <__start_il2cpp@@Base+0x949814>  // b.plast
  ddde60:	f94002e9 	ldr	x9, [x23]
  ddde64:	7100191f 	cmp	w8, #0x6
  ddde68:	f9405d29 	ldr	x9, [x9, #184]
  ddde6c:	39404929 	ldrb	w9, [x9, #18]
  ddde70:	39009689 	strb	w9, [x20, #37]
  ddde74:	54001e20 	b.eq	dde238 <__start_il2cpp@@Base+0x949814>  // b.none
  ddde78:	f94002e9 	ldr	x9, [x23]
  ddde7c:	71001d1f 	cmp	w8, #0x7
  ddde80:	f9405d29 	ldr	x9, [x9, #184]
  ddde84:	39404d29 	ldrb	w9, [x9, #19]
  ddde88:	39009a89 	strb	w9, [x20, #38]
  ddde8c:	54001d69 	b.ls	dde238 <__start_il2cpp@@Base+0x949814>  // b.plast
  ddde90:	f94002e8 	ldr	x8, [x23]
  ddde94:	b0002578 	adrp	x24, 128a000 <_ZTISt10bad_typeid@@Base+0x27650>
  ddde98:	f9405d08 	ldr	x8, [x8, #184]
  ddde9c:	39405108 	ldrb	w8, [x8, #20]
  dddea0:	39009e88 	strb	w8, [x20, #39]
  dddea4:	f947b718 	ldr	x24, [x24, #3944]
  dddea8:	f9400300 	ldr	x0, [x24]
  dddeac:	3944cc08 	ldrb	w8, [x0, #307]
  dddeb0:	361000a8 	tbz	w8, #2, dddec4 <__start_il2cpp@@Base+0x9494a0>
  dddeb4:	b940e008 	ldr	w8, [x0, #224]
  dddeb8:	35000068 	cbnz	w8, dddec4 <__start_il2cpp@@Base+0x9494a0>
  dddebc:	97d9524c 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddec0:	f9400300 	ldr	x0, [x24]
  dddec4:	f9405c08 	ldr	x8, [x0, #184]
  dddec8:	f9400515 	ldr	x21, [x8, #8]
  dddecc:	b5000375 	cbnz	x21, dddf38 <__start_il2cpp@@Base+0x949514>
  ddded0:	3944cc09 	ldrb	w9, [x0, #307]
  ddded4:	361000c9 	tbz	w9, #2, dddeec <__start_il2cpp@@Base+0x9494c8>
  ddded8:	b940e009 	ldr	w9, [x0, #224]
  dddedc:	35000089 	cbnz	w9, dddeec <__start_il2cpp@@Base+0x9494c8>
  dddee0:	97d95243 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddee4:	f9400308 	ldr	x8, [x24]
  dddee8:	f9405d08 	ldr	x8, [x8, #184]
  dddeec:	f9400116 	ldr	x22, [x8]
  dddef0:	f0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dddef4:	f9440908 	ldr	x8, [x8, #2064]
  dddef8:	f9400100 	ldr	x0, [x8]
  dddefc:	97d95243 	bl	432808 <WriteZStream@@Base+0xa328>
  dddf00:	d00024a8 	adrp	x8, 1273000 <_ZTISt10bad_typeid@@Base+0x10650>
  dddf04:	d0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dddf08:	f940e108 	ldr	x8, [x8, #448]
  dddf0c:	f9446d29 	ldr	x9, [x9, #2264]
  dddf10:	aa1603e1 	mov	x1, x22
  dddf14:	aa0003f5 	mov	x21, x0
  dddf18:	f9400102 	ldr	x2, [x8]
  dddf1c:	f9400123 	ldr	x3, [x9]
  dddf20:	97eea222 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dddf24:	f9400308 	ldr	x8, [x24]
  dddf28:	aa1503e1 	mov	x1, x21
  dddf2c:	f9405d00 	ldr	x0, [x8, #184]
  dddf30:	f8008c15 	str	x21, [x0, #8]!
  dddf34:	97d951eb 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dddf38:	f94002e0 	ldr	x0, [x23]
  dddf3c:	3944cc08 	ldrb	w8, [x0, #307]
  dddf40:	36100088 	tbz	w8, #2, dddf50 <__start_il2cpp@@Base+0x94952c>
  dddf44:	b940e008 	ldr	w8, [x0, #224]
  dddf48:	35000048 	cbnz	w8, dddf50 <__start_il2cpp@@Base+0x94952c>
  dddf4c:	97d95228 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddf50:	aa1503e0 	mov	x0, x21
  dddf54:	aa1f03e1 	mov	x1, xzr
  dddf58:	97ff98b9 	bl	dc423c <__start_il2cpp@@Base+0x92f818>
  dddf5c:	52800c80 	mov	w0, #0x64                  	// #100
  dddf60:	aa1f03e1 	mov	x1, xzr
  dddf64:	97f0759d 	bl	9fb5d8 <__start_il2cpp@@Base+0x566bb4>
  dddf68:	f9400300 	ldr	x0, [x24]
  dddf6c:	3944cc08 	ldrb	w8, [x0, #307]
  dddf70:	361000a8 	tbz	w8, #2, dddf84 <__start_il2cpp@@Base+0x949560>
  dddf74:	b940e008 	ldr	w8, [x0, #224]
  dddf78:	35000068 	cbnz	w8, dddf84 <__start_il2cpp@@Base+0x949560>
  dddf7c:	97d9521c 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddf80:	f9400300 	ldr	x0, [x24]
  dddf84:	f9405c08 	ldr	x8, [x0, #184]
  dddf88:	f9400915 	ldr	x21, [x8, #16]
  dddf8c:	b5000375 	cbnz	x21, dddff8 <__start_il2cpp@@Base+0x9495d4>
  dddf90:	3944cc09 	ldrb	w9, [x0, #307]
  dddf94:	361000c9 	tbz	w9, #2, dddfac <__start_il2cpp@@Base+0x949588>
  dddf98:	b940e009 	ldr	w9, [x0, #224]
  dddf9c:	35000089 	cbnz	w9, dddfac <__start_il2cpp@@Base+0x949588>
  dddfa0:	97d95213 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dddfa4:	f9400308 	ldr	x8, [x24]
  dddfa8:	f9405d08 	ldr	x8, [x8, #184]
  dddfac:	f9400116 	ldr	x22, [x8]
  dddfb0:	f0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dddfb4:	f9440908 	ldr	x8, [x8, #2064]
  dddfb8:	f9400100 	ldr	x0, [x8]
  dddfbc:	97d95213 	bl	432808 <WriteZStream@@Base+0xa328>
  dddfc0:	b0002448 	adrp	x8, 1266000 <_ZTISt10bad_typeid@@Base+0x3650>
  dddfc4:	d0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dddfc8:	f9436508 	ldr	x8, [x8, #1736]
  dddfcc:	f9446d29 	ldr	x9, [x9, #2264]
  dddfd0:	aa1603e1 	mov	x1, x22
  dddfd4:	aa0003f5 	mov	x21, x0
  dddfd8:	f9400102 	ldr	x2, [x8]
  dddfdc:	f9400123 	ldr	x3, [x9]
  dddfe0:	97eea1f2 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dddfe4:	f9400308 	ldr	x8, [x24]
  dddfe8:	aa1503e1 	mov	x1, x21
  dddfec:	f9405d00 	ldr	x0, [x8, #184]
  dddff0:	f8010c15 	str	x21, [x0, #16]!
  dddff4:	97d951bb 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dddff8:	f94002e0 	ldr	x0, [x23]
  dddffc:	3944cc08 	ldrb	w8, [x0, #307]
  dde000:	36100088 	tbz	w8, #2, dde010 <__start_il2cpp@@Base+0x9495ec>
  dde004:	b940e008 	ldr	w8, [x0, #224]
  dde008:	35000048 	cbnz	w8, dde010 <__start_il2cpp@@Base+0x9495ec>
  dde00c:	97d951f8 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde010:	aa1503e0 	mov	x0, x21
  dde014:	aa1403e1 	mov	x1, x20
  dde018:	aa1f03e2 	mov	x2, xzr
  dde01c:	97ff980e 	bl	dc4054 <__start_il2cpp@@Base+0x92f630>
  dde020:	f9400300 	ldr	x0, [x24]
  dde024:	3944cc08 	ldrb	w8, [x0, #307]
  dde028:	361000a8 	tbz	w8, #2, dde03c <__start_il2cpp@@Base+0x949618>
  dde02c:	b940e008 	ldr	w8, [x0, #224]
  dde030:	35000068 	cbnz	w8, dde03c <__start_il2cpp@@Base+0x949618>
  dde034:	97d951ee 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde038:	f9400300 	ldr	x0, [x24]
  dde03c:	f9405c08 	ldr	x8, [x0, #184]
  dde040:	f9400d14 	ldr	x20, [x8, #24]
  dde044:	b5000374 	cbnz	x20, dde0b0 <__start_il2cpp@@Base+0x94968c>
  dde048:	3944cc09 	ldrb	w9, [x0, #307]
  dde04c:	361000c9 	tbz	w9, #2, dde064 <__start_il2cpp@@Base+0x949640>
  dde050:	b940e009 	ldr	w9, [x0, #224]
  dde054:	35000089 	cbnz	w9, dde064 <__start_il2cpp@@Base+0x949640>
  dde058:	97d951e5 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde05c:	f9400308 	ldr	x8, [x24]
  dde060:	f9405d08 	ldr	x8, [x8, #184]
  dde064:	f9400115 	ldr	x21, [x8]
  dde068:	d0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dde06c:	f9440908 	ldr	x8, [x8, #2064]
  dde070:	f9400100 	ldr	x0, [x8]
  dde074:	97d951e5 	bl	432808 <WriteZStream@@Base+0xa328>
  dde078:	d0002488 	adrp	x8, 1270000 <_ZTISt10bad_typeid@@Base+0xd650>
  dde07c:	b0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dde080:	f940c108 	ldr	x8, [x8, #384]
  dde084:	f9446d29 	ldr	x9, [x9, #2264]
  dde088:	aa1503e1 	mov	x1, x21
  dde08c:	aa0003f4 	mov	x20, x0
  dde090:	f9400102 	ldr	x2, [x8]
  dde094:	f9400123 	ldr	x3, [x9]
  dde098:	97eea1c4 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dde09c:	f9400308 	ldr	x8, [x24]
  dde0a0:	aa1403e1 	mov	x1, x20
  dde0a4:	f9405d00 	ldr	x0, [x8, #184]
  dde0a8:	f8018c14 	str	x20, [x0, #24]!
  dde0ac:	97d9518d 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dde0b0:	f94002e0 	ldr	x0, [x23]
  dde0b4:	3944cc08 	ldrb	w8, [x0, #307]
  dde0b8:	36100088 	tbz	w8, #2, dde0c8 <__start_il2cpp@@Base+0x9496a4>
  dde0bc:	b940e008 	ldr	w8, [x0, #224]
  dde0c0:	35000048 	cbnz	w8, dde0c8 <__start_il2cpp@@Base+0x9496a4>
  dde0c4:	97d951ca 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde0c8:	aa1403e0 	mov	x0, x20
  dde0cc:	aa1f03e1 	mov	x1, xzr
  dde0d0:	97ff9963 	bl	dc465c <__start_il2cpp@@Base+0x92fc38>
  dde0d4:	52800c80 	mov	w0, #0x64                  	// #100
  dde0d8:	aa1f03e1 	mov	x1, xzr
  dde0dc:	97f0753f 	bl	9fb5d8 <__start_il2cpp@@Base+0x566bb4>
  dde0e0:	f9400300 	ldr	x0, [x24]
  dde0e4:	3944cc08 	ldrb	w8, [x0, #307]
  dde0e8:	361000a8 	tbz	w8, #2, dde0fc <__start_il2cpp@@Base+0x9496d8>
  dde0ec:	b940e008 	ldr	w8, [x0, #224]
  dde0f0:	35000068 	cbnz	w8, dde0fc <__start_il2cpp@@Base+0x9496d8>
  dde0f4:	97d951be 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde0f8:	f9400300 	ldr	x0, [x24]
  dde0fc:	f9405c08 	ldr	x8, [x0, #184]
  dde100:	f9401114 	ldr	x20, [x8, #32]
  dde104:	b5000374 	cbnz	x20, dde170 <__start_il2cpp@@Base+0x94974c>
  dde108:	3944cc09 	ldrb	w9, [x0, #307]
  dde10c:	361000c9 	tbz	w9, #2, dde124 <__start_il2cpp@@Base+0x949700>
  dde110:	b940e009 	ldr	w9, [x0, #224]
  dde114:	35000089 	cbnz	w9, dde124 <__start_il2cpp@@Base+0x949700>
  dde118:	97d951b5 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde11c:	f9400308 	ldr	x8, [x24]
  dde120:	f9405d08 	ldr	x8, [x8, #184]
  dde124:	f9400115 	ldr	x21, [x8]
  dde128:	d0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dde12c:	f9440908 	ldr	x8, [x8, #2064]
  dde130:	f9400100 	ldr	x0, [x8]
  dde134:	97d951b5 	bl	432808 <WriteZStream@@Base+0xa328>
  dde138:	d0002548 	adrp	x8, 1288000 <_ZTISt10bad_typeid@@Base+0x25650>
  dde13c:	b0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dde140:	f9413d08 	ldr	x8, [x8, #632]
  dde144:	f9446d29 	ldr	x9, [x9, #2264]
  dde148:	aa1503e1 	mov	x1, x21
  dde14c:	aa0003f4 	mov	x20, x0
  dde150:	f9400102 	ldr	x2, [x8]
  dde154:	f9400123 	ldr	x3, [x9]
  dde158:	97eea194 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dde15c:	f9400308 	ldr	x8, [x24]
  dde160:	aa1403e1 	mov	x1, x20
  dde164:	f9405d00 	ldr	x0, [x8, #184]
  dde168:	f8020c14 	str	x20, [x0, #32]!
  dde16c:	97d9515d 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dde170:	d0002508 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dde174:	f9440908 	ldr	x8, [x8, #2064]
  dde178:	f9400100 	ldr	x0, [x8]
  dde17c:	97d951a3 	bl	432808 <WriteZStream@@Base+0xa328>
  dde180:	b0002508 	adrp	x8, 127f000 <_ZTISt10bad_typeid@@Base+0x1c650>
  dde184:	b0002469 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dde188:	f9472d08 	ldr	x8, [x8, #3672]
  dde18c:	f9446d29 	ldr	x9, [x9, #2264]
  dde190:	aa1303e1 	mov	x1, x19
  dde194:	aa0003f5 	mov	x21, x0
  dde198:	f9400102 	ldr	x2, [x8]
  dde19c:	f9400123 	ldr	x3, [x9]
  dde1a0:	97eea182 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dde1a4:	f94002e0 	ldr	x0, [x23]
  dde1a8:	3944cc08 	ldrb	w8, [x0, #307]
  dde1ac:	36100088 	tbz	w8, #2, dde1bc <__start_il2cpp@@Base+0x949798>
  dde1b0:	b940e008 	ldr	w8, [x0, #224]
  dde1b4:	35000048 	cbnz	w8, dde1bc <__start_il2cpp@@Base+0x949798>
  dde1b8:	97d9518d 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde1bc:	aa1403e0 	mov	x0, x20
  dde1c0:	aa1503e1 	mov	x1, x21
  dde1c4:	a9437bfd 	ldp	x29, x30, [sp, #48]
  dde1c8:	a9424ff4 	ldp	x20, x19, [sp, #32]
  dde1cc:	a94157f6 	ldp	x22, x21, [sp, #16]
  dde1d0:	aa1f03e2 	mov	x2, xzr
  dde1d4:	a8c45ff8 	ldp	x24, x23, [sp], #64
  dde1d8:	17ff9899 	b	dc443c <__start_il2cpp@@Base+0x92fa18>
  dde1dc:	365000a8 	tbz	w8, #10, dde1f0 <__start_il2cpp@@Base+0x9497cc>
  dde1e0:	b940e008 	ldr	w8, [x0, #224]
  dde1e4:	35000068 	cbnz	w8, dde1f0 <__start_il2cpp@@Base+0x9497cc>
  dde1e8:	97d95181 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde1ec:	f9400280 	ldr	x0, [x20]
  dde1f0:	f94002a8 	ldr	x8, [x21]
  dde1f4:	f9405c09 	ldr	x9, [x0, #184]
  dde1f8:	3944cd0a 	ldrb	w10, [x8, #307]
  dde1fc:	f9407d33 	ldr	x19, [x9, #248]
  dde200:	361000ca 	tbz	w10, #2, dde218 <__start_il2cpp@@Base+0x9497f4>
  dde204:	b940e109 	ldr	w9, [x8, #224]
  dde208:	35000089 	cbnz	w9, dde218 <__start_il2cpp@@Base+0x9497f4>
  dde20c:	aa0803e0 	mov	x0, x8
  dde210:	97d95177 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dde214:	f94002a8 	ldr	x8, [x21]
  dde218:	f9405d00 	ldr	x0, [x8, #184]
  dde21c:	aa1303e1 	mov	x1, x19
  dde220:	f9000013 	str	x19, [x0]
  dde224:	a9437bfd 	ldp	x29, x30, [sp, #48]
  dde228:	a9424ff4 	ldp	x20, x19, [sp, #32]
  dde22c:	a94157f6 	ldp	x22, x21, [sp, #16]
  dde230:	a8c45ff8 	ldp	x24, x23, [sp], #64
  dde234:	17d9512b 	b	4326e0 <WriteZStream@@Base+0xa200>
  dde238:	97d95181 	bl	43283c <WriteZStream@@Base+0xa35c>
  dde23c:	aa1f03e1 	mov	x1, xzr
  dde240:	97d95167 	bl	4327dc <WriteZStream@@Base+0xa2fc>
  dde244:	97d95173 	bl	432810 <WriteZStream@@Base+0xa330>
