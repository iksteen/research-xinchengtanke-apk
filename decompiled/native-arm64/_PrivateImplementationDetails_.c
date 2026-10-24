/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* <PrivateImplementationDetails>$$ComputeStringHash @ 0x560404
 * uint32_t _PrivateImplementationDetails___ComputeStringHash (System_String_o* s, const MethodInfo* method); */

/* <PrivateImplementationDetails>$$ComputeStringHash
   uint32_t _PrivateImplementationDetails___ComputeStringHash (System_String_o* s, const MethodInfo*
   method); */

uint native__PrivateImplementationDetails___ComputeStringHash_560404(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar3 = 0;
      do {
        uVar1 = native_System_String__get_Chars_b03810(param_1,iVar3,0);
        iVar3 = iVar3 + 1;
        uVar2 = (uVar2 ^ uVar1 & 0xffff) * 0x1000193;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
  }
  return uVar2;
}


