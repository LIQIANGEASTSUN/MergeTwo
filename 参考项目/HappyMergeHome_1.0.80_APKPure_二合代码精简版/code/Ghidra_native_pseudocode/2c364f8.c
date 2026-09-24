
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c464f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02c465d0 + 0x2c4650c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c465d4 + 0x2c46520));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
  if (*(int *)(**(int **)(_UNK_02c465d8 + 0x2c46540) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024eec50(uVar6,0,0);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02c1c724(iVar2,0xffffffff,0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02c1cd18 + 0x2c1cb98);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1cd1c + 0x2c1cbac),0);
    func_0x01438628(*(undefined4 *)(_UNK_02c1cd20 + 0x2c1cbb8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4ff5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4ff5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,iVar2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar4 = *(int *)(iVar2 + 0x1c);
  iVar1 = iVar4;
  if (iVar4 == 0) {
    func_0x014388e4();
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  if (iVar1 != 0) {
    uVar7 = *(int *)(iVar4 + 0x104) - 1;
    if (-1 < (int)uVar7) {
      iVar1 = *(int *)(iVar2 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if ((int)uVar7 < *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02c1cd24 + 0x2c1cc5c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c1cd28 + 0x2c1cc78));
        iVar4 = *(int *)(iVar2 + 0x18);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar7) {
          func_0x014388e8();
        }
        uVar6 = *(undefined4 *)(iVar4 + uVar7 * 4 + 0x10);
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_2c,iVar2,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_34 = 0x3f800000;
        uStack_30 = 0;
        uStack_38 = uStack_24;
        func_0x02b82a80(iVar1,uVar6,uStack_2c,uStack_28);
      }
    }
  }
  return;
}

