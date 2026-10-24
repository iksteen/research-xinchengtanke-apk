/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* EventDelegate.Parameter$$.ctor @ 0x54bfc8
 * void EventDelegate_Parameter___ctor (EventDelegate_Parameter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate.Parameter$$.ctor
   void EventDelegate_Parameter___ctor (EventDelegate_Parameter_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_EventDelegate_Parameter___ctor_54bfc8(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133e9d2 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&void_var_12d19f0);
    bRam000000000133e9d2 = 1;
  }
  uVar1 = _void_var_12d19f0;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* EventDelegate.Parameter$$.ctor @ 0x54c060
 * void EventDelegate_Parameter___ctor (EventDelegate_Parameter_o* __this, UnityEngine_Object_o* obj, System_String_o* field, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate.Parameter$$.ctor
   void EventDelegate_Parameter___ctor (EventDelegate_Parameter_o* __this, UnityEngine_Object_o*
   obj, System_String_o* field, const MethodInfo* method); */

void native_EventDelegate_Parameter___ctor_54c060
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9d3 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&void_var_12d19f0);
    bRam000000000133e9d3 = 1;
  }
  uVar4 = _void_var_12d19f0;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0();
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),param_2);
  puVar5 = (undefined8 *)(param_1 + 0x18);
  *puVar5 = param_3;
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



/* EventDelegate.Parameter$$.ctor @ 0x54c128
 * void EventDelegate_Parameter___ctor (EventDelegate_Parameter_o* __this, Il2CppObject* val, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate.Parameter$$.ctor
   void EventDelegate_Parameter___ctor (EventDelegate_Parameter_o* __this, Il2CppObject* val, const
   MethodInfo* method); */

void native_EventDelegate_Parameter___ctor_54c128(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9d4 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&void_var_12d19f0);
    bRam000000000133e9d4 = 1;
  }
  uVar4 = _void_var_12d19f0;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0();
  native_System_Object___ctor_ad2798(param_1,0);
  puVar5 = (undefined8 *)(param_1 + 0x20);
  *puVar5 = param_2;
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



/* EventDelegate.Parameter$$get_value @ 0x54c1dc
 * Il2CppObject* EventDelegate_Parameter__get_value (EventDelegate_Parameter_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007a9df4) */
