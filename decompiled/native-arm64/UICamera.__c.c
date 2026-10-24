/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.<>c$$.cctor @ 0x54f630
 * void UICamera___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$.cctor
   void UICamera___c___cctor (const MethodInfo* method); */

void native_UICamera___c___cctor_54f630(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9e9 & 1) == 0) {
    native_sub_43273c(&UICamera___c_TypeInfo_12d79d8);
    bRam000000000133e9e9 = 1;
  }
  uVar4 = native_sub_432808(_UICamera___c_TypeInfo_12d79d8);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  *puVar5 = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UICamera.<>c$$.ctor @ 0x54f694
 * void UICamera___c___ctor (UICamera___c_o* __this, const MethodInfo* method); */

/* UICamera.<>c$$.ctor
   void UICamera___c___ctor (UICamera___c_o* __this, const MethodInfo* method); */

void native_UICamera___c___ctor_54f694(void)

{
  return;
}



/* UICamera.<>c$$<Raycast>b__190_0 @ 0x54f69c
 * int32_t UICamera___c___Raycast_b__190_0 (UICamera___c_o* __this, UICamera_DepthEntry_o r1, UICamera_DepthEntry_o r2, const MethodInfo* method); */

/* UICamera.<>c$$<Raycast>b__190_0
   int32_t UICamera___c___Raycast_b__190_0 (UICamera___c_o* __this, UICamera_DepthEntry_o r1,
   UICamera_DepthEntry_o r2, const MethodInfo* method); */

ulong native_UICamera___c___Raycast_b__190_0_54f69c(undefined8 param_1,int *param_2,int *param_3)

{
  if (*param_3 < *param_2) {
    return 0xffffffff;
  }
  return (ulong)(*param_2 < *param_3);
}



/* UICamera.<>c$$<Raycast>b__190_1 @ 0x54f6ac
 * int32_t UICamera___c___Raycast_b__190_1 (UICamera___c_o* __this, UICamera_DepthEntry_o r1, UICamera_DepthEntry_o r2, const MethodInfo* method); */

/* UICamera.<>c$$<Raycast>b__190_1
   int32_t UICamera___c___Raycast_b__190_1 (UICamera___c_o* __this, UICamera_DepthEntry_o r1,
   UICamera_DepthEntry_o r2, const MethodInfo* method); */

ulong native_UICamera___c___Raycast_b__190_1_54f6ac(undefined8 param_1,int *param_2,int *param_3)

{
  if (*param_3 < *param_2) {
    return 0xffffffff;
  }
  return (ulong)(*param_2 < *param_3);
}



/* UICamera.<>c$$<.cctor>b__230_0 @ 0x54f6bc
 * bool UICamera___c____cctor_b__230_0 (UICamera___c_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$<.cctor>b__230_0
   bool UICamera___c____cctor_b__230_0 (UICamera___c_o* __this, int32_t key, const MethodInfo*
   method); */

undefined8 native_UICamera___c____cctor_b__230_0_54f6bc(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((bRam000000000133e9ea & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9ea = 1;
  }
  if (0x149 < param_2) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) != '\0') {
      return 0;
    }
  }
  if (pcRam0000000001343b50 == (code *)0x0) {
    pcRam0000000001343b50 = (code *)native_sub_4326f0(&UNK_00ecbfc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00dbdca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pcRam0000000001343b50)(param_2);
  return uVar1;
}



/* UICamera.<>c$$<.cctor>b__230_1 @ 0x54f748
 * bool UICamera___c____cctor_b__230_1 (UICamera___c_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$<.cctor>b__230_1
   bool UICamera___c____cctor_b__230_1 (UICamera___c_o* __this, int32_t key, const MethodInfo*
   method); */

undefined8 native_UICamera___c____cctor_b__230_1_54f748(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((bRam000000000133e9eb & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9eb = 1;
  }
  if (0x149 < param_2) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) != '\0') {
      return 0;
    }
  }
  if (pcRam0000000001343b48 == (code *)0x0) {
    pcRam0000000001343b48 = (code *)native_sub_4326f0(&UNK_00ecbf94);
  }
                    /* WARNING: Could not recover jumptable at 0x00dbdc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pcRam0000000001343b48)(param_2);
  return uVar1;
}



/* UICamera.<>c$$<.cctor>b__230_2 @ 0x54f7d4
 * bool UICamera___c____cctor_b__230_2 (UICamera___c_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$<.cctor>b__230_2
   bool UICamera___c____cctor_b__230_2 (UICamera___c_o* __this, int32_t key, const MethodInfo*
   method); */

undefined8 native_UICamera___c____cctor_b__230_2_54f7d4(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((bRam000000000133e9ec & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9ec = 1;
  }
  if (0x149 < param_2) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) != '\0') {
      return 0;
    }
  }
  if (pcRam0000000001343b40 == (code *)0x0) {
    pcRam0000000001343b40 = (code *)native_sub_4326f0(&UNK_00ecbf62);
  }
                    /* WARNING: Could not recover jumptable at 0x00dbdc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pcRam0000000001343b40)(param_2);
  return uVar1;
}



/* UICamera.<>c$$<.cctor>b__230_3 @ 0x54f860
 * float UICamera___c____cctor_b__230_3 (UICamera___c_o* __this, System_String_o* axis, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$<.cctor>b__230_3
   float UICamera___c____cctor_b__230_3 (UICamera___c_o* __this, System_String_o* axis, const
   MethodInfo* method); */

