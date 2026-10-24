/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Core.BE2_Event$$.ctor @ 0x581024
 * void MG_BlocksEngine2_Core_BE2_Event___ctor (MG_BlocksEngine2_Core_BE2_Event_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_Event$$.ctor
   void MG_BlocksEngine2_Core_BE2_Event___ctor (MG_BlocksEngine2_Core_BE2_Event_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_Event___ctor_581024(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eaf2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Block___ctor___12de450);
    bRam000000000133eaf2 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),0);
  if (param_1 != 0) {
    if ((bRam000000000133ff6e & 1) == 0) {
      native_sub_43273c(&UnityEngine_Events_InvokableCallList_TypeInfo_12d4f80,0);
      native_sub_43273c(&UnityEngine_Events_PersistentCallGroup_TypeInfo_12d5668);
      bRam000000000133ff6e = 1;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    native_System_Object___ctor_ad2798(param_1,0);
    uVar4 = native_sub_432808(_UnityEngine_Events_InvokableCallList_TypeInfo_12d4f80);
    native_UnityEngine_Events_InvokableCallList___ctor_8dfb04(uVar4,0);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    native_sub_4326e0(param_1 + 0x10,uVar4);
    uVar4 = native_sub_432808(_UnityEngine_Events_PersistentCallGroup_TypeInfo_12d5668);
    native_UnityEngine_Events_PersistentCallGroup___ctor_8eb6a4(uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


