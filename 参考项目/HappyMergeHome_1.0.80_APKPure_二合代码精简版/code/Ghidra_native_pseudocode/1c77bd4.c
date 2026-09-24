
bool FUN_01c87bd4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(param_2 + 0x10);
  iVar1 = FUN_01c733a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  return iVar2 == *(int *)(iVar1 + 0x38);
}

