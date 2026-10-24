/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.Benchmark04$$Start @ 0xdd30fc
 * void TMPro_Examples_Benchmark04__Start (TMPro_Examples_Benchmark04_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark04$$Start
   void TMPro_Examples_Benchmark04__Start (TMPro_Examples_Benchmark04_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_Benchmark04__Start_dd30fc
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_58;
  int iStack_54;
  
  if ((bRam0000000001346e3a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&StringLiteral__Pts_12ead90);
    native_sub_43273c(&StringLiteral_Text____12f15e0);
    native_sub_43273c(&StringLiteral__pts___Lorem_ipsum_dolor_sit____12eaee8);
    bRam0000000001346e3a = 1;
  }
  iStack_54 = 0;
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  *(undefined8 *)(param_4 + 0x28) = uVar4;
  native_sub_4326e0((long *)(param_4 + 0x28),uVar4);
  lVar5 = native_UnityEngine_Camera__get_main_8d93c0(0);
  iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  if (lVar5 != 0) {
    fVar12 = (float)(iVar1 >> 1);
    native_UnityEngine_Camera__set_orthographicSize_8d8670(fVar12,lVar5,0);
    iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
    iStack_54 = *(int *)(param_4 + 0x1c);
    iVar1 = *(int *)(param_4 + 0x20);
    if (iStack_54 <= iVar1) {
      uVar4 = 0x3f79999a;
      fVar13 = 0.0;
      do {
        fVar11 = (float)uVar4;
        if (*(int *)(param_4 + 0x18) == 0) {
          uVar4 = native_System_Int32__ToString_83c60c(&iStack_54,0);
          uVar4 = native_System_String__Concat_afc654
                            (_StringLiteral_Text____12f15e0,uVar4,_StringLiteral__Pts_12ead90,0);
          lVar5 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
          native_UnityEngine_GameObject___ctor_8de828(lVar5,uVar4,0);
          if (fVar12 + fVar12 < fVar13) {
            return;
          }
          if (lVar5 == 0) goto LAB_00dd341c;
          lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
          lVar9 = *(long *)(param_4 + 0x28);
          if ((lVar9 == 0) ||
             (fVar10 = (float)native_UnityEngine_Transform__get_position_77169c(lVar9,0), lVar6 == 0
             )) goto LAB_00dd341c;
          param_3 = param_3 + 0.0;
          native_UnityEngine_Transform__set_position_77174c
                    (fVar10 - ((float)iVar2 / (float)iVar3) * fVar12 * 0.975,
                     (fVar12 * 0.975 - fVar13) + fVar11,param_3,lVar6,0);
          plVar7 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                     (lVar5,
                                      _Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8
                                     );
          if ((plVar7 == (long *)0x0) ||
             (lVar5 = native_TMPro_TMP_Text__get_rectTransform_4b9320(plVar7,0), lVar5 == 0))
          goto LAB_00dd341c;
          uVar4 = 0x3f000000;
          native_UnityEngine_RectTransform__set_pivot_765158(0,lVar5,0);
          native_TMPro_TMP_Text__set_enableWordWrapping_4bb4f4(plVar7,0,0);
          native_TMPro_TMP_Text__set_extraPadding_4bba10(plVar7,1,0);
          native_TMPro_TMP_Text__set_isOrthographic_4bbbc0(plVar7,1,0);
          native_TMPro_TMP_Text__set_fontSize_4bae20((float)iStack_54,plVar7,0);
          uVar8 = native_System_Int32__ToString_83c60c(&iStack_54,0);
          uVar8 = native_System_String__Concat_afbd68
                            (uVar8,_StringLiteral__pts___Lorem_ipsum_dolor_sit____12eaee8,0);
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x560));
          uStack_58 = 0;
          native_UnityEngine_Color32___ctor_8d9fa0(&uStack_58,0xff,0xff,0xff,0xff,0);
          native_UnityEngine_Color32__op_Implicit_8da288(uStack_58,0);
          (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
          iVar1 = *(int *)(param_4 + 0x20);
          fVar13 = fVar13 + (float)iStack_54;
        }
        iStack_54 = *(int *)(param_4 + 0x24) + iStack_54;
      } while (iStack_54 <= iVar1);
    }
    return;
  }
LAB_00dd341c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.Benchmark04$$.ctor @ 0xdd3420
 * void TMPro_Examples_Benchmark04___ctor (TMPro_Examples_Benchmark04_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark04$$.ctor
   void TMPro_Examples_Benchmark04___ctor (TMPro_Examples_Benchmark04_o* __this, const MethodInfo*
   method); */

long native_TMPro_Examples_Benchmark04___ctor_dd3420(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 4;
  *(undefined8 *)(param_1 + 0x1c) = 0x400000000c;
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


