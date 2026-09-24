
void FUN_02be90c0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x02953fd4(0x3e30,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 0x3c);
    uStack_14 = *(undefined4 *)(param_2 + 0x40);
  }
  else {
    iVar1 = func_0x029540a4(0x3e30,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a019c(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}

