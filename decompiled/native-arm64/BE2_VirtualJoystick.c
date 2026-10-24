/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_VirtualJoystick$$Awake @ 0xdd03a4
 * void BE2_VirtualJoystick__Awake (BE2_VirtualJoystick_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dd0700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_VirtualJoystick$$Awake
   void BE2_VirtualJoystick__Awake (BE2_VirtualJoystick_o* __this, const MethodInfo* method); */

void native_BE2_VirtualJoystick__Awake_dd03a4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  
  if ((bRam0000000001346e24 & 1) == 0) {
    native_sub_43273c(&BE2_VirtualJoystick_TypeInfo_12d3a98);
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_VirtualJoystickButton____12e2988
                     );
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam0000000001346e24 = 1;
  }
  plVar1 = *(long **)(_BE2_VirtualJoystick_TypeInfo_12d3a98 + 0xb8);
  *plVar1 = param_1;
  native_sub_4326e0(plVar1,param_1);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar2 == 0) || (lVar2 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,0,0), lVar2 == 0)
     ) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar1 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar2,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar9 = 0;
  do {
    lVar2 = *plVar1;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_00dd05f8;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(plVar1,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dd05f8:
    uVar7 = (*(code *)*puVar5)(plVar1,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      plVar1 = (long *)native_sub_4327f8(plVar1,_System_IDisposable_TypeInfo_12d4b00);
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar2 = *plVar1;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_00dd0670;
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *plVar1;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00dd04f0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(plVar1,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dd04f0:
    plVar3 = (long *)(*(code *)*puVar5)(plVar1,puVar5[1]);
    if (plVar3 == (long *)0x0) {
LAB_00dd06d8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((*(byte *)(*plVar3 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
       (*(long *)(*(long *)(*plVar3 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      native_sub_432b04();
      goto LAB_00dd06d8;
    }
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (plVar3,
                       _Method_UnityEngine_Component_GetComponent_BE2_VirtualJoystickButton____12e2988
                      );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar7 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((lVar2 != 0) &&
         (lVar4 = native_sub_4327f8(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar6 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      if (*(uint *)(plVar3 + 3) <= uVar9) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      plVar3[(long)(int)uVar9 + 4] = lVar2;
      native_sub_4326e0(plVar3 + (long)(int)uVar9 + 4,lVar2);
      uVar9 = uVar9 + 1;
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar7) break;
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00dd068c;
    }
  }
LAB_00dd0670:
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dd068c:
  (*(code *)*puVar5)(plVar1,puVar5[1]);
  return;
}



/* BE2_VirtualJoystick$$.ctor @ 0xdd074c
 * void BE2_VirtualJoystick___ctor (BE2_VirtualJoystick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_VirtualJoystick$$.ctor
   void BE2_VirtualJoystick___ctor (BE2_VirtualJoystick_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_VirtualJoystick___ctor_dd074c(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346e25 & 1) == 0) {
    native_sub_43273c(&BE2_VirtualJoystickButton___TypeInfo_12d3028);
    bRam0000000001346e25 = 1;
  }
  uVar1 = native_sub_432750(_BE2_VirtualJoystickButton___TypeInfo_12d3028,6);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0();
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


