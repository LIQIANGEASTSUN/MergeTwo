
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c313dc(int param_1)

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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02c31598 + 0x2c313f4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3159c + 0x2c31408));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5eff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5eff,0);
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
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,0,0);
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) == 4)) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,1,0);
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x168);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x2c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = iVar3 - 1;
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar3 = *(int *)(param_1 + 0x78);
    uVar5 = *(undefined4 *)(iVar1 + uVar6 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eecb8(iVar3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x024ef328(iVar1,uVar5,uVar5,0);
    iVar1 = *(int *)(param_1 + 0xd4);
    uVar5 = **(undefined4 **)(_UNK_02c315a0 + 0x2c3157c);
    pcVar4 = (char *)(_UNK_02c23448 + 0x2c23378);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c2344c + 0x2c2338c));
      *pcVar4 = '\x01';
    }
    iVar3 = func_0x02953fd4(0xea7,0);
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_02c23450 + 0x2c233f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x024eec50(iVar1,0,0);
      if (iVar3 == 0) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_20 = 0;
        func_0x024f1368(iVar1,uVar5,0,0);
      }
    }
    else {
      iVar3 = func_0x029540a4(0xea7,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uStack_20 = 0;
      func_0x028691b4(iVar3,param_1,iVar1,uVar5);
    }
    return;
  }
  return;
}

