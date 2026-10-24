/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISnapshotPoint$$Start @ 0xc35424
 * void UISnapshotPoint__Start (UISnapshotPoint_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISnapshotPoint$$Start
   void UISnapshotPoint__Start (UISnapshotPoint_o* __this, const MethodInfo* method); */

void native_UISnapshotPoint__Start_c35424(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((bRam0000000001342750 & 1) == 0) {
    native_sub_43273c(&StringLiteral_EditorOnly_12ed988);
    bRam0000000001342750 = 1;
  }
  uVar2 = native_UnityEngine_Component__get_tag_8daa50(param_1,0);
  uVar3 = native_System_String__op_Inequality_afbbb4(uVar2,_StringLiteral_EditorOnly_12ed988,0);
  uVar2 = _StringLiteral_EditorOnly_12ed988;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (pcRam0000000001340ac0 == (code *)0x0) {
    pcRam0000000001340ac0 =
         (code *)native_sub_4326f0(&UNK_00e2d108,_StringLiteral_EditorOnly_12ed988,0);
  }
  lVar1 = (*pcRam0000000001340ac0)(param_1);
  if (lVar1 != 0) {
    if (pcRam0000000001340c18 == (code *)0x0) {
      pcRam0000000001340c18 = (code *)native_sub_4326f0(&UNK_00e2db14);
    }
                    /* WARNING: Could not recover jumptable at 0x008dab80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340c18)(lVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISnapshotPoint$$.ctor @ 0xc3549c
 * void UISnapshotPoint___ctor (UISnapshotPoint_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISnapshotPoint$$.ctor
   void UISnapshotPoint___ctor (UISnapshotPoint_o* __this, const MethodInfo* method); */

long native_UISnapshotPoint___ctor_c3549c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x1c) = 0x42c80000c2c80000;
  *(undefined8 *)(param_1 + 0x24) = 0x41f0000000000023;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


