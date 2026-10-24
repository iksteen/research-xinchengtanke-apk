; HjdBluetoothHardwareInterface$$StartAdvertising
; void HjdBluetoothHardwareInterface__StartAdvertising (System_Action_string__o* action, System_Byte_array* data, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000dc4054 <__start_il2cpp@@Base+0x92f630>:
  dc4054:	a9bd57f6 	stp	x22, x21, [sp, #-48]!
  dc4058:	a9014ff4 	stp	x20, x19, [sp, #16]
  dc405c:	a9027bfd 	stp	x29, x30, [sp, #32]
  dc4060:	910083fd 	add	x29, sp, #0x20
  dc4064:	f0002bf5 	adrp	x21, 1343000 <__bss_start__@@Base+0x4930>
  dc4068:	3974b2a8 	ldrb	w8, [x21, #3372]
  dc406c:	aa0103f3 	mov	x19, x1
  dc4070:	aa0003f4 	mov	x20, x0
  dc4074:	370001e8 	tbnz	w8, #0, dc40b0 <__start_il2cpp@@Base+0x92f68c>
  dc4078:	b00025c0 	adrp	x0, 127d000 <_ZTISt10bad_typeid@@Base+0x1a650>
  dc407c:	f9405400 	ldr	x0, [x0, #168]
  dc4080:	97d9b9af 	bl	43273c <WriteZStream@@Base+0xa25c>
  dc4084:	900025c0 	adrp	x0, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dc4088:	f9454800 	ldr	x0, [x0, #2704]
  dc408c:	97d9b9ac 	bl	43273c <WriteZStream@@Base+0xa25c>
  dc4090:	b00025a0 	adrp	x0, 1279000 <_ZTISt10bad_typeid@@Base+0x16650>
  dc4094:	f9444c00 	ldr	x0, [x0, #2200]
  dc4098:	97d9b9a9 	bl	43273c <WriteZStream@@Base+0xa25c>
  dc409c:	b0002580 	adrp	x0, 1275000 <_ZTISt10bad_typeid@@Base+0x12650>
  dc40a0:	f944dc00 	ldr	x0, [x0, #2488]
  dc40a4:	97d9b9a6 	bl	43273c <WriteZStream@@Base+0xa25c>
  dc40a8:	320003e8 	orr	w8, wzr, #0x1
  dc40ac:	3934b2a8 	strb	w8, [x21, #3372]
  dc40b0:	900025d6 	adrp	x22, 127c000 <_ZTISt10bad_typeid@@Base+0x19650>
  dc40b4:	f9454ad6 	ldr	x22, [x22, #2704]
  dc40b8:	f94002c0 	ldr	x0, [x22]
  dc40bc:	3944cc08 	ldrb	w8, [x0, #307]
  dc40c0:	361000a8 	tbz	w8, #2, dc40d4 <__start_il2cpp@@Base+0x92f6b0>
  dc40c4:	b940e008 	ldr	w8, [x0, #224]
  dc40c8:	35000068 	cbnz	w8, dc40d4 <__start_il2cpp@@Base+0x92f6b0>
  dc40cc:	97d9b9c8 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dc40d0:	f94002c0 	ldr	x0, [x22]
  dc40d4:	b00025a8 	adrp	x8, 1279000 <_ZTISt10bad_typeid@@Base+0x16650>
  dc40d8:	f9444d08 	ldr	x8, [x8, #2200]
  dc40dc:	f9405c09 	ldr	x9, [x0, #184]
  dc40e0:	f9400108 	ldr	x8, [x8]
  dc40e4:	f9400535 	ldr	x21, [x9, #8]
  dc40e8:	3944cd0a 	ldrb	w10, [x8, #307]
  dc40ec:	361000aa 	tbz	w10, #2, dc4100 <__start_il2cpp@@Base+0x92f6dc>
  dc40f0:	b940e109 	ldr	w9, [x8, #224]
  dc40f4:	35000069 	cbnz	w9, dc4100 <__start_il2cpp@@Base+0x92f6dc>
  dc40f8:	aa0803e0 	mov	x0, x8
  dc40fc:	97d9b9bc 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dc4100:	aa1503e0 	mov	x0, x21
  dc4104:	aa1f03e1 	mov	x1, xzr
  dc4108:	aa1f03e2 	mov	x2, xzr
  dc410c:	97ec4d7c 	bl	8d76fc <__start_il2cpp@@Base+0x442cd8>
  dc4110:	360001c0 	tbz	w0, #0, dc4148 <__start_il2cpp@@Base+0x92f724>
  dc4114:	f94002c0 	ldr	x0, [x22]
  dc4118:	3944cc08 	ldrb	w8, [x0, #307]
  dc411c:	361000a8 	tbz	w8, #2, dc4130 <__start_il2cpp@@Base+0x92f70c>
  dc4120:	b940e008 	ldr	w8, [x0, #224]
  dc4124:	35000068 	cbnz	w8, dc4130 <__start_il2cpp@@Base+0x92f70c>
  dc4128:	97d9b9b1 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dc412c:	f94002c0 	ldr	x0, [x22]
  dc4130:	f9405c08 	ldr	x8, [x0, #184]
  dc4134:	f9400500 	ldr	x0, [x8, #8]
  dc4138:	b4000500 	cbz	x0, dc41d8 <__start_il2cpp@@Base+0x92f7b4>
  dc413c:	f8028c14 	str	x20, [x0, #40]!
  dc4140:	aa1403e1 	mov	x1, x20
  dc4144:	97d9b967 	bl	4326e0 <WriteZStream@@Base+0xa200>
  dc4148:	f94002c0 	ldr	x0, [x22]
  dc414c:	3944cc08 	ldrb	w8, [x0, #307]
  dc4150:	361000a8 	tbz	w8, #2, dc4164 <__start_il2cpp@@Base+0x92f740>
  dc4154:	b940e008 	ldr	w8, [x0, #224]
  dc4158:	35000068 	cbnz	w8, dc4164 <__start_il2cpp@@Base+0x92f740>
  dc415c:	97d9b9a4 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dc4160:	f94002c0 	ldr	x0, [x22]
  dc4164:	f9405c08 	ldr	x8, [x0, #184]
  dc4168:	f9400108 	ldr	x8, [x8]
  dc416c:	b40002e8 	cbz	x8, dc41c8 <__start_il2cpp@@Base+0x92f7a4>
  dc4170:	3944cc08 	ldrb	w8, [x0, #307]
  dc4174:	36100088 	tbz	w8, #2, dc4184 <__start_il2cpp@@Base+0x92f760>
  dc4178:	b940e008 	ldr	w8, [x0, #224]
  dc417c:	35000048 	cbnz	w8, dc4184 <__start_il2cpp@@Base+0x92f760>
  dc4180:	97d9b99b 	bl	4327ec <WriteZStream@@Base+0xa30c>
  dc4184:	aa1303e0 	mov	x0, x19
  dc4188:	94000015 	bl	dc41dc <__start_il2cpp@@Base+0x92f7b8>
  dc418c:	f94002c8 	ldr	x8, [x22]
  dc4190:	f9405d08 	ldr	x8, [x8, #184]
  dc4194:	f9400100 	ldr	x0, [x8]
  dc4198:	b4000200 	cbz	x0, dc41d8 <__start_il2cpp@@Base+0x92f7b4>
  dc419c:	b0002588 	adrp	x8, 1275000 <_ZTISt10bad_typeid@@Base+0x12650>
  dc41a0:	b00025c9 	adrp	x9, 127d000 <_ZTISt10bad_typeid@@Base+0x1a650>
  dc41a4:	f944dd08 	ldr	x8, [x8, #2488]
  dc41a8:	f9405529 	ldr	x9, [x9, #168]
  dc41ac:	aa1303e2 	mov	x2, x19
  dc41b0:	a9427bfd 	ldp	x29, x30, [sp, #32]
  dc41b4:	f9400101 	ldr	x1, [x8]
  dc41b8:	f9400123 	ldr	x3, [x9]
  dc41bc:	a9414ff4 	ldp	x20, x19, [sp, #16]
  dc41c0:	a8c357f6 	ldp	x22, x21, [sp], #48
  dc41c4:	17ec01f4 	b	8c4994 <__start_il2cpp@@Base+0x42ff70>
  dc41c8:	a9427bfd 	ldp	x29, x30, [sp, #32]
  dc41cc:	a9414ff4 	ldp	x20, x19, [sp, #16]
  dc41d0:	a8c357f6 	ldp	x22, x21, [sp], #48
  dc41d4:	d65f03c0 	ret
  dc41d8:	97d9b98e 	bl	432810 <WriteZStream@@Base+0xa330>
