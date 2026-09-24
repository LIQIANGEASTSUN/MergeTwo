
bool FUN_029b1d54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  return iVar1 == *(int *)(iVar2 + 0x1a0);
}

