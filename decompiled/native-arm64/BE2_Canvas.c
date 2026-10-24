/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_Canvas$$get_Canvas @ 0x574ec8
 * UnityEngine_Canvas_o* MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas (MG_BlocksEngine2_Environment_BE2_Canvas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Canvas$$get_Canvas
   UnityEngine_Canvas_o* MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas
   (MG_BlocksEngine2_Environment_BE2_Canvas_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas_574ec8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ea97 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Canvas____12e29b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea97 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x18);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Canvas____12e29b0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* MG_BlocksEngine2.Environment.BE2_Canvas$$.ctor @ 0x574f78
 * void MG_BlocksEngine2_Environment_BE2_Canvas___ctor (MG_BlocksEngine2_Environment_BE2_Canvas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Canvas$$.ctor
   void MG_BlocksEngine2_Environment_BE2_Canvas___ctor (MG_BlocksEngine2_Environment_BE2_Canvas_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Environment_BE2_Canvas___ctor_574f78(ulong param_1)

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