/* WARNING: Removing unreachable block (ram,0x007a9e60) */
/* WARNING: Removing unreachable block (ram,0x007a9e7c) */
/* WARNING: Removing unreachable block (ram,0x007a9e84) */
/* WARNING: Removing unreachable block (ram,0x007a9e8c) */
/* WARNING: Removing unreachable block (ram,0x007a9ea0) */
/* WARNING: Removing unreachable block (ram,0x007a9e0c) */
/* WARNING: Removing unreachable block (ram,0x007a9e1c) */
/* WARNING: Removing unreachable block (ram,0x007a9e34) */
/* WARNING: Removing unreachable block (ram,0x007a9ef0) */
/* WARNING: Removing unreachable block (ram,0x007a9f00) */
/* WARNING: Removing unreachable block (ram,0x007a9f04) */
/* WARNING: Removing unreachable block (ram,0x007a9f18) */
/* WARNING: Removing unreachable block (ram,0x007a9f20) */
/* WARNING: Removing unreachable block (ram,0x007a9f28) */
/* WARNING: Removing unreachable block (ram,0x007a9f34) */
/* WARNING: Removing unreachable block (ram,0x007a9f40) */
/* WARNING: Removing unreachable block (ram,0x007a9f50) */
/* WARNING: Removing unreachable block (ram,0x007a9f58) */
/* WARNING: Removing unreachable block (ram,0x007a9f5c) */
/* WARNING: Removing unreachable block (ram,0x007a9fb8) */
/* WARNING: Removing unreachable block (ram,0x007a9fc4) */
/* WARNING: Removing unreachable block (ram,0x007a9fcc) */
/* WARNING: Removing unreachable block (ram,0x007a9fd4) */
/* WARNING: Removing unreachable block (ram,0x007a9fe0) */
/* WARNING: Removing unreachable block (ram,0x007a9fec) */
/* WARNING: Removing unreachable block (ram,0x007a9ffc) */
/* WARNING: Removing unreachable block (ram,0x007aa004) */
/* WARNING: Removing unreachable block (ram,0x007aa008) */
/* WARNING: Removing unreachable block (ram,0x007aa01c) */
/* WARNING: Removing unreachable block (ram,0x007aa02c) */
/* WARNING: Removing unreachable block (ram,0x007aa038) */
/* WARNING: Removing unreachable block (ram,0x007aa1f4) */
/* WARNING: Removing unreachable block (ram,0x007aa044) */
/* WARNING: Removing unreachable block (ram,0x007aa054) */
/* WARNING: Removing unreachable block (ram,0x007aa204) */
/* WARNING: Removing unreachable block (ram,0x007aa064) */
/* WARNING: Removing unreachable block (ram,0x007aa070) */
/* WARNING: Removing unreachable block (ram,0x007aa078) */
/* WARNING: Removing unreachable block (ram,0x007aa080) */
/* WARNING: Removing unreachable block (ram,0x007aa08c) */
/* WARNING: Removing unreachable block (ram,0x007aa098) */
/* WARNING: Removing unreachable block (ram,0x007aa0a8) */
/* WARNING: Removing unreachable block (ram,0x007aa0b0) */
/* WARNING: Removing unreachable block (ram,0x007aa0b4) */
/* WARNING: Removing unreachable block (ram,0x007aa0c8) */
/* WARNING: Removing unreachable block (ram,0x007aa0d8) */
/* WARNING: Removing unreachable block (ram,0x007aa0e4) */
/* WARNING: Removing unreachable block (ram,0x007aa2d4) */
/* WARNING: Removing unreachable block (ram,0x007aa0f0) */
/* WARNING: Removing unreachable block (ram,0x007aa100) */
/* WARNING: Removing unreachable block (ram,0x007aa2e4) */
/* WARNING: Removing unreachable block (ram,0x007aa148) */
/* WARNING: Removing unreachable block (ram,0x007aa154) */
/* WARNING: Removing unreachable block (ram,0x007aa15c) */
/* WARNING: Removing unreachable block (ram,0x007aa164) */
/* WARNING: Removing unreachable block (ram,0x007aa170) */
/* WARNING: Removing unreachable block (ram,0x007aa17c) */
/* WARNING: Removing unreachable block (ram,0x007aa18c) */
/* WARNING: Removing unreachable block (ram,0x007aa194) */
/* WARNING: Removing unreachable block (ram,0x007aa198) */
/* WARNING: Removing unreachable block (ram,0x007aa1ac) */
/* WARNING: Removing unreachable block (ram,0x007aa1bc) */
/* WARNING: Removing unreachable block (ram,0x007aa1c8) */
/* WARNING: Removing unreachable block (ram,0x007aa3ac) */
/* WARNING: Removing unreachable block (ram,0x007aa1d4) */
/* WARNING: Removing unreachable block (ram,0x007aa1e4) */
/* WARNING: Removing unreachable block (ram,0x007aa3bc) */
/* WARNING: Removing unreachable block (ram,0x007aa3d4) */
/* WARNING: Removing unreachable block (ram,0x007aa228) */
/* WARNING: Removing unreachable block (ram,0x007aa234) */
/* WARNING: Removing unreachable block (ram,0x007aa23c) */
/* WARNING: Removing unreachable block (ram,0x007aa244) */
/* WARNING: Removing unreachable block (ram,0x007aa250) */
/* WARNING: Removing unreachable block (ram,0x007aa25c) */
/* WARNING: Removing unreachable block (ram,0x007aa26c) */
/* WARNING: Removing unreachable block (ram,0x007aa274) */
/* WARNING: Removing unreachable block (ram,0x007aa278) */
/* WARNING: Removing unreachable block (ram,0x007aa28c) */
/* WARNING: Removing unreachable block (ram,0x007aa29c) */
/* WARNING: Removing unreachable block (ram,0x007aa2a8) */
/* WARNING: Removing unreachable block (ram,0x007aa4bc) */
/* WARNING: Removing unreachable block (ram,0x007aa2b4) */
/* WARNING: Removing unreachable block (ram,0x007aa2c4) */
/* WARNING: Removing unreachable block (ram,0x007aa4cc) */
/* WARNING: Removing unreachable block (ram,0x007aa300) */
/* WARNING: Removing unreachable block (ram,0x007aa30c) */
/* WARNING: Removing unreachable block (ram,0x007aa314) */
/* WARNING: Removing unreachable block (ram,0x007aa31c) */
/* WARNING: Removing unreachable block (ram,0x007aa328) */
/* WARNING: Removing unreachable block (ram,0x007aa334) */
/* WARNING: Removing unreachable block (ram,0x007aa344) */
/* WARNING: Removing unreachable block (ram,0x007aa34c) */
/* WARNING: Removing unreachable block (ram,0x007aa350) */
/* WARNING: Removing unreachable block (ram,0x007aa364) */
/* WARNING: Removing unreachable block (ram,0x007aa374) */
/* WARNING: Removing unreachable block (ram,0x007aa380) */
/* WARNING: Removing unreachable block (ram,0x007aa594) */
/* WARNING: Removing unreachable block (ram,0x007aa38c) */
/* WARNING: Removing unreachable block (ram,0x007aa39c) */
/* WARNING: Removing unreachable block (ram,0x007aa5a4) */
/* WARNING: Removing unreachable block (ram,0x007aa21c) */
/* WARNING: Removing unreachable block (ram,0x007aa410) */
/* WARNING: Removing unreachable block (ram,0x007aa41c) */
/* WARNING: Removing unreachable block (ram,0x007aa424) */
/* WARNING: Removing unreachable block (ram,0x007aa42c) */
/* WARNING: Removing unreachable block (ram,0x007aa438) */
/* WARNING: Removing unreachable block (ram,0x007aa444) */
/* WARNING: Removing unreachable block (ram,0x007aa454) */
/* WARNING: Removing unreachable block (ram,0x007aa45c) */
/* WARNING: Removing unreachable block (ram,0x007aa460) */
/* WARNING: Removing unreachable block (ram,0x007aa474) */
/* WARNING: Removing unreachable block (ram,0x007aa484) */
/* WARNING: Removing unreachable block (ram,0x007aa490) */
/* WARNING: Removing unreachable block (ram,0x007aa66c) */
/* WARNING: Removing unreachable block (ram,0x007aa49c) */
/* WARNING: Removing unreachable block (ram,0x007aa4ac) */
/* WARNING: Removing unreachable block (ram,0x007aa67c) */
/* WARNING: Removing unreachable block (ram,0x007aa4e8) */
/* WARNING: Removing unreachable block (ram,0x007aa4f4) */
/* WARNING: Removing unreachable block (ram,0x007aa4fc) */
/* WARNING: Removing unreachable block (ram,0x007aa504) */
/* WARNING: Removing unreachable block (ram,0x007aa510) */
/* WARNING: Removing unreachable block (ram,0x007aa51c) */
/* WARNING: Removing unreachable block (ram,0x007aa52c) */
/* WARNING: Removing unreachable block (ram,0x007aa534) */
/* WARNING: Removing unreachable block (ram,0x007aa538) */
/* WARNING: Removing unreachable block (ram,0x007aa54c) */
/* WARNING: Removing unreachable block (ram,0x007aa55c) */
/* WARNING: Removing unreachable block (ram,0x007aa568) */
/* WARNING: Removing unreachable block (ram,0x007aa744) */
/* WARNING: Removing unreachable block (ram,0x007aa574) */
/* WARNING: Removing unreachable block (ram,0x007aa584) */
/* WARNING: Removing unreachable block (ram,0x007aa754) */
/* WARNING: Removing unreachable block (ram,0x007aa76c) */
/* WARNING: Removing unreachable block (ram,0x007aa5c0) */
/* WARNING: Removing unreachable block (ram,0x007aa5cc) */
/* WARNING: Removing unreachable block (ram,0x007aa5d4) */
/* WARNING: Removing unreachable block (ram,0x007aa5dc) */
/* WARNING: Removing unreachable block (ram,0x007aa5e8) */
/* WARNING: Removing unreachable block (ram,0x007aa5f4) */
/* WARNING: Removing unreachable block (ram,0x007aa604) */
/* WARNING: Removing unreachable block (ram,0x007aa60c) */
/* WARNING: Removing unreachable block (ram,0x007aa610) */
/* WARNING: Removing unreachable block (ram,0x007aa624) */
/* WARNING: Removing unreachable block (ram,0x007aa634) */
/* WARNING: Removing unreachable block (ram,0x007aa640) */
/* WARNING: Removing unreachable block (ram,0x007aa824) */
/* WARNING: Removing unreachable block (ram,0x007aa64c) */
/* WARNING: Removing unreachable block (ram,0x007aa65c) */
/* WARNING: Removing unreachable block (ram,0x007aa834) */
/* WARNING: Removing unreachable block (ram,0x007aa698) */
/* WARNING: Removing unreachable block (ram,0x007aa6a4) */
/* WARNING: Removing unreachable block (ram,0x007aa6ac) */
/* WARNING: Removing unreachable block (ram,0x007aa6b4) */
/* WARNING: Removing unreachable block (ram,0x007aa6c0) */
/* WARNING: Removing unreachable block (ram,0x007aa6cc) */
/* WARNING: Removing unreachable block (ram,0x007aa6dc) */
/* WARNING: Removing unreachable block (ram,0x007aa6e4) */
/* WARNING: Removing unreachable block (ram,0x007aa6e8) */
/* WARNING: Removing unreachable block (ram,0x007aa6fc) */
/* WARNING: Removing unreachable block (ram,0x007aa70c) */
/* WARNING: Removing unreachable block (ram,0x007aa718) */
/* WARNING: Removing unreachable block (ram,0x007aa8fc) */
/* WARNING: Removing unreachable block (ram,0x007aa724) */
/* WARNING: Removing unreachable block (ram,0x007aa734) */
/* WARNING: Removing unreachable block (ram,0x007aa90c) */
/* WARNING: Removing unreachable block (ram,0x007aa778) */
/* WARNING: Removing unreachable block (ram,0x007aa784) */
/* WARNING: Removing unreachable block (ram,0x007aa78c) */
/* WARNING: Removing unreachable block (ram,0x007aa794) */
/* WARNING: Removing unreachable block (ram,0x007aa7a0) */
/* WARNING: Removing unreachable block (ram,0x007aa7ac) */
/* WARNING: Removing unreachable block (ram,0x007aa7bc) */
/* WARNING: Removing unreachable block (ram,0x007aa7c4) */
/* WARNING: Removing unreachable block (ram,0x007aa7c8) */
/* WARNING: Removing unreachable block (ram,0x007aa7dc) */
/* WARNING: Removing unreachable block (ram,0x007aa7ec) */
/* WARNING: Removing unreachable block (ram,0x007aa7f8) */
/* WARNING: Removing unreachable block (ram,0x007aa9dc) */
/* WARNING: Removing unreachable block (ram,0x007aa804) */
/* WARNING: Removing unreachable block (ram,0x007aa814) */
/* WARNING: Removing unreachable block (ram,0x007aa9ec) */
/* WARNING: Removing unreachable block (ram,0x007aa850) */
/* WARNING: Removing unreachable block (ram,0x007aa85c) */
/* WARNING: Removing unreachable block (ram,0x007aa864) */
/* WARNING: Removing unreachable block (ram,0x007aa86c) */
/* WARNING: Removing unreachable block (ram,0x007aa878) */
/* WARNING: Removing unreachable block (ram,0x007aa884) */
/* WARNING: Removing unreachable block (ram,0x007aa894) */
/* WARNING: Removing unreachable block (ram,0x007aa89c) */
/* WARNING: Removing unreachable block (ram,0x007aa8a0) */
/* WARNING: Removing unreachable block (ram,0x007aa8b4) */
/* WARNING: Removing unreachable block (ram,0x007aa8c4) */
/* WARNING: Removing unreachable block (ram,0x007aa8d0) */
/* WARNING: Removing unreachable block (ram,0x007aaab8) */
/* WARNING: Removing unreachable block (ram,0x007aa8dc) */
/* WARNING: Removing unreachable block (ram,0x007aa8ec) */
/* WARNING: Removing unreachable block (ram,0x007aaac8) */
/* WARNING: Removing unreachable block (ram,0x007aaae4) */
/* WARNING: Removing unreachable block (ram,0x007aa930) */
/* WARNING: Removing unreachable block (ram,0x007aa93c) */
/* WARNING: Removing unreachable block (ram,0x007aa944) */
/* WARNING: Removing unreachable block (ram,0x007aa94c) */
/* WARNING: Removing unreachable block (ram,0x007aa958) */
/* WARNING: Removing unreachable block (ram,0x007aa964) */
/* WARNING: Removing unreachable block (ram,0x007aa974) */
/* WARNING: Removing unreachable block (ram,0x007aa97c) */
/* WARNING: Removing unreachable block (ram,0x007aa980) */
/* WARNING: Removing unreachable block (ram,0x007aa994) */
/* WARNING: Removing unreachable block (ram,0x007aa9a4) */
/* WARNING: Removing unreachable block (ram,0x007aa9b0) */
/* WARNING: Removing unreachable block (ram,0x007aab9c) */
/* WARNING: Removing unreachable block (ram,0x007aa9bc) */
/* WARNING: Removing unreachable block (ram,0x007aa9cc) */
/* WARNING: Removing unreachable block (ram,0x007aabac) */
/* WARNING: Removing unreachable block (ram,0x007aaa0c) */
/* WARNING: Removing unreachable block (ram,0x007aaa18) */
/* WARNING: Removing unreachable block (ram,0x007aaa20) */
/* WARNING: Removing unreachable block (ram,0x007aaa28) */
/* WARNING: Removing unreachable block (ram,0x007aaa34) */
/* WARNING: Removing unreachable block (ram,0x007aaa40) */
/* WARNING: Removing unreachable block (ram,0x007aaa50) */
/* WARNING: Removing unreachable block (ram,0x007aaa58) */
/* WARNING: Removing unreachable block (ram,0x007aaa5c) */
/* WARNING: Removing unreachable block (ram,0x007aaa70) */
/* WARNING: Removing unreachable block (ram,0x007aaa80) */
/* WARNING: Removing unreachable block (ram,0x007aaa8c) */
/* WARNING: Removing unreachable block (ram,0x007aac78) */
/* WARNING: Removing unreachable block (ram,0x007aaa98) */
/* WARNING: Removing unreachable block (ram,0x007aaaa8) */
/* WARNING: Removing unreachable block (ram,0x007aac88) */
/* WARNING: Removing unreachable block (ram,0x007aa924) */
/* WARNING: Removing unreachable block (ram,0x007aaaf0) */
/* WARNING: Removing unreachable block (ram,0x007aaafc) */
/* WARNING: Removing unreachable block (ram,0x007aab04) */
/* WARNING: Removing unreachable block (ram,0x007aab0c) */
/* WARNING: Removing unreachable block (ram,0x007aab18) */
/* WARNING: Removing unreachable block (ram,0x007aab24) */
/* WARNING: Removing unreachable block (ram,0x007aab34) */
/* WARNING: Removing unreachable block (ram,0x007aab3c) */
/* WARNING: Removing unreachable block (ram,0x007aab40) */
/* WARNING: Removing unreachable block (ram,0x007aabcc) */
/* WARNING: Removing unreachable block (ram,0x007aabd8) */
/* WARNING: Removing unreachable block (ram,0x007aabe0) */
/* WARNING: Removing unreachable block (ram,0x007aabe8) */
/* WARNING: Removing unreachable block (ram,0x007aabf4) */
/* WARNING: Removing unreachable block (ram,0x007aad54) */
/* WARNING: Removing unreachable block (ram,0x007aac00) */
/* WARNING: Removing unreachable block (ram,0x007aac10) */
/* WARNING: Removing unreachable block (ram,0x007aac18) */
/* WARNING: Removing unreachable block (ram,0x007aac1c) */
/* WARNING: Removing unreachable block (ram,0x007aac30) */
/* WARNING: Removing unreachable block (ram,0x007aac40) */
/* WARNING: Removing unreachable block (ram,0x007aac4c) */
/* WARNING: Removing unreachable block (ram,0x007aacc8) */
/* WARNING: Removing unreachable block (ram,0x007aac58) */
/* WARNING: Removing unreachable block (ram,0x007aac68) */
/* WARNING: Removing unreachable block (ram,0x007aacd8) */
/* WARNING: Removing unreachable block (ram,0x007aab54) */
/* WARNING: Removing unreachable block (ram,0x007aab64) */
/* WARNING: Removing unreachable block (ram,0x007aab70) */
/* WARNING: Removing unreachable block (ram,0x007aaca4) */
/* WARNING: Removing unreachable block (ram,0x007aab7c) */
/* WARNING: Removing unreachable block (ram,0x007aab8c) */
/* WARNING: Removing unreachable block (ram,0x007aacb4) */
/* WARNING: Removing unreachable block (ram,0x007a9f70) */
/* WARNING: Removing unreachable block (ram,0x007a9f80) */
/* WARNING: Removing unreachable block (ram,0x007a9f8c) */
/* WARNING: Removing unreachable block (ram,0x007aa110) */
/* WARNING: Removing unreachable block (ram,0x007a9f98) */
/* WARNING: Removing unreachable block (ram,0x007a9fa8) */
/* WARNING: Removing unreachable block (ram,0x007aa120) */
/* WARNING: Removing unreachable block (ram,0x007aa140) */
/* WARNING: Removing unreachable block (ram,0x007aa3dc) */
/* WARNING: Removing unreachable block (ram,0x007aa3e4) */
/* WARNING: Removing unreachable block (ram,0x007aa3e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate.Parameter$$get_value
   Il2CppObject* EventDelegate_Parameter__get_value (EventDelegate_Parameter_o* __this, const
   MethodInfo* method); */

