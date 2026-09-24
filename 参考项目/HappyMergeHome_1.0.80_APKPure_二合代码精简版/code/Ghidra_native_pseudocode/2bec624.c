
uint FUN_02bfc624(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x02953fd4(0x5e73,0);
  if (iVar1 == 0) {
    if ((-1 < param_2 && -1 < param_3) && (param_2 < *(int *)(param_1 + 0x48))) {
      uVar2 = (uint)(param_3 < *(int *)(param_1 + 0x4c));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e73,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d207c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

