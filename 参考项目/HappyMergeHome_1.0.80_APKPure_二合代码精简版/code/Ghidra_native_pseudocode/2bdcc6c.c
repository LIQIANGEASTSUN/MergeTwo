
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02becc6c(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar1 = func_0x02953fd4(0x218f,0);
  if (iVar1 == 0) {
    iVar2 = -1;
    fVar3 = (param_2 - *(float *)(param_1 + 0x2c)) / *(float *)(param_1 + 0x3c);
    fVar4 = (param_3 - *(float *)(param_1 + 0x30)) / *(float *)(param_1 + 0x40);
    iVar1 = (int)fVar3;
    iVar5 = (int)fVar4;
    if (fVar3 == _UNK_02becd8c) {
      iVar1 = -0x80000000;
    }
    if (fVar4 == _UNK_02becd8c) {
      iVar5 = -0x80000000;
    }
    if ((((-1 < iVar1 && -1 < iVar5) && (iVar1 < *(int *)(param_1 + 0x48))) && (ABS(param_4) < 1.0))
       && (iVar5 < *(int *)(param_1 + 0x4c))) {
      iVar2 = *(int *)(param_1 + 0x48) * iVar5 + iVar1;
    }
    iVar1 = func_0x02becd90(param_1,iVar2);
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x218f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x028b6074(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar2;
}

