
void FUN_02c3899c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(iVar1 + 0x114);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar1 < 1) {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar1 = iVar2;
    if (iVar2 == 0) {
      func_0x014388e4();
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        uVar6 = func_0x014388e4();
        (*(code *)&SUB_051b0d14)(uVar6,0);
        return;
      }
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02bda8ac(iVar3,uVar6,uVar5,uVar4,1,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(param_1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x114);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02bd3648(iVar3,uVar6,uVar4,1,9,uVar5,0);
  }
  return;
}

