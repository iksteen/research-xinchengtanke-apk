/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_TargetObject$$get_Transform @ 0x619d4c
 * UnityEngine_Transform_o* MG_BlocksEngine2_Environment_BE2_TargetObject__get_Transform (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObject$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Environment_BE2_TargetObject__get_Transform
   (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_TargetObject__get_Transform_619d4c(undefined8 param_1)

{
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340ab8)(param_1);
  return;
}



/* MG_BlocksEngine2.Environment.BE2_TargetObject$$get_ProgrammingEnv @ 0x619d54
 * MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* MG_BlocksEngine2_Environment_BE2_TargetObject__get_ProgrammingEnv (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObject$$get_ProgrammingEnv
   MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o*
   MG_BlocksEngine2_Environment_BE2_TargetObject__get_ProgrammingEnv
   (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_TargetObject__get_ProgrammingEnv_619d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Environment.BE2_TargetObject$$set_ProgrammingEnv @ 0x619d5c
 * void MG_BlocksEngine2_Environment_BE2_TargetObject__set_ProgrammingEnv (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObject$$set_ProgrammingEnv
   void MG_BlocksEngine2_Environment_BE2_TargetObject__set_ProgrammingEnv
   (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this,
   MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_TargetObject__set_ProgrammingEnv_619d5c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Environment.BE2_TargetObject$$.ctor @ 0x619d64
 * void MG_BlocksEngine2_Environment_BE2_TargetObject___ctor (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_TargetObject$$.ctor
   void MG_BlocksEngine2_Environment_BE2_TargetObject___ctor
   (MG_BlocksEngine2_Environment_BE2_TargetObject_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Environment_BE2_TargetObject___ctor_619d64(ulong param_1)

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


