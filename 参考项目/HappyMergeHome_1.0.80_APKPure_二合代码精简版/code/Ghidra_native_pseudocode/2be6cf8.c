
undefined4 FUN_02bf6cf8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar7 = 0;
  iVar1 = func_0x02953fd4(0x5d6c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = func_0x014e5f78(param_2,iVar1);
    param_2 = param_2 - iVar2 * iVar1;
    iVar8 = param_2 + 1;
    iVar6 = iVar1 + -1;
    if (iVar8 < iVar1 + -1) {
      iVar6 = iVar8;
    }
    iVar3 = param_2;
    if (param_2 < 2) {
      iVar3 = 1;
    }
    iVar3 = iVar3 + -1;
    while (iVar3 <= iVar6) {
      uVar7 = func_0x02bf6e1c(param_1,iVar1 * iVar2 + iVar3);
      iVar1 = *(int *)(param_1 + 0x48);
      iVar3 = iVar3 + 1;
      iVar6 = iVar1 + -1;
      if (iVar8 < iVar1 + -1) {
        iVar6 = iVar8;
      }
    }
    iVar8 = iVar2 + 1;
    iVar6 = *(int *)(param_1 + 0x4c) + -1;
    uVar5 = iVar2 - 1U & ~((int)(iVar2 - 1U) >> 0x1f);
    if (iVar8 < iVar6) {
      iVar6 = iVar8;
    }
    if ((int)uVar5 <= iVar6) {
      iVar1 = iVar1 * uVar5;
      while( true ) {
        uVar7 = func_0x02bf6e1c(param_1,iVar1 + param_2);
        uVar5 = uVar5 + 1;
        iVar1 = *(int *)(param_1 + 0x4c) + -1;
        if (iVar8 < iVar1) {
          iVar1 = iVar8;
        }
        if (iVar1 < (int)uVar5) break;
        iVar1 = *(int *)(param_1 + 0x48) * uVar5;
      }
    }
    return uVar7;
  }
  iVar1 = func_0x029540a4(0x5d6c,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
  uVar7 = func_0x024f56e0(&uStack_38,0,0);
  return uVar7;
}