undefined1  [16] native_UICamera___c____cctor_b__230_3_54f860(undefined8 param_1,undefined8 param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if ((bRam000000000133e9ed & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9ed = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) != '\0') {
    return ZEXT816(0);
  }
  if (pcRam0000000001343b60 == (code *)0x0) {
    pcRam0000000001343b60 = (code *)native_sub_4326f0(&UNK_00ecc031);
  }
                    /* WARNING: Could not recover jumptable at 0x00dbd9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001343b60)(param_2);
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}



/* UICamera.<>c$$<.cctor>b__230_4 @ 0x54f8e4
 * UICamera_MouseOrTouch_o* UICamera___c____cctor_b__230_4 (UICamera___c_o* __this, int32_t button, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$<.cctor>b__230_4
   UICamera_MouseOrTouch_o* UICamera___c____cctor_b__230_4 (UICamera___c_o* __this, int32_t button,
   const MethodInfo* method); */

undefined8 native_UICamera___c____cctor_b__230_4_54f8e4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133e9ee & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9ee = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
  if (lVar2 != 0) {
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
    }
    uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera.<>c$$<.cctor>b__230_5 @ 0x54f974
 * UICamera_MouseOrTouch_o* UICamera___c____cctor_b__230_5 (UICamera___c_o* __this, int32_t id, bool createIfMissing, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$<.cctor>b__230_5
   UICamera_MouseOrTouch_o* UICamera___c____cctor_b__230_5 (UICamera___c_o* __this, int32_t id, bool
   createIfMissing, const MethodInfo* method); */

long native_UICamera___c____cctor_b__230_5_54f974(undefined8 param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined4 uVar17;
  long lStack_58;
  
  if ((bRam000000000133e9ef & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UICamera_MouseOrTouch__Add___12dd948);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Count___12dcad0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Item___12dcad8);
    native_sub_43273c(&UICamera_MouseOrTouch_TypeInfo_12d7a18);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9ef = 1;
  }
  if ((int)param_2 < 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x30);
    if (lVar9 != 0) {
      param_2 = ~param_2;
      lStack_58 = lVar9;
      lVar14 = *(long *)(lVar9 + 0x68);
      if (lVar14 == 0) {
        plVar16 = &lStack_58;
        lVar15 = 1;
      }
      else {
        lVar15 = *(long *)(lVar14 + 0x18);
        if (lVar15 == 0) {
          return 0;
        }
        plVar16 = (long *)(lVar14 + 0x20);
      }
      lVar14 = 0;
      do {
        lVar10 = plVar16[lVar14];
        plVar1 = *(long **)(lVar10 + 0x20);
        lVar7 = *(long *)(lVar10 + 0x28);
        pcVar13 = *(code **)(lVar10 + 0x10);
        if (*(short *)(lVar7 + 0x48) == -1) {
          native_sub_4327f4(lVar7);
        }
        uVar6 = native_sub_432768(lVar7);
        if ((uVar6 & 1) == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
          goto LAB_0054fddc;
          uVar6 = native_sub_432760(lVar7);
          uVar8 = native_sub_432b64(lVar7);
          if ((uVar6 & 1) == 0) {
            uVar3 = *(ushort *)(lVar7 + 0x48);
            if ((uVar8 & 1) == 0) {
              lVar7 = *plVar1 + (ulong)uVar3 * 0x10;
              lVar7 = (**(code **)(lVar7 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar7 + 0x140));
              goto LAB_0054fdec;
            }
            lVar7 = native_sub_432764(lVar7);
            lVar10 = *plVar1;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar6 = 0;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar5 = (undefined8 *)
                           (lVar10 + (long)(int)(*piVar11 + (uint)uVar3) * 0x10 + 0x138);
                  goto LAB_0054fcf8;
                }
                uVar6 = uVar6 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
            }
            puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,lVar7,(ulong)uVar3);
LAB_0054fcf8:
            pcVar13 = (code *)*puVar5;
            puVar5 = (undefined8 *)puVar5[1];
          }
          else {
            if ((uVar8 & 1) == 0) {
              uVar4 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar10 = *plVar1;
              if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                uVar6 = 0;
                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)(lVar7 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0054fcd0;
                  }
                  uVar6 = uVar6 + 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
              }
              lVar10 = native_sub_3c9b34(plVar1);
LAB_0054fcd0:
              uVar4 = *(undefined8 *)(lVar10 + 8);
            }
            puVar5 = (undefined8 *)native_sub_4327e8(uVar4,lVar7);
            pcVar13 = (code *)*puVar5;
          }
          lVar7 = (*pcVar13)(plVar1,param_2,puVar5);
        }
        else if (*(char *)(lVar7 + 0x4a) == '\x01') {
          lVar7 = (*pcVar13)(param_2,lVar7);
        }
        else {
LAB_0054fddc:
          lVar7 = (*pcVar13)(plVar1,param_2,lVar7);
        }
