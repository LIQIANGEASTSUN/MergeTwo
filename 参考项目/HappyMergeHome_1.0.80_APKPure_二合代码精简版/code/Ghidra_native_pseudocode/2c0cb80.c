
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1cb80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  pcVar4 = (char *)(_UNK_02c1cd18 + 0x2c1cb98);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1cd1c + 0x2c1cbac));
    func_0x01438628(*(undefined4 *)(_UNK_02c1cd20 + 0x2c1cbb8));
    *pcVar4 = '\x01';
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
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = iVar3;
  if (iVar3 == 0) {
    func_0x014388e4();
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 != 0) {
    uVar6 = *(int *)(iVar3 + 0x104) - 1;
    if (-1 < (int)uVar6) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if ((int)uVar6 < *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02c1cd24 + 0x2c1cc5c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c1cd28 + 0x2c1cc78));
        iVar3 = *(int *)(param_1 + 0x18);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x014388e8();
        }
        uVar5 = *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10);
        iVar3 = func_0x024eecb8(param_1,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_2c,iVar3,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_34 = 0x3f800000;
        uStack_30 = 0;
        uStack_38 = uStack_24;
        func_0x02b82a80(iVar1,uVar5,uStack_2c,uStack_28);
      }
    }
  }
  return;
}

