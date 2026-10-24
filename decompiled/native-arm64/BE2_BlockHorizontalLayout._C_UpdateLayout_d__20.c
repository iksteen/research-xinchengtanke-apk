/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$.ctor @ 0x950064
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this,
   int32_t __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20___ctor_950064
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.IDisposable.Dispose @ 0x950090
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_IDisposable_Dispose (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_IDisposable_Dispose
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_IDisposable_Dispose_950090
               (void)

{
  return;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$MoveNext @ 0x950094
 * bool MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__MoveNext (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$MoveNext
   bool MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__MoveNext
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this,
   const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__MoveNext_950094
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  if ((bRam0000000001341493 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam0000000001341493 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0(param_1 + 0x18,uVar2);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x28);
    native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_Size_564030(lVar6,0);
    if (lVar7 != 0) {
      native_UnityEngine_RectTransform__set_sizeDelta_76500c(lVar7,0);
      lVar7 = *(long *)(lVar6 + 0x30);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar7 + 0x18);
        if (iVar1 < 1) {
          return 0;
        }
        uVar9 = 0;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar9) {
            uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar2,0);
          }
          plVar8 = *(long **)(lVar7 + (long)(int)uVar9 * 8 + 0x20);
          if (plVar8 == (long *)0x0) break;
          lVar7 = *plVar8;
          if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
            uVar4 = 0;
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 6) * 0x10 + 0x138);
                goto LAB_009501e8;
              }
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,6);
LAB_009501e8:
          (*(code *)*puVar3)(plVar8,puVar3[1]);
          uVar9 = uVar9 + 1;
          if (iVar1 <= (int)uVar9) {
            return 0;
          }
          lVar7 = *(long *)(lVar6 + 0x30);
        } while (lVar7 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x950230
 * Il2CppObject* MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this,
   const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current_950230
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.Collections.IEnumerator.Reset @ 0x950238
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_IEnumerator_Reset_950238
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_System_Collections_IEnumerator_Reset___12e95d8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.Collections.IEnumerator.get_Current @ 0x950278
 * Il2CppObject* MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout.<C_UpdateLayout>d__20$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_o* __this,
   const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20__System_Collections_IEnumerator_get_Current_950278
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


