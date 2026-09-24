
uint FUN_02e61e94(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = func_0x02953fd4(0x4d5e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02e61f28(param_1,param_2);
    iVar3 = param_3 - iVar1;
    bVar4 = iVar3 == 0;
    if (bVar4 || param_3 < iVar1) {
      iVar3 = 0;
    }
    uVar2 = (uint)(bVar4 || param_3 < iVar1);
    *param_4 = iVar3;
  }
  else {
    iVar1 = func_0x029540a4(0x4d5e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028e6a7c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

