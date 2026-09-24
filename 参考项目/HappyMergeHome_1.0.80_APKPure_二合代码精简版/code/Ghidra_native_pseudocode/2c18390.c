
/* WARNING: Possible PIC construction at 0x02c28428: Changing call to branch */

void FUN_02c28390(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x02953fd4(0x219c,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      param_3 = param_2;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x8c),0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    (*(code *)&UNK_05d3ec04)(iVar1,param_3,0);
    return;
  }
  iVar1 = func_0x029540a4(0x219c,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0287b7c0(iVar1,param_1,param_2,param_3);
  return;
}

