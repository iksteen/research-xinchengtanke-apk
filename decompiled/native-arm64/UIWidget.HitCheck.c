/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIWidget.HitCheck$$.ctor @ 0x55b650
 * void UIWidget_HitCheck___ctor (UIWidget_HitCheck_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UIWidget.HitCheck$$.ctor
   void UIWidget_HitCheck___ctor (UIWidget_HitCheck_o* __this, Il2CppObject* object, intptr_t
   method, const MethodInfo* method); */

void native_UIWidget_HitCheck___ctor_55b650(long param_1,long param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((param_2 == 0) && (uVar4 = native_sub_432768(param_3), (uVar4 & 1) == 0)) {
    uVar5 = native_sub_43281c(0,&UNK_00e1991c);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
  uVar5 = *param_3;
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIWidget.HitCheck$$Invoke @ 0x55b6bc
 * bool UIWidget_HitCheck__Invoke (UIWidget_HitCheck_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* UIWidget.HitCheck$$Invoke
   bool UIWidget_HitCheck__Invoke (UIWidget_HitCheck_o* __this, UnityEngine_Vector3_o worldPos,
   const MethodInfo* method); */

uint native_UIWidget_HitCheck__Invoke_55b6bc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long lStack_68;
  
  lStack_68 = param_4;
  lVar9 = *(long *)(param_4 + 0x68);
  if (lVar9 == 0) {
    plVar14 = &lStack_68;
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x18);
    if (lVar13 == 0) {
      uVar3 = 0;
      goto LAB_0055b91c;
    }
    plVar14 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  uStack_80 = param_1;
  uStack_7c = param_2;
  uStack_78 = param_3;
  do {
    lVar10 = plVar14[lVar9];
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar6 = *(long *)(lVar10 + 0x28);
    pcVar12 = *(code **)(lVar10 + 0x10);
    if (*(short *)(lVar6 + 0x48) == -1) {
      native_sub_4327f4(lVar6);
    }
    uVar4 = native_sub_432768(lVar6);
    if ((uVar4 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_4 + 0x18) == 0)) {
        if (*(char *)(lVar6 + 0x4a) != '\0') goto LAB_0055b7fc;
        uVar3 = (*pcVar12)(auStack_90,lVar6);
      }
      else {
        uVar4 = native_sub_432760(lVar6);
        uVar5 = native_sub_432b64(lVar6);
        uVar15 = uStack_78;
        uVar16 = uStack_7c;
        uVar17 = uStack_80;
        if ((uVar4 & 1) == 0) {
          uVar2 = *(ushort *)(lVar6 + 0x48);
          if ((uVar5 & 1) == 0) {
            lVar6 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar3 = (**(code **)(lVar6 + 0x138))
                              (uStack_80,uStack_7c,uStack_78,plVar1,*(undefined8 *)(lVar6 + 0x140));
            goto LAB_0055b908;
          }
          lVar6 = native_sub_432764(lVar6);
          uVar15 = uStack_78;
          uVar16 = uStack_7c;
          uVar17 = uStack_80;
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar4 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar6) {
                puVar8 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_0055b8f0;
              }
              uVar4 = uVar4 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar8 = (undefined8 *)native_sub_3c9b34(plVar1,lVar6,(ulong)uVar2);
LAB_0055b8f0:
          pcVar12 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if ((uVar5 & 1) == 0) {
            uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar1;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar4 = 0;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)(lVar6 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_0055b8c8;
                }
                uVar4 = uVar4 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar4 < *(ushort *)(lVar10 + 0x12a));
            }
            lVar10 = native_sub_3c9b34(plVar1);
LAB_0055b8c8:
            uVar7 = *(undefined8 *)(lVar10 + 8);
          }
          puVar8 = (undefined8 *)native_sub_4327e8(uVar7,lVar6);
          pcVar12 = (code *)*puVar8;
        }
        uVar3 = (*pcVar12)(uVar17,uVar16,uVar15,plVar1,puVar8);
      }
    }
    else if (*(char *)(lVar6 + 0x4a) == '\x01') {
      uVar3 = (*pcVar12)(uStack_80,uStack_7c,uStack_78,lVar6);
    }
    else {
LAB_0055b7fc:
      uVar3 = (*pcVar12)(uStack_80,uStack_7c,uStack_78,plVar1,lVar6);
    }
LAB_0055b908:
    lVar9 = lVar9 + 1;
  } while (lVar9 != lVar13);
LAB_0055b91c:
  return uVar3 & 1;
}



/* UIWidget.HitCheck$$BeginInvoke @ 0x55b944
 * System_IAsyncResult_o* UIWidget_HitCheck__BeginInvoke (UIWidget_HitCheck_o* __this, UnityEngine_Vector3_o worldPos, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget.HitCheck$$BeginInvoke
   System_IAsyncResult_o* UIWidget_HitCheck__BeginInvoke (UIWidget_HitCheck_o* __this,
   UnityEngine_Vector3_o worldPos, System_AsyncCallback_o* callback, Il2CppObject* object, const
   MethodInfo* method); */

void native_UIWidget_HitCheck__BeginInvoke_55b944
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  if ((bRam000000000133ea0b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
    bRam000000000133ea0b = 1;
  }
  uStack_48 = 0;
  uStack_50 = native_sub_4327fc(_UnityEngine_Vector3_TypeInfo_12d66f8,&uStack_40);
  native_sub_4326e8(param_4,&uStack_50,param_5,param_6);
  return;
}



/* UIWidget.HitCheck$$EndInvoke @ 0x55b9d0
 * bool UIWidget_HitCheck__EndInvoke (UIWidget_HitCheck_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* UIWidget.HitCheck$$EndInvoke
   bool UIWidget_HitCheck__EndInvoke (UIWidget_HitCheck_o* __this, System_IAsyncResult_o* result,
   const MethodInfo* method); */

undefined1 native_UIWidget_HitCheck__EndInvoke_55b9d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = native_sub_4326ec(param_2,0);
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)native_sub_432800();
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


