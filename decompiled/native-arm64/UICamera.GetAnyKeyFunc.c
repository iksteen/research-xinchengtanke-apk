/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.GetAnyKeyFunc$$.ctor @ 0x550910
 * void UICamera_GetAnyKeyFunc___ctor (UICamera_GetAnyKeyFunc_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UICamera.GetAnyKeyFunc$$.ctor
   void UICamera_GetAnyKeyFunc___ctor (UICamera_GetAnyKeyFunc_o* __this, Il2CppObject* object,
   intptr_t method, const MethodInfo* method); */

void native_UICamera_GetAnyKeyFunc___ctor_550910(long param_1,long param_2,undefined8 *param_3)

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



/* UICamera.GetAnyKeyFunc$$Invoke @ 0x55097c
 * bool UICamera_GetAnyKeyFunc__Invoke (UICamera_GetAnyKeyFunc_o* __this, const MethodInfo* method); */

/* UICamera.GetAnyKeyFunc$$Invoke
   bool UICamera_GetAnyKeyFunc__Invoke (UICamera_GetAnyKeyFunc_o* __this, const MethodInfo* method);
    */

uint native_UICamera_GetAnyKeyFunc__Invoke_55097c(long param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lStack_48;
  
  lStack_48 = param_1;
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 == 0) {
    plVar14 = &lStack_48;
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x18);
    if (lVar13 == 0) {
      uVar3 = 0;
      goto LAB_00550b78;
    }
    plVar14 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar14[lVar9];
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar4 = *(long *)(lVar10 + 0x28);
    pcVar12 = *(code **)(lVar10 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    if ((uVar7 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0))
      goto LAB_00550b58;
      uVar7 = native_sub_432760(lVar4);
      uVar8 = native_sub_432b64(lVar4);
      if ((uVar7 & 1) == 0) {
        uVar2 = *(ushort *)(lVar4 + 0x48);
        if ((uVar8 & 1) == 0) {
          lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
          uVar3 = (**(code **)(lVar4 + 0x138))(plVar1,*(undefined8 *)(lVar4 + 0x140));
          goto LAB_00550b64;
        }
        lVar4 = native_sub_432764(lVar4);
        lVar10 = *plVar1;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar7 = 0;
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_00550a80;
            }
            uVar7 = uVar7 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00550a80:
        pcVar12 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if ((uVar8 & 1) == 0) {
          uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar7 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)(lVar4 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_00550a58;
              }
              uVar7 = uVar7 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
          }
          lVar10 = native_sub_3c9b34(plVar1);
LAB_00550a58:
          uVar5 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
        pcVar12 = (code *)*puVar6;
      }
      uVar3 = (*pcVar12)(plVar1,puVar6);
    }
    else if (*(char *)(lVar4 + 0x4a) == '\0') {
      uVar3 = (*pcVar12)(lVar4);
    }
    else {
LAB_00550b58:
      uVar3 = (*pcVar12)(plVar1,lVar4);
    }
LAB_00550b64:
    lVar9 = lVar9 + 1;
  } while (lVar9 != lVar13);
LAB_00550b78:
  return uVar3 & 1;
}



/* UICamera.GetAnyKeyFunc$$BeginInvoke @ 0x550b94
 * System_IAsyncResult_o* UICamera_GetAnyKeyFunc__BeginInvoke (UICamera_GetAnyKeyFunc_o* __this, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* UICamera.GetAnyKeyFunc$$BeginInvoke
   System_IAsyncResult_o* UICamera_GetAnyKeyFunc__BeginInvoke (UICamera_GetAnyKeyFunc_o* __this,
   System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

void native_UICamera_GetAnyKeyFunc__BeginInvoke_550b94
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  native_sub_4326e8(param_1,&uStack_18,param_2,param_3);
  return;
}



/* UICamera.GetAnyKeyFunc$$EndInvoke @ 0x550bc0
 * bool UICamera_GetAnyKeyFunc__EndInvoke (UICamera_GetAnyKeyFunc_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* UICamera.GetAnyKeyFunc$$EndInvoke
   bool UICamera_GetAnyKeyFunc__EndInvoke (UICamera_GetAnyKeyFunc_o* __this, System_IAsyncResult_o*
   result, const MethodInfo* method); */

undefined1 native_UICamera_GetAnyKeyFunc__EndInvoke_550bc0(undefined8 param_1,undefined8 param_2)

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


