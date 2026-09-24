
bool FUN_01883718(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  return iVar1 == *(int *)(iVar2 + 8);
}

