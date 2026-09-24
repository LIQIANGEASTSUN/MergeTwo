
void FUN_02c356ac(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x288);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

