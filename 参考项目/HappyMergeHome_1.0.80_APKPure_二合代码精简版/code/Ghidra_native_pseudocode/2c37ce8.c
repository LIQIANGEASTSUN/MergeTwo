
void FUN_02c47ce8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (iVar1 != *(int *)(iVar2 + 0x174)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0xdc);
  if (iVar1 != 0) {
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_05d3ec04)(iVar1,0,0);
    return;
  }
  return;
}

