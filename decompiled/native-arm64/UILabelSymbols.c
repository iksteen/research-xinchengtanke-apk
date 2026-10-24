/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UILabelSymbols$$get_isSelectable @ 0xaee4c4
 * bool UILabelSymbols__get_isSelectable (UILabelSymbols_o* __this, const MethodInfo* method); */

/* UILabelSymbols$$get_isSelectable
   bool UILabelSymbols__get_isSelectable (UILabelSymbols_o* __this, const MethodInfo* method); */

undefined8 native_UILabelSymbols__get_isSelectable_aee4c4(void)

{
  return 0;
}



/* UILabelSymbols$$get_material @ 0xaee4cc
 * UnityEngine_Material_o* UILabelSymbols__get_material (UILabelSymbols_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabelSymbols$$get_material
   UnityEngine_Material_o* UILabelSymbols__get_material (UILabelSymbols_o* __this, const MethodInfo*
   method); */

undefined8 native_UILabelSymbols__get_material_aee4cc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342030 & 1) == 0) {
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342030 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 400);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 400) == 0) goto LAB_00aee5fc;
  uVar2 = native_UILabel__get_separateSymbols_ae99d4();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 400) == 0) goto LAB_00aee5fc;
  plVar3 = (long *)native_UILabel__get_font_ae77e8();
  if (plVar3 == (long *)0x0) {
LAB_00aee584:
    plVar3 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar3 + 300) < *(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300)) goto LAB_00aee584;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8
                 + -8) != _NGUIFont_TypeInfo_12d53b0) {
      plVar3 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (plVar3 != (long *)0x0) {
    if ((bRam000000000134043d & 1) == 0) {
      native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68,0);
      bRam000000000134043d = 1;
    }
    plVar3 = (long *)native_NGUIFont__get_symbolAtlas_8007c8(plVar3);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar2 = 0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0080172c;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar1 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_0080172c:
                    /* WARNING: Could not recover jumptable at 0x0080173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    return uVar6;
  }
LAB_00aee5fc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabelSymbols$$ClearCache @ 0xaecee8
 * void UILabelSymbols__ClearCache (UILabelSymbols_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabelSymbols$$ClearCache
   void UILabelSymbols__ClearCache (UILabelSymbols_o* __this, const MethodInfo* method); */

void native_UILabelSymbols__ClearCache_aecee8(long param_1)

{
  if ((bRam0000000001342031 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    bRam0000000001342031 = 1;
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
              (*(long *)(param_1 + 0x1a0),
               _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    if (*(long *)(param_1 + 0x1a8) != 0) {
      native_System_Collections_Generic_List_Vector2___Clear_d29680
                (*(long *)(param_1 + 0x1a8),
                 _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
      if (*(long *)(param_1 + 0x1b0) != 0) {
        native_System_Collections_Generic_List_Color___Clear_d07404
                  (*(long *)(param_1 + 0x1b0),
                   _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
        if (*(long *)(param_1 + 0x1b8) != 0) {
          native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                    (*(long *)(param_1 + 0x1b8),
                     _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
          if (*(long *)(param_1 + 0x1c0) != 0) {
            native_System_Collections_Generic_List_Vector2___Clear_d29680
                      (*(long *)(param_1 + 0x1c0),
                       _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
            if (*(long *)(param_1 + 0x1c8) != 0) {
              native_System_Collections_Generic_List_Color___Clear_d07404
                        (*(long *)(param_1 + 0x1c8),
                         _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
              *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabelSymbols$$OnDisable @ 0xaee600
 * void UILabelSymbols__OnDisable (UILabelSymbols_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabelSymbols$$OnDisable
   void UILabelSymbols__OnDisable (UILabelSymbols_o* __this, const MethodInfo* method); */

void native_UILabelSymbols__OnDisable_aee600(long param_1)

{
  native_UIWidget__OnDisable_94c644(param_1,0);
  if ((bRam0000000001342031 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    bRam0000000001342031 = 1;
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
              (*(long *)(param_1 + 0x1a0),
               _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    if (*(long *)(param_1 + 0x1a8) != 0) {
      native_System_Collections_Generic_List_Vector2___Clear_d29680
                (*(long *)(param_1 + 0x1a8),
                 _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
      if (*(long *)(param_1 + 0x1b0) != 0) {
        native_System_Collections_Generic_List_Color___Clear_d07404
                  (*(long *)(param_1 + 0x1b0),
                   _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
        if (*(long *)(param_1 + 0x1b8) != 0) {
          native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                    (*(long *)(param_1 + 0x1b8),
                     _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
          if (*(long *)(param_1 + 0x1c0) != 0) {
            native_System_Collections_Generic_List_Vector2___Clear_d29680
                      (*(long *)(param_1 + 0x1c0),
                       _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
            if (*(long *)(param_1 + 0x1c8) != 0) {
              native_System_Collections_Generic_List_Color___Clear_d07404
                        (*(long *)(param_1 + 0x1c8),
                         _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
              *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabelSymbols$$OnFill @ 0xaee628
 * void UILabelSymbols__OnFill (UILabelSymbols_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabelSymbols$$OnFill
   void UILabelSymbols__OnFill (UILabelSymbols_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

void native_UILabelSymbols__OnFill_aee628(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001342032 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__AddRange___12dd4b8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__AddRange___12dc698);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__AddRange___12dd4e8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342032 = 1;
  }
  iVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (iVar1 != *(int *)(param_1 + 0x198)) {
    native_UILabelSymbols__ClearCache_aecee8(param_1);
    uVar4 = *(undefined8 *)(param_1 + 400);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 400) == 0) goto LAB_00aee7a4;
      native_UILabel__Fill_aecfc8
                (*(long *)(param_1 + 400),*(undefined8 *)(param_1 + 0x1a0),
                 *(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0),param_2,param_3,
                 param_4);
    }
    *(int *)(param_1 + 0x198) = iVar1;
    return;
  }
  lVar3 = *(long *)(param_1 + 0x1b8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      return;
    }
    if (((param_2 != 0) &&
        (native_System_Collections_Generic_List_Vector3___AddRange_d2c084
                   (param_2,lVar3,
                    _Method_System_Collections_Generic_List_Vector3__AddRange___12dd4e8),
        param_3 != 0)) &&
       (native_System_Collections_Generic_List_Vector2___AddRange_d29650
                  (param_3,*(undefined8 *)(param_1 + 0x1c0),
                   _Method_System_Collections_Generic_List_Vector2__AddRange___12dd4b8),
       param_4 != 0)) {
      native_System_Collections_Generic_List_Color___AddRange_d073d4
                (param_4,*(undefined8 *)(param_1 + 0x1c8),
                 _Method_System_Collections_Generic_List_Color__AddRange___12dc698);
      if ((bRam0000000001342031 & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
        native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
        native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
        bRam0000000001342031 = 1;
      }
      if (*(long *)(param_1 + 0x1a0) != 0) {
        native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                  (*(long *)(param_1 + 0x1a0),
                   _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
        if (*(long *)(param_1 + 0x1a8) != 0) {
          native_System_Collections_Generic_List_Vector2___Clear_d29680
                    (*(long *)(param_1 + 0x1a8),
                     _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
          if (*(long *)(param_1 + 0x1b0) != 0) {
            native_System_Collections_Generic_List_Color___Clear_d07404
                      (*(long *)(param_1 + 0x1b0),
                       _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
            if (*(long *)(param_1 + 0x1b8) != 0) {
              native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                        (*(long *)(param_1 + 0x1b8),
                         _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
              if (*(long *)(param_1 + 0x1c0) != 0) {
                native_System_Collections_Generic_List_Vector2___Clear_d29680
                          (*(long *)(param_1 + 0x1c0),
                           _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
                if (*(long *)(param_1 + 0x1c8) != 0) {
                  native_System_Collections_Generic_List_Color___Clear_d07404
                            (*(long *)(param_1 + 0x1c8),
                             _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
                  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
LAB_00aee7a4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabelSymbols$$.ctor @ 0xaee7a8
 * void UILabelSymbols___ctor (UILabelSymbols_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabelSymbols$$.ctor
   void UILabelSymbols___ctor (UILabelSymbols_o* __this, const MethodInfo* method); */

void native_UILabelSymbols___ctor_aee7a8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((bRam0000000001342033 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2___ctor___12dd4a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color___ctor___12dc688);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    native_sub_43273c(&System_Collections_Generic_List_Vector2__TypeInfo_12d2c60);
    native_sub_43273c(&System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    native_sub_43273c(&System_Collections_Generic_List_Color__TypeInfo_12d29f0);
    bRam0000000001342033 = 1;
  }
  *(undefined4 *)(param_5 + 0x198) = 0xffffffff;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_5 + 0x1a0) = uVar1;
  native_sub_4326e0(param_5 + 0x1a0,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector2__TypeInfo_12d2c60);
  native_System_Collections_Generic_List_Vector2____ctor_d28690
            (uVar1,_Method_System_Collections_Generic_List_Vector2___ctor___12dd4a8);
  *(undefined8 *)(param_5 + 0x1a8) = uVar1;
  native_sub_4326e0(param_5 + 0x1a8,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Color__TypeInfo_12d29f0);
  native_System_Collections_Generic_List_Color____ctor_d063cc
            (uVar1,_Method_System_Collections_Generic_List_Color___ctor___12dc688);
  *(undefined8 *)(param_5 + 0x1b0) = uVar1;
  native_sub_4326e0(param_5 + 0x1b0,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_5 + 0x1b8) = uVar1;
  native_sub_4326e0(param_5 + 0x1b8,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector2__TypeInfo_12d2c60);
  native_System_Collections_Generic_List_Vector2____ctor_d28690
            (uVar1,_Method_System_Collections_Generic_List_Vector2___ctor___12dd4a8);
  *(undefined8 *)(param_5 + 0x1c0) = uVar1;
  native_sub_4326e0(param_5 + 0x1c0,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Color__TypeInfo_12d29f0);
  native_System_Collections_Generic_List_Color____ctor_d063cc
            (uVar1,_Method_System_Collections_Generic_List_Color___ctor___12dc688);
  *(undefined8 *)(param_5 + 0x1c8) = uVar1;
  native_sub_4326e0(param_5 + 0x1c8,uVar1);
  if ((bRam000000000134146b & 1) == 0) {
    native_sub_43273c(&UIGeometry_TypeInfo_12d6448,0);
    native_sub_43273c(&UIRect_TypeInfo_12d64a0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam000000000134146b = 1;
  }
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x90) = uVar2;
  *(undefined4 *)(param_5 + 0x94) = param_2;
  *(undefined4 *)(param_5 + 0xa8) = 100;
  *(undefined4 *)(param_5 + 0x98) = param_3;
  *(undefined4 *)(param_5 + 0x9c) = param_4;
  *(undefined4 *)(param_5 + 0xe0) = 0x3f800000;
  *(undefined8 *)(param_5 + 0xa0) = 0x6400000004;
  uVar1 = native_sub_432808(_UIGeometry_TypeInfo_12d6448);
  native_UIGeometry___ctor_9efb74(uVar1,0);
  *(undefined8 *)(param_5 + 0xf8) = uVar1;
  native_sub_4326e0(param_5 + 0xf8,uVar1);
  *(undefined2 *)(param_5 + 0x100) = 0x101;
  native_UnityEngine_Vector4___ctor_776f24(0,0,0x3f800000,0x3f800000,&stack0xffffffffffffffd0,0);
  *(undefined8 *)(param_5 + 0x10c) = 0;
  *(undefined8 *)(param_5 + 0x104) = 0;
  *(undefined2 *)(param_5 + 0x154) = 0x101;
  *(undefined1 *)(param_5 + 0x156) = 1;
  uVar1 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  *(undefined8 *)(param_5 + 0x168) = uVar1;
  native_sub_4326e0(param_5 + 0x168);
  *(undefined8 *)(param_5 + 0x170) = 0xffffffffffffffff;
  if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIRect___ctor_c2f37c(param_5,0);
  return;
}


