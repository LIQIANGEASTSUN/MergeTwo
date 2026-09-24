
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c45abc(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar6 = *(int *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 8);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02953fd4(0x5d5d,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d5d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar4,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar6,0);
    func_0x01523a2c(&uStack_38,uVar4,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar6 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar6 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(iVar6 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
    func_0x014388e8();
  }
  iVar1 = *(int *)(iVar1 + uVar4 * 4 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024eecb8(iVar1,0);
  FUN_02bed670(&uStack_30,iVar6,uVar4);
  uStack_40 = 0x3e99999a;
  uStack_3c = 0;
  uStack_38 = 0;
  func_0x03342888(uVar7,uStack_30,uStack_2c,uStack_28);
  iVar1 = *(int *)(iVar6 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
    func_0x014388e8();
  }
  iVar1 = *(int *)(iVar1 + uVar4 * 4 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  FUN_02bed670(&uStack_30,iVar6,uVar4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0x130) = uStack_28;
  *(ulonglong *)(iVar1 + 0x128) = CONCAT44(uStack_2c,uStack_30);
  iVar1 = *(int *)(iVar6 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
    func_0x014388e8();
  }
  iVar1 = *(int *)(iVar1 + uVar4 * 4 + 0x10);
  fVar2 = (float)func_0x024ef5b8(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x44);
  *(float *)(iVar1 + 0x18) = fVar2 + _UNK_02c04efc;
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar4) {
    func_0x014388e8();
  }
  iVar6 = *(int *)(iVar6 + uVar4 * 4 + 0x10);
  if (iVar6 != 0) {
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02953fd4(0x2189,0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x2189,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x024f56c0(&uStack_50,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01523a6c(&uStack_38,iVar6,0);
      func_0x01523a1c(&uStack_38,0,0);
      iVar5 = *(int *)(iVar1 + 8);
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar3 = 3;
      if (iVar6 == 0) {
        uVar3 = 2;
      }
      func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
      return;
    }
    iVar6 = *(int *)(iVar6 + 0x2c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x014e94d8(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_05d3ec04)(iVar6,0,0);
    return;
  }
  return;
}

