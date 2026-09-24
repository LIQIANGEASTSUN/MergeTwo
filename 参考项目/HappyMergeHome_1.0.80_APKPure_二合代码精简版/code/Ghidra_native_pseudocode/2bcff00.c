
void FUN_02bdff00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iStack_24;
  
  iStack_24 = 0;
  iVar1 = func_0x02953fd4(0x5c60,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bd7e48(param_1,param_4);
    if ((-1 < param_3) && (0 < iVar1)) {
      FUN_02bdf804(param_1,param_2,&iStack_24,param_4);
      FUN_02bd1a34(param_1,param_3,iStack_24,6,param_4,0,0xffffffff);
      func_0x02bdfffc(param_1,param_3,param_4);
      iVar1 = iStack_24;
      if (iStack_24 == 0) {
        func_0x014388e4();
      }
      func_0x02be078c(param_1,*(undefined4 *)(iVar1 + 8));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5c60,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028f9628(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

