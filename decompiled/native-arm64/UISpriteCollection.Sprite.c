/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISpriteCollection.Sprite$$GetDrawingDimensions @ 0x55ae4c
 * UnityEngine_Vector4_o UISpriteCollection_Sprite__GetDrawingDimensions (UISpriteCollection_Sprite_o __this, float pixelSize, const MethodInfo* method); */

/* UISpriteCollection.Sprite$$GetDrawingDimensions
   UnityEngine_Vector4_o UISpriteCollection_Sprite__GetDrawingDimensions
   (UISpriteCollection_Sprite_o __this, float pixelSize, const MethodInfo* method); */

undefined4
native_UISpriteCollection_Sprite__GetDrawingDimensions_55ae4c(float param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  fVar11 = *(float *)((long)param_2 + 0x14);
  fVar12 = *(float *)(param_2 + 3);
  lVar7 = *param_2;
  fVar14 = *(float *)(param_2 + 4) * fVar11;
  fVar13 = *(float *)((long)param_2 + 0x24) * fVar12;
  fVar9 = -(*(float *)(param_2 + 4) * fVar11);
  fVar10 = -(*(float *)((long)param_2 + 0x24) * fVar12);
  fVar11 = fVar11 - fVar14;
  fVar12 = fVar12 - fVar13;
  if ((lVar7 != 0) && ((int)param_2[5] != 2)) {
    iVar6 = *(int *)(lVar7 + 0x40);
    iVar4 = *(int *)(lVar7 + 0x44);
    iVar3 = *(int *)(lVar7 + 0x38);
    iVar5 = *(int *)(lVar7 + 0x3c);
    fVar15 = 1.0;
    if ((param_1 != 1.0) && ((int)param_2[5] != 0)) {
      iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)iVar3 * param_1,fVar10,0);
      iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)iVar4 * param_1,0);
      iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)iVar5 * param_1,0);
      iVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)iVar6 * param_1,0);
      lVar7 = *param_2;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    uVar1 = iVar3 + iVar5 + *(int *)(lVar7 + 0x20);
    if ((((int)uVar1 < 1) || (uVar2 = iVar4 + iVar6 + *(int *)(lVar7 + 0x24), (int)uVar2 < 1)) ||
       (((int)param_2[5] != 3 && ((int)param_2[5] != 0)))) {
      fVar10 = 1.0;
    }
    else {
      iVar5 = (uVar1 & 1) + iVar5;
      iVar6 = (uVar2 & 1) + iVar6;
      fVar10 = (1.0 / (float)(int)uVar1) * *(float *)((long)param_2 + 0x14);
      fVar15 = (1.0 / (float)(int)uVar2) * *(float *)(param_2 + 3);
    }
    iVar8 = iVar3;
    if ((*(uint *)((long)param_2 + 0x2c) | 2) == 3) {
      iVar8 = iVar5;
      iVar5 = iVar3;
    }
    fVar9 = fVar10 * (float)iVar8 - fVar14;
    fVar11 = fVar11 - fVar10 * (float)iVar5;
    iVar5 = iVar4;
    if ((*(uint *)((long)param_2 + 0x2c) & 0xfffffffe) == 2) {
      iVar5 = iVar6;
      iVar6 = iVar4;
    }
    fVar10 = fVar15 * (float)iVar5 - fVar13;
    fVar12 = fVar12 - fVar15 * (float)iVar6;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  native_UnityEngine_Vector4___ctor_776f24(fVar9,fVar10,fVar11,fVar12,&uStack_80,0);
  return (undefined4)uStack_80;
}


