/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexZoom.<>c__DisplayClass10_0$$.ctor @ 0x55ecdc
 * void TMPro_Examples_VertexZoom___c__DisplayClass10_0___ctor (TMPro_Examples_VertexZoom___c__DisplayClass10_0_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom.<>c__DisplayClass10_0$$.ctor
   void TMPro_Examples_VertexZoom___c__DisplayClass10_0___ctor
   (TMPro_Examples_VertexZoom___c__DisplayClass10_0_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexZoom___c__DisplayClass10_0___ctor_55ecdc(void)

{
  return;
}



/* TMPro.Examples.VertexZoom.<>c__DisplayClass10_0$$<AnimateVertexColors>b__0 @ 0x55ece4
 * int32_t TMPro_Examples_VertexZoom___c__DisplayClass10_0___AnimateVertexColors_b__0 (TMPro_Examples_VertexZoom___c__DisplayClass10_0_o* __this, int32_t a, int32_t b, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom.<>c__DisplayClass10_0$$<AnimateVertexColors>b__0
   int32_t TMPro_Examples_VertexZoom___c__DisplayClass10_0___AnimateVertexColors_b__0
   (TMPro_Examples_VertexZoom___c__DisplayClass10_0_o* __this, int32_t a, int32_t b, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexZoom___c__DisplayClass10_0___AnimateVertexColors_b__0_55ece4
               (long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_34;
  
  if ((bRam000000000133ea12 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_float__get_Item___12dce20);
    bRam000000000133ea12 = 1;
  }
  uStack_34 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    if (*(uint *)(lVar2 + 0x18) <= param_2) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    uStack_34 = *(undefined4 *)(*(long *)(lVar2 + 0x10) + (long)(int)param_2 * 4 + 0x20);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= param_3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      native_System_Single__CompareTo_af87b4
                (*(undefined4 *)(*(long *)(lVar1 + 0x10) + (long)(int)param_3 * 4 + 0x20),&uStack_34
                 ,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


