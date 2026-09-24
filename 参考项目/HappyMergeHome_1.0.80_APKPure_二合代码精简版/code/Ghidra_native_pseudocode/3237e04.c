
undefined4 FUN_03247e04(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = func_0x02953fd4(0x7ff5,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0323c5d0(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_0323c5d0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if ((*(int *)(iVar2 + 0x6c) != 0) && (iVar2 = func_0x03247ed4(param_1,param_2), iVar2 != 0)) {
        if (param_3 == 0) {
          cVar1 = *(char *)(iVar2 + 0xd);
        }
        else {
          cVar1 = *(char *)(iVar2 + 0xc);
        }
        uVar3 = 0;
        if (cVar1 != '\0') {
          uVar3 = 1;
        }
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x7ff5,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x028748d4(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}

