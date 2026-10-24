/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Waypoint.<Slow>d__19$$.ctor @ 0x56024c
 * void Waypoint__Slow_d__19___ctor (Waypoint__Slow_d__19_o* __this, int32_t __1__state, const MethodInfo* method); */

/* Waypoint.<Slow>d__19$$.ctor
   void Waypoint__Slow_d__19___ctor (Waypoint__Slow_d__19_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_Waypoint__Slow_d__19___ctor_56024c(long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* Waypoint.<Slow>d__19$$System.IDisposable.Dispose @ 0x560278
 * void Waypoint__Slow_d__19__System_IDisposable_Dispose (Waypoint__Slow_d__19_o* __this, const MethodInfo* method); */

/* Waypoint.<Slow>d__19$$System.IDisposable.Dispose
   void Waypoint__Slow_d__19__System_IDisposable_Dispose (Waypoint__Slow_d__19_o* __this, const
   MethodInfo* method); */

void native_Waypoint__Slow_d__19__System_IDisposable_Dispose_560278(void)

{
  return;
}



/* Waypoint.<Slow>d__19$$MoveNext @ 0x56027c
 * bool Waypoint__Slow_d__19__MoveNext (Waypoint__Slow_d__19_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Waypoint.<Slow>d__19$$MoveNext
   bool Waypoint__Slow_d__19__MoveNext (Waypoint__Slow_d__19_o* __this, const MethodInfo* method);
    */

undefined8 native_Waypoint__Slow_d__19__MoveNext_56027c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  if ((bRam000000000133ea15 & 1) == 0) {
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133ea15 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_005603b0;
    *(undefined4 *)(lVar3 + 0x30) = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x35) == '\0') {
        *(undefined2 *)(lVar3 + 0x34) = 0x100;
      }
      *(float *)(lVar3 + 0x2c) = *(float *)(lVar3 + 0x2c) * *(float *)(lVar3 + 0x1c);
      lVar1 = native_UnityEngine_Component__get_transform_8da62c(lVar3,0);
      fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      if (lVar1 != 0) {
        native_UnityEngine_Transform__Translate_772354(0,0,fVar4 * *(float *)(lVar3 + 0x2c),lVar1,0)
        ;
        if (*(float *)(lVar3 + 0x24) < *(float *)(lVar3 + 0x2c)) {
          return 0;
        }
        *(undefined4 *)(lVar3 + 0x2c) = 0;
        uVar5 = *(undefined4 *)(lVar3 + 0x28);
        uVar2 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
        native_UnityEngine_WaitForSeconds___ctor_7775c8(uVar5,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
LAB_005603b0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 0;
}



/* Waypoint.<Slow>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x5603b4
 * Il2CppObject* Waypoint__Slow_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current (Waypoint__Slow_d__19_o* __this, const MethodInfo* method); */

/* Waypoint.<Slow>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   Waypoint__Slow_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (Waypoint__Slow_d__19_o* __this, const MethodInfo* method); */

undefined8
native_Waypoint__Slow_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current_5603b4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Waypoint.<Slow>d__19$$System.Collections.IEnumerator.Reset @ 0x5603bc
 * void Waypoint__Slow_d__19__System_Collections_IEnumerator_Reset (Waypoint__Slow_d__19_o* __this, const MethodInfo* method); */

/* Waypoint.<Slow>d__19$$System.Collections.IEnumerator.Reset
   void Waypoint__Slow_d__19__System_Collections_IEnumerator_Reset (Waypoint__Slow_d__19_o* __this,
   const MethodInfo* method); */

void native_Waypoint__Slow_d__19__System_Collections_IEnumerator_Reset_5603bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_Waypoint__Slow_d__19_System_Collections_IEnumerator_Reset___12ea200
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* Waypoint.<Slow>d__19$$System.Collections.IEnumerator.get_Current @ 0x5603fc
 * Il2CppObject* Waypoint__Slow_d__19__System_Collections_IEnumerator_get_Current (Waypoint__Slow_d__19_o* __this, const MethodInfo* method); */

/* Waypoint.<Slow>d__19$$System.Collections.IEnumerator.get_Current
   Il2CppObject* Waypoint__Slow_d__19__System_Collections_IEnumerator_get_Current
   (Waypoint__Slow_d__19_o* __this, const MethodInfo* method); */

undefined8
native_Waypoint__Slow_d__19__System_Collections_IEnumerator_get_Current_5603fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


