/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_BlockXMLUtils$$StringToVector3 @ 0x571d24
 * UnityEngine_Vector3_o MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToVector3 (System_String_o* stringValue, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXMLUtils$$StringToVector3
   UnityEngine_Vector3_o MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToVector3
   (System_String_o* stringValue, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToVector3_571d24(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam000000000133ea84 & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    bRam000000000133ea84 = 1;
  }
  native_UnityEngine_Vector3__get_zero_776668(0);
  lVar1 = native_sub_432750(_char___TypeInfo_12d3090,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_00571e7c;
    *(undefined2 *)(lVar1 + 0x20) = 0x28;
    if (param_1 != 0) {
      lVar1 = native_System_String__TrimStart_b0a440(param_1,lVar1,0);
      lVar2 = native_sub_432750(_char___TypeInfo_12d3090,1);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00571e7c;
        *(undefined2 *)(lVar2 + 0x20) = 0x29;
        if (lVar1 != 0) {
          lVar1 = native_System_String__TrimEnd_b0a45c(lVar1,lVar2,0);
          lVar2 = native_sub_432750(_char___TypeInfo_12d3090,1);
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined2 *)(lVar2 + 0x20) = 0x2c;
              if ((lVar1 == 0) ||
                 (lVar1 = native_System_String__Split_b095f4(lVar1,lVar2,0), lVar1 == 0))
              goto LAB_00571e78;
              if (*(int *)(lVar1 + 0x18) != 0) {
                auVar4 = native_MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToFloat_5726a8
                                   (*(undefined8 *)(lVar1 + 0x20));
                uVar3 = auVar4._8_8_;
                if (1 < *(uint *)(lVar1 + 0x18)) {
                  native_MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToFloat_5726a8
                            (*(undefined8 *)(lVar1 + 0x28));
                  if (2 < *(uint *)(lVar1 + 0x18)) {
                    native_MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToFloat_5726a8
                              (*(undefined8 *)(lVar1 + 0x30));
                    auVar4._8_8_ = uVar3;
                    return auVar4;
                  }
                }
              }
            }
LAB_00571e7c:
            uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar3,0);
          }
        }
      }
    }
  }
LAB_00571e78:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlockXMLUtils$$StringToFloat @ 0x5726a8
 * float MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToFloat (System_String_o* stringValue, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXMLUtils$$StringToFloat
   float MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToFloat (System_String_o* stringValue,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToFloat_5726a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((bRam000000000133ea85 & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    bRam000000000133ea85 = 1;
  }
  if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
  native_System_Single__Parse_af8a18(param_1,uVar1,0);
  return;
}


