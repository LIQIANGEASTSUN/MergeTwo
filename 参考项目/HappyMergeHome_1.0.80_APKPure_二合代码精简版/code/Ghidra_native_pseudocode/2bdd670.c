
void FUN_02bed670(float *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_28;
  float fStack_20;
  
  iVar1 = func_0x02953fd4(0xe87,0);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_2 + 0x48);
    iVar1 = func_0x014e5f78(param_3,iVar2);
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = *(float *)(param_2 + 0x3c);
    fVar8 = *(float *)(param_2 + 0x40);
    fVar6 = *(float *)(param_2 + 0x30);
    param_1[2] = 0.0;
    fVar4 = (float)VectorSignedToFloat(param_3 - iVar1 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = *(float *)(param_2 + 0x2c);
    param_1[1] = fVar6 + (fVar3 + 0.5) * fVar8;
    *param_1 = fVar5 + (fVar4 + 0.5) * fVar7;
  }
  else {
    iVar1 = func_0x029540a4(0xe87,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02879e4c(&uStack_28,iVar1,param_2,param_3,0);
    param_1[2] = fStack_20;
    *(undefined8 *)param_1 = uStack_28;
  }
  return;
}

