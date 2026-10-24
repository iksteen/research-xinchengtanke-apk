; HjdBluetoothHardwareInterface$$cal_AndroidBle_sumdata
; System_Byte_array* HjdBluetoothHardwareInterface__cal_AndroidBle_sumdata (System_Byte_array* bledata, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

0000000000dc41dc <__start_il2cpp@@Base+0x92f7b8>:
  dc41dc:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
  dc41e0:	910003fd 	mov	x29, sp
  dc41e4:	b40002a0 	cbz	x0, dc4238 <__start_il2cpp@@Base+0x92f814>
  dc41e8:	f9400c08 	ldr	x8, [x0, #24]
  dc41ec:	aa1f03eb 	mov	x11, xzr
  dc41f0:	52801d29 	mov	w9, #0xe9                  	// #233
  dc41f4:	92407d0a 	and	x10, x8, #0xffffffff
  dc41f8:	eb0a017f 	cmp	x11, x10
  dc41fc:	54000182 	b.cs	dc422c <__start_il2cpp@@Base+0x92f808>  // b.hs, b.nlast
  dc4200:	8b0b000c 	add	x12, x0, x11
  dc4204:	3940818c 	ldrb	w12, [x12, #32]
  dc4208:	f100417f 	cmp	x11, #0x10
  dc420c:	9100056b 	add	x11, x11, #0x1
  dc4210:	4a090189 	eor	w9, w12, w9
  dc4214:	54ffff29 	b.ls	dc41f8 <__start_il2cpp@@Base+0x92f7d4>  // b.plast
  dc4218:	7100491f 	cmp	w8, #0x12
  dc421c:	54000089 	b.ls	dc422c <__start_il2cpp@@Base+0x92f808>  // b.plast
  dc4220:	3900c809 	strb	w9, [x0, #50]
  dc4224:	a8c17bfd 	ldp	x29, x30, [sp], #16
  dc4228:	d65f03c0 	ret
  dc422c:	97d9b984 	bl	43283c <WriteZStream@@Base+0xa35c>
  dc4230:	aa1f03e1 	mov	x1, xzr
  dc4234:	97d9b96a 	bl	4327dc <WriteZStream@@Base+0xa2fc>
  dc4238:	97d9b976 	bl	432810 <WriteZStream@@Base+0xa330>
