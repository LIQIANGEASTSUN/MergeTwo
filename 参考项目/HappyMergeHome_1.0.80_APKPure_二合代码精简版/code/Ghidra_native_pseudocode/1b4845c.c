
/* WARNING: Removing unreachable block (ram,0x029aa040) */
/* WARNING: Removing unreachable block (ram,0x029aa048) */
/* WARNING: Removing unreachable block (ram,0x029aa04c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5845c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_01b58664 + 0x1b58474);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b58668 + 0x1b58488));
    func_0x01438628(*(undefined4 *)(_UNK_01b5866c + 0x1b58494));
    func_0x01438628(*(undefined4 *)(_UNK_01b58670 + 0x1b584a0));
    func_0x01438628(*(undefined4 *)(_UNK_01b58674 + 0x1b584ac));
    func_0x01438628(*(undefined4 *)(_UNK_01b58678 + 0x1b584b8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5867c + 0x1b584c4));
    func_0x01438628(*(undefined4 *)(_UNK_01b58680 + 0x1b584d0));
    func_0x01438628(*(undefined4 *)(_UNK_01b58684 + 0x1b584dc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5a83,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5a83,0);
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
    func_0x01523a1c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    uVar7 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return uVar7;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b58688 + 0x1b58538));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_01b5868c + 0x1b58560);
  *(char *)(iVar1 + 8) = (char)param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01b58690 + 0x1b58580));
  piVar2 = *(int **)(_UNK_01b58694 + 0x1b58594);
  iVar3 = *piVar2;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar2;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x104);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fc08(iVar5,uVar7,0);
  if (*(int *)(**(int **)(_UNK_01b58698 + 0x1b585dc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024ef144(uVar7,0,0);
  if (iVar5 == 0) {
    return 0;
  }
  uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01b5869c + 0x1b58610));
  func_0x0152e3ec(uVar7,iVar1,**(undefined4 **)(_UNK_01b586a0 + 0x1b5862c),0);
  if (*(int *)(**(int **)(_UNK_01b586a4 + 0x1b58640) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar6 = (char *)(_UNK_029aa060 + 0x29a9f64);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029aa064 + 0x29a9f78),uVar7,0);
    func_0x01438628(*(undefined4 *)(_UNK_029aa068 + 0x29a9f84));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4c4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4c4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a2c(&uStack_38,5,0);
    func_0x01523a6c(&uStack_38,uVar7,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    uVar7 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return uVar7;
  }
  iVar1 = **(int **)(**(int **)(_UNK_029aa06c + 0x29a9fe8) + 0x5c);
  if (*(int *)(**(int **)(_UNK_029aa070 + 0x29a9ff4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x02af2da0(5,uVar7,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar5,0);
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4cc,0);
  if (iVar3 == 0) {
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024ef144(uVar7,0,0);
    if (iVar5 != 0 && iVar3 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = (*(code *)&UNK_05d3fe88)(iVar1,iVar5,0);
      return uVar7;
    }
    return 0;
  }
  iVar3 = func_0x029540a4(0x4cc,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar5,0);
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,iVar1,0);
  func_0x01523a6c(&uStack_38,iVar5,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
  uVar7 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
  return uVar7;
}