long native_EventDelegate_Parameter__get_value_54c1dc(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if ((bRam000000000133e9d5 & 1) == 0) {
    native_sub_43273c(&System_Convert_TypeInfo_12d3fd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133e9d5 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(long *)(param_1 + 0x20);
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
    puVar8 = (undefined8 *)(param_1 + 0x40);
    *puVar8 = 0;
    native_sub_4326e0(puVar8,0);
    puVar6 = (undefined8 *)(param_1 + 0x38);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x18),0),
       (uVar1 & 1) == 0)) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar3 = native_System_Object__GetType_adb48c(*(long *)(param_1 + 0x10),0), lVar3 == 0))
      goto LAB_0054c480;
      uVar7 = native_System_Type__GetProperty_b1240c(lVar3,*(undefined8 *)(param_1 + 0x18),0);
      *(undefined8 *)(param_1 + 0x38) = uVar7;
      native_sub_4326e0(puVar6,uVar7);
      uVar1 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                        (*(undefined8 *)(param_1 + 0x38),0,0);
      if ((uVar1 & 1) != 0) {
        uVar7 = native_System_Type__GetField_b121d4(lVar3,*(undefined8 *)(param_1 + 0x18),0);
        *(undefined8 *)(param_1 + 0x40) = uVar7;
        native_sub_4326e0(puVar8,uVar7);
      }
    }
  }
  uVar1 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0(*(long *)(param_1 + 0x38),0,0)
  ;
  if ((uVar1 & 1) == 0) {
    uVar1 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                      (*(undefined8 *)(param_1 + 0x40),0,0);
    if ((uVar1 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar1 & 1) != 0) {
        return *(long *)(param_1 + 0x10);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_System_Type__op_Inequality_b118e0(uVar7,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_0054c480;
        uVar1 = native_System_Type__get_IsValueType_b12708(*(long *)(param_1 + 0x28),0);
        if ((uVar1 & 1) != 0) {
          return 0;
        }
      }
      lVar3 = *(long *)(param_1 + 0x28);
      if (((*(byte *)(_System_Convert_TypeInfo_12d3fd0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Convert_TypeInfo_12d3fd0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam00000000013401b1 & 1) == 0) {
        native_sub_43273c(&System_Convert_TypeInfo_12d3fd0,lVar3,0);
        bRam00000000013401b1 = 1;
      }
      lVar4 = native_System_Threading_Thread__get_CurrentThread_9fa070(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_System_Threading_Thread__get_CurrentCulture_9fa0c4(lVar4,0);
      if (((*(byte *)(_System_Convert_TypeInfo_12d3fd0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Convert_TypeInfo_12d3fd0 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Convert_TypeInfo_12d3fd0);
      }
      if ((bRam00000000013401b2 & 1) == 0) {
        native_sub_43273c(&bool_TypeInfo_12d3bd0);
        native_sub_43273c(&byte_TypeInfo_12d3c18);
        native_sub_43273c(&char_TypeInfo_12d3d98);
        native_sub_43273c(&System_Convert_TypeInfo_12d3fd0);
        native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
        native_sub_43273c(&System_Decimal_TypeInfo_12d4360);
        native_sub_43273c(&double_TypeInfo_12d4478);
        native_sub_43273c(&System_IConvertible_TypeInfo_12d4ab0);
        native_sub_43273c(&short_TypeInfo_12d4eb8);
        native_sub_43273c(&int_TypeInfo_12d4ec0);
        native_sub_43273c(&long_TypeInfo_12d4ed0);
        native_sub_43273c(&System_RuntimeType_TypeInfo_12d5b18);
        native_sub_43273c(&sbyte_TypeInfo_12d5b28);
        native_sub_43273c(&float_TypeInfo_12d5db0);
        native_sub_43273c(&System_Type_TypeInfo_12d6340);
        native_sub_43273c(&ushort_TypeInfo_12d6500);
        native_sub_43273c(&uint_TypeInfo_12d6508);
        native_sub_43273c(&ulong_TypeInfo_12d6510);
        bRam00000000013401b2 = 1;
      }
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_System_Type__op_Equality_b117c4(lVar3,0,0);
      if ((uVar1 & 1) == 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar1 = native_System_Type__get_IsValueType_b12708(lVar3,0);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        uVar7 = native_sub_432740(&
                                  StringLiteral_Null_object_cannot_be_converted_to_a_value_type__12effa8
                                 );
        uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
        native_sub_432740(&System_InvalidCastException_TypeInfo_12d4f58);
        uVar5 = native_sub_432808();
        native_System_InvalidCastException___ctor_83c388(uVar5,uVar7,0);
        uVar7 = native_sub_432740(&Method_System_Convert_ChangeType___12e31d8);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,uVar7);
      }
      native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
      uVar7 = native_sub_432808();
      uVar5 = native_sub_432740(&StringLiteral_conversionType_12f3ff8);
      native_System_ArgumentNullException___ctor_951bd8(uVar7,uVar5,0);
      uVar5 = native_sub_432740(&Method_System_Convert_ChangeType___12e31d8);
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,uVar5);
    }
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0054c3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar2 + 0x268))
                        (plVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar2 + 0x270));
      return lVar3;
    }
  }
  else {
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0054c36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar2 + 0x2b8))
                        (plVar2,*(undefined8 *)(param_1 + 0x10),0,*(undefined8 *)(*plVar2 + 0x2c0));
      return lVar3;
    }
  }
