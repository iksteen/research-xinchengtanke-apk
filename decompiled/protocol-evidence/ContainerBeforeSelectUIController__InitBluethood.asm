; ContainerBeforeSelectUIController$$InitBluethood
; void ContainerBeforeSelectUIController__InitBluethood (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000dd6e94 <__start_il2cpp@@Base+0x942470>:
  dd6e94:	a9bd57f6 	stp	x22, x21, [sp, #-48]!
  dd6e98:	a9014ff4 	stp	x20, x19, [sp, #16]
  dd6e9c:	a9027bfd 	stp	x29, x30, [sp, #32]
  dd6ea0:	910083fd 	add	x29, sp, #0x20
  dd6ea4:	90002b93 	adrp	x19, 1346000 <__bss_start__@@Base+0x7930>
  dd6ea8:	39796668 	ldrb	w8, [x19, #3673]
  dd6eac:	370002a8 	tbnz	w8, #0, dd6f00 <__start_il2cpp@@Base+0x9424dc>
  dd6eb0:	b00024a0 	adrp	x0, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dd6eb4:	f9446c00 	ldr	x0, [x0, #2264]
  dd6eb8:	97d96e21 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd6ebc:	d0002540 	adrp	x0, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dd6ec0:	f9440800 	ldr	x0, [x0, #2064]
  dd6ec4:	97d96e1e 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd6ec8:	d0002520 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dd6ecc:	f9454800 	ldr	x0, [x0, #2704]
  dd6ed0:	97d96e1b 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd6ed4:	f0002580 	adrp	x0, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dd6ed8:	f941f800 	ldr	x0, [x0, #1008]
  dd6edc:	97d96e18 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd6ee0:	900024e0 	adrp	x0, 1272000 <_ZTISt10bad_typeid@@Base+0xf650>
  dd6ee4:	f9473c00 	ldr	x0, [x0, #3704]
  dd6ee8:	97d96e15 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd6eec:	90002520 	adrp	x0, 127a000 <_ZTISt10bad_typeid@@Base+0x17650>
  dd6ef0:	f9442000 	ldr	x0, [x0, #2112]
  dd6ef4:	97d96e12 	bl	43273c <WriteZStream@@Base+0xa25c>
  dd6ef8:	320003e8 	orr	w8, wzr, #0x1
  dd6efc:	39396668 	strb	w8, [x19, #3673]
  dd6f00:	d0002535 	adrp	x21, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dd6f04:	f9454ab5 	ldr	x21, [x21, #2704]
  dd6f08:	f94002a0 	ldr	x0, [x21]
  dd6f0c:	3944cc08 	ldrb	w8, [x0, #307]
  dd6f10:	361000a8 	tbz	w8, #2, dd6f24 <__start_il2cpp@@Base+0x942500>
  dd6f14:	b940e008 	ldr	w8, [x0, #224]
  dd6f18:	35000068 	cbnz	w8, dd6f24 <__start_il2cpp@@Base+0x942500>
  dd6f1c:	97d96e34 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd6f20:	f94002a0 	ldr	x0, [x21]
  dd6f24:	f9405c08 	ldr	x8, [x0, #184]
  dd6f28:	39404508 	ldrb	w8, [x8, #17]
  dd6f2c:	340000a8 	cbz	w8, dd6f40 <__start_il2cpp@@Base+0x94251c>
  dd6f30:	a9427bfd 	ldp	x29, x30, [sp, #32]
  dd6f34:	a9414ff4 	ldp	x20, x19, [sp, #16]
  dd6f38:	a8c357f6 	ldp	x22, x21, [sp], #48
  dd6f3c:	d65f03c0 	ret
  dd6f40:	f0002588 	adrp	x8, 1289000 <_ZTISt10bad_typeid@@Base+0x26650>
  dd6f44:	f941f908 	ldr	x8, [x8, #1008]
  dd6f48:	f9400100 	ldr	x0, [x8]
  dd6f4c:	3944cc08 	ldrb	w8, [x0, #307]
  dd6f50:	36100088 	tbz	w8, #2, dd6f60 <__start_il2cpp@@Base+0x94253c>
  dd6f54:	b940e008 	ldr	w8, [x0, #224]
  dd6f58:	35000048 	cbnz	w8, dd6f60 <__start_il2cpp@@Base+0x94253c>
  dd6f5c:	97d96e24 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd6f60:	aa1f03e0 	mov	x0, xzr
  dd6f64:	97e58813 	bl	738fb0 <__start_il2cpp@@Base+0x2a458c>
  dd6f68:	b4000a60 	cbz	x0, dd70b4 <__start_il2cpp@@Base+0x942690>
  dd6f6c:	aa1f03e1 	mov	x1, xzr
  dd6f70:	97e58904 	bl	739380 <__start_il2cpp@@Base+0x2a495c>
  dd6f74:	b4000a00 	cbz	x0, dd70b4 <__start_il2cpp@@Base+0x942690>
  dd6f78:	2a1f03e1 	mov	w1, wzr
  dd6f7c:	aa1f03e2 	mov	x2, xzr
  dd6f80:	aa0003f3 	mov	x19, x0
  dd6f84:	97f4b223 	bl	b03810 <__start_il2cpp@@Base+0x66edec>
  dd6f88:	f94002a8 	ldr	x8, [x21]
  dd6f8c:	2a0003f4 	mov	w20, w0
  dd6f90:	3944cd09 	ldrb	w9, [x8, #307]
  dd6f94:	361000c9 	tbz	w9, #2, dd6fac <__start_il2cpp@@Base+0x942588>
  dd6f98:	b940e109 	ldr	w9, [x8, #224]
  dd6f9c:	35000089 	cbnz	w9, dd6fac <__start_il2cpp@@Base+0x942588>
  dd6fa0:	aa0803e0 	mov	x0, x8
  dd6fa4:	97d96e12 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd6fa8:	f94002a8 	ldr	x8, [x21]
  dd6fac:	f9405d08 	ldr	x8, [x8, #184]
  dd6fb0:	320003e1 	orr	w1, wzr, #0x1
  dd6fb4:	aa1303e0 	mov	x0, x19
  dd6fb8:	aa1f03e2 	mov	x2, xzr
  dd6fbc:	39004914 	strb	w20, [x8, #18]
  dd6fc0:	97f4b214 	bl	b03810 <__start_il2cpp@@Base+0x66edec>
  dd6fc4:	f94002a8 	ldr	x8, [x21]
  dd6fc8:	321f03e1 	orr	w1, wzr, #0x2
  dd6fcc:	aa1f03e2 	mov	x2, xzr
  dd6fd0:	f9405d08 	ldr	x8, [x8, #184]
  dd6fd4:	39004d00 	strb	w0, [x8, #19]
  dd6fd8:	aa1303e0 	mov	x0, x19
  dd6fdc:	97f4b20d 	bl	b03810 <__start_il2cpp@@Base+0x66edec>
  dd6fe0:	f94002a8 	ldr	x8, [x21]
  dd6fe4:	90002536 	adrp	x22, 127a000 <_ZTISt10bad_typeid@@Base+0x17650>
  dd6fe8:	f9405d08 	ldr	x8, [x8, #184]
  dd6fec:	39005100 	strb	w0, [x8, #20]
  dd6ff0:	f94422d6 	ldr	x22, [x22, #2112]
  dd6ff4:	f94002c0 	ldr	x0, [x22]
  dd6ff8:	3944cc08 	ldrb	w8, [x0, #307]
  dd6ffc:	361000a8 	tbz	w8, #2, dd7010 <__start_il2cpp@@Base+0x9425ec>
  dd7000:	b940e008 	ldr	w8, [x0, #224]
  dd7004:	35000068 	cbnz	w8, dd7010 <__start_il2cpp@@Base+0x9425ec>
  dd7008:	97d96df9 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd700c:	f94002c0 	ldr	x0, [x22]
  dd7010:	f9405c08 	ldr	x8, [x0, #184]
  dd7014:	f9400513 	ldr	x19, [x8, #8]
  dd7018:	b5000373 	cbnz	x19, dd7084 <__start_il2cpp@@Base+0x942660>
  dd701c:	3944cc09 	ldrb	w9, [x0, #307]
  dd7020:	361000c9 	tbz	w9, #2, dd7038 <__start_il2cpp@@Base+0x942614>
  dd7024:	b940e009 	ldr	w9, [x0, #224]
  dd7028:	35000089 	cbnz	w9, dd7038 <__start_il2cpp@@Base+0x942614>
  dd702c:	97d96df0 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd7030:	f94002c8 	ldr	x8, [x22]
  dd7034:	f9405d08 	ldr	x8, [x8, #184]
  dd7038:	f9400114 	ldr	x20, [x8]
  dd703c:	b0002548 	adrp	x8, 1280000 <_ZTISt10bad_typeid@@Base+0x1d650>
  dd7040:	f9440908 	ldr	x8, [x8, #2064]
  dd7044:	f9400100 	ldr	x0, [x8]
  dd7048:	97d96df0 	bl	432808 <WriteZStream@@Base+0xa328>
  dd704c:	f00024c8 	adrp	x8, 1272000 <_ZTISt10bad_typeid@@Base+0xf650>
  dd7050:	900024a9 	adrp	x9, 126b000 <_ZTISt10bad_typeid@@Base+0x8650>
  dd7054:	f9473d08 	ldr	x8, [x8, #3704]
  dd7058:	f9446d29 	ldr	x9, [x9, #2264]
  dd705c:	aa1403e1 	mov	x1, x20
  dd7060:	aa0003f3 	mov	x19, x0
  dd7064:	f9400102 	ldr	x2, [x8]
  dd7068:	f9400123 	ldr	x3, [x9]
  dd706c:	97eebdcf 	bl	9867a8 <__start_il2cpp@@Base+0x4f1d84>
  dd7070:	f94002c8 	ldr	x8, [x22]
  dd7074:	aa1303e1 	mov	x1, x19
  dd7078:	f9405d00 	ldr	x0, [x8, #184]
  dd707c:	f8008c13 	str	x19, [x0, #8]!
  dd7080:	97d96d98 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dd7084:	f94002a0 	ldr	x0, [x21]
  dd7088:	3944cc08 	ldrb	w8, [x0, #307]
  dd708c:	36100088 	tbz	w8, #2, dd709c <__start_il2cpp@@Base+0x942678>
  dd7090:	b940e008 	ldr	w8, [x0, #224]
  dd7094:	35000048 	cbnz	w8, dd709c <__start_il2cpp@@Base+0x942678>
  dd7098:	97d96dd5 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dd709c:	aa1303e0 	mov	x0, x19
  dd70a0:	a9427bfd 	ldp	x29, x30, [sp, #32]
  dd70a4:	a9414ff4 	ldp	x20, x19, [sp, #16]
  dd70a8:	aa1f03e1 	mov	x1, xzr
  dd70ac:	a8c357f6 	ldp	x22, x21, [sp], #48
  dd70b0:	17ffb24a 	b	dc39d8 <__start_il2cpp@@Base+0x92efb4>
  dd70b4:	97d96dd7 	bl	432810 <WriteZStream@@Base+0xa330>
