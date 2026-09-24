
void FUN_031c8720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar3 = iRam00000008;
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = iVar1;
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar2 = *(int *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0xc) == 0) goto LAB_031c87e8;
    }
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
    iVar2 = iVar1;
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar4 == iVar3 + -1) {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = iVar3;
    if (iVar3 == 0) {
      func_0x014388e4();
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar4 == 0) {
LAB_031c87e8:
        func_0x014388e4();
        return;
      }
    }
    iVar4 = *(int *)(iVar4 + 8);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = (iVar2 + iVar3) - iVar4;
  }
  else if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0x4c) = iVar2 + 1;
  return;
}

