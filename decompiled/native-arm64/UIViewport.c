/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIViewport$$Start @ 0x949244
 * void UIViewport__Start (UIViewport_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIViewport$$Start
   void UIViewport__Start (UIViewport_o* __this, const MethodInfo* method); */

void native_UIViewport__Start_949244(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000134144b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144b = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  native_sub_4326e0(param_1 + 0x38);
  puVar6 = (undefined8 *)(param_1 + 0x18);
  uVar4 = *puVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    uVar4 = native_UnityEngine_Camera__get_main_8d93c0(0);
    *puVar6 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIViewport$$LateUpdate @ 0x949308
 * void UIViewport__LateUpdate (UIViewport_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIViewport$$LateUpdate
   void UIViewport__LateUpdate (UIViewport_o* __this, const MethodInfo* method); */

void native_UIViewport__LateUpdate_949308(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000134144c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144c = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      if ((*(long *)(param_3 + 0x20) == 0) ||
         (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_3 + 0x20),0),
         lVar8 == 0)) goto LAB_00949574;
      uVar7 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar8,0);
      if ((uVar7 & 1) == 0) {
        lVar8 = *(long *)(param_3 + 0x38);
        if (lVar8 == 0) goto LAB_00949574;
        uVar9 = 0;
      }
      else {
        if (*(long *)(param_3 + 0x20) == 0) {
LAB_00949574:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar8 = *(long *)(param_3 + 0x18);
        native_UnityEngine_Transform__get_position_77169c(*(long *)(param_3 + 0x20),0);
        if (lVar8 == 0) goto LAB_00949574;
        fVar10 = (float)native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar8,0);
        if (*(long *)(param_3 + 0x28) == 0) goto LAB_00949574;
        lVar8 = *(long *)(param_3 + 0x18);
        fVar16 = param_2;
        native_UnityEngine_Transform__get_position_77169c(*(long *)(param_3 + 0x28),0);
        if (lVar8 == 0) goto LAB_00949574;
        fVar11 = (float)native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar8,0);
        iVar3 = native_UnityEngine_Screen__get_width_76a5e4(0);
        iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
        iVar5 = native_UnityEngine_Screen__get_width_76a5e4(0);
        iVar6 = native_UnityEngine_Screen__get_height_76a618(0);
        uVar7 = (ulong)(uint)(fVar16 / (float)iVar4);
        uVar12 = (ulong)(uint)((fVar11 - fVar10) / (float)iVar5);
        uVar13 = (ulong)(uint)((param_2 - fVar16) / (float)iVar6);
        native_UnityEngine_Rect___ctor_7635c8
                  (fVar10 / (float)iVar3,uVar7,uVar12,uVar13,&uStack_70,0);
        fVar16 = *(float *)(param_3 + 0x30);
        fVar10 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_70,0);
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_00949574;
        uVar14 = uStack_68 & 0xffffffff;
        uVar2 = uStack_68._4_4_;
        uVar15 = uStack_70 & 0xffffffff;
        uVar1 = uStack_70._4_4_;
        uVar9 = native_UnityEngine_Camera__get_rect_8d8b48(*(long *)(param_3 + 0x38),0);
        uVar7 = native_UnityEngine_Rect__op_Inequality_763890
                          (uVar15,uVar1,uVar14,uVar2,uVar9,uVar7,uVar12,uVar13,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_3 + 0x38) == 0) goto LAB_00949574;
          native_UnityEngine_Camera__set_rect_8d8bf4
                    (uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_68 & 0xffffffff,uStack_68._4_4_,
                     *(long *)(param_3 + 0x38),0);
        }
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_00949574;
        fVar16 = fVar16 * fVar10;
        fVar10 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630
                                  (*(long *)(param_3 + 0x38),0);
        if (fVar10 != fVar16) {
          if (*(long *)(param_3 + 0x38) == 0) goto LAB_00949574;
          native_UnityEngine_Camera__set_orthographicSize_8d8670(fVar16,*(long *)(param_3 + 0x38),0)
          ;
        }
        lVar8 = *(long *)(param_3 + 0x38);
        if (lVar8 == 0) goto LAB_00949574;
        uVar9 = 1;
      }
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar8,uVar9,0);
    }
  }
  return;
}



/* UIViewport$$.ctor @ 0x949578
 * void UIViewport___ctor (UIViewport_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIViewport$$.ctor
   void UIViewport___ctor (UIViewport_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIViewport___ctor_949578(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
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


