
int FUN_02b3e314(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x02953fd4(0x2e9a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02b3dda0();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b4cad8(iVar1,param_3);
    param_2 = param_2 - iVar1;
  }
  else {
    iVar1 = func_0x029540a4(0x2e9a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    param_2 = func_0x028812d4(iVar1,param_1,param_2,param_3,0);
  }
  return param_2;
}

