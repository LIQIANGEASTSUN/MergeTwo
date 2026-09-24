
void FUN_02be1f2c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = func_0x02953fd4(0x5d0c,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar3 = *(uint *)(param_2 + 0x1c);
    iVar1 = uVar2 - param_3;
    iVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      iVar1 = 0;
      iVar4 = 0;
    }
    FUN_026f6d70(param_2,uVar3,iVar1,iVar4,0);
    uVar2 = *(uint *)(param_2 + 0x20);
    uVar3 = *(uint *)(param_2 + 0x24);
    iVar1 = uVar2 - param_3;
    iVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      iVar1 = 0;
      iVar4 = 0;
    }
    FUN_026f6e40(param_2,uVar3,iVar1,iVar4,0);
    uVar2 = *(uint *)(param_2 + 0x48);
    uVar3 = *(uint *)(param_2 + 0x4c);
    iVar1 = uVar2 - param_3;
    iVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      iVar1 = 0;
      iVar4 = 0;
    }
    FUN_026f72d8(param_2,uVar3,iVar1,iVar4,0);
    uVar2 = *(uint *)(param_2 + 0x58);
    uVar3 = *(uint *)(param_2 + 0x5c);
    if (uVar3 < param_4 || param_4 - uVar3 < (uint)(uVar2 <= param_3)) {
      iVar1 = 0;
      iVar4 = 0;
    }
    else {
      iVar1 = uVar2 - param_3;
      iVar4 = uVar3 - (param_4 + (uVar2 < param_3));
    }
    FUN_026f7520(param_2,uVar3,iVar1,iVar4,0);
  }
  else {
    iVar1 = func_0x029540a4(0x5d0c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fa76c(iVar1,param_1,param_2);
  }
  return;
}

