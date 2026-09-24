
uint FUN_02c3cf6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = func_0x02953fd4(0x5c69,0);
  if (iVar1 == 0) {
    iVar3 = FUN_02c3a9c4(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    if (((iVar3 != 0 && iVar1 != 0) && (iVar1 = FUN_02c3a9c4(param_1), param_2 == 2 && iVar1 == 2))
       && (-1 < *(int *)(param_1 + 0x10))) {
      uVar2 = (uint)(*(int *)(param_1 + 0x10) == param_3);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5c69,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028f971c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

