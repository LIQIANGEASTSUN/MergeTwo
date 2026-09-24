
void FUN_02c353d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x180) == 0) {
    return;
  }
  iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x180),0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

