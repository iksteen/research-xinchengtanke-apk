/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIButtonActivate$$OnClick @ 0xc91bcc
 * void UIButtonActivate__OnClick (UIButtonActivate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonActivate$$OnClick
   void UIButtonActivate__OnClick (UIButtonActivate_o* __this, const MethodInfo* method); */

void native_UIButtonActivate__OnClick_c91bcc(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  if ((bRam000000000134288c & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134288c = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x20);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar2 = cVar1 != '\0';
  if ((bRam000000000133f5b1 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,bVar2,0);
    bRam000000000133f5b1 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5b2 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b2 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar7,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
  if (!bVar2) {
    if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if ((bRam000000000133f5b0 & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000133f5b0 = 1;
    }
    if (lVar4 != 0) {
      lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      if (lVar7 != 0) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar7,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  native_NGUITools__Activate_7318f8(lVar4,1);
  lVar7 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
  if ((bRam000000000133f5b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b3 = 1;
  }
  if (lVar7 != 0) {
    lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar7,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_00731db4;
      native_UIWidget__CreatePanel_949fec(lVar4,0);
    }
    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar7,0);
    if (0 < iVar3) {
      iVar8 = 0;
      do {
        uVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,iVar8,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        native_NGUITools__CallCreatePanel_731c84(uVar6);
        iVar8 = iVar8 + 1;
      } while (iVar3 != iVar8);
    }
    return;
  }
LAB_00731db4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonActivate$$.ctor @ 0xc91c90
 * void UIButtonActivate___ctor (UIButtonActivate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonActivate$$.ctor
   void UIButtonActivate___ctor (UIButtonActivate_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIButtonActivate___ctor_c91c90(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}


