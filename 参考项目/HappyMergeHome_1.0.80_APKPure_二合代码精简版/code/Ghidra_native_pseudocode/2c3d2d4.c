
bool FUN_02c4d2d4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x02b53c1c(*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_1 + 8),0);
  bVar1 = true;
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_2 + 0xb8) == *(int *)(param_1 + 8);
  }
  return bVar1;
}

