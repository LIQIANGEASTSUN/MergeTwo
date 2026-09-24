
float FUN_02be8510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  
  iVar1 = func_0x02953fd4(0x5d31,0);
  if (iVar1 == 0) {
    uVar3 = FUN_02be2d0c(param_1,param_2,param_3);
    iVar1 = FUN_02bad204(param_1,param_2,param_3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x98),(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = fVar2 / fVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x5d31,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)func_0x028fb114(iVar1,param_1,param_2,param_3,0);
  }
  return fVar2;
}

