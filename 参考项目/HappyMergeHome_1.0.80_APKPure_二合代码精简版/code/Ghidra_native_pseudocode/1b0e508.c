
int FUN_01b1e508(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x02953fd4(0x6d7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b188f4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x01b1e598(iVar1,param_3);
    param_2 = param_2 - iVar1;
  }
  else {
    iVar1 = func_0x029540a4(0x6d7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    param_2 = func_0x028812d4(iVar1,param_1,param_2,param_3,0);
  }
  return param_2;
}

