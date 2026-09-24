
void FUN_02c3540c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x198) == 0) {
    return;
  }
  iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x198),0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

