
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c2d68c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_02c2d7c8 + 0x2c2d6a4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c2d7cc + 0x2c2d6b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c2d7d0 + 0x2c2d6c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c2d7d4 + 0x2c2d6d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c2d7d8 + 0x2c2d6dc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e04,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e04,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uVar5 = func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return uVar5;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c2d7dc + 0x2c2d738));
  func_0x02c477b0(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  func_0x014385cc((undefined4 *)(iVar1 + 8),param_2);
  uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c2d7e0 + 0x2c2d770));
  func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_02c2d7e4 + 0x2c2d78c),0);
  if (*(int *)(**(int **)(_UNK_02c2d7e8 + 0x2c2d7a0) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar6 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),uVar5,0);
    func_0x01438628(*(undefined4 *)(_UNK_029a9f40 + 0x29a9e4c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6ba,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a4c(&uStack_38,0x3dcccccd,0);
    func_0x01523a6c(&uStack_38,uVar5,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uVar5 = func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return uVar5;
  }
  iVar1 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
  if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x029a9b60(0x3dcccccd,uVar5);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar4,0);
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x4cc,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x4cc,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar4,0);
      *pcVar6 = '\x01';
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
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
    return uVar5;
  }
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024ef144(uVar5,0,0);
  if (iVar4 != 0 && iVar2 != 0) {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = (*(code *)&UNK_05d3fe88)(iVar1,iVar4,0);
    return uVar5;
  }
  return 0;
}