LAB_0054c480:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* EventDelegate.Parameter$$set_value @ 0x54c484
 * void EventDelegate_Parameter__set_value (EventDelegate_Parameter_o* __this, Il2CppObject* value, const MethodInfo* method); */

/* EventDelegate.Parameter$$set_value
   void EventDelegate_Parameter__set_value (EventDelegate_Parameter_o* __this, Il2CppObject* value,
   const MethodInfo* method); */

void native_EventDelegate_Parameter__set_value_54c484(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x20);
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



/* EventDelegate.Parameter$$get_type @ 0x54c48c
 * System_Type_o* EventDelegate_Parameter__get_type (EventDelegate_Parameter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate.Parameter$$get_type
   System_Type_o* EventDelegate_Parameter__get_type (EventDelegate_Parameter_o* __this, const
   MethodInfo* method); */

undefined8 native_EventDelegate_Parameter__get_type_54c48c(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_28;
  
  if ((bRam000000000133e9d6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&void_var_12d19f0);
    bRam000000000133e9d6 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    uVar6 = _void_var_12d19f0;
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000134218b & 1) == 0) {
        native_sub_43273c(&IntPtr_TypeInfo_12d4ee0,0);
        native_sub_43273c(&System_Type_TypeInfo_12d6340);
        bRam000000000134218b = 1;
      }
      uVar3 = native_System_IntPtr__op_Equality_83db90(uVar6,0,0);
      uVar4 = 0;
      if ((uVar3 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_sub_3bca1c(uVar6);
      }
      return uVar4;
    }
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  lVar5 = *plVar2;
  uStack_28 = 0;
  uVar3 = native_sub_3d974c(uRam00000000013450a8,&stack0xffffffffffffffe8,&uStack_28);
  if ((uVar3 & 1) == 0) {
    lVar1 = native_sub_3d56a8(uRam0000000001344588);
    *(long *)(lVar1 + 0x10) = lVar5 + 0x20;
    uStack_28 = native_sub_3d9860(uRam00000000013450a8,&stack0xffffffffffffffe8,lVar1);
  }
  return uStack_28;
}


