
bool FUN_02c4d37c(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    func_0x014388e4();
  }
  bVar1 = false;
  if (*(int *)(param_2 + 0x1c) == 6) {
    bVar1 = *(int *)(param_2 + 0x2c) == *(int *)(param_1 + 8);
  }
  return bVar1;
}

