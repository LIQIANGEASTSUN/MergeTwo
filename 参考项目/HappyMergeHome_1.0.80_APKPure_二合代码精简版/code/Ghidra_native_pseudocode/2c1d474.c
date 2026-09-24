
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c2d474(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02c2d668 + 0x2c2d488);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c2d66c + 0x2c2d49c));
    func_0x01438628(*(undefined4 *)(_UNK_02c2d670 + 0x2c2d4a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c2d674 + 0x2c2d4b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c2d678 + 0x2c2d4c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5db3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5db3,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar6 = func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3);
    return uVar6;
  }
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x198),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,1,0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x194);
  if (*(int *)(**(int **)(_UNK_02c2d67c + 0x2c2d558) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024ef144(uVar6,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x194);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    iVar4 = FUN_02c195e4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,iVar4 == 0,0);
  }
  if (*(int *)(param_1 + 400) != 0) {
    iVar1 = func_0x014e94d8(*(int *)(param_1 + 400),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02c2d680 + 0x2c2d610));
  func_0x0152e3ec(uVar6,param_1,**(undefined4 **)(_UNK_02c2d684 + 0x2c2d62c),0);
  if (*(int *)(**(int **)(_UNK_02c2d688 + 0x2c2d640) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar5 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),uVar6,0);
    func_0x01438628(*(undefined4 *)(_UNK_029a9f40 + 0x29a9e4c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6ba,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
    if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x029a9b60(0x3f000000,uVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02e76828 + 0x2e7675c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar4,0);
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x4cc,0);
    if (iVar2 == 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x024ef144(uVar6,0,0);
      if (iVar4 != 0 && iVar2 != 0) {
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = (*(code *)&UNK_05d3fe88)(iVar1,iVar4,0);
        return uVar6;
      }
      return 0;
    }
    iVar2 = func_0x029540a4(0x4cc,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar4,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar1,0);
    func_0x01523a6c(&uStack_38,iVar4,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
    return uVar6;
  }
  iVar1 = func_0x029540a4(0x6ba,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,uVar6,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a4c(&uStack_38,0x3f000000,0);
  func_0x01523a6c(&uStack_38,uVar6,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  uVar6 = func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
  return uVar6;
}

