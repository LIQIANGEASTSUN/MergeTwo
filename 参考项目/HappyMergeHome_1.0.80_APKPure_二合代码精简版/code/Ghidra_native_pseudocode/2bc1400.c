
uint FUN_02bd1400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x02953fd4(0xfd4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad204(param_1,param_2,param_3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = (uint)(*(int *)(iVar1 + 0xc) == -1);
  }
  else {
    iVar1 = func_0x029540a4(0xfd4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02898004(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

