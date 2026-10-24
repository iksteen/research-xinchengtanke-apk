/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Waypoint$$Start @ 0x94f64c
 * void Waypoint__Start (Waypoint_o* __this, const MethodInfo* method); */

/* Waypoint$$Start
   void Waypoint__Start (Waypoint_o* __this, const MethodInfo* method); */

void native_Waypoint__Start_94f64c(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Waypoint$$Update @ 0x94f654
 * void Waypoint__Update (Waypoint_o* __this, const MethodInfo* method); */

/* Waypoint$$Update
   void Waypoint__Update (Waypoint_o* __this, const MethodInfo* method); */

void native_Waypoint__Update_94f654(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 0x30);
  if (fVar7 == 0.0) {
    native_Waypoint__Accell_94f6e4(param_1);
    fVar7 = *(float *)(param_1 + 0x30);
  }
  if (fVar7 == 1.0) {
    uVar4 = native_Waypoint__Slow_94f8d4(param_1);
    native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar4,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x50) < *(uint *)(lVar5 + 0x18)) {
      puVar6 = (undefined8 *)(param_1 + 0x38);
      *puVar6 = *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x50) * 8 + 0x20);
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
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Waypoint$$Accell @ 0x94f6e4
 * void Waypoint__Accell (Waypoint_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Waypoint$$Accell
   void Waypoint__Accell (Waypoint_o* __this, const MethodInfo* method); */

void native_Waypoint__Accell_94f6e4
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  
  if ((bRam000000000134148f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134148f = 1;
  }
  if (*(char *)(param_5 + 0x34) == '\0') {
    *(undefined2 *)(param_5 + 0x34) = 1;
  }
  uVar4 = *(undefined8 *)(param_5 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if (((uVar1 & 1) != 0) && (*(char *)(param_5 + 0x44) != '\0')) {
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_0094f8d0;
    fVar5 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x38),0);
    fVar7 = param_2;
    fVar11 = param_3;
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (lVar2 == 0) goto LAB_0094f8d0;
    fVar6 = (float)native_UnityEngine_Transform__get_position_77169c(lVar2,0);
    uVar10 = (ulong)(uint)(param_2 - fVar7);
    uVar12 = (ulong)(uint)(param_3 - fVar11);
    uVar8 = native_UnityEngine_Quaternion__LookRotation_762858(fVar5 - fVar6,uVar10,uVar12,0);
    uVar1 = uVar10;
    uVar13 = uVar12;
    uVar4 = param_4;
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (lVar3 == 0) goto LAB_0094f8d0;
    uVar9 = native_UnityEngine_Transform__get_rotation_771a30(lVar3,0);
    native_UnityEngine_Time__get_deltaTime_77082c(0);
    native_UnityEngine_Quaternion__Slerp_7622b4
              (uVar9,uVar1,uVar13,uVar4,uVar8,uVar10,uVar12,param_4,0);
    if (lVar2 == 0) goto LAB_0094f8d0;
    native_UnityEngine_Transform__set_rotation_771b8c(lVar2,0);
  }
  *(float *)(param_5 + 0x2c) =
       *(float *)(param_5 + 0x2c) + *(float *)(param_5 + 0x18) * *(float *)(param_5 + 0x18);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  fVar7 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  if (lVar2 != 0) {
    native_UnityEngine_Transform__Translate_772354(0,0,fVar7 * *(float *)(param_5 + 0x2c),lVar2,0);
    if (*(float *)(param_5 + 0x20) <= *(float *)(param_5 + 0x2c)) {
      *(float *)(param_5 + 0x2c) = *(float *)(param_5 + 0x20);
    }
    return;
  }
LAB_0094f8d0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Waypoint$$OnTriggerEnter @ 0x94f94c
 * void Waypoint__OnTriggerEnter (Waypoint_o* __this, const MethodInfo* method); */

/* Waypoint$$OnTriggerEnter
   void Waypoint__OnTriggerEnter (Waypoint_o* __this, const MethodInfo* method); */

void native_Waypoint__OnTriggerEnter_94f94c(long param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (*(long *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x18) <= iVar1) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Waypoint$$OnDrawGizmosSelected @ 0x94f988
 * void Waypoint__OnDrawGizmosSelected (Waypoint_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Waypoint$$OnDrawGizmosSelected
   void Waypoint__OnDrawGizmosSelected (Waypoint_o* __this, const MethodInfo* method); */

void native_Waypoint__OnDrawGizmosSelected_94f988
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001341490 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341490 = 1;
  }
  lVar4 = *(long *)(param_4 + 0x48);
  if (lVar4 != 0) {
    lVar6 = 4;
    lVar7 = 0x100000000;
    do {
      uVar8 = lVar6 - 4;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar8) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_0094fb78;
      uVar5 = *(undefined8 *)(lVar4 + lVar6 * 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_4 + 0x48);
        if (lVar4 == 0) break;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0094fb78;
        if (((*(long *)(lVar4 + 0x20) == 0) ||
            (lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (*(long *)(lVar4 + 0x20),
                                _Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8),
            lVar4 == 0)) ||
           (lVar4 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar4,0), lVar4 == 0))
        break;
        native_UnityEngine_Material__get_color_8e3108(lVar4,0);
        native_UnityEngine_Gizmos__set_color_8dec70(0);
        lVar4 = *(long *)(param_4 + 0x48);
        if (lVar4 == 0) break;
        uVar2 = *(uint *)(lVar4 + 0x18);
        lVar1 = (long)(((ulong)uVar2 << 0x20) + -0x100000000) >> 0x20;
        if ((long)uVar8 < lVar1) {
          if (uVar2 <= uVar8) {
LAB_0094fb78:
            uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar5,0);
          }
          lVar4 = *(long *)(lVar4 + lVar6 * 8);
          if (lVar4 == 0) break;
          uVar5 = native_UnityEngine_Transform__get_position_77169c(lVar4,0);
          lVar4 = *(long *)(param_4 + 0x48);
          if (lVar4 == 0) break;
          if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar6 - 3U) goto LAB_0094fb78;
          lVar4 = lVar4 + (lVar7 >> 0x1d);
        }
        else {
          if (uVar2 == 0) goto LAB_0094fb78;
          lVar4 = *(long *)(lVar4 + lVar1 * 8 + 0x20);
          if (lVar4 == 0) break;
          uVar5 = native_UnityEngine_Transform__get_position_77169c(lVar4,0);
          lVar4 = *(long *)(param_4 + 0x48);
          if (lVar4 == 0) break;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0094fb78;
        }
        if (*(long *)(lVar4 + 0x20) == 0) break;
        uVar10 = param_2;
        uVar11 = param_3;
        uVar9 = native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar4 + 0x20),0);
        native_UnityEngine_Gizmos__DrawLine_8debc4(uVar5,param_2,param_3,uVar9,uVar10,uVar11,0);
      }
      lVar4 = *(long *)(param_4 + 0x48);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x100000000;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Waypoint$$Slow @ 0x94f8d4
 * System_Collections_IEnumerator_o* Waypoint__Slow (Waypoint_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Waypoint$$Slow
   System_Collections_IEnumerator_o* Waypoint__Slow (Waypoint_o* __this, const MethodInfo* method);
    */

long native_Waypoint__Slow_94f8d4(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001341491 & 1) == 0) {
    native_sub_43273c(&Waypoint__Slow_d__19_TypeInfo_12d7ba8);
    bRam0000000001341491 = 1;
  }
  lVar1 = native_sub_432808(_Waypoint__Slow_d__19_TypeInfo_12d7ba8);
  native_Waypoint__Slow_d__19___ctor_56024c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Waypoint$$.ctor @ 0x94fb84
 * void Waypoint___ctor (Waypoint_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Waypoint$$.ctor
   void Waypoint___ctor (Waypoint_o* __this, const MethodInfo* method); */

undefined1  [16] native_Waypoint___ctor_94fb84(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x40c00000;
  *(undefined8 *)(param_1 + 0x20) = 0x3f80000041200000;
  *(undefined8 *)(param_1 + 0x18) = 0x3f6666663f4ccccd;
  *(undefined1 *)(param_1 + 0x44) = 1;
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


