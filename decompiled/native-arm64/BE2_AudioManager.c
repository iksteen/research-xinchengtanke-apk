/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_AudioManager$$Awake @ 0x562e90
 * void MG_BlocksEngine2_Environment_BE2_AudioManager__Awake (MG_BlocksEngine2_Environment_BE2_AudioManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_AudioManager$$Awake
   void MG_BlocksEngine2_Environment_BE2_AudioManager__Awake
   (MG_BlocksEngine2_Environment_BE2_AudioManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_AudioManager__Awake_562e90(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ea2d & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea2d = 1;
  }
  uVar6 = **(undefined8 **)(_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    puVar5 = *(undefined8 **)
              (_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968 + 0xb8);
    *puVar5 = param_1;
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
  return;
}



/* MG_BlocksEngine2.Environment.BE2_AudioManager$$PlaySound @ 0x562f48
 * void MG_BlocksEngine2_Environment_BE2_AudioManager__PlaySound (MG_BlocksEngine2_Environment_BE2_AudioManager_o* __this, int32_t audioIndex, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_AudioManager$$PlaySound
   void MG_BlocksEngine2_Environment_BE2_AudioManager__PlaySound
   (MG_BlocksEngine2_Environment_BE2_AudioManager_o* __this, int32_t audioIndex, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Environment_BE2_AudioManager__PlaySound_562f48
               (long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_2) {
      uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar1,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      native_UnityEngine_AudioSource__set_clip_dc1038
                (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20),0)
      ;
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        if (pcRam0000000001343c48 == (code *)0x0) {
          pcRam0000000001343c48 = (code *)native_sub_4326f0(&UNK_00ecdd97,0);
        }
                    /* WARNING: Could not recover jumptable at 0x00dc10c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001343c48)(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_AudioManager$$.ctor @ 0x562fac
 * void MG_BlocksEngine2_Environment_BE2_AudioManager___ctor (MG_BlocksEngine2_Environment_BE2_AudioManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_AudioManager$$.ctor
   void MG_BlocksEngine2_Environment_BE2_AudioManager___ctor
   (MG_BlocksEngine2_Environment_BE2_AudioManager_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Environment_BE2_AudioManager___ctor_562fac(ulong param_1)

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


