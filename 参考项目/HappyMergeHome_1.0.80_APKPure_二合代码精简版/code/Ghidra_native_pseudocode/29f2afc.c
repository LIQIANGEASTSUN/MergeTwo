
bool FUN_02a02afc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029fcfe8(iVar1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  return iVar2 == *(int *)(iVar1 + 0x3c);
}

