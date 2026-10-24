/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* AnimateTiledTexture.<updateTiling>d__27$$.ctor @ 0x94fbb0
 * void AnimateTiledTexture__updateTiling_d__27___ctor (AnimateTiledTexture__updateTiling_d__27_o* __this, int32_t __1__state, const MethodInfo* method); */

/* AnimateTiledTexture.<updateTiling>d__27$$.ctor
   void AnimateTiledTexture__updateTiling_d__27___ctor (AnimateTiledTexture__updateTiling_d__27_o*
   __this, int32_t __1__state, const MethodInfo* method); */

void native_AnimateTiledTexture__updateTiling_d__27___ctor_94fbb0(long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* AnimateTiledTexture.<updateTiling>d__27$$System.IDisposable.Dispose @ 0x94fbdc
 * void AnimateTiledTexture__updateTiling_d__27__System_IDisposable_Dispose (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

/* AnimateTiledTexture.<updateTiling>d__27$$System.IDisposable.Dispose
   void AnimateTiledTexture__updateTiling_d__27__System_IDisposable_Dispose
   (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

void native_AnimateTiledTexture__updateTiling_d__27__System_IDisposable_Dispose_94fbdc(void)

{
  return;
}



/* AnimateTiledTexture.<updateTiling>d__27$$MoveNext @ 0x94fbe0
 * bool AnimateTiledTexture__updateTiling_d__27__MoveNext (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture.<updateTiling>d__27$$MoveNext
   bool AnimateTiledTexture__updateTiling_d__27__MoveNext
   (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

undefined8 native_AnimateTiledTexture__updateTiling_d__27__MoveNext_94fbe0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  if ((bRam0000000001341492 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Renderer____12e4a08);
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam0000000001341492 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_0094fd60;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_0094fd60;
    *(undefined1 *)(lVar3 + 0x59) = 1;
    *(int *)(param_1 + 0x28) = *(int *)(lVar3 + 0x18) * *(int *)(lVar3 + 0x1c);
  }
  if ((*(int *)(param_1 + 0x28) <= *(int *)(lVar3 + 0x44)) &&
     (*(undefined4 *)(lVar3 + 0x44) = 0, *(char *)(lVar3 + 0x3c) != '\0')) {
    if (*(int *)(param_1 + 0x28) == *(int *)(lVar3 + 0x18)) {
      if (*(char *)(lVar3 + 0x3e) != '\0') {
        native_AnimateTiledTexture__HandleCallbacks_5628c8(lVar3,*(undefined8 *)(lVar3 + 0x60),0);
      }
      if (*(char *)(lVar3 + 0x3d) != '\0') {
        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
        if ((lVar1 == 0) ||
           (lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (lVar1,_Method_UnityEngine_GameObject_GetComponent_Renderer____12e4a08
                              ), lVar1 == 0)) {
LAB_0094fd60:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Renderer__set_enabled_768bbc(lVar1,0,0);
      }
      *(undefined1 *)(lVar3 + 0x59) = 0;
      return 0;
    }
    *(int *)(param_1 + 0x28) = *(int *)(lVar3 + 0x18);
  }
  native_AnimateTiledTexture__ApplyOffset_562990(lVar3,0);
  fVar4 = *(float *)(lVar3 + 0x38);
  *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + 1;
  uVar2 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
  native_UnityEngine_WaitForSeconds___ctor_7775c8(1.0 / fVar4,uVar2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



/* AnimateTiledTexture.<updateTiling>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x94fd64
 * Il2CppObject* AnimateTiledTexture__updateTiling_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

/* AnimateTiledTexture.<updateTiling>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   AnimateTiledTexture__updateTiling_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

undefined8
native_AnimateTiledTexture__updateTiling_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current_94fd64
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* AnimateTiledTexture.<updateTiling>d__27$$System.Collections.IEnumerator.Reset @ 0x94fd6c
 * void AnimateTiledTexture__updateTiling_d__27__System_Collections_IEnumerator_Reset (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

/* AnimateTiledTexture.<updateTiling>d__27$$System.Collections.IEnumerator.Reset
   void AnimateTiledTexture__updateTiling_d__27__System_Collections_IEnumerator_Reset
   (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

void native_AnimateTiledTexture__updateTiling_d__27__System_Collections_IEnumerator_Reset_94fd6c
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_AnimateTiledTexture__updateTiling_d__27_System_Collections_IEnumerator_Reset___12e94c0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* AnimateTiledTexture.<updateTiling>d__27$$System.Collections.IEnumerator.get_Current @ 0x94fdac
 * Il2CppObject* AnimateTiledTexture__updateTiling_d__27__System_Collections_IEnumerator_get_Current (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

/* AnimateTiledTexture.<updateTiling>d__27$$System.Collections.IEnumerator.get_Current
   Il2CppObject* AnimateTiledTexture__updateTiling_d__27__System_Collections_IEnumerator_get_Current
   (AnimateTiledTexture__updateTiling_d__27_o* __this, const MethodInfo* method); */

undefined8
native_AnimateTiledTexture__updateTiling_d__27__System_Collections_IEnumerator_get_Current_94fdac
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


