
uint FUN_02e61e0c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x02953fd4(0xa12,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02e61f28(param_1,param_2);
    uVar2 = (uint)(param_3 <= iVar1);
  }
  else {
    iVar1 = func_0x029540a4(0xa12,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02889eb8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

