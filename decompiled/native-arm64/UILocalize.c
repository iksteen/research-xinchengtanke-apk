/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UILocalize$$set_value @ 0xaee950
 * void UILocalize__set_value (UILocalize_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILocalize$$set_value
   void UILocalize__set_value (UILocalize_o* __this, System_String_o* value, const MethodInfo*
   method); */

void native_UILocalize__set_value_aee950
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,
               undefined8 param_5,long param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  ushort uVar27;
  int iVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  float fVar32;
  ulong uVar33;
  float fVar35;
  undefined8 uVar34;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  
  if ((bRam0000000001342034 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIButton____12e5730);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIInput____12e5758);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    native_sub_43273c(&UISprite_TypeInfo_12d64c0);
    bRam0000000001342034 = 1;
  }
  uVar19 = native_System_String__IsNullOrEmpty_b09430(param_6,0);
  if ((uVar19 & 1) != 0) {
    return;
  }
  plVar20 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (param_5,
                               _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  if (plVar20 == (long *)0x0) {
    plVar29 = (long *)0x0;
    plVar20 = (long *)0x0;
  }
  else {
    lVar26 = *plVar20;
    if (*(byte *)(lVar26 + 300) < *(byte *)(_UILabel_TypeInfo_12d6468 + 300)) {
      plVar29 = (long *)0x0;
    }
    else {
      plVar29 = plVar20;
      if (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(_UILabel_TypeInfo_12d6468 + 300) * 8
                   + -8) != _UILabel_TypeInfo_12d6468) {
        plVar29 = (long *)0x0;
      }
    }
    if (*(byte *)(lVar26 + 300) < *(byte *)(_UISprite_TypeInfo_12d64c0 + 300)) {
      plVar20 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(lVar26 + 200) +
                       (ulong)*(byte *)(_UISprite_TypeInfo_12d64c0 + 300) * 8 + -8) !=
             _UISprite_TypeInfo_12d64c0) {
      plVar20 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
  if ((uVar19 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar20,0,0);
    if ((uVar19 & 1) == 0) {
      return;
    }
    if (plVar20 != (long *)0x0) {
      uVar21 = native_UnityEngine_Component__get_gameObject_8da66c(plVar20,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar26 = native_NGUITools__FindInParents_object__4a5c04
                         (uVar21,_Method_NGUITools_FindInParents_UIButton____12e5730);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar26,0,0);
      if ((uVar19 & 1) != 0) {
        if (lVar26 == 0) goto LAB_00aeecf0;
        uVar16 = *(undefined8 *)(lVar26 + 0x18);
        uVar21 = native_UnityEngine_Component__get_gameObject_8da66c(plVar20,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar16,uVar21,0);
        if ((uVar19 & 1) != 0) {
          native_UIButton__set_normalSprite_c90628(lVar26,param_6,0);
        }
      }
      native_UISprite__set_spriteName_c35c6c(plVar20,param_6,0);
                    /* WARNING: Could not recover jumptable at 0x00aeecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar20 + 0x3a8))(plVar20,*(undefined8 *)(*plVar20 + 0x3b0));
      return;
    }
LAB_00aeecf0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (plVar29 == (long *)0x0) goto LAB_00aeecf0;
  uVar21 = native_UnityEngine_Component__get_gameObject_8da66c(plVar29,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  plVar20 = (long *)native_NGUITools__FindInParents_object__4a5c04
                              (uVar21,_Method_NGUITools_FindInParents_UIInput____12e5758);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar20,0,0);
  if ((uVar19 & 1) == 0) {
code_r0x00ae81a8:
    if ((bRam0000000001342005 & 1) == 0) {
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam0000000001342005 = 1;
    }
    uVar19 = native_System_String__op_Equality_afc18c(plVar29[0x35],param_6,0);
    if ((uVar19 & 1) == 0) {
      uVar19 = native_System_String__IsNullOrEmpty_b09430(param_6,0);
      lVar26 = plVar29[0x35];
      if ((uVar19 & 1) == 0) {
        uVar19 = native_System_String__op_Inequality_afbbb4(lVar26,param_6,0);
        if ((uVar19 & 1) == 0) {
          return;
        }
        plVar29[0x35] = param_6;
      }
      else {
        uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar26,0);
        param_6 = _StringLiteral__12eaac0;
        if ((uVar19 & 1) != 0) {
          return;
        }
        plVar29[0x35] = _StringLiteral__12eaac0;
      }
      native_sub_4326e0(plVar29 + 0x35,param_6);
      (**(code **)(*plVar29 + 0x378))(plVar29,*(undefined8 *)(*plVar29 + 0x380));
      native_UILabel__ProcessAndRequest_ae7fdc(plVar29);
      if ((char)plVar29[0x1b] != '\0') {
        if ((bRam000000000134145d & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000134145d = 1;
        }
        lVar26 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar29,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar26,0,0);
        if ((uVar19 & 1) == 0) {
          lVar26 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (plVar29,
                              _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
          fVar32 = (float)param_3;
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          if ((bRam000000000133f58e & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar26,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58e = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar26,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar23 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar23 = (**(code **)(lVar23 + 0x1d8))(plVar29,*(undefined8 *)(lVar23 + 0x1e0));
            if (lVar23 == 0) goto LAB_0072ea2c;
            if ((*(uint *)(lVar23 + 0x18) == 0) || (*(uint *)(lVar23 + 0x18) < 3)) {
LAB_0072ea30:
              uVar21 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar21,0);
            }
            uVar21 = *(undefined8 *)(lVar23 + 0x20);
            uVar16 = *(undefined8 *)(lVar23 + 0x38);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar23 + 0x18) < 3) goto LAB_0072ea30;
            if (lVar26 == 0) goto LAB_0072ea2c;
            uVar34 = *(undefined8 *)(lVar23 + 0x38);
            fVar39 = (float)uVar21;
            fVar35 = (float)((ulong)uVar21 >> 0x20);
            fVar39 = fVar39 + ((float)uVar16 - fVar39) * fVar32;
            fVar35 = fVar35 + ((float)((ulong)uVar16 >> 0x20) - fVar35) * fVar32;
            uVar21 = CONCAT44(fVar35,fVar39);
            fVar37 = (float)uVar34 - (float)*(undefined8 *)(lVar23 + 0x20);
            param_4 = (float)((ulong)uVar34 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar23 + 0x20) >> 0x20);
            uVar19 = CONCAT44(param_4,fVar37);
            fVar32 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar26,0);
            fVar39 = fVar39 - fVar32;
            fVar32 = fVar35 - (float)uVar34;
            if ((fVar39 * fVar39 + fVar32 * fVar32 < 9.9999994e-11) &&
               (uVar16 = uVar21,
               fVar32 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar26,0),
               fVar37 = fVar37 - fVar32, fVar32 = param_4 - (float)uVar16,
               fVar37 * fVar37 + fVar32 * fVar32 < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(uVar21,fVar35,lVar26,0);
          }
          else {
            fVar39 = (float)(**(code **)(lVar23 + 0x2f8))(plVar29,*(undefined8 *)(lVar23 + 0x300));
            if (lVar26 == 0) goto LAB_0072ea2c;
            uVar19 = (ulong)(uint)(fVar32 - fVar39);
            fVar40 = (fVar39 + fVar32) * 0.5;
            fVar35 = (param_2 + param_4) * 0.5;
            param_4 = param_4 - param_2;
            fVar37 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar26,0);
            fVar37 = fVar40 - fVar37;
            param_2 = fVar35 - param_2;
            param_2 = param_2 * param_2;
            if ((fVar37 * fVar37 + param_2 < 9.9999994e-11) &&
               (fVar37 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar26,0),
               fVar37 = (fVar32 - fVar39) - fVar37,
               fVar37 * fVar37 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(fVar40,fVar35,lVar26,0);
          }
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar19,param_4,lVar26,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        else {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f58d & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar26,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58d = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar26,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar23 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar23 = (**(code **)(lVar23 + 0x1d8))(plVar29,*(undefined8 *)(lVar23 + 0x1e0));
            if (lVar23 == 0) goto LAB_0072e730;
            if ((*(uint *)(lVar23 + 0x18) == 0) || (*(uint *)(lVar23 + 0x18) < 3)) {
LAB_0072e734:
              uVar21 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar21,0);
            }
            uVar21 = *(undefined8 *)(lVar23 + 0x20);
            fVar37 = *(float *)(lVar23 + 0x28);
            uVar16 = *(undefined8 *)(lVar23 + 0x38);
            fVar39 = *(float *)(lVar23 + 0x40);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar23 + 0x18) < 3) goto LAB_0072e734;
            if (lVar26 == 0) goto LAB_0072e730;
            fVar40 = (float)uVar21;
            fVar35 = (float)((ulong)uVar21 >> 0x20);
            fVar39 = fVar39 - fVar37;
            uVar13 = (ulong)(uint)fVar39;
            fVar35 = fVar35 + ((float)((ulong)uVar16 >> 0x20) - fVar35) * fVar32;
            uVar34 = CONCAT44(fVar35,fVar40 + ((float)uVar16 - fVar40) * fVar32);
            uVar38 = (ulong)(uint)(fVar37 + fVar39 * fVar32);
            fVar39 = (float)((ulong)*(undefined8 *)(lVar23 + 0x38) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar23 + 0x20) >> 0x20);
            uVar33 = CONCAT44(fVar39,(float)*(undefined8 *)(lVar23 + 0x38) -
                                     (float)*(undefined8 *)(lVar23 + 0x20));
            fVar32 = *(float *)(lVar23 + 0x40) - *(float *)(lVar23 + 0x28);
            uVar21 = uVar34;
            uVar16 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar26,0);
            uVar19 = (ulong)(uint)fVar35;
            uVar14 = uVar19;
            uVar36 = uVar38;
            uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar34,uVar19,uVar38,uVar16,uVar21,uVar13,0);
            if ((uVar13 & 1) == 0) {
              uVar21 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar26,0);
              uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,fVar32,uVar21,uVar14,uVar36,0);
              if ((uVar14 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar34,uVar19,uVar38,lVar26,0);
          }
          else {
            fVar32 = (float)(**(code **)(lVar23 + 0x2f8))(plVar29,*(undefined8 *)(lVar23 + 0x300));
            if (lVar26 == 0) goto LAB_0072e730;
            uVar33 = (ulong)(uint)((float)param_3 - fVar32);
            fVar39 = param_4 - param_2;
            uVar14 = (ulong)(uint)(param_2 + param_4);
            uVar36 = (ulong)(uint)((param_2 + param_4) * 0.5);
            fVar37 = (fVar32 + (float)param_3) * 0.5;
            uVar21 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar26,0);
            uVar16 = 0;
            fVar32 = 0.0;
            uVar19 = uVar36;
            uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (fVar37,uVar36,0,uVar21,uVar14,param_3,0);
            if ((uVar14 & 1) == 0) {
              uVar21 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar26,0);
              uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,0,uVar21,uVar19,uVar16,0);
              if ((uVar19 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar37,uVar36,0,lVar26,0);
          }
          native_UnityEngine_BoxCollider__set_size_dbab64(uVar33,fVar39,fVar32,lVar26,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        lVar26 = _NGUITools_TypeInfo_12d53c8;
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        piVar25 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
        while (*piVar25 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar4) {
            *piVar25 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        lVar23 = native_sub_432c38();
        if (lVar23 == lRam00000000013451d0) {
          iRam00000000013451d8 = iRam00000000013451d8 + 1;
        }
        else {
          iVar10 = 0;
          do {
            iVar11 = iRam0000000001345190;
            if (iRam0000000001345190 == iVar10) {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                cVar6 = ExclusiveMonitorsStatus();
                iRam0000000001345190 = iVar10 + 1;
              }
              if (cVar6 != '\0') goto code_r0x003cc248;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
code_r0x003cc248:
              bVar4 = false;
            }
          } while ((iVar11 != 2) && (iVar10 = iVar11, !bVar4));
          while (iVar11 != 0) {
            native_sub_432bb4(0x1345190,2,0xffffffff);
            do {
              iVar11 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 2;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          iRam00000000013451d8 = 1;
          lRam00000000013451d0 = lVar23;
        }
        while (*piVar25 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar4) {
            *piVar25 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            if (iRam00000000013451d8 < 1) {
              return;
            }
            if (iRam00000000013451d8 + -1 != 0) {
              iRam00000000013451d8 = iRam00000000013451d8 + -1;
              return;
            }
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar10 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != 2) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              return;
            }
            (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar1 = (int *)(lVar26 + 0xdc);
        do {
          if (*piVar1 != 1) {
            ClearExclusiveLocal();
            DataMemoryBarrier(2,3);
            puVar15 = (undefined8 *)(lVar26 + 0xe8);
            uVar21 = native_sub_3aad3c();
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar15,0x10);
              if (bVar4) {
                *puVar15 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            iVar10 = iRam00000000013451d8 + -1;
            if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar10 = iRam0000000001345190;
                cVar6 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar4) {
                  iRam0000000001345190 = 0;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 == 2) {
                native_sub_432c0c(0x1345190,1,0);
              }
            }
            if (((*(byte *)(lVar26 + 0x133) >> 2 & 1) != 0) &&
               (lVar26 = native_sub_3c573c(lVar26,&UNK_00edd9af,0xffffffff,0x800), lVar26 != 0)) {
              native_sub_3d704c(lVar26,0,0,&stack0xffffffffffffffb8);
            }
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar4) {
                *piVar25 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar15,0x10);
              if (bVar4) {
                *puVar15 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            return;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        iVar10 = iRam00000000013451d8 + -1;
        if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar10 = iRam0000000001345190;
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar4) {
              iRam0000000001345190 = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 2) {
            native_sub_432c0c(0x1345190,1,0);
          }
        }
        lVar23 = native_sub_3aad3c();
        plVar20 = (long *)(lVar26 + 0xe8);
        do {
          lVar26 = *plVar20;
          if (lVar26 != lVar23) {
            ClearExclusiveLocal();
            break;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar23;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar26 != lVar23) {
          do {
            iVar10 = *piVar25;
            if (iVar10 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar4) {
              *piVar25 = 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar10 == 0) {
            native_sub_3a30dc(1,0);
            do {
              iVar10 = *piVar25;
              if (iVar10 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar4) {
                *piVar25 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
          }
        }
        return;
      }
    }
    return;
  }
  if (plVar20 == (long *)0x0) goto LAB_00aeecf0;
  lVar26 = plVar20[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar26,plVar29,0);
  if ((uVar19 & 1) == 0) goto code_r0x00ae81a8;
  if (*(char *)((long)plVar20 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar20,param_6,0);
  }
  plVar20[0x13] = param_6;
  native_sub_4326e0(plVar20 + 0x13,param_6);
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar29 = plVar20 + 3;
  lVar26 = *plVar29;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar26,0,0);
  if ((uVar19 & 1) == 0) {
    return;
  }
  if (*(char *)((long)plVar20 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar20);
  }
  uVar7 = native_UIInput__get_isSelected_9f283c(plVar20);
  if (*(char *)((long)plVar20 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar20);
  }
  lVar26 = plVar20[0x12];
  uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar26,0);
  if ((uVar19 & 1) == 0) {
    lVar23 = *plVar29;
    uVar8 = 0;
LAB_009f1c84:
    plVar18 = plVar20 + 9;
    puVar2 = (undefined4 *)((long)plVar20 + 0x4c);
    plVar30 = plVar20 + 10;
    puVar3 = (undefined4 *)((long)plVar20 + 0x54);
  }
  else {
    uVar21 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar8 = native_System_String__IsNullOrEmpty_b09430(uVar21,0);
    lVar23 = *plVar29;
    if (((uVar7 | uVar8 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar18 = plVar20 + 0x14;
    puVar2 = (undefined4 *)((long)plVar20 + 0xa4);
    plVar30 = plVar20 + 0x15;
    puVar3 = (undefined4 *)((long)plVar20 + 0xac);
    uVar8 = 1;
  }
  if (lVar23 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar18,*puVar2,(int)*plVar30,*puVar3,lVar23,0);
  uVar21 = _StringLiteral___12eb5f0;
  lVar23 = _StringLiteral__12eaac0;
  if ((uVar8 & 1) == 0) {
    if ((int)plVar20[4] == 2) {
      if (*plVar29 == 0) goto LAB_009f2784;
      plVar18 = (long *)native_UILabel__get_font_ae77e8(*plVar29,0);
      uVar16 = uVar21;
      if (plVar18 != (long *)0x0) {
        lVar24 = *plVar18;
        if ((ulong)*(ushort *)(lVar24 + 0x12a) != 0) {
          uVar19 = 0;
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar15 = (undefined8 *)(lVar24 + (long)(*piVar25 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar19 = uVar19 + 1;
            piVar25 = piVar25 + 4;
          } while (uVar19 < *(ushort *)(lVar24 + 0x12a));
        }
        puVar15 = (undefined8 *)native_sub_3c9b34(plVar18,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar24 = (*(code *)*puVar15)(plVar18,puVar15[1]);
        if (lVar24 != 0) {
          lVar24 = *plVar18;
          if ((ulong)*(ushort *)(lVar24 + 0x12a) != 0) {
            uVar19 = 0;
            piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar15 = (undefined8 *)(lVar24 + (long)(*piVar25 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar19 = uVar19 + 1;
              piVar25 = piVar25 + 4;
            } while (uVar19 < *(ushort *)(lVar24 + 0x12a));
          }
          puVar15 = (undefined8 *)native_sub_3c9b34(plVar18,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar24 = (*(code *)*puVar15)(plVar18,puVar15[1]);
          if (lVar24 == 0) goto LAB_009f2784;
          lVar24 = native_BMFont__GetGlyph_dd1c0c(lVar24,0x2a,0);
          uVar16 = _StringLiteral_x_12f6b98;
          if (lVar24 != 0) {
            uVar16 = uVar21;
          }
        }
      }
      if (lVar26 == 0) goto LAB_009f2784;
      iVar10 = *(int *)(lVar26 + 0x10);
      if (0 < iVar10) {
        do {
          lVar23 = native_System_String__Concat_afbd68(lVar23,uVar16,0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      lVar26 = lVar23;
      if ((uVar7 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar26 == 0) goto LAB_009f2784;
      uVar12 = *(undefined4 *)(lVar26 + 0x10);
      uVar9 = native_UIInput__get_cursorPosition_9f3090(plVar20);
      iVar10 = native_UnityEngine_Mathf__Min_8e4c18(uVar12,uVar9,0);
      uVar21 = native_System_String__Substring_b09fac(lVar26,0,iVar10,0);
      uVar16 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar21 = native_System_String__Concat_afbd68(uVar21,uVar16,0);
    }
    else {
      if ((uVar7 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar26 == 0) goto LAB_009f2784;
      uVar21 = native_System_String__Substring_b09fac(lVar26,0,0,0);
      iVar10 = 0;
    }
    uVar16 = native_System_String__Substring_b09fac
                       (lVar26,iVar10,*(int *)(lVar26 + 0x10) - iVar10,0);
    lVar26 = native_System_String__Concat_afbd68(uVar21,uVar16,0);
    if ((uVar7 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar23 = *plVar29;
      if (lVar23 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar20[0x17];
      goto LAB_009f1fe8;
    }
    lVar23 = *plVar29;
    if (lVar23 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar23 + 0x1e4) != 1) || (*(int *)(lVar23 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar11 = native_UILabel__CalculateOffsetToFit_aedc24(lVar23,lVar26,0);
    uVar5 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar27 = uVar5 & 0x400;
    if (iVar11 == 0) {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar23 = *plVar29;
      if (lVar23 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar20[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar23,uVar12,0);
    }
    else {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar27 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar25 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar28 = *piVar25;
      if (iVar10 < iVar28) {
        if ((uVar27 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar25 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar25 = iVar10;
LAB_009f266c:
        lVar23 = *plVar29;
        if (lVar23 == 0) goto LAB_009f2784;
        uVar12 = 1;
        goto LAB_009f2678;
      }
      if ((uVar27 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar25 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar28 = *piVar25;
      }
      if (iVar11 < iVar28) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar25 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar25 = iVar11;
        goto LAB_009f266c;
      }
      if (lVar26 == 0) goto LAB_009f2784;
      lVar23 = *plVar29;
      uVar21 = native_System_String__Substring_b09fac(lVar26,0,iVar10,0);
      if (lVar23 == 0) goto LAB_009f2784;
      iVar10 = native_UILabel__CalculateOffsetToFit_aedc24(lVar23,uVar21,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar25 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar25 < iVar10) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar25 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar25 = iVar10;
        lVar23 = *plVar29;
        if (lVar23 == 0) goto LAB_009f2784;
        uVar12 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar10 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar26 == 0) goto LAB_009f2784;
      lVar26 = native_System_String__Substring_b09fac
                         (lVar26,iVar10,*(int *)(lVar26 + 0x10) - iVar10,0);
    }
  }
  else {
    lVar23 = *plVar29;
    if (lVar23 == 0) goto LAB_009f2784;
    uVar12 = (undefined4)plVar20[0x17];
    plVar18 = (long *)&StringLiteral__12eaac0;
    if ((uVar7 & 1) == 0) {
      plVar18 = plVar20 + 0x13;
    }
    lVar26 = *plVar18;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar23,uVar12,0);
  }
  if (*plVar29 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar29,lVar26,0);
  if ((uVar7 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar20 + 0x1c8))(plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar19 = native_UIInput__get_inputShouldBeHidden_9f28e0(plVar20), (uVar19 & 1) == 0))
  goto LAB_009f2280;
  lVar26 = plVar20[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar18 = plVar20 + 0x1b;
  lVar23 = *plVar18;
  iVar11 = *(int *)((long)plVar20 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
  if ((uVar19 & 1) != 0) {
    lVar23 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar23,2,2,5,0,0);
    *plVar18 = lVar23;
    native_sub_4326e0(plVar18,lVar23);
    iVar28 = 0;
    do {
      iVar22 = 0;
      do {
        lVar23 = *plVar18;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar23 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar23,iVar22,iVar28,0);
        bVar4 = iVar22 == 0;
        iVar22 = 1;
      } while (bVar4);
      bVar4 = iVar28 == 0;
      iVar28 = 1;
    } while (bVar4);
    if (*plVar18 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar18,0);
  }
  iVar28 = (int)lVar26 - iVar10;
  iVar11 = iVar11 - iVar10;
  if (iVar28 != iVar11) {
    plVar30 = plVar20 + 0x19;
    lVar26 = *plVar30;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar26,0,0);
    if ((uVar19 & 1) == 0) {
      plVar17 = (long *)*plVar29;
      if (plVar17 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      plVar17 = (long *)*plVar30;
      if (plVar17 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar17 + 0x338))(plVar17,*plVar18,*(undefined8 *)(*plVar17 + 0x340));
      plVar17 = (long *)*plVar30;
      if (plVar17 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380));
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
    }
    else {
      if (*plVar29 == 0) goto LAB_009f2784;
      uVar21 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar26 = native_NGUITools__AddWidget_object__4a528c
                         (uVar21,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar30 = lVar26;
      native_sub_4326e0(plVar30,lVar26);
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Highlight_12ee898,0);
      plVar17 = (long *)*plVar30;
      if (plVar17 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar17 + 0x338))(plVar17,*plVar18,*(undefined8 *)(*plVar17 + 0x340));
      if (*plVar30 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar30 + 0x100) = 0;
      plVar17 = (long *)*plVar29;
      if (plVar17 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      if (*plVar29 == 0) goto LAB_009f2784;
      lVar26 = *plVar30;
      uVar21 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
      if (lVar26 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar26,uVar21,0);
    }
  }
  plVar30 = plVar20 + 0x1a;
  lVar26 = *plVar30;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar26,0,0);
  if ((uVar19 & 1) == 0) {
    plVar17 = (long *)*plVar29;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    plVar31 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    if (plVar31 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
    plVar17 = (long *)*plVar30;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar17 + 0x338))(plVar17,*plVar18,*(undefined8 *)(*plVar17 + 0x340));
    plVar18 = (long *)*plVar30;
    if (plVar18 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar18 + 0x378))(plVar18,*(undefined8 *)(*plVar18 + 0x380));
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
  }
  else {
    if (*plVar29 == 0) goto LAB_009f2784;
    uVar21 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar26 = native_NGUITools__AddWidget_object__4a528c
                       (uVar21,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar30 = lVar26;
    native_sub_4326e0(plVar30,lVar26);
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Caret_12ee890,0);
    plVar17 = (long *)*plVar30;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar17 + 0x338))(plVar17,*plVar18,*(undefined8 *)(*plVar17 + 0x340));
    if (*plVar30 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar30 + 0x100) = 0;
    plVar18 = (long *)*plVar29;
    if (plVar18 == (long *)0x0) goto LAB_009f2784;
    plVar17 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar18 + 0x2a8))(plVar18,*(undefined8 *)(*plVar18 + 0x2b0));
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar17 + 0x2b8))(plVar17,uVar12,*(undefined8 *)(*plVar17 + 0x2c0));
    if (*plVar29 == 0) goto LAB_009f2784;
    lVar26 = *plVar30;
    uVar21 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
    if (lVar26 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar26,uVar21,0);
  }
  if (*plVar30 == 0) goto LAB_009f2784;
  lVar26 = *plVar29;
  uVar21 = *(undefined8 *)(*plVar30 + 0xf8);
  if (iVar28 == iVar11) {
    if (lVar26 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar20[0xb],*(undefined4 *)((long)plVar20 + 0x5c),(int)plVar20[0xc],
               *(undefined4 *)((long)plVar20 + 100),(int)plVar20[0xd],
               *(undefined4 *)((long)plVar20 + 0x6c),(int)plVar20[0xe],
               *(undefined4 *)((long)plVar20 + 0x74),lVar26,iVar28,iVar28,uVar21,0,0);
    lVar26 = plVar20[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar26,0,0);
    if ((uVar19 & 1) != 0) {
      lVar26 = plVar20[0x19];
      if (lVar26 == 0) goto LAB_009f2784;
      uVar7 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((plVar20[0x19] == 0) || (lVar26 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar20[0xb],*(undefined4 *)((long)plVar20 + 0x5c),(int)plVar20[0xc],
               *(undefined4 *)((long)plVar20 + 100),(int)plVar20[0xd],
               *(undefined4 *)((long)plVar20 + 0x6c),(int)plVar20[0xe],
               *(undefined4 *)((long)plVar20 + 0x74),lVar26,iVar28,iVar11,uVar21,
               *(undefined8 *)(plVar20[0x19] + 0xf8),0);
    lVar26 = plVar20[0x19];
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0xf8) == 0)) goto LAB_009f2784;
    uVar7 = native_UIGeometry__get_hasVertices_9ef420();
    uVar7 = uVar7 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar26,uVar7,0);
  }
  fVar32 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(plVar20 + 0x1c) = fVar32 + 0.5;
  if (plVar20[3] != 0) {
    *(undefined4 *)((long)plVar20 + 0xe4) = *(undefined4 *)(plVar20[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILocalize$$OnEnable @ 0xaeecf4
 * void UILocalize__OnEnable (UILocalize_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILocalize$$OnEnable
   void UILocalize__OnEnable (UILocalize_o* __this, const MethodInfo* method); */

void native_UILocalize__OnEnable_aeecf4
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  ushort uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  float fVar32;
  ulong uVar33;
  float fVar35;
  undefined8 uVar34;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  
  if (*(char *)(param_5 + 0x20) == '\0') {
    return;
  }
  if ((bRam0000000001342035 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342035 = 1;
  }
  puVar27 = (undefined8 *)(param_5 + 0x18);
  uVar19 = native_System_String__IsNullOrEmpty_b09430(*puVar27,0);
  if ((uVar19 & 1) != 0) {
    lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                       (param_5,_Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
    if ((uVar19 & 1) != 0) {
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *puVar27 = *(undefined8 *)(lVar20 + 0x1a8);
      native_sub_4326e0(puVar27);
    }
  }
  uVar19 = native_System_String__IsNullOrEmpty_b09430(*puVar27,0);
  if ((uVar19 & 1) != 0) {
    return;
  }
  uVar28 = *puVar27;
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar20 = native_Localization__Get_7fae58(uVar28,1,0);
  if ((bRam0000000001342034 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIButton____12e5730);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIInput____12e5758);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    native_sub_43273c(&UISprite_TypeInfo_12d64c0);
    bRam0000000001342034 = 1;
  }
  uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
  if ((uVar19 & 1) != 0) {
    return;
  }
  plVar18 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (param_5,
                               _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  if (plVar18 == (long *)0x0) {
    plVar29 = (long *)0x0;
    plVar18 = (long *)0x0;
  }
  else {
    lVar24 = *plVar18;
    if (*(byte *)(lVar24 + 300) < *(byte *)(_UILabel_TypeInfo_12d6468 + 300)) {
      plVar29 = (long *)0x0;
    }
    else {
      plVar29 = plVar18;
      if (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(_UILabel_TypeInfo_12d6468 + 300) * 8
                   + -8) != _UILabel_TypeInfo_12d6468) {
        plVar29 = (long *)0x0;
      }
    }
    if (*(byte *)(lVar24 + 300) < *(byte *)(_UISprite_TypeInfo_12d64c0 + 300)) {
      plVar18 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(lVar24 + 200) +
                       (ulong)*(byte *)(_UISprite_TypeInfo_12d64c0 + 300) * 8 + -8) !=
             _UISprite_TypeInfo_12d64c0) {
      plVar18 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
  if ((uVar19 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar18,0,0);
    if ((uVar19 & 1) == 0) {
      return;
    }
    if (plVar18 != (long *)0x0) {
      uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar18,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar24 = native_NGUITools__FindInParents_object__4a5c04
                         (uVar28,_Method_NGUITools_FindInParents_UIButton____12e5730);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
      if ((uVar19 & 1) != 0) {
        if (lVar24 == 0) goto LAB_00aeecf0;
        uVar15 = *(undefined8 *)(lVar24 + 0x18);
        uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar18,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar15,uVar28,0);
        if ((uVar19 & 1) != 0) {
          native_UIButton__set_normalSprite_c90628(lVar24,lVar20,0);
        }
      }
      native_UISprite__set_spriteName_c35c6c(plVar18,lVar20,0);
                    /* WARNING: Could not recover jumptable at 0x00aeecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar18 + 0x3a8))(plVar18,*(undefined8 *)(*plVar18 + 0x3b0));
      return;
    }
LAB_00aeecf0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (plVar29 == (long *)0x0) goto LAB_00aeecf0;
  uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar29,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  plVar18 = (long *)native_NGUITools__FindInParents_object__4a5c04
                              (uVar28,_Method_NGUITools_FindInParents_UIInput____12e5758);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar18,0,0);
  if ((uVar19 & 1) == 0) {
code_r0x00ae81a8:
    if ((bRam0000000001342005 & 1) == 0) {
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam0000000001342005 = 1;
    }
    uVar19 = native_System_String__op_Equality_afc18c(plVar29[0x35],lVar20,0);
    if ((uVar19 & 1) == 0) {
      uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
      lVar24 = plVar29[0x35];
      if ((uVar19 & 1) == 0) {
        uVar19 = native_System_String__op_Inequality_afbbb4(lVar24,lVar20,0);
        if ((uVar19 & 1) == 0) {
          return;
        }
        plVar29[0x35] = lVar20;
      }
      else {
        uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar24,0);
        lVar20 = _StringLiteral__12eaac0;
        if ((uVar19 & 1) != 0) {
          return;
        }
        plVar29[0x35] = _StringLiteral__12eaac0;
      }
      native_sub_4326e0(plVar29 + 0x35,lVar20);
      (**(code **)(*plVar29 + 0x378))(plVar29,*(undefined8 *)(*plVar29 + 0x380));
      native_UILabel__ProcessAndRequest_ae7fdc(plVar29);
      if ((char)plVar29[0x1b] != '\0') {
        if ((bRam000000000134145d & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000134145d = 1;
        }
        lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar29,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar19 & 1) == 0) {
          lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (plVar29,
                              _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
          fVar32 = (float)param_3;
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          if ((bRam000000000133f58e & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58e = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar24 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar24 = (**(code **)(lVar24 + 0x1d8))(plVar29,*(undefined8 *)(lVar24 + 0x1e0));
            if (lVar24 == 0) goto LAB_0072ea2c;
            if ((*(uint *)(lVar24 + 0x18) == 0) || (*(uint *)(lVar24 + 0x18) < 3)) {
LAB_0072ea30:
              uVar28 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar28,0);
            }
            uVar28 = *(undefined8 *)(lVar24 + 0x20);
            uVar15 = *(undefined8 *)(lVar24 + 0x38);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar24 + 0x18) < 3) goto LAB_0072ea30;
            if (lVar20 == 0) goto LAB_0072ea2c;
            uVar34 = *(undefined8 *)(lVar24 + 0x38);
            fVar39 = (float)uVar28;
            fVar35 = (float)((ulong)uVar28 >> 0x20);
            fVar39 = fVar39 + ((float)uVar15 - fVar39) * fVar32;
            fVar35 = fVar35 + ((float)((ulong)uVar15 >> 0x20) - fVar35) * fVar32;
            uVar28 = CONCAT44(fVar35,fVar39);
            fVar37 = (float)uVar34 - (float)*(undefined8 *)(lVar24 + 0x20);
            param_4 = (float)((ulong)uVar34 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20);
            uVar19 = CONCAT44(param_4,fVar37);
            fVar32 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
            fVar39 = fVar39 - fVar32;
            fVar32 = fVar35 - (float)uVar34;
            if ((fVar39 * fVar39 + fVar32 * fVar32 < 9.9999994e-11) &&
               (uVar15 = uVar28,
               fVar32 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
               fVar37 = fVar37 - fVar32, fVar32 = param_4 - (float)uVar15,
               fVar37 * fVar37 + fVar32 * fVar32 < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(uVar28,fVar35,lVar20,0);
          }
          else {
            fVar39 = (float)(**(code **)(lVar24 + 0x2f8))(plVar29,*(undefined8 *)(lVar24 + 0x300));
            if (lVar20 == 0) goto LAB_0072ea2c;
            uVar19 = (ulong)(uint)(fVar32 - fVar39);
            fVar40 = (fVar39 + fVar32) * 0.5;
            fVar35 = (param_2 + param_4) * 0.5;
            param_4 = param_4 - param_2;
            fVar37 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
            fVar37 = fVar40 - fVar37;
            param_2 = fVar35 - param_2;
            param_2 = param_2 * param_2;
            if ((fVar37 * fVar37 + param_2 < 9.9999994e-11) &&
               (fVar37 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
               fVar37 = (fVar32 - fVar39) - fVar37,
               fVar37 * fVar37 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(fVar40,fVar35,lVar20,0);
          }
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar19,param_4,lVar20,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        else {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f58d & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58d = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar24 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar24 = (**(code **)(lVar24 + 0x1d8))(plVar29,*(undefined8 *)(lVar24 + 0x1e0));
            if (lVar24 == 0) goto LAB_0072e730;
            if ((*(uint *)(lVar24 + 0x18) == 0) || (*(uint *)(lVar24 + 0x18) < 3)) {
LAB_0072e734:
              uVar28 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar28,0);
            }
            uVar28 = *(undefined8 *)(lVar24 + 0x20);
            fVar37 = *(float *)(lVar24 + 0x28);
            uVar15 = *(undefined8 *)(lVar24 + 0x38);
            fVar39 = *(float *)(lVar24 + 0x40);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar24 + 0x18) < 3) goto LAB_0072e734;
            if (lVar20 == 0) goto LAB_0072e730;
            fVar40 = (float)uVar28;
            fVar35 = (float)((ulong)uVar28 >> 0x20);
            fVar39 = fVar39 - fVar37;
            uVar13 = (ulong)(uint)fVar39;
            fVar35 = fVar35 + ((float)((ulong)uVar15 >> 0x20) - fVar35) * fVar32;
            uVar34 = CONCAT44(fVar35,fVar40 + ((float)uVar15 - fVar40) * fVar32);
            uVar38 = (ulong)(uint)(fVar37 + fVar39 * fVar32);
            fVar39 = (float)((ulong)*(undefined8 *)(lVar24 + 0x38) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20);
            uVar33 = CONCAT44(fVar39,(float)*(undefined8 *)(lVar24 + 0x38) -
                                     (float)*(undefined8 *)(lVar24 + 0x20));
            fVar32 = *(float *)(lVar24 + 0x40) - *(float *)(lVar24 + 0x28);
            uVar28 = uVar34;
            uVar15 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
            uVar19 = (ulong)(uint)fVar35;
            uVar14 = uVar19;
            uVar36 = uVar38;
            uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar34,uVar19,uVar38,uVar15,uVar28,uVar13,0);
            if ((uVar13 & 1) == 0) {
              uVar28 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
              uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,fVar32,uVar28,uVar14,uVar36,0);
              if ((uVar14 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar34,uVar19,uVar38,lVar20,0);
          }
          else {
            fVar32 = (float)(**(code **)(lVar24 + 0x2f8))(plVar29,*(undefined8 *)(lVar24 + 0x300));
            if (lVar20 == 0) goto LAB_0072e730;
            uVar33 = (ulong)(uint)((float)param_3 - fVar32);
            fVar39 = param_4 - param_2;
            uVar14 = (ulong)(uint)(param_2 + param_4);
            uVar36 = (ulong)(uint)((param_2 + param_4) * 0.5);
            fVar37 = (fVar32 + (float)param_3) * 0.5;
            uVar28 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
            uVar15 = 0;
            fVar32 = 0.0;
            uVar19 = uVar36;
            uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (fVar37,uVar36,0,uVar28,uVar14,param_3,0);
            if ((uVar14 & 1) == 0) {
              uVar28 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
              uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,0,uVar28,uVar19,uVar15,0);
              if ((uVar19 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar37,uVar36,0,lVar20,0);
          }
          native_UnityEngine_BoxCollider__set_size_dbab64(uVar33,fVar39,fVar32,lVar20,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        lVar20 = _NGUITools_TypeInfo_12d53c8;
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        piVar23 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
        while (*piVar23 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar4) {
            *piVar23 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        lVar24 = native_sub_432c38();
        if (lVar24 == lRam00000000013451d0) {
          iRam00000000013451d8 = iRam00000000013451d8 + 1;
        }
        else {
          iVar10 = 0;
          do {
            iVar11 = iRam0000000001345190;
            if (iRam0000000001345190 == iVar10) {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                cVar6 = ExclusiveMonitorsStatus();
                iRam0000000001345190 = iVar10 + 1;
              }
              if (cVar6 != '\0') goto code_r0x003cc248;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
code_r0x003cc248:
              bVar4 = false;
            }
          } while ((iVar11 != 2) && (iVar10 = iVar11, !bVar4));
          while (iVar11 != 0) {
            native_sub_432bb4(0x1345190,2,0xffffffff);
            do {
              iVar11 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 2;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          iRam00000000013451d8 = 1;
          lRam00000000013451d0 = lVar24;
        }
        while (*piVar23 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar4) {
            *piVar23 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            if (iRam00000000013451d8 < 1) {
              return;
            }
            if (iRam00000000013451d8 + -1 != 0) {
              iRam00000000013451d8 = iRam00000000013451d8 + -1;
              return;
            }
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar10 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != 2) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              return;
            }
            (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar1 = (int *)(lVar20 + 0xdc);
        do {
          if (*piVar1 != 1) {
            ClearExclusiveLocal();
            DataMemoryBarrier(2,3);
            puVar27 = (undefined8 *)(lVar20 + 0xe8);
            uVar28 = native_sub_3aad3c();
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar27,0x10);
              if (bVar4) {
                *puVar27 = uVar28;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            iVar10 = iRam00000000013451d8 + -1;
            if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar10 = iRam0000000001345190;
                cVar6 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar4) {
                  iRam0000000001345190 = 0;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 == 2) {
                native_sub_432c0c(0x1345190,1,0);
              }
            }
            if (((*(byte *)(lVar20 + 0x133) >> 2 & 1) != 0) &&
               (lVar20 = native_sub_3c573c(lVar20,&UNK_00edd9af,0xffffffff,0x800), lVar20 != 0)) {
              native_sub_3d704c(lVar20,0,0,&stack0xffffffffffffffb8);
            }
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar4) {
                *piVar23 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar27,0x10);
              if (bVar4) {
                *puVar27 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            return;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        iVar10 = iRam00000000013451d8 + -1;
        if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar10 = iRam0000000001345190;
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar4) {
              iRam0000000001345190 = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 2) {
            native_sub_432c0c(0x1345190,1,0);
          }
        }
        lVar24 = native_sub_3aad3c();
        plVar18 = (long *)(lVar20 + 0xe8);
        do {
          lVar20 = *plVar18;
          if (lVar20 != lVar24) {
            ClearExclusiveLocal();
            break;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar24;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar20 != lVar24) {
          do {
            iVar10 = *piVar23;
            if (iVar10 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar4) {
              *piVar23 = 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar10 == 0) {
            native_sub_3a30dc(1,0);
            do {
              iVar10 = *piVar23;
              if (iVar10 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar4) {
                *piVar23 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
          }
        }
        return;
      }
    }
    return;
  }
  if (plVar18 == (long *)0x0) goto LAB_00aeecf0;
  lVar24 = plVar18[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,plVar29,0);
  if ((uVar19 & 1) == 0) goto code_r0x00ae81a8;
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18,lVar20,0);
  }
  plVar18[0x13] = lVar20;
  native_sub_4326e0(plVar18 + 0x13,lVar20);
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar29 = plVar18 + 3;
  lVar20 = *plVar29;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
  if ((uVar19 & 1) == 0) {
    return;
  }
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18);
  }
  uVar7 = native_UIInput__get_isSelected_9f283c(plVar18);
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18);
  }
  lVar20 = plVar18[0x12];
  uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
  if ((uVar19 & 1) == 0) {
    lVar24 = *plVar29;
    uVar8 = 0;
LAB_009f1c84:
    plVar17 = plVar18 + 9;
    puVar2 = (undefined4 *)((long)plVar18 + 0x4c);
    plVar30 = plVar18 + 10;
    puVar3 = (undefined4 *)((long)plVar18 + 0x54);
  }
  else {
    uVar28 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar8 = native_System_String__IsNullOrEmpty_b09430(uVar28,0);
    lVar24 = *plVar29;
    if (((uVar7 | uVar8 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar17 = plVar18 + 0x14;
    puVar2 = (undefined4 *)((long)plVar18 + 0xa4);
    plVar30 = plVar18 + 0x15;
    puVar3 = (undefined4 *)((long)plVar18 + 0xac);
    uVar8 = 1;
  }
  if (lVar24 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar17,*puVar2,(int)*plVar30,*puVar3,lVar24,0);
  uVar28 = _StringLiteral___12eb5f0;
  lVar24 = _StringLiteral__12eaac0;
  if ((uVar8 & 1) == 0) {
    if ((int)plVar18[4] == 2) {
      if (*plVar29 == 0) goto LAB_009f2784;
      plVar17 = (long *)native_UILabel__get_font_ae77e8(*plVar29,0);
      uVar15 = uVar28;
      if (plVar17 != (long *)0x0) {
        lVar22 = *plVar17;
        if ((ulong)*(ushort *)(lVar22 + 0x12a) != 0) {
          uVar19 = 0;
          piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar27 = (undefined8 *)(lVar22 + (long)(*piVar23 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar19 = uVar19 + 1;
            piVar23 = piVar23 + 4;
          } while (uVar19 < *(ushort *)(lVar22 + 0x12a));
        }
        puVar27 = (undefined8 *)native_sub_3c9b34(plVar17,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar22 = (*(code *)*puVar27)(plVar17,puVar27[1]);
        if (lVar22 != 0) {
          lVar22 = *plVar17;
          if ((ulong)*(ushort *)(lVar22 + 0x12a) != 0) {
            uVar19 = 0;
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar27 = (undefined8 *)(lVar22 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar19 = uVar19 + 1;
              piVar23 = piVar23 + 4;
            } while (uVar19 < *(ushort *)(lVar22 + 0x12a));
          }
          puVar27 = (undefined8 *)native_sub_3c9b34(plVar17,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar22 = (*(code *)*puVar27)(plVar17,puVar27[1]);
          if (lVar22 == 0) goto LAB_009f2784;
          lVar22 = native_BMFont__GetGlyph_dd1c0c(lVar22,0x2a,0);
          uVar15 = _StringLiteral_x_12f6b98;
          if (lVar22 != 0) {
            uVar15 = uVar28;
          }
        }
      }
      if (lVar20 == 0) goto LAB_009f2784;
      iVar10 = *(int *)(lVar20 + 0x10);
      if (0 < iVar10) {
        do {
          lVar24 = native_System_String__Concat_afbd68(lVar24,uVar15,0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      lVar20 = lVar24;
      if ((uVar7 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar20 == 0) goto LAB_009f2784;
      uVar12 = *(undefined4 *)(lVar20 + 0x10);
      uVar9 = native_UIInput__get_cursorPosition_9f3090(plVar18);
      iVar10 = native_UnityEngine_Mathf__Min_8e4c18(uVar12,uVar9,0);
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,iVar10,0);
      uVar15 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar28 = native_System_String__Concat_afbd68(uVar28,uVar15,0);
    }
    else {
      if ((uVar7 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar20 == 0) goto LAB_009f2784;
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,0,0);
      iVar10 = 0;
    }
    uVar15 = native_System_String__Substring_b09fac
                       (lVar20,iVar10,*(int *)(lVar20 + 0x10) - iVar10,0);
    lVar20 = native_System_String__Concat_afbd68(uVar28,uVar15,0);
    if ((uVar7 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar18[0x17];
      goto LAB_009f1fe8;
    }
    lVar24 = *plVar29;
    if (lVar24 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar24 + 0x1e4) != 1) || (*(int *)(lVar24 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar11 = native_UILabel__CalculateOffsetToFit_aedc24(lVar24,lVar20,0);
    uVar5 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar25 = uVar5 & 0x400;
    if (iVar11 == 0) {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar18[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar24,uVar12,0);
    }
    else {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar25 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar26 = *piVar23;
      if (iVar10 < iVar26) {
        if ((uVar25 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar10;
LAB_009f266c:
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_009f2784;
        uVar12 = 1;
        goto LAB_009f2678;
      }
      if ((uVar25 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar26 = *piVar23;
      }
      if (iVar11 < iVar26) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar11;
        goto LAB_009f266c;
      }
      if (lVar20 == 0) goto LAB_009f2784;
      lVar24 = *plVar29;
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,iVar10,0);
      if (lVar24 == 0) goto LAB_009f2784;
      iVar10 = native_UILabel__CalculateOffsetToFit_aedc24(lVar24,uVar28,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar23 < iVar10) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar10;
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_009f2784;
        uVar12 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar10 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar20 == 0) goto LAB_009f2784;
      lVar20 = native_System_String__Substring_b09fac
                         (lVar20,iVar10,*(int *)(lVar20 + 0x10) - iVar10,0);
    }
  }
  else {
    lVar24 = *plVar29;
    if (lVar24 == 0) goto LAB_009f2784;
    uVar12 = (undefined4)plVar18[0x17];
    plVar17 = (long *)&StringLiteral__12eaac0;
    if ((uVar7 & 1) == 0) {
      plVar17 = plVar18 + 0x13;
    }
    lVar20 = *plVar17;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar24,uVar12,0);
  }
  if (*plVar29 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar29,lVar20,0);
  if ((uVar7 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar19 = native_UIInput__get_inputShouldBeHidden_9f28e0(plVar18), (uVar19 & 1) == 0))
  goto LAB_009f2280;
  lVar20 = plVar18[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar17 = plVar18 + 0x1b;
  lVar24 = *plVar17;
  iVar11 = *(int *)((long)plVar18 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,0,0);
  if ((uVar19 & 1) != 0) {
    lVar24 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar24,2,2,5,0,0);
    *plVar17 = lVar24;
    native_sub_4326e0(plVar17,lVar24);
    iVar26 = 0;
    do {
      iVar21 = 0;
      do {
        lVar24 = *plVar17;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar24 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar24,iVar21,iVar26,0);
        bVar4 = iVar21 == 0;
        iVar21 = 1;
      } while (bVar4);
      bVar4 = iVar26 == 0;
      iVar26 = 1;
    } while (bVar4);
    if (*plVar17 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar17,0);
  }
  iVar26 = (int)lVar20 - iVar10;
  iVar11 = iVar11 - iVar10;
  if (iVar26 != iVar11) {
    plVar30 = plVar18 + 0x19;
    lVar20 = *plVar30;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
    if ((uVar19 & 1) == 0) {
      plVar16 = (long *)*plVar29;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380));
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
    }
    else {
      if (*plVar29 == 0) goto LAB_009f2784;
      uVar28 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar20 = native_NGUITools__AddWidget_object__4a528c
                         (uVar28,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar30 = lVar20;
      native_sub_4326e0(plVar30,lVar20);
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Highlight_12ee898,0);
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
      if (*plVar30 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar30 + 0x100) = 0;
      plVar16 = (long *)*plVar29;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      if (*plVar29 == 0) goto LAB_009f2784;
      lVar20 = *plVar30;
      uVar28 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
      if (lVar20 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar20,uVar28,0);
    }
  }
  plVar30 = plVar18 + 0x1a;
  lVar20 = *plVar30;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
  if ((uVar19 & 1) == 0) {
    plVar16 = (long *)*plVar29;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    plVar31 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    if (plVar31 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
    plVar16 = (long *)*plVar30;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
    plVar17 = (long *)*plVar30;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380));
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
  }
  else {
    if (*plVar29 == 0) goto LAB_009f2784;
    uVar28 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar20 = native_NGUITools__AddWidget_object__4a528c
                       (uVar28,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar30 = lVar20;
    native_sub_4326e0(plVar30,lVar20);
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Caret_12ee890,0);
    plVar16 = (long *)*plVar30;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
    if (*plVar30 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar30 + 0x100) = 0;
    plVar17 = (long *)*plVar29;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    plVar16 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x2b8))(plVar16,uVar12,*(undefined8 *)(*plVar16 + 0x2c0));
    if (*plVar29 == 0) goto LAB_009f2784;
    lVar20 = *plVar30;
    uVar28 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
    if (lVar20 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar20,uVar28,0);
  }
  if (*plVar30 == 0) goto LAB_009f2784;
  lVar20 = *plVar29;
  uVar28 = *(undefined8 *)(*plVar30 + 0xf8);
  if (iVar26 == iVar11) {
    if (lVar20 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar18[0xb],*(undefined4 *)((long)plVar18 + 0x5c),(int)plVar18[0xc],
               *(undefined4 *)((long)plVar18 + 100),(int)plVar18[0xd],
               *(undefined4 *)((long)plVar18 + 0x6c),(int)plVar18[0xe],
               *(undefined4 *)((long)plVar18 + 0x74),lVar20,iVar26,iVar26,uVar28,0,0);
    lVar20 = plVar18[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
    if ((uVar19 & 1) != 0) {
      lVar20 = plVar18[0x19];
      if (lVar20 == 0) goto LAB_009f2784;
      uVar7 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((plVar18[0x19] == 0) || (lVar20 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar18[0xb],*(undefined4 *)((long)plVar18 + 0x5c),(int)plVar18[0xc],
               *(undefined4 *)((long)plVar18 + 100),(int)plVar18[0xd],
               *(undefined4 *)((long)plVar18 + 0x6c),(int)plVar18[0xe],
               *(undefined4 *)((long)plVar18 + 0x74),lVar20,iVar26,iVar11,uVar28,
               *(undefined8 *)(plVar18[0x19] + 0xf8),0);
    lVar20 = plVar18[0x19];
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0xf8) == 0)) goto LAB_009f2784;
    uVar7 = native_UIGeometry__get_hasVertices_9ef420();
    uVar7 = uVar7 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar20,uVar7,0);
  }
  fVar32 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(plVar18 + 0x1c) = fVar32 + 0.5;
  if (plVar18[3] != 0) {
    *(undefined4 *)((long)plVar18 + 0xe4) = *(undefined4 *)(plVar18[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILocalize$$Start @ 0xaeee38
 * void UILocalize__Start (UILocalize_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILocalize$$Start
   void UILocalize__Start (UILocalize_o* __this, const MethodInfo* method); */

void native_UILocalize__Start_aeee38
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  ushort uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  float fVar32;
  ulong uVar33;
  float fVar35;
  undefined8 uVar34;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  
  *(undefined1 *)(param_5 + 0x20) = 1;
  if ((bRam0000000001342035 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342035 = 1;
  }
  puVar27 = (undefined8 *)(param_5 + 0x18);
  uVar19 = native_System_String__IsNullOrEmpty_b09430(*puVar27,0);
  if ((uVar19 & 1) != 0) {
    lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                       (param_5,_Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
    if ((uVar19 & 1) != 0) {
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *puVar27 = *(undefined8 *)(lVar20 + 0x1a8);
      native_sub_4326e0(puVar27);
    }
  }
  uVar19 = native_System_String__IsNullOrEmpty_b09430(*puVar27,0);
  if ((uVar19 & 1) != 0) {
    return;
  }
  uVar28 = *puVar27;
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar20 = native_Localization__Get_7fae58(uVar28,1,0);
  if ((bRam0000000001342034 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIButton____12e5730);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIInput____12e5758);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    native_sub_43273c(&UISprite_TypeInfo_12d64c0);
    bRam0000000001342034 = 1;
  }
  uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
  if ((uVar19 & 1) != 0) {
    return;
  }
  plVar18 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (param_5,
                               _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  if (plVar18 == (long *)0x0) {
    plVar29 = (long *)0x0;
    plVar18 = (long *)0x0;
  }
  else {
    lVar24 = *plVar18;
    if (*(byte *)(lVar24 + 300) < *(byte *)(_UILabel_TypeInfo_12d6468 + 300)) {
      plVar29 = (long *)0x0;
    }
    else {
      plVar29 = plVar18;
      if (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(_UILabel_TypeInfo_12d6468 + 300) * 8
                   + -8) != _UILabel_TypeInfo_12d6468) {
        plVar29 = (long *)0x0;
      }
    }
    if (*(byte *)(lVar24 + 300) < *(byte *)(_UISprite_TypeInfo_12d64c0 + 300)) {
      plVar18 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(lVar24 + 200) +
                       (ulong)*(byte *)(_UISprite_TypeInfo_12d64c0 + 300) * 8 + -8) !=
             _UISprite_TypeInfo_12d64c0) {
      plVar18 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
  if ((uVar19 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar18,0,0);
    if ((uVar19 & 1) == 0) {
      return;
    }
    if (plVar18 != (long *)0x0) {
      uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar18,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar24 = native_NGUITools__FindInParents_object__4a5c04
                         (uVar28,_Method_NGUITools_FindInParents_UIButton____12e5730);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
      if ((uVar19 & 1) != 0) {
        if (lVar24 == 0) goto LAB_00aeecf0;
        uVar15 = *(undefined8 *)(lVar24 + 0x18);
        uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar18,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar15,uVar28,0);
        if ((uVar19 & 1) != 0) {
          native_UIButton__set_normalSprite_c90628(lVar24,lVar20,0);
        }
      }
      native_UISprite__set_spriteName_c35c6c(plVar18,lVar20,0);
                    /* WARNING: Could not recover jumptable at 0x00aeecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar18 + 0x3a8))(plVar18,*(undefined8 *)(*plVar18 + 0x3b0));
      return;
    }
LAB_00aeecf0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (plVar29 == (long *)0x0) goto LAB_00aeecf0;
  uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar29,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  plVar18 = (long *)native_NGUITools__FindInParents_object__4a5c04
                              (uVar28,_Method_NGUITools_FindInParents_UIInput____12e5758);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar18,0,0);
  if ((uVar19 & 1) == 0) {
code_r0x00ae81a8:
    if ((bRam0000000001342005 & 1) == 0) {
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam0000000001342005 = 1;
    }
    uVar19 = native_System_String__op_Equality_afc18c(plVar29[0x35],lVar20,0);
    if ((uVar19 & 1) == 0) {
      uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
      lVar24 = plVar29[0x35];
      if ((uVar19 & 1) == 0) {
        uVar19 = native_System_String__op_Inequality_afbbb4(lVar24,lVar20,0);
        if ((uVar19 & 1) == 0) {
          return;
        }
        plVar29[0x35] = lVar20;
      }
      else {
        uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar24,0);
        lVar20 = _StringLiteral__12eaac0;
        if ((uVar19 & 1) != 0) {
          return;
        }
        plVar29[0x35] = _StringLiteral__12eaac0;
      }
      native_sub_4326e0(plVar29 + 0x35,lVar20);
      (**(code **)(*plVar29 + 0x378))(plVar29,*(undefined8 *)(*plVar29 + 0x380));
      native_UILabel__ProcessAndRequest_ae7fdc(plVar29);
      if ((char)plVar29[0x1b] != '\0') {
        if ((bRam000000000134145d & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000134145d = 1;
        }
        lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar29,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar19 & 1) == 0) {
          lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (plVar29,
                              _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
          fVar32 = (float)param_3;
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          if ((bRam000000000133f58e & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58e = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar24 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar24 = (**(code **)(lVar24 + 0x1d8))(plVar29,*(undefined8 *)(lVar24 + 0x1e0));
            if (lVar24 == 0) goto LAB_0072ea2c;
            if ((*(uint *)(lVar24 + 0x18) == 0) || (*(uint *)(lVar24 + 0x18) < 3)) {
LAB_0072ea30:
              uVar28 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar28,0);
            }
            uVar28 = *(undefined8 *)(lVar24 + 0x20);
            uVar15 = *(undefined8 *)(lVar24 + 0x38);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar24 + 0x18) < 3) goto LAB_0072ea30;
            if (lVar20 == 0) goto LAB_0072ea2c;
            uVar34 = *(undefined8 *)(lVar24 + 0x38);
            fVar39 = (float)uVar28;
            fVar35 = (float)((ulong)uVar28 >> 0x20);
            fVar39 = fVar39 + ((float)uVar15 - fVar39) * fVar32;
            fVar35 = fVar35 + ((float)((ulong)uVar15 >> 0x20) - fVar35) * fVar32;
            uVar28 = CONCAT44(fVar35,fVar39);
            fVar37 = (float)uVar34 - (float)*(undefined8 *)(lVar24 + 0x20);
            param_4 = (float)((ulong)uVar34 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20);
            uVar19 = CONCAT44(param_4,fVar37);
            fVar32 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
            fVar39 = fVar39 - fVar32;
            fVar32 = fVar35 - (float)uVar34;
            if ((fVar39 * fVar39 + fVar32 * fVar32 < 9.9999994e-11) &&
               (uVar15 = uVar28,
               fVar32 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
               fVar37 = fVar37 - fVar32, fVar32 = param_4 - (float)uVar15,
               fVar37 * fVar37 + fVar32 * fVar32 < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(uVar28,fVar35,lVar20,0);
          }
          else {
            fVar39 = (float)(**(code **)(lVar24 + 0x2f8))(plVar29,*(undefined8 *)(lVar24 + 0x300));
            if (lVar20 == 0) goto LAB_0072ea2c;
            uVar19 = (ulong)(uint)(fVar32 - fVar39);
            fVar40 = (fVar39 + fVar32) * 0.5;
            fVar35 = (param_2 + param_4) * 0.5;
            param_4 = param_4 - param_2;
            fVar37 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
            fVar37 = fVar40 - fVar37;
            param_2 = fVar35 - param_2;
            param_2 = param_2 * param_2;
            if ((fVar37 * fVar37 + param_2 < 9.9999994e-11) &&
               (fVar37 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
               fVar37 = (fVar32 - fVar39) - fVar37,
               fVar37 * fVar37 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(fVar40,fVar35,lVar20,0);
          }
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar19,param_4,lVar20,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        else {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f58d & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58d = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar24 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar24 = (**(code **)(lVar24 + 0x1d8))(plVar29,*(undefined8 *)(lVar24 + 0x1e0));
            if (lVar24 == 0) goto LAB_0072e730;
            if ((*(uint *)(lVar24 + 0x18) == 0) || (*(uint *)(lVar24 + 0x18) < 3)) {
LAB_0072e734:
              uVar28 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar28,0);
            }
            uVar28 = *(undefined8 *)(lVar24 + 0x20);
            fVar37 = *(float *)(lVar24 + 0x28);
            uVar15 = *(undefined8 *)(lVar24 + 0x38);
            fVar39 = *(float *)(lVar24 + 0x40);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar24 + 0x18) < 3) goto LAB_0072e734;
            if (lVar20 == 0) goto LAB_0072e730;
            fVar40 = (float)uVar28;
            fVar35 = (float)((ulong)uVar28 >> 0x20);
            fVar39 = fVar39 - fVar37;
            uVar13 = (ulong)(uint)fVar39;
            fVar35 = fVar35 + ((float)((ulong)uVar15 >> 0x20) - fVar35) * fVar32;
            uVar34 = CONCAT44(fVar35,fVar40 + ((float)uVar15 - fVar40) * fVar32);
            uVar38 = (ulong)(uint)(fVar37 + fVar39 * fVar32);
            fVar39 = (float)((ulong)*(undefined8 *)(lVar24 + 0x38) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20);
            uVar33 = CONCAT44(fVar39,(float)*(undefined8 *)(lVar24 + 0x38) -
                                     (float)*(undefined8 *)(lVar24 + 0x20));
            fVar32 = *(float *)(lVar24 + 0x40) - *(float *)(lVar24 + 0x28);
            uVar28 = uVar34;
            uVar15 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
            uVar19 = (ulong)(uint)fVar35;
            uVar14 = uVar19;
            uVar36 = uVar38;
            uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar34,uVar19,uVar38,uVar15,uVar28,uVar13,0);
            if ((uVar13 & 1) == 0) {
              uVar28 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
              uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,fVar32,uVar28,uVar14,uVar36,0);
              if ((uVar14 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar34,uVar19,uVar38,lVar20,0);
          }
          else {
            fVar32 = (float)(**(code **)(lVar24 + 0x2f8))(plVar29,*(undefined8 *)(lVar24 + 0x300));
            if (lVar20 == 0) goto LAB_0072e730;
            uVar33 = (ulong)(uint)((float)param_3 - fVar32);
            fVar39 = param_4 - param_2;
            uVar14 = (ulong)(uint)(param_2 + param_4);
            uVar36 = (ulong)(uint)((param_2 + param_4) * 0.5);
            fVar37 = (fVar32 + (float)param_3) * 0.5;
            uVar28 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
            uVar15 = 0;
            fVar32 = 0.0;
            uVar19 = uVar36;
            uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (fVar37,uVar36,0,uVar28,uVar14,param_3,0);
            if ((uVar14 & 1) == 0) {
              uVar28 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
              uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,0,uVar28,uVar19,uVar15,0);
              if ((uVar19 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar37,uVar36,0,lVar20,0);
          }
          native_UnityEngine_BoxCollider__set_size_dbab64(uVar33,fVar39,fVar32,lVar20,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        lVar20 = _NGUITools_TypeInfo_12d53c8;
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        piVar23 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
        while (*piVar23 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar4) {
            *piVar23 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        lVar24 = native_sub_432c38();
        if (lVar24 == lRam00000000013451d0) {
          iRam00000000013451d8 = iRam00000000013451d8 + 1;
        }
        else {
          iVar10 = 0;
          do {
            iVar11 = iRam0000000001345190;
            if (iRam0000000001345190 == iVar10) {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                cVar6 = ExclusiveMonitorsStatus();
                iRam0000000001345190 = iVar10 + 1;
              }
              if (cVar6 != '\0') goto code_r0x003cc248;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
code_r0x003cc248:
              bVar4 = false;
            }
          } while ((iVar11 != 2) && (iVar10 = iVar11, !bVar4));
          while (iVar11 != 0) {
            native_sub_432bb4(0x1345190,2,0xffffffff);
            do {
              iVar11 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 2;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          iRam00000000013451d8 = 1;
          lRam00000000013451d0 = lVar24;
        }
        while (*piVar23 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar4) {
            *piVar23 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            if (iRam00000000013451d8 < 1) {
              return;
            }
            if (iRam00000000013451d8 + -1 != 0) {
              iRam00000000013451d8 = iRam00000000013451d8 + -1;
              return;
            }
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar10 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != 2) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              return;
            }
            (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar1 = (int *)(lVar20 + 0xdc);
        do {
          if (*piVar1 != 1) {
            ClearExclusiveLocal();
            DataMemoryBarrier(2,3);
            puVar27 = (undefined8 *)(lVar20 + 0xe8);
            uVar28 = native_sub_3aad3c();
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar27,0x10);
              if (bVar4) {
                *puVar27 = uVar28;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            iVar10 = iRam00000000013451d8 + -1;
            if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar10 = iRam0000000001345190;
                cVar6 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar4) {
                  iRam0000000001345190 = 0;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 == 2) {
                native_sub_432c0c(0x1345190,1,0);
              }
            }
            if (((*(byte *)(lVar20 + 0x133) >> 2 & 1) != 0) &&
               (lVar20 = native_sub_3c573c(lVar20,&UNK_00edd9af,0xffffffff,0x800), lVar20 != 0)) {
              native_sub_3d704c(lVar20,0,0,&stack0xffffffffffffffb8);
            }
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar4) {
                *piVar23 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar27,0x10);
              if (bVar4) {
                *puVar27 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            return;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        iVar10 = iRam00000000013451d8 + -1;
        if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar10 = iRam0000000001345190;
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar4) {
              iRam0000000001345190 = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 2) {
            native_sub_432c0c(0x1345190,1,0);
          }
        }
        lVar24 = native_sub_3aad3c();
        plVar18 = (long *)(lVar20 + 0xe8);
        do {
          lVar20 = *plVar18;
          if (lVar20 != lVar24) {
            ClearExclusiveLocal();
            break;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar24;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar20 != lVar24) {
          do {
            iVar10 = *piVar23;
            if (iVar10 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar4) {
              *piVar23 = 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar10 == 0) {
            native_sub_3a30dc(1,0);
            do {
              iVar10 = *piVar23;
              if (iVar10 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar4) {
                *piVar23 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
          }
        }
        return;
      }
    }
    return;
  }
  if (plVar18 == (long *)0x0) goto LAB_00aeecf0;
  lVar24 = plVar18[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,plVar29,0);
  if ((uVar19 & 1) == 0) goto code_r0x00ae81a8;
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18,lVar20,0);
  }
  plVar18[0x13] = lVar20;
  native_sub_4326e0(plVar18 + 0x13,lVar20);
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar29 = plVar18 + 3;
  lVar20 = *plVar29;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
  if ((uVar19 & 1) == 0) {
    return;
  }
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18);
  }
  uVar7 = native_UIInput__get_isSelected_9f283c(plVar18);
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18);
  }
  lVar20 = plVar18[0x12];
  uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
  if ((uVar19 & 1) == 0) {
    lVar24 = *plVar29;
    uVar8 = 0;
LAB_009f1c84:
    plVar17 = plVar18 + 9;
    puVar2 = (undefined4 *)((long)plVar18 + 0x4c);
    plVar30 = plVar18 + 10;
    puVar3 = (undefined4 *)((long)plVar18 + 0x54);
  }
  else {
    uVar28 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar8 = native_System_String__IsNullOrEmpty_b09430(uVar28,0);
    lVar24 = *plVar29;
    if (((uVar7 | uVar8 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar17 = plVar18 + 0x14;
    puVar2 = (undefined4 *)((long)plVar18 + 0xa4);
    plVar30 = plVar18 + 0x15;
    puVar3 = (undefined4 *)((long)plVar18 + 0xac);
    uVar8 = 1;
  }
  if (lVar24 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar17,*puVar2,(int)*plVar30,*puVar3,lVar24,0);
  uVar28 = _StringLiteral___12eb5f0;
  lVar24 = _StringLiteral__12eaac0;
  if ((uVar8 & 1) == 0) {
    if ((int)plVar18[4] == 2) {
      if (*plVar29 == 0) goto LAB_009f2784;
      plVar17 = (long *)native_UILabel__get_font_ae77e8(*plVar29,0);
      uVar15 = uVar28;
      if (plVar17 != (long *)0x0) {
        lVar22 = *plVar17;
        if ((ulong)*(ushort *)(lVar22 + 0x12a) != 0) {
          uVar19 = 0;
          piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar27 = (undefined8 *)(lVar22 + (long)(*piVar23 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar19 = uVar19 + 1;
            piVar23 = piVar23 + 4;
          } while (uVar19 < *(ushort *)(lVar22 + 0x12a));
        }
        puVar27 = (undefined8 *)native_sub_3c9b34(plVar17,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar22 = (*(code *)*puVar27)(plVar17,puVar27[1]);
        if (lVar22 != 0) {
          lVar22 = *plVar17;
          if ((ulong)*(ushort *)(lVar22 + 0x12a) != 0) {
            uVar19 = 0;
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar27 = (undefined8 *)(lVar22 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar19 = uVar19 + 1;
              piVar23 = piVar23 + 4;
            } while (uVar19 < *(ushort *)(lVar22 + 0x12a));
          }
          puVar27 = (undefined8 *)native_sub_3c9b34(plVar17,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar22 = (*(code *)*puVar27)(plVar17,puVar27[1]);
          if (lVar22 == 0) goto LAB_009f2784;
          lVar22 = native_BMFont__GetGlyph_dd1c0c(lVar22,0x2a,0);
          uVar15 = _StringLiteral_x_12f6b98;
          if (lVar22 != 0) {
            uVar15 = uVar28;
          }
        }
      }
      if (lVar20 == 0) goto LAB_009f2784;
      iVar10 = *(int *)(lVar20 + 0x10);
      if (0 < iVar10) {
        do {
          lVar24 = native_System_String__Concat_afbd68(lVar24,uVar15,0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      lVar20 = lVar24;
      if ((uVar7 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar20 == 0) goto LAB_009f2784;
      uVar12 = *(undefined4 *)(lVar20 + 0x10);
      uVar9 = native_UIInput__get_cursorPosition_9f3090(plVar18);
      iVar10 = native_UnityEngine_Mathf__Min_8e4c18(uVar12,uVar9,0);
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,iVar10,0);
      uVar15 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar28 = native_System_String__Concat_afbd68(uVar28,uVar15,0);
    }
    else {
      if ((uVar7 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar20 == 0) goto LAB_009f2784;
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,0,0);
      iVar10 = 0;
    }
    uVar15 = native_System_String__Substring_b09fac
                       (lVar20,iVar10,*(int *)(lVar20 + 0x10) - iVar10,0);
    lVar20 = native_System_String__Concat_afbd68(uVar28,uVar15,0);
    if ((uVar7 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar18[0x17];
      goto LAB_009f1fe8;
    }
    lVar24 = *plVar29;
    if (lVar24 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar24 + 0x1e4) != 1) || (*(int *)(lVar24 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar11 = native_UILabel__CalculateOffsetToFit_aedc24(lVar24,lVar20,0);
    uVar5 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar25 = uVar5 & 0x400;
    if (iVar11 == 0) {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar18[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar24,uVar12,0);
    }
    else {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar25 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar26 = *piVar23;
      if (iVar10 < iVar26) {
        if ((uVar25 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar10;
LAB_009f266c:
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_009f2784;
        uVar12 = 1;
        goto LAB_009f2678;
      }
      if ((uVar25 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar26 = *piVar23;
      }
      if (iVar11 < iVar26) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar11;
        goto LAB_009f266c;
      }
      if (lVar20 == 0) goto LAB_009f2784;
      lVar24 = *plVar29;
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,iVar10,0);
      if (lVar24 == 0) goto LAB_009f2784;
      iVar10 = native_UILabel__CalculateOffsetToFit_aedc24(lVar24,uVar28,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar23 < iVar10) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar10;
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_009f2784;
        uVar12 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar10 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar20 == 0) goto LAB_009f2784;
      lVar20 = native_System_String__Substring_b09fac
                         (lVar20,iVar10,*(int *)(lVar20 + 0x10) - iVar10,0);
    }
  }
  else {
    lVar24 = *plVar29;
    if (lVar24 == 0) goto LAB_009f2784;
    uVar12 = (undefined4)plVar18[0x17];
    plVar17 = (long *)&StringLiteral__12eaac0;
    if ((uVar7 & 1) == 0) {
      plVar17 = plVar18 + 0x13;
    }
    lVar20 = *plVar17;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar24,uVar12,0);
  }
  if (*plVar29 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar29,lVar20,0);
  if ((uVar7 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar19 = native_UIInput__get_inputShouldBeHidden_9f28e0(plVar18), (uVar19 & 1) == 0))
  goto LAB_009f2280;
  lVar20 = plVar18[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar17 = plVar18 + 0x1b;
  lVar24 = *plVar17;
  iVar11 = *(int *)((long)plVar18 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,0,0);
  if ((uVar19 & 1) != 0) {
    lVar24 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar24,2,2,5,0,0);
    *plVar17 = lVar24;
    native_sub_4326e0(plVar17,lVar24);
    iVar26 = 0;
    do {
      iVar21 = 0;
      do {
        lVar24 = *plVar17;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar24 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar24,iVar21,iVar26,0);
        bVar4 = iVar21 == 0;
        iVar21 = 1;
      } while (bVar4);
      bVar4 = iVar26 == 0;
      iVar26 = 1;
    } while (bVar4);
    if (*plVar17 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar17,0);
  }
  iVar26 = (int)lVar20 - iVar10;
  iVar11 = iVar11 - iVar10;
  if (iVar26 != iVar11) {
    plVar30 = plVar18 + 0x19;
    lVar20 = *plVar30;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
    if ((uVar19 & 1) == 0) {
      plVar16 = (long *)*plVar29;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380));
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
    }
    else {
      if (*plVar29 == 0) goto LAB_009f2784;
      uVar28 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar20 = native_NGUITools__AddWidget_object__4a528c
                         (uVar28,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar30 = lVar20;
      native_sub_4326e0(plVar30,lVar20);
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Highlight_12ee898,0);
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
      if (*plVar30 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar30 + 0x100) = 0;
      plVar16 = (long *)*plVar29;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      if (*plVar29 == 0) goto LAB_009f2784;
      lVar20 = *plVar30;
      uVar28 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
      if (lVar20 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar20,uVar28,0);
    }
  }
  plVar30 = plVar18 + 0x1a;
  lVar20 = *plVar30;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
  if ((uVar19 & 1) == 0) {
    plVar16 = (long *)*plVar29;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    plVar31 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    if (plVar31 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
    plVar16 = (long *)*plVar30;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
    plVar17 = (long *)*plVar30;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380));
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
  }
  else {
    if (*plVar29 == 0) goto LAB_009f2784;
    uVar28 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar20 = native_NGUITools__AddWidget_object__4a528c
                       (uVar28,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar30 = lVar20;
    native_sub_4326e0(plVar30,lVar20);
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Caret_12ee890,0);
    plVar16 = (long *)*plVar30;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
    if (*plVar30 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar30 + 0x100) = 0;
    plVar17 = (long *)*plVar29;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    plVar16 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x2b8))(plVar16,uVar12,*(undefined8 *)(*plVar16 + 0x2c0));
    if (*plVar29 == 0) goto LAB_009f2784;
    lVar20 = *plVar30;
    uVar28 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
    if (lVar20 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar20,uVar28,0);
  }
  if (*plVar30 == 0) goto LAB_009f2784;
  lVar20 = *plVar29;
  uVar28 = *(undefined8 *)(*plVar30 + 0xf8);
  if (iVar26 == iVar11) {
    if (lVar20 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar18[0xb],*(undefined4 *)((long)plVar18 + 0x5c),(int)plVar18[0xc],
               *(undefined4 *)((long)plVar18 + 100),(int)plVar18[0xd],
               *(undefined4 *)((long)plVar18 + 0x6c),(int)plVar18[0xe],
               *(undefined4 *)((long)plVar18 + 0x74),lVar20,iVar26,iVar26,uVar28,0,0);
    lVar20 = plVar18[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
    if ((uVar19 & 1) != 0) {
      lVar20 = plVar18[0x19];
      if (lVar20 == 0) goto LAB_009f2784;
      uVar7 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((plVar18[0x19] == 0) || (lVar20 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar18[0xb],*(undefined4 *)((long)plVar18 + 0x5c),(int)plVar18[0xc],
               *(undefined4 *)((long)plVar18 + 100),(int)plVar18[0xd],
               *(undefined4 *)((long)plVar18 + 0x6c),(int)plVar18[0xe],
               *(undefined4 *)((long)plVar18 + 0x74),lVar20,iVar26,iVar11,uVar28,
               *(undefined8 *)(plVar18[0x19] + 0xf8),0);
    lVar20 = plVar18[0x19];
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0xf8) == 0)) goto LAB_009f2784;
    uVar7 = native_UIGeometry__get_hasVertices_9ef420();
    uVar7 = uVar7 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar20,uVar7,0);
  }
  fVar32 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(plVar18 + 0x1c) = fVar32 + 0.5;
  if (plVar18[3] != 0) {
    *(undefined4 *)((long)plVar18 + 0xe4) = *(undefined4 *)(plVar18[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILocalize$$OnLocalize @ 0xaeed04
 * void UILocalize__OnLocalize (UILocalize_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILocalize$$OnLocalize
   void UILocalize__OnLocalize (UILocalize_o* __this, const MethodInfo* method); */

void native_UILocalize__OnLocalize_aeed04
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  ushort uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  float fVar32;
  ulong uVar33;
  float fVar35;
  undefined8 uVar34;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  
  if ((bRam0000000001342035 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342035 = 1;
  }
  puVar27 = (undefined8 *)(param_5 + 0x18);
  uVar19 = native_System_String__IsNullOrEmpty_b09430(*puVar27,0);
  if ((uVar19 & 1) != 0) {
    lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                       (param_5,_Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
    if ((uVar19 & 1) != 0) {
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *puVar27 = *(undefined8 *)(lVar20 + 0x1a8);
      native_sub_4326e0(puVar27);
    }
  }
  uVar19 = native_System_String__IsNullOrEmpty_b09430(*puVar27,0);
  if ((uVar19 & 1) != 0) {
    return;
  }
  uVar28 = *puVar27;
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar20 = native_Localization__Get_7fae58(uVar28,1,0);
  if ((bRam0000000001342034 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIButton____12e5730);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIInput____12e5758);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    native_sub_43273c(&UISprite_TypeInfo_12d64c0);
    bRam0000000001342034 = 1;
  }
  uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
  if ((uVar19 & 1) != 0) {
    return;
  }
  plVar18 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (param_5,
                               _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  if (plVar18 == (long *)0x0) {
    plVar29 = (long *)0x0;
    plVar18 = (long *)0x0;
  }
  else {
    lVar24 = *plVar18;
    if (*(byte *)(lVar24 + 300) < *(byte *)(_UILabel_TypeInfo_12d6468 + 300)) {
      plVar29 = (long *)0x0;
    }
    else {
      plVar29 = plVar18;
      if (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(_UILabel_TypeInfo_12d6468 + 300) * 8
                   + -8) != _UILabel_TypeInfo_12d6468) {
        plVar29 = (long *)0x0;
      }
    }
    if (*(byte *)(lVar24 + 300) < *(byte *)(_UISprite_TypeInfo_12d64c0 + 300)) {
      plVar18 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(lVar24 + 200) +
                       (ulong)*(byte *)(_UISprite_TypeInfo_12d64c0 + 300) * 8 + -8) !=
             _UISprite_TypeInfo_12d64c0) {
      plVar18 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
  if ((uVar19 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar18,0,0);
    if ((uVar19 & 1) == 0) {
      return;
    }
    if (plVar18 != (long *)0x0) {
      uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar18,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar24 = native_NGUITools__FindInParents_object__4a5c04
                         (uVar28,_Method_NGUITools_FindInParents_UIButton____12e5730);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
      if ((uVar19 & 1) != 0) {
        if (lVar24 == 0) goto LAB_00aeecf0;
        uVar15 = *(undefined8 *)(lVar24 + 0x18);
        uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar18,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar15,uVar28,0);
        if ((uVar19 & 1) != 0) {
          native_UIButton__set_normalSprite_c90628(lVar24,lVar20,0);
        }
      }
      native_UISprite__set_spriteName_c35c6c(plVar18,lVar20,0);
                    /* WARNING: Could not recover jumptable at 0x00aeecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar18 + 0x3a8))(plVar18,*(undefined8 *)(*plVar18 + 0x3b0));
      return;
    }
LAB_00aeecf0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (plVar29 == (long *)0x0) goto LAB_00aeecf0;
  uVar28 = native_UnityEngine_Component__get_gameObject_8da66c(plVar29,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  plVar18 = (long *)native_NGUITools__FindInParents_object__4a5c04
                              (uVar28,_Method_NGUITools_FindInParents_UIInput____12e5758);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar18,0,0);
  if ((uVar19 & 1) == 0) {
code_r0x00ae81a8:
    if ((bRam0000000001342005 & 1) == 0) {
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam0000000001342005 = 1;
    }
    uVar19 = native_System_String__op_Equality_afc18c(plVar29[0x35],lVar20,0);
    if ((uVar19 & 1) == 0) {
      uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
      lVar24 = plVar29[0x35];
      if ((uVar19 & 1) == 0) {
        uVar19 = native_System_String__op_Inequality_afbbb4(lVar24,lVar20,0);
        if ((uVar19 & 1) == 0) {
          return;
        }
        plVar29[0x35] = lVar20;
      }
      else {
        uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar24,0);
        lVar20 = _StringLiteral__12eaac0;
        if ((uVar19 & 1) != 0) {
          return;
        }
        plVar29[0x35] = _StringLiteral__12eaac0;
      }
      native_sub_4326e0(plVar29 + 0x35,lVar20);
      (**(code **)(*plVar29 + 0x378))(plVar29,*(undefined8 *)(*plVar29 + 0x380));
      native_UILabel__ProcessAndRequest_ae7fdc(plVar29);
      if ((char)plVar29[0x1b] != '\0') {
        if ((bRam000000000134145d & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
          native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000134145d = 1;
        }
        lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar29,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar19 & 1) == 0) {
          lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (plVar29,
                              _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
          fVar32 = (float)param_3;
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          if ((bRam000000000133f58e & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58e = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar24 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar24 = (**(code **)(lVar24 + 0x1d8))(plVar29,*(undefined8 *)(lVar24 + 0x1e0));
            if (lVar24 == 0) goto LAB_0072ea2c;
            if ((*(uint *)(lVar24 + 0x18) == 0) || (*(uint *)(lVar24 + 0x18) < 3)) {
LAB_0072ea30:
              uVar28 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar28,0);
            }
            uVar28 = *(undefined8 *)(lVar24 + 0x20);
            uVar15 = *(undefined8 *)(lVar24 + 0x38);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar24 + 0x18) < 3) goto LAB_0072ea30;
            if (lVar20 == 0) goto LAB_0072ea2c;
            uVar34 = *(undefined8 *)(lVar24 + 0x38);
            fVar39 = (float)uVar28;
            fVar35 = (float)((ulong)uVar28 >> 0x20);
            fVar39 = fVar39 + ((float)uVar15 - fVar39) * fVar32;
            fVar35 = fVar35 + ((float)((ulong)uVar15 >> 0x20) - fVar35) * fVar32;
            uVar28 = CONCAT44(fVar35,fVar39);
            fVar37 = (float)uVar34 - (float)*(undefined8 *)(lVar24 + 0x20);
            param_4 = (float)((ulong)uVar34 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20);
            uVar19 = CONCAT44(param_4,fVar37);
            fVar32 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
            fVar39 = fVar39 - fVar32;
            fVar32 = fVar35 - (float)uVar34;
            if ((fVar39 * fVar39 + fVar32 * fVar32 < 9.9999994e-11) &&
               (uVar15 = uVar28,
               fVar32 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
               fVar37 = fVar37 - fVar32, fVar32 = param_4 - (float)uVar15,
               fVar37 * fVar37 + fVar32 * fVar32 < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(uVar28,fVar35,lVar20,0);
          }
          else {
            fVar39 = (float)(**(code **)(lVar24 + 0x2f8))(plVar29,*(undefined8 *)(lVar24 + 0x300));
            if (lVar20 == 0) goto LAB_0072ea2c;
            uVar19 = (ulong)(uint)(fVar32 - fVar39);
            fVar40 = (fVar39 + fVar32) * 0.5;
            fVar35 = (param_2 + param_4) * 0.5;
            param_4 = param_4 - param_2;
            fVar37 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
            fVar37 = fVar40 - fVar37;
            param_2 = fVar35 - param_2;
            param_2 = param_2 * param_2;
            if ((fVar37 * fVar37 + param_2 < 9.9999994e-11) &&
               (fVar37 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
               fVar37 = (fVar32 - fVar39) - fVar37,
               fVar37 * fVar37 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(fVar40,fVar35,lVar20,0);
          }
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar19,param_4,lVar20,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        else {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f58d & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral_last_change_12f5390);
            bRam000000000133f58d = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar29,0,0);
          if ((uVar19 & 1) == 0) {
            return;
          }
          if (plVar29 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar24 = *plVar29;
          if ((((*(float *)((long)plVar29 + 0x104) == 0.0) && (*(float *)(plVar29 + 0x21) == 0.0))
              && (param_2 = *(float *)((long)plVar29 + 0x10c), param_2 == 1.0)) &&
             (param_2 = *(float *)(plVar29 + 0x22), param_2 == 1.0)) {
            lVar24 = (**(code **)(lVar24 + 0x1d8))(plVar29,*(undefined8 *)(lVar24 + 0x1e0));
            if (lVar24 == 0) goto LAB_0072e730;
            if ((*(uint *)(lVar24 + 0x18) == 0) || (*(uint *)(lVar24 + 0x18) < 3)) {
LAB_0072e734:
              uVar28 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar28,0);
            }
            uVar28 = *(undefined8 *)(lVar24 + 0x20);
            fVar37 = *(float *)(lVar24 + 0x28);
            uVar15 = *(undefined8 *)(lVar24 + 0x38);
            fVar39 = *(float *)(lVar24 + 0x40);
            fVar32 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (*(uint *)(lVar24 + 0x18) < 3) goto LAB_0072e734;
            if (lVar20 == 0) goto LAB_0072e730;
            fVar40 = (float)uVar28;
            fVar35 = (float)((ulong)uVar28 >> 0x20);
            fVar39 = fVar39 - fVar37;
            uVar13 = (ulong)(uint)fVar39;
            fVar35 = fVar35 + ((float)((ulong)uVar15 >> 0x20) - fVar35) * fVar32;
            uVar34 = CONCAT44(fVar35,fVar40 + ((float)uVar15 - fVar40) * fVar32);
            uVar38 = (ulong)(uint)(fVar37 + fVar39 * fVar32);
            fVar39 = (float)((ulong)*(undefined8 *)(lVar24 + 0x38) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20);
            uVar33 = CONCAT44(fVar39,(float)*(undefined8 *)(lVar24 + 0x38) -
                                     (float)*(undefined8 *)(lVar24 + 0x20));
            fVar32 = *(float *)(lVar24 + 0x40) - *(float *)(lVar24 + 0x28);
            uVar28 = uVar34;
            uVar15 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
            uVar19 = (ulong)(uint)fVar35;
            uVar14 = uVar19;
            uVar36 = uVar38;
            uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar34,uVar19,uVar38,uVar15,uVar28,uVar13,0);
            if ((uVar13 & 1) == 0) {
              uVar28 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
              uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,fVar32,uVar28,uVar14,uVar36,0);
              if ((uVar14 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar34,uVar19,uVar38,lVar20,0);
          }
          else {
            fVar32 = (float)(**(code **)(lVar24 + 0x2f8))(plVar29,*(undefined8 *)(lVar24 + 0x300));
            if (lVar20 == 0) goto LAB_0072e730;
            uVar33 = (ulong)(uint)((float)param_3 - fVar32);
            fVar39 = param_4 - param_2;
            uVar14 = (ulong)(uint)(param_2 + param_4);
            uVar36 = (ulong)(uint)((param_2 + param_4) * 0.5);
            fVar37 = (fVar32 + (float)param_3) * 0.5;
            uVar28 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
            uVar15 = 0;
            fVar32 = 0.0;
            uVar19 = uVar36;
            uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (fVar37,uVar36,0,uVar28,uVar14,param_3,0);
            if ((uVar14 & 1) == 0) {
              uVar28 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
              uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar33,fVar39,0,uVar28,uVar19,uVar15,0);
              if ((uVar19 & 1) == 0) {
                return;
              }
            }
            native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar37,uVar36,0,lVar20,0);
          }
          native_UnityEngine_BoxCollider__set_size_dbab64(uVar33,fVar39,fVar32,lVar20,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
        }
        lVar20 = _NGUITools_TypeInfo_12d53c8;
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        piVar23 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
        while (*piVar23 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar4) {
            *piVar23 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        lVar24 = native_sub_432c38();
        if (lVar24 == lRam00000000013451d0) {
          iRam00000000013451d8 = iRam00000000013451d8 + 1;
        }
        else {
          iVar10 = 0;
          do {
            iVar11 = iRam0000000001345190;
            if (iRam0000000001345190 == iVar10) {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                cVar6 = ExclusiveMonitorsStatus();
                iRam0000000001345190 = iVar10 + 1;
              }
              if (cVar6 != '\0') goto code_r0x003cc248;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
code_r0x003cc248:
              bVar4 = false;
            }
          } while ((iVar11 != 2) && (iVar10 = iVar11, !bVar4));
          while (iVar11 != 0) {
            native_sub_432bb4(0x1345190,2,0xffffffff);
            do {
              iVar11 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 2;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          iRam00000000013451d8 = 1;
          lRam00000000013451d0 = lVar24;
        }
        while (*piVar23 == 1) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar4) {
            *piVar23 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            DataMemoryBarrier(2,3);
            if (iRam00000000013451d8 < 1) {
              return;
            }
            if (iRam00000000013451d8 + -1 != 0) {
              iRam00000000013451d8 = iRam00000000013451d8 + -1;
              return;
            }
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar10 = iRam0000000001345190;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar4) {
                iRam0000000001345190 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != 2) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              return;
            }
            (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar1 = (int *)(lVar20 + 0xdc);
        do {
          if (*piVar1 != 1) {
            ClearExclusiveLocal();
            DataMemoryBarrier(2,3);
            puVar27 = (undefined8 *)(lVar20 + 0xe8);
            uVar28 = native_sub_3aad3c();
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar27,0x10);
              if (bVar4) {
                *puVar27 = uVar28;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            iVar10 = iRam00000000013451d8 + -1;
            if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar10 = iRam0000000001345190;
                cVar6 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar4) {
                  iRam0000000001345190 = 0;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 == 2) {
                native_sub_432c0c(0x1345190,1,0);
              }
            }
            if (((*(byte *)(lVar20 + 0x133) >> 2 & 1) != 0) &&
               (lVar20 = native_sub_3c573c(lVar20,&UNK_00edd9af,0xffffffff,0x800), lVar20 != 0)) {
              native_sub_3d704c(lVar20,0,0,&stack0xffffffffffffffb8);
            }
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar4) {
                *piVar23 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar27,0x10);
              if (bVar4) {
                *puVar27 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            return;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        iVar10 = iRam00000000013451d8 + -1;
        if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar10, iVar10 == 0)) {
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar10 = iRam0000000001345190;
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar4) {
              iRam0000000001345190 = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 2) {
            native_sub_432c0c(0x1345190,1,0);
          }
        }
        lVar24 = native_sub_3aad3c();
        plVar18 = (long *)(lVar20 + 0xe8);
        do {
          lVar20 = *plVar18;
          if (lVar20 != lVar24) {
            ClearExclusiveLocal();
            break;
          }
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar24;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar20 != lVar24) {
          do {
            iVar10 = *piVar23;
            if (iVar10 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar4) {
              *piVar23 = 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar10 == 0) {
            native_sub_3a30dc(1,0);
            do {
              iVar10 = *piVar23;
              if (iVar10 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
              if (bVar4) {
                *piVar23 = 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
          }
        }
        return;
      }
    }
    return;
  }
  if (plVar18 == (long *)0x0) goto LAB_00aeecf0;
  lVar24 = plVar18[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,plVar29,0);
  if ((uVar19 & 1) == 0) goto code_r0x00ae81a8;
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18,lVar20,0);
  }
  plVar18[0x13] = lVar20;
  native_sub_4326e0(plVar18 + 0x13,lVar20);
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar29 = plVar18 + 3;
  lVar20 = *plVar29;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
  if ((uVar19 & 1) == 0) {
    return;
  }
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18);
  }
  uVar7 = native_UIInput__get_isSelected_9f283c(plVar18);
  if (*(char *)((long)plVar18 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(plVar18);
  }
  lVar20 = plVar18[0x12];
  uVar19 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
  if ((uVar19 & 1) == 0) {
    lVar24 = *plVar29;
    uVar8 = 0;
LAB_009f1c84:
    plVar17 = plVar18 + 9;
    puVar2 = (undefined4 *)((long)plVar18 + 0x4c);
    plVar30 = plVar18 + 10;
    puVar3 = (undefined4 *)((long)plVar18 + 0x54);
  }
  else {
    uVar28 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar8 = native_System_String__IsNullOrEmpty_b09430(uVar28,0);
    lVar24 = *plVar29;
    if (((uVar7 | uVar8 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar17 = plVar18 + 0x14;
    puVar2 = (undefined4 *)((long)plVar18 + 0xa4);
    plVar30 = plVar18 + 0x15;
    puVar3 = (undefined4 *)((long)plVar18 + 0xac);
    uVar8 = 1;
  }
  if (lVar24 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar17,*puVar2,(int)*plVar30,*puVar3,lVar24,0);
  uVar28 = _StringLiteral___12eb5f0;
  lVar24 = _StringLiteral__12eaac0;
  if ((uVar8 & 1) == 0) {
    if ((int)plVar18[4] == 2) {
      if (*plVar29 == 0) goto LAB_009f2784;
      plVar17 = (long *)native_UILabel__get_font_ae77e8(*plVar29,0);
      uVar15 = uVar28;
      if (plVar17 != (long *)0x0) {
        lVar22 = *plVar17;
        if ((ulong)*(ushort *)(lVar22 + 0x12a) != 0) {
          uVar19 = 0;
          piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar27 = (undefined8 *)(lVar22 + (long)(*piVar23 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar19 = uVar19 + 1;
            piVar23 = piVar23 + 4;
          } while (uVar19 < *(ushort *)(lVar22 + 0x12a));
        }
        puVar27 = (undefined8 *)native_sub_3c9b34(plVar17,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar22 = (*(code *)*puVar27)(plVar17,puVar27[1]);
        if (lVar22 != 0) {
          lVar22 = *plVar17;
          if ((ulong)*(ushort *)(lVar22 + 0x12a) != 0) {
            uVar19 = 0;
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar27 = (undefined8 *)(lVar22 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar19 = uVar19 + 1;
              piVar23 = piVar23 + 4;
            } while (uVar19 < *(ushort *)(lVar22 + 0x12a));
          }
          puVar27 = (undefined8 *)native_sub_3c9b34(plVar17,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar22 = (*(code *)*puVar27)(plVar17,puVar27[1]);
          if (lVar22 == 0) goto LAB_009f2784;
          lVar22 = native_BMFont__GetGlyph_dd1c0c(lVar22,0x2a,0);
          uVar15 = _StringLiteral_x_12f6b98;
          if (lVar22 != 0) {
            uVar15 = uVar28;
          }
        }
      }
      if (lVar20 == 0) goto LAB_009f2784;
      iVar10 = *(int *)(lVar20 + 0x10);
      if (0 < iVar10) {
        do {
          lVar24 = native_System_String__Concat_afbd68(lVar24,uVar15,0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      lVar20 = lVar24;
      if ((uVar7 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar20 == 0) goto LAB_009f2784;
      uVar12 = *(undefined4 *)(lVar20 + 0x10);
      uVar9 = native_UIInput__get_cursorPosition_9f3090(plVar18);
      iVar10 = native_UnityEngine_Mathf__Min_8e4c18(uVar12,uVar9,0);
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,iVar10,0);
      uVar15 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar28 = native_System_String__Concat_afbd68(uVar28,uVar15,0);
    }
    else {
      if ((uVar7 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar20 == 0) goto LAB_009f2784;
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,0,0);
      iVar10 = 0;
    }
    uVar15 = native_System_String__Substring_b09fac
                       (lVar20,iVar10,*(int *)(lVar20 + 0x10) - iVar10,0);
    lVar20 = native_System_String__Concat_afbd68(uVar28,uVar15,0);
    if ((uVar7 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar18[0x17];
      goto LAB_009f1fe8;
    }
    lVar24 = *plVar29;
    if (lVar24 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar24 + 0x1e4) != 1) || (*(int *)(lVar24 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar11 = native_UILabel__CalculateOffsetToFit_aedc24(lVar24,lVar20,0);
    uVar5 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar25 = uVar5 & 0x400;
    if (iVar11 == 0) {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = (undefined4)plVar18[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar24,uVar12,0);
    }
    else {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar25 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar26 = *piVar23;
      if (iVar10 < iVar26) {
        if ((uVar25 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar10;
LAB_009f266c:
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_009f2784;
        uVar12 = 1;
        goto LAB_009f2678;
      }
      if ((uVar25 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar26 = *piVar23;
      }
      if (iVar11 < iVar26) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar11;
        goto LAB_009f266c;
      }
      if (lVar20 == 0) goto LAB_009f2784;
      lVar24 = *plVar29;
      uVar28 = native_System_String__Substring_b09fac(lVar20,0,iVar10,0);
      if (lVar24 == 0) goto LAB_009f2784;
      iVar10 = native_UILabel__CalculateOffsetToFit_aedc24(lVar24,uVar28,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar23 < iVar10) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar23 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar23 = iVar10;
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_009f2784;
        uVar12 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar10 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar20 == 0) goto LAB_009f2784;
      lVar20 = native_System_String__Substring_b09fac
                         (lVar20,iVar10,*(int *)(lVar20 + 0x10) - iVar10,0);
    }
  }
  else {
    lVar24 = *plVar29;
    if (lVar24 == 0) goto LAB_009f2784;
    uVar12 = (undefined4)plVar18[0x17];
    plVar17 = (long *)&StringLiteral__12eaac0;
    if ((uVar7 & 1) == 0) {
      plVar17 = plVar18 + 0x13;
    }
    lVar20 = *plVar17;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar24,uVar12,0);
  }
  if (*plVar29 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar29,lVar20,0);
  if ((uVar7 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar19 = native_UIInput__get_inputShouldBeHidden_9f28e0(plVar18), (uVar19 & 1) == 0))
  goto LAB_009f2280;
  lVar20 = plVar18[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar17 = plVar18 + 0x1b;
  lVar24 = *plVar17;
  iVar11 = *(int *)((long)plVar18 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,0,0);
  if ((uVar19 & 1) != 0) {
    lVar24 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar24,2,2,5,0,0);
    *plVar17 = lVar24;
    native_sub_4326e0(plVar17,lVar24);
    iVar26 = 0;
    do {
      iVar21 = 0;
      do {
        lVar24 = *plVar17;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar24 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar24,iVar21,iVar26,0);
        bVar4 = iVar21 == 0;
        iVar21 = 1;
      } while (bVar4);
      bVar4 = iVar26 == 0;
      iVar26 = 1;
    } while (bVar4);
    if (*plVar17 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar17,0);
  }
  iVar26 = (int)lVar20 - iVar10;
  iVar11 = iVar11 - iVar10;
  if (iVar26 != iVar11) {
    plVar30 = plVar18 + 0x19;
    lVar20 = *plVar30;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
    if ((uVar19 & 1) == 0) {
      plVar16 = (long *)*plVar29;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380));
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
    }
    else {
      if (*plVar29 == 0) goto LAB_009f2784;
      uVar28 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar20 = native_NGUITools__AddWidget_object__4a528c
                         (uVar28,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar30 = lVar20;
      native_sub_4326e0(plVar30,lVar20);
      if (*plVar30 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Highlight_12ee898,0);
      plVar16 = (long *)*plVar30;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
      if (*plVar30 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar30 + 0x100) = 0;
      plVar16 = (long *)*plVar29;
      if (plVar16 == (long *)0x0) goto LAB_009f2784;
      plVar31 = (long *)*plVar30;
      uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
      if (plVar31 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
      if (*plVar29 == 0) goto LAB_009f2784;
      lVar20 = *plVar30;
      uVar28 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
      if (lVar20 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar20,uVar28,0);
    }
  }
  plVar30 = plVar18 + 0x1a;
  lVar20 = *plVar30;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
  if ((uVar19 & 1) == 0) {
    plVar16 = (long *)*plVar29;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    plVar31 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    if (plVar31 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar31 + 0x2b8))(plVar31,uVar12,*(undefined8 *)(*plVar31 + 0x2c0));
    plVar16 = (long *)*plVar30;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
    plVar17 = (long *)*plVar30;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380));
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar30,1,0);
  }
  else {
    if (*plVar29 == 0) goto LAB_009f2784;
    uVar28 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar29,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar20 = native_NGUITools__AddWidget_object__4a528c
                       (uVar28,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar30 = lVar20;
    native_sub_4326e0(plVar30,lVar20);
    if (*plVar30 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar30,_StringLiteral_Input_Caret_12ee890,0);
    plVar16 = (long *)*plVar30;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x338))(plVar16,*plVar17,*(undefined8 *)(*plVar16 + 0x340));
    if (*plVar30 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar30 + 0x100) = 0;
    plVar17 = (long *)*plVar29;
    if (plVar17 == (long *)0x0) goto LAB_009f2784;
    plVar16 = (long *)*plVar30;
    uVar12 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x2b8))(plVar16,uVar12,*(undefined8 *)(*plVar16 + 0x2c0));
    if (*plVar29 == 0) goto LAB_009f2784;
    lVar20 = *plVar30;
    uVar28 = native_UIRect__get_cachedTransform_c27c58(*plVar29,0);
    if (lVar20 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar20,uVar28,0);
  }
  if (*plVar30 == 0) goto LAB_009f2784;
  lVar20 = *plVar29;
  uVar28 = *(undefined8 *)(*plVar30 + 0xf8);
  if (iVar26 == iVar11) {
    if (lVar20 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar18[0xb],*(undefined4 *)((long)plVar18 + 0x5c),(int)plVar18[0xc],
               *(undefined4 *)((long)plVar18 + 100),(int)plVar18[0xd],
               *(undefined4 *)((long)plVar18 + 0x6c),(int)plVar18[0xe],
               *(undefined4 *)((long)plVar18 + 0x74),lVar20,iVar26,iVar26,uVar28,0,0);
    lVar20 = plVar18[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
    if ((uVar19 & 1) != 0) {
      lVar20 = plVar18[0x19];
      if (lVar20 == 0) goto LAB_009f2784;
      uVar7 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((plVar18[0x19] == 0) || (lVar20 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)plVar18[0xb],*(undefined4 *)((long)plVar18 + 0x5c),(int)plVar18[0xc],
               *(undefined4 *)((long)plVar18 + 100),(int)plVar18[0xd],
               *(undefined4 *)((long)plVar18 + 0x6c),(int)plVar18[0xe],
               *(undefined4 *)((long)plVar18 + 0x74),lVar20,iVar26,iVar11,uVar28,
               *(undefined8 *)(plVar18[0x19] + 0xf8),0);
    lVar20 = plVar18[0x19];
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0xf8) == 0)) goto LAB_009f2784;
    uVar7 = native_UIGeometry__get_hasVertices_9ef420();
    uVar7 = uVar7 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar20,uVar7,0);
  }
  fVar32 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(plVar18 + 0x1c) = fVar32 + 0.5;
  if (plVar18[3] != 0) {
    *(undefined4 *)((long)plVar18 + 0xe4) = *(undefined4 *)(plVar18[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILocalize$$.ctor @ 0xaeee44
 * void UILocalize___ctor (UILocalize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILocalize$$.ctor
   void UILocalize___ctor (UILocalize_o* __this, const MethodInfo* method); */

undefined1  [16] native_UILocalize___ctor_aeee44(ulong param_1)

{
  undefined1 auVar1 [16];
  
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


