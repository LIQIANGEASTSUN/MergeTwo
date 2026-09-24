
bool FUN_02c46c60(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar4;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return false;
    }
    iVar4 = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  bVar1 = iVar4 <= *(int *)(iVar3 + 0x48);
  if (bVar1) {
    uVar2 = FUN_02bfc178(iVar3,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),0);
    uVar2 = FUN_02bfc084(iVar3,uVar2,*(undefined4 *)(param_1 + 0x14),0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar2);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return bVar1;
}

