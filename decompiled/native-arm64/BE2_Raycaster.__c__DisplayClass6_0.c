/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_Raycaster.<>c__DisplayClass6_0$$.ctor @ 0x548b04
 * void MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0___ctor (MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_Raycaster.<>c__DisplayClass6_0$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0___ctor
   (MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0___ctor_548b04(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_Raycaster.<>c__DisplayClass6_0$$<RemoveRaycaster>b__0 @ 0x548b0c
 * bool MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0___RemoveRaycaster_b__0 (MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0_o* __this, UnityEngine_UI_GraphicRaycaster_o* x, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster.<>c__DisplayClass6_0$$<RemoveRaycaster>b__0
   bool MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0___RemoveRaycaster_b__0
   (MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0_o* __this,
   UnityEngine_UI_GraphicRaycaster_o* x, const MethodInfo* method); */

byte native_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0___RemoveRaycaster_b__0_548b0c
               (long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if ((bRam000000000133e9ab & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133e9ab = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341083 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar2,0);
    bRam0000000001341083 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341033 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341033 = 1;
  }
  if (param_2 == 0 && lVar2 == 0) {
    bVar1 = 1;
  }
  else {
    if (lVar2 == 0) {
      lVar2 = param_2;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    else {
      if (param_2 != 0) {
        bVar1 = param_2 == lVar2;
        goto code_r0x008e9b5c;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    bVar1 = native_UnityEngine_Object__IsNativeObjectAlive_8e9b70(lVar2);
    bVar1 = bVar1 ^ 1;
  }
code_r0x008e9b5c:
  return bVar1 & 1;
}


