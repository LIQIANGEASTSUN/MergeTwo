
void FUN_02c3e3f8(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x02953fd4(0xe91,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eecb8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_20,iVar1,0);
  }
  else {
    iVar1 = func_0x029540a4(0xe91,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02879af0(&uStack_20,iVar1,param_2,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}

