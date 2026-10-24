; ContainerRemoteTankUIController$$.ctor
; void ContainerRemoteTankUIController___ctor (ContainerRemoteTankUIController_o* __this, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000ddf068 <__start_il2cpp@@Base+0x94a644>:
  ddf068:	a9be4ff4 	stp	x20, x19, [sp, #-32]!
  ddf06c:	a9017bfd 	stp	x29, x30, [sp, #16]
  ddf070:	910043fd 	add	x29, sp, #0x10
  ddf074:	f0002b34 	adrp	x20, 1346000 <__bss_start__@@Base+0x7930>
  ddf078:	397a3e88 	ldrb	w8, [x20, #3727]
  ddf07c:	aa0003f3 	mov	x19, x0
  ddf080:	370000c8 	tbnz	w8, #0, ddf098 <__start_il2cpp@@Base+0x94a674>
  ddf084:	f0002520 	adrp	x0, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  ddf088:	f9452000 	ldr	x0, [x0, #2624]
  ddf08c:	97d94dac 	bl	43273c <WriteZStream@@Base+0xa25c>
  ddf090:	320003e8 	orr	w8, wzr, #0x1
  ddf094:	393a3e88 	strb	w8, [x20, #3727]
  ddf098:	5280c0a8 	mov	w8, #0x605                 	// #1541
  ddf09c:	72a140e8 	movk	w8, #0xa07, lsl #16
  ddf0a0:	52800129 	mov	w9, #0x9                   	// #9
  ddf0a4:	b9001a68 	str	w8, [x19, #24]
  ddf0a8:	39007269 	strb	w9, [x19, #28]
  ddf0ac:	f0002534 	adrp	x20, 1286000 <_ZTISt10bad_typeid@@Base+0x23650>
  ddf0b0:	f9452294 	ldr	x20, [x20, #2624]
  ddf0b4:	52800261 	mov	w1, #0x13                  	// #19
  ddf0b8:	f9400280 	ldr	x0, [x20]
  ddf0bc:	97d94da5 	bl	432750 <WriteZStream@@Base+0xa270>
  ddf0c0:	aa0003e1 	mov	x1, x0
  ddf0c4:	91008260 	add	x0, x19, #0x20
  ddf0c8:	f9001261 	str	x1, [x19, #32]
  ddf0cc:	97d94d85 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddf0d0:	f9400280 	ldr	x0, [x20]
  ddf0d4:	52800141 	mov	w1, #0xa                   	// #10
  ddf0d8:	97d94d9e 	bl	432750 <WriteZStream@@Base+0xa270>
  ddf0dc:	aa0003e1 	mov	x1, x0
  ddf0e0:	9100a260 	add	x0, x19, #0x28
  ddf0e4:	f9001661 	str	x1, [x19, #40]
  ddf0e8:	97d94d7e 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddf0ec:	f9400280 	ldr	x0, [x20]
  ddf0f0:	52800141 	mov	w1, #0xa                   	// #10
  ddf0f4:	97d94d97 	bl	432750 <WriteZStream@@Base+0xa270>
  ddf0f8:	aa0003e1 	mov	x1, x0
  ddf0fc:	9100c260 	add	x0, x19, #0x30
  ddf100:	f9001a61 	str	x1, [x19, #48]
  ddf104:	97d94d77 	bl	4326e0 <WriteZStream@@Base+0xa200>
  ddf108:	320003e8 	orr	w8, wzr, #0x1
  ddf10c:	b9007268 	str	w8, [x19, #112]
  ddf110:	a9417bfd 	ldp	x29, x30, [sp, #16]
  ddf114:	aa1303e0 	mov	x0, x19
  ddf118:	aa1f03e1 	mov	x1, xzr
  ddf11c:	a8c24ff4 	ldp	x20, x19, [sp], #32
  ddf120:	17f0019b 	b	9df78c <__start_il2cpp@@Base+0x54ad68>
