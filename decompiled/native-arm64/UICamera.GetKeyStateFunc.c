/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.GetKeyStateFunc$$.ctor @ 0x551028
 * void UICamera_GetKeyStateFunc___ctor (UICamera_GetKeyStateFunc_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UICamera.GetKeyStateFunc$$.ctor
   void UICamera_GetKeyStateFunc___ctor (UICamera_GetKeyStateFunc_o* __this, Il2CppObject* object,
   intptr_t method, const MethodInfo* method); */

void native_UICamera_GetKeyStateFunc___ctor_551028(long param_1,long param_2,undefined8 *param_3)

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



/* UICamera.GetKeyStateFunc$$Invoke @ 0x551094
 * bool UICamera_GetKeyStateFunc__Invoke (UICamera_GetKeyStateFunc_o* __this, int32_t key, const MethodInfo* method); */

/* UICamera.GetKeyStateFunc$$Invoke
   bool UICamera_GetKeyStateFunc__Invoke (UICamera_GetKeyStateFunc_o* __this, int32_t key, const
   MethodInfo* method); */

uint native_UICamera_GetKeyStateFunc__Invoke_551094(long param_1,undefined4 param_2)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  long lStack_58;
  
  lStack_58 = param_1;
  lVar10 = *(long *)(param_1 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      uVar4 = 0;
      goto LAB_005512d4;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  uStack_5c = param_2;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar7 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar7 + 0x48) == -1) {
      native_sub_4327f4(lVar7);
    }
    uVar5 = native_sub_432768(lVar7);
    if ((uVar5 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0)) {
        if (*(char *)(lVar7 + 0x4a) != '\0') goto LAB_005511c0;
        uVar4 = (*pcVar13)(auStack_6c,lVar7);
      }
      else {
        uVar5 = native_sub_432760(lVar7);
        uVar6 = native_sub_432b64(lVar7);
        uVar3 = uStack_5c;
        if ((uVar5 & 1) == 0) {
          uVar2 = *(ushort *)(lVar7 + 0x48);
          if ((uVar6 & 1) == 0) {
            lVar7 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar4 = (**(code **)(lVar7 + 0x138))(plVar1,uStack_5c,*(undefined8 *)(lVar7 + 0x140));
            goto LAB_005512c0;
          }
          lVar7 = native_sub_432764(lVar7);
          uVar3 = uStack_5c;
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar5 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005512b0;
              }
              uVar5 = uVar5 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar9 = (undefined8 *)native_sub_3c9b34(plVar1,lVar7,(ulong)uVar2);
LAB_005512b0:
          pcVar13 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if ((uVar6 & 1) == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar5 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar7 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00551280;
                }
                uVar5 = uVar5 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00551280:
            uVar8 = *(undefined8 *)(lVar11 + 8);
          }
          puVar9 = (undefined8 *)native_sub_4327e8(uVar8,lVar7);
          pcVar13 = (code *)*puVar9;
        }
        uVar4 = (*pcVar13)(plVar1,uVar3,puVar9);
      }
    }
    else if (*(char *)(lVar7 + 0x4a) == '\x01') {
      uVar4 = (*pcVar13)(uStack_5c,lVar7);
    }
    else {
LAB_005511c0:
      uVar4 = (*pcVar13)(plVar1,uStack_5c,lVar7);
    }
LAB_005512c0:
    lVar10 = lVar10 + 1;
  } while (lVar10 != lVar14);
LAB_005512d4:
  return uVar4 & 1;
}



/* UICamera.GetKeyStateFunc$$BeginInvoke @ 0x5512f4
 * System_IAsyncResult_o* UICamera_GetKeyStateFunc__BeginInvoke (UICamera_GetKeyStateFunc_o* __this, int32_t key, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.GetKeyStateFunc$$BeginInvoke
   System_IAsyncResult_o* UICamera_GetKeyStateFunc__BeginInvoke (UICamera_GetKeyStateFunc_o* __this,
   int32_t key, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
    */

void native_UICamera_GetKeyStateFunc__BeginInvoke_5512f4
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  if ((bRam000000000133e9f3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_KeyCode_TypeInfo_12d4fb8);
    bRam000000000133e9f3 = 1;
  }
  uStack_40 = 0;
  uStack_48 = native_sub_4327fc(_UnityEngine_KeyCode_TypeInfo_12d4fb8,&uStack_34);
  native_sub_4326e8(param_1,&uStack_48,param_3,param_4);
  return;
}



/* UICamera.GetKeyStateFunc$$EndInvoke @ 0x55137c
 * bool UICamera_GetKeyStateFunc__EndInvoke (UICamera_GetKeyStateFunc_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* UICamera.GetKeyStateFunc$$EndInvoke
   bool UICamera_GetKeyStateFunc__EndInvoke (UICamera_GetKeyStateFunc_o* __this,
   System_IAsyncResult_o* result, const MethodInfo* method); */

undefined1 native_UICamera_GetKeyStateFunc__EndInvoke_55137c(undefined8 param_1,undefined8 param_2)

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