LAB_0054fdec:
        lVar14 = lVar14 + 1;
        if (lVar14 == lVar15) {
          return lVar7;
        }
      } while( true );
    }
  }
  else {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a0);
    if (lVar9 != 0) {
      iVar2 = *(int *)(lVar9 + 0x18);
      if (0 < iVar2) {
        lVar9 = 0;
        while( true ) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar14 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a0);
          if (lVar14 == 0) goto LAB_0054fbe4;
          uVar12 = (uint)lVar9;
          if (*(uint *)(lVar14 + 0x18) <= uVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          if (*(uint *)(*(long *)(lVar14 + 0x10) + lVar9 * 4 + 0x20) == param_2) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar14 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
            if (lVar14 != 0) {
              if (*(uint *)(lVar14 + 0x18) <= uVar12) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              return *(long *)(*(long *)(lVar14 + 0x10) + lVar9 * 8 + 0x20);
            }
            goto LAB_0054fbe4;
          }
          if (iVar2 <= (int)(uVar12 + 1)) break;
          lVar9 = lVar9 + 1;
        }
      }
      if ((param_3 & 1) == 0) {
        return 0;
      }
      lVar9 = native_sub_432808(_UICamera_MouseOrTouch_TypeInfo_12d7a18);
      *(undefined4 *)(lVar9 + 0x70) = 1;
      *(undefined1 *)(lVar9 + 0x74) = 1;
      native_System_Object___ctor_ad2798(lVar9,0);
      uVar17 = native_RealTime__get_time_72d024(0);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x68) = uVar17;
        *(undefined1 *)(lVar9 + 0x74) = 1;
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar14 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
        if (lVar14 != 0) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (lVar14,lVar9,
                     _Method_System_Collections_Generic_List_UICamera_MouseOrTouch__Add___12dd948);
          lVar14 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a0);
          if (lVar14 != 0) {
            native_System_Collections_Generic_List_int___Add_d39078
                      (lVar14,param_2,_Method_System_Collections_Generic_List_int__Add___12dca88);
            return lVar9;
          }
        }
      }
    }
  }
LAB_0054fbe4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera.<>c$$<.cctor>b__230_6 @ 0x54fe30
 * void UICamera___c____cctor_b__230_6 (UICamera___c_o* __this, int32_t id, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.<>c$$<.cctor>b__230_6
   void UICamera___c____cctor_b__230_6 (UICamera___c_o* __this, int32_t id, const MethodInfo*
   method); */

void native_UICamera___c____cctor_b__230_6_54fe30(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  uint uVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam000000000133e9f0 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__RemoveAt___12dd958
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_int__RemoveAt___12dcab8);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Count___12dcad0);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Item___12dcad8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9f0 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a0);
  if (lVar5 == 0) {
LAB_0054ffc0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(lVar5 + 0x18);
  if (0 < iVar1) {
    uVar8 = 0;
    while( true ) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a0);
      if (lVar5 == 0) goto LAB_0054ffc0;
      uVar7 = (uint)uVar8;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (*(int *)(*(long *)(lVar5 + 0x10) + uVar8 * 4 + 0x20) == param_2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a0);
        if (lVar5 != 0) {
          native_System_Collections_Generic_List_int___RemoveAt_d3a6c0
                    (lVar5,uVar8 & 0xffffffff,
                     _Method_System_Collections_Generic_List_int__RemoveAt___12dcab8);
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
          if (lVar5 != 0) {
            uVar4 = *(uint *)(lVar5 + 0x18);
            if (uVar4 <= uVar7) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4
                        (0,uVar8 & 0xffffffff,
                         _Method_System_Collections_Generic_List_UICamera_MouseOrTouch__RemoveAt___12dd958
                        );
              uVar4 = *(uint *)(lVar5 + 0x18);
            }
            uVar4 = uVar4 - 1;
            *(uint *)(lVar5 + 0x18) = uVar4;
            if (uVar4 - uVar7 != 0 && (int)uVar7 <= (int)uVar4) {
              native_System_Array__Copy_95d0dc
                        (*(undefined8 *)(lVar5 + 0x10),uVar7 + 1,*(undefined8 *)(lVar5 + 0x10),
                         uVar8 & 0xffffffff,uVar4 - uVar7,0,in_x6,in_x7,unaff_x20,unaff_x19,
                         unaff_x29,unaff_x30);
              uVar4 = *(uint *)(lVar5 + 0x18);
            }
            lVar6 = *(long *)(lVar5 + 0x10);
            if (lVar6 != 0) {
              if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                puVar2 = (undefined8 *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
                *puVar2 = 0;
                native_sub_4326e0(puVar2,0);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                return;
              }
              uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar3,0);
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
        goto LAB_0054ffc0;
      }
      if (iVar1 <= (int)(uVar7 + 1)) break;
      uVar8 = uVar8 + 1;
    }
  }
  return;
}


