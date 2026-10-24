/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIInput.OnValidate$$.ctor @ 0x556f14
 * void UIInput_OnValidate___ctor (UIInput_OnValidate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UIInput.OnValidate$$.ctor
   void UIInput_OnValidate___ctor (UIInput_OnValidate_o* __this, Il2CppObject* object, intptr_t
   method, const MethodInfo* method); */

void native_UIInput_OnValidate___ctor_556f14(long param_1,long param_2,undefined8 *param_3)

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



/* UIInput.OnValidate$$Invoke @ 0x556f80
 * uint16_t UIInput_OnValidate__Invoke (UIInput_OnValidate_o* __this, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method); */

/* UIInput.OnValidate$$Invoke
   uint16_t UIInput_OnValidate__Invoke (UIInput_OnValidate_o* __this, System_String_o* text, int32_t
   charIndex, uint16_t addedChar, const MethodInfo* method); */

undefined8
native_UIInput_OnValidate__Invoke_556f80
          (long param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lStack_68;
  
  lStack_68 = param_1;
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 == 0) {
    plVar14 = &lStack_68;
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x18);
    if (lVar13 == 0) {
      return 0;
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
    uVar6 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x03';
    if ((uVar6 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_005572f8;
        uVar6 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar6 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            uVar8 = (**(code **)(lVar4 + 0x138))
                              (param_2,param_3,param_4,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_0055730c;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar10 = *param_2;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar6 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar5 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_0055710c;
              }
              uVar6 = uVar6 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar5 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
LAB_0055710c:
          pcVar12 = (code *)*puVar5;
          puVar5 = (undefined8 *)puVar5[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar8 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *param_2;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar6 = 0;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005570e4;
                }
                uVar6 = uVar6 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
            }
            lVar10 = native_sub_3c9b34(param_2);
LAB_005570e4:
            uVar8 = *(undefined8 *)(lVar10 + 8);
          }
          puVar5 = (undefined8 *)native_sub_4327e8(uVar8,lVar4);
          pcVar12 = (code *)*puVar5;
        }
        uVar8 = (*pcVar12)(param_2,param_3,param_4,puVar5);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0))
        goto LAB_00557264;
        uVar6 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar6 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar8 = (**(code **)(lVar4 + 0x138))
                              (plVar1,param_2,param_3,param_4,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_0055730c;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar6 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar5 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00557180;
              }
              uVar6 = uVar6 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00557180:
          pcVar12 = (code *)*puVar5;
          puVar5 = (undefined8 *)puVar5[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar1;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar6 = 0;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00557158;
                }
                uVar6 = uVar6 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
            }
            lVar10 = native_sub_3c9b34(plVar1);
LAB_00557158:
            uVar8 = *(undefined8 *)(lVar10 + 8);
          }
          puVar5 = (undefined8 *)native_sub_4327e8(uVar8,lVar4);
          pcVar12 = (code *)*puVar5;
        }
        uVar8 = (*pcVar12)(plVar1,param_2,param_3,param_4,puVar5);
      }
    }
    else if (bVar3) {
LAB_00557264:
      uVar8 = (*pcVar12)(plVar1,param_2,param_3,param_4,lVar4);
    }
    else {
LAB_005572f8:
      uVar8 = (*pcVar12)(param_2,param_3,param_4,lVar4);
    }
LAB_0055730c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar13) {
      return uVar8;
    }
  } while( true );
}



/* UIInput.OnValidate$$BeginInvoke @ 0x557340
 * System_IAsyncResult_o* UIInput_OnValidate__BeginInvoke (UIInput_OnValidate_o* __this, System_String_o* text, int32_t charIndex, uint16_t addedChar, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput.OnValidate$$BeginInvoke
   System_IAsyncResult_o* UIInput_OnValidate__BeginInvoke (UIInput_OnValidate_o* __this,
   System_String_o* text, int32_t charIndex, uint16_t addedChar, System_AsyncCallback_o* callback,
   Il2CppObject* object, const MethodInfo* method); */

void native_UIInput_OnValidate__BeginInvoke_557340
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 auStack_38 [2];
  undefined4 uStack_34;
  
  auStack_38[0] = param_4;
  uStack_34 = param_3;
  if ((bRam000000000133ea00 & 1) == 0) {
    native_sub_43273c(&char_TypeInfo_12d3d98);
    native_sub_43273c(&int_TypeInfo_12d4ec0);
    bRam000000000133ea00 = 1;
  }
  uStack_48 = 0;
  uStack_60 = param_2;
  uStack_58 = native_sub_4327fc(_int_TypeInfo_12d4ec0,&uStack_34);
  uStack_50 = native_sub_4327fc(_char_TypeInfo_12d3d98,auStack_38);
  native_sub_4326e8(param_1,&uStack_60,param_5,param_6);
  return;
}



/* UIInput.OnValidate$$EndInvoke @ 0x557404
 * uint16_t UIInput_OnValidate__EndInvoke (UIInput_OnValidate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* UIInput.OnValidate$$EndInvoke
   uint16_t UIInput_OnValidate__EndInvoke (UIInput_OnValidate_o* __this, System_IAsyncResult_o*
   result, const MethodInfo* method); */

undefined2 native_UIInput_OnValidate__EndInvoke_557404(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined2 *puVar2;
  
  lVar1 = native_sub_4326ec(param_2,0);
  if (lVar1 != 0) {
    puVar2 = (undefined2 *)native_sub_432800();
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


