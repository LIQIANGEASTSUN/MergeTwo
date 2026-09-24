
void FUN_02f56320(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
    iVar4 = iRam00000008;
    iVar2 = *(int *)(param_1 + 0xc);
    iVar3 = iVar2;
    if (iVar2 == 0) {
      func_0x014388e4();
      iVar3 = *(int *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0xc) == 0) goto SUB_024eeca8;
    }
  }
  else {
    iVar4 = *(int *)(iVar2 + 8);
    iVar3 = iVar2;
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x4c);
  if (iVar5 == iVar4 + -1) {
    iVar4 = *(int *)(param_1 + 0xc);
    iVar5 = iVar4;
    if (iVar4 == 0) {
      func_0x014388e4();
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar5 == 0) {
SUB_024eeca8:
        uVar1 = func_0x014388e4();
        (*(code *)0x51b0d14)(uVar1,0);
        return;
      }
    }
    iVar5 = *(int *)(iVar5 + 8);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = (iVar3 + iVar4) - iVar5;
  }
  else if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar2 + 0x4c) = iVar3 + 1;
  return;
}

