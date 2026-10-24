/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDragDropRoot$$OnEnable @ 0x9e29fc
 * void UIDragDropRoot__OnEnable (UIDragDropRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropRoot$$OnEnable
   void UIDragDropRoot__OnEnable (UIDragDropRoot_o* __this, const MethodInfo* method); */

void native_UIDragDropRoot__OnEnable_9e29fc(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam00000000013418d9 & 1) == 0) {
    native_sub_43273c(&UIDragDropRoot_TypeInfo_12d6430);
    bRam00000000013418d9 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  puVar5 = *(undefined8 **)(_UIDragDropRoot_TypeInfo_12d6430 + 0xb8);
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



/* UIDragDropRoot$$OnDisable @ 0x9e2a60
 * void UIDragDropRoot__OnDisable (UIDragDropRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropRoot$$OnDisable
   void UIDragDropRoot__OnDisable (UIDragDropRoot_o* __this, const MethodInfo* method); */

void native_UIDragDropRoot__OnDisable_9e2a60(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam00000000013418da & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDragDropRoot_TypeInfo_12d6430);
    bRam00000000013418da = 1;
  }
  uVar7 = **(undefined8 **)(_UIDragDropRoot_TypeInfo_12d6430 + 0xb8);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar4,0);
  if ((uVar5 & 1) != 0) {
    puVar6 = *(undefined8 **)(_UIDragDropRoot_TypeInfo_12d6430 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIDragDropRoot$$.ctor @ 0x9e2b2c
 * void UIDragDropRoot___ctor (UIDragDropRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropRoot$$.ctor
   void UIDragDropRoot___ctor (UIDragDropRoot_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIDragDropRoot___ctor_9e2b2c(ulong param_1)

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


