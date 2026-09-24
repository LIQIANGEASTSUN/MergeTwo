
uint FUN_02c4d350(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar7;
  uint uVar8;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 0x20);
  uVar8 = 0;
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar1 = func_0x02953fd4(0xd4f,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd4f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,iVar4,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar3,0);
    func_0x01523a2c(&uStack_38,iVar4,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar3,uVar7,&uStack_38,uVar5,0,0);
    uVar8 = func_0x024f56e0(&uStack_38,0,0);
    return uVar8;
  }
  if ((iVar3 != 0) && (uVar2 = *(uint *)(iVar3 + 0xc), 0 < (int)uVar2)) {
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar3 + 0x10 + uVar6 * 4);
      uVar8 = (uint)(iVar1 == iVar4);
      if (iVar1 == iVar4) {
        return uVar8;
      }
      uVar2 = *(uint *)(iVar3 + 0xc);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar2);
  }
  return uVar8;
}

