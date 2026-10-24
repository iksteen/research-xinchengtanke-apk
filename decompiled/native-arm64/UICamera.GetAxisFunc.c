/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.GetAxisFunc$$.ctor @ 0x550bec
 * void UICamera_GetAxisFunc___ctor (UICamera_GetAxisFunc_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UICamera.GetAxisFunc$$.ctor
   void UICamera_GetAxisFunc___ctor (UICamera_GetAxisFunc_o* __this, Il2CppObject* object, intptr_t
   method, const MethodInfo* method); */

void native_UICamera_GetAxisFunc___ctor_550bec(long param_1,long param_2,undefined8 *param_3)

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



/* UICamera.GetAxisFunc$$Invoke @ 0x550c58
 * float UICamera_GetAxisFunc__Invoke (UICamera_GetAxisFunc_o* __this, System_String_o* name, const MethodInfo* method); */

/* UICamera.GetAxisFunc$$Invoke
   float UICamera_GetAxisFunc__Invoke (UICamera_GetAxisFunc_o* __this, System_String_o* name, const
   MethodInfo* method); */

undefined1  [16] native_UICamera_GetAxisFunc__Invoke_550c58(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
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
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 uVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar17;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined8 extraout_var_09;
  undefined8 extraout_var_10;
  undefined1 auVar16 [16];
  long lStack_58;
  
  lStack_58 = param_1;
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 == 0) {
    plVar14 = &lStack_58;
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x18);
    if (lVar13 == 0) {
      uVar15 = 0;
      uVar17 = 0;
      uVar5 = 0;
      goto LAB_00550fbc;
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
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_00550f9c;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            uVar15 = extraout_s0;
            uVar17 = extraout_var;
            uVar5 = extraout_var_05;
            goto LAB_00550fa8;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar10 = *param_2;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar7 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00550dd0;
              }
              uVar7 = uVar7 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
LAB_00550dd0:
          pcVar12 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *param_2;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar7 = 0;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00550da8;
                }
                uVar7 = uVar7 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
            }
            lVar10 = native_sub_3c9b34(param_2);
LAB_00550da8:
            uVar5 = *(undefined8 *)(lVar10 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar12 = (code *)*puVar6;
        }
        (*pcVar12)(param_2,puVar6);
        uVar15 = extraout_s0_00;
        uVar17 = extraout_var_00;
        uVar5 = extraout_var_06;
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0))
        goto LAB_00550f10;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            uVar15 = extraout_s0_01;
            uVar17 = extraout_var_01;
            uVar5 = extraout_var_07;
            goto LAB_00550fa8;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar7 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00550e34;
              }
              uVar7 = uVar7 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00550e34:
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
                  goto LAB_00550e0c;
                }
                uVar7 = uVar7 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
            }
            lVar10 = native_sub_3c9b34(plVar1);
LAB_00550e0c:
            uVar5 = *(undefined8 *)(lVar10 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar12 = (code *)*puVar6;
        }
        (*pcVar12)(plVar1,param_2,puVar6);
        uVar15 = extraout_s0_02;
        uVar17 = extraout_var_02;
        uVar5 = extraout_var_08;
      }
    }
    else if (bVar3) {
LAB_00550f10:
      (*pcVar12)(plVar1,param_2,lVar4);
      uVar15 = extraout_s0_03;
      uVar17 = extraout_var_03;
      uVar5 = extraout_var_09;
    }
    else {
LAB_00550f9c:
      (*pcVar12)(param_2,lVar4);
      uVar15 = extraout_s0_04;
      uVar17 = extraout_var_04;
      uVar5 = extraout_var_10;
    }
LAB_00550fa8:
    lVar9 = lVar9 + 1;
  } while (lVar9 != lVar13);
LAB_00550fbc:
  auVar16._4_4_ = uVar17;
  auVar16._0_4_ = uVar15;
  auVar16._8_8_ = uVar5;
  return auVar16;
}



/* UICamera.GetAxisFunc$$BeginInvoke @ 0x550fd8
 * System_IAsyncResult_o* UICamera_GetAxisFunc__BeginInvoke (UICamera_GetAxisFunc_o* __this, System_String_o* name, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* UICamera.GetAxisFunc$$BeginInvoke
   System_IAsyncResult_o* UICamera_GetAxisFunc__BeginInvoke (UICamera_GetAxisFunc_o* __this,
   System_String_o* name, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo*
   method); */

void native_UICamera_GetAxisFunc__BeginInvoke_550fd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uStack_20 = param_2;
  native_sub_4326e8(param_1,&uStack_20);
  return;
}



/* UICamera.GetAxisFunc$$EndInvoke @ 0x550ffc
 * float UICamera_GetAxisFunc__EndInvoke (UICamera_GetAxisFunc_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* UICamera.GetAxisFunc$$EndInvoke
   float UICamera_GetAxisFunc__EndInvoke (UICamera_GetAxisFunc_o* __this, System_IAsyncResult_o*
   result, const MethodInfo* method); */

undefined4 native_UICamera_GetAxisFunc__EndInvoke_550ffc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = native_sub_4326ec(param_2,0);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)native_sub_432800();
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


