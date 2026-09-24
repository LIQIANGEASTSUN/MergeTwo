
void FUN_02b4fa4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x02b3f138(iVar2,uVar3,0x3e99999a,uVar1);
  return;
}

