; Assets.Scripts.Tools.HjdBleTool$$setIntegerSomeBit
; uint8_t Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit (uint8_t data, int32_t _Mask, bool flag, const MethodInfo* method);

unpacked/lib/arm64-v8a/libil2cpp.so:     file format elf64-littleaarch64


Disassembly of section il2cpp:

00000000007f7068 <__start_il2cpp@@Base+0x362644>:
  7f7068:	320003e8 	orr	w8, wzr, #0x1
  7f706c:	1ac12108 	lsl	w8, w8, w1
  7f7070:	2a000109 	orr	w9, w8, w0
  7f7074:	0a280008 	bic	w8, w0, w8
  7f7078:	7200005f 	tst	w2, #0x1
  7f707c:	1a881120 	csel	w0, w9, w8, ne	// ne = any
  7f7080:	d65f03c0 	ret
