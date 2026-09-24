
int FUN_02bd8354(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint extraout_r1;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = func_0x02953fd4(0x5ced,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(param_2 + 0x7c);
    iVar1 = func_0x01523adc(*(undefined4 *)(param_2 + 0x110),0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 0x110);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024ef5c8(iVar1,0x3b,0,0);
      if (param_3 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(param_3 + 0x80);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = *(uint *)(iVar1 + 0xc);
      func_0x014e67d4(uVar3,uVar4);
      if (uVar4 <= extraout_r1) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + extraout_r1 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024ef5c8(iVar1,0x2c,0,0);
      iVar5 = 4;
      while( true ) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = iVar5 - 4;
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar4) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar4) {
          func_0x014388e8();
        }
        uVar3 = func_0x024eeee8(*(undefined4 *)(iVar1 + iVar5 * 4),0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar4) {
          func_0x014388e8();
        }
        *(undefined4 *)(iVar2 + iVar5 * 4) = uVar3;
        iVar5 = iVar5 + 1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ced,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x028fa308(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}

