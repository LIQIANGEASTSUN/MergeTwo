
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f2a674(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02f2a7b0 + 0x2f2a688);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2a7b4 + 0x2f2a69c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a7b8 + 0x2f2a6a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a7bc + 0x2f2a6b4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6d15,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6d15,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar1 = func_0x024f56d0(iVar4,uVar7,&uStack_30,uVar3);
    return uVar1;
  }
  if (*(byte *)(param_1 + 0x52) != 0) {
    return (uint)*(byte *)(param_1 + 0x52);
  }
  FUN_02f2a2c8(param_1);
  iVar2 = FUN_02f23d18(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_026f1e0c(iVar2,1,0);
  if (*(int *)(**(int **)(_UNK_02f2a7c0 + 0x2f2a748) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = FUN_02f22a90();
  if (iVar2 == 0) {
    return 0;
  }
  uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02f2a7c4 + 0x2f2a774));
  func_0x0152e3ec(uVar7,param_1,**(undefined4 **)(_UNK_02f2a7c8 + 0x2f2a790),0);
  pcVar6 = (char *)(_UNK_02f3a478 + 0x2f3a1a8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f3a47c + 0x2f3a1bc),uVar7,0);
    func_0x01438628(*(undefined4 *)(_UNK_02f3a480 + 0x2f3a1c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a484 + 0x2f3a1d4));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a488 + 0x2f3a1e0));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a48c + 0x2f3a1ec));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a490 + 0x2f3a1f8));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a494 + 0x2f3a204));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a498 + 0x2f3a210));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a49c + 0x2f3a21c));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a4a0 + 0x2f3a228));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a4a4 + 0x2f3a234));
    func_0x01438628(*(undefined4 *)(_UNK_02f3a4a8 + 0x2f3a240));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x6d19,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x6d19,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar2,0);
    func_0x01523a6c(&uStack_38,uVar7,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    iVar2 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    uVar1 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return uVar1;
  }
  iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f3a4ac + 0x2f3a2a0));
  func_0x024eeca8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar4 + 8) = iVar2;
  func_0x014385cc((int *)(iVar4 + 8),iVar2);
  *(undefined4 *)(iVar4 + 0xc) = uVar7;
  func_0x014385cc((undefined4 *)(iVar4 + 0xc),uVar7);
  uVar7 = *(undefined4 *)(iVar2 + 0x74);
  if (*(int *)(**(int **)(_UNK_02f3a4b0 + 0x2f3a2e8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024ef144(uVar7,0,0);
  if (iVar5 == 0) {
    puVar8 = *(undefined4 **)(_UNK_02f3a4cc + 0x2f3a3dc);
    uVar7 = func_0x014388d4(*puVar8);
    func_0x0152e3ec(uVar7,iVar4,**(undefined4 **)(_UNK_02f3a4d0 + 0x2f3a3f8),0);
    func_0x02f3a4e8(iVar2,**(undefined4 **)(_UNK_02f3a4d4 + 0x2f3a410),uVar7);
    uVar7 = func_0x014388d4(*puVar8);
    func_0x0152e3ec(uVar7,iVar4,**(undefined4 **)(_UNK_02f3a4d8 + 0x2f3a438),0);
    if (*(int *)(**(int **)(_UNK_02f3a4dc + 0x2f3a44c) + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar6 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),uVar7,0);
      func_0x01438628(*(undefined4 *)(_UNK_029a9f40 + 0x29a9e4c));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x6ba,0);
    if (iVar2 != 0) {
      iVar2 = func_0x029540a4(0x6ba,0);
      if (iVar2 == 0) {
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
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01523a4c(&uStack_38,0x3dcccccd,0);
      func_0x01523a6c(&uStack_38,uVar7,0);
      iVar4 = *(int *)(iVar2 + 8);
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar3 = 3;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      uVar1 = func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
      return uVar1;
    }
    iVar2 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
    if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x029a9b60(0x3dcccccd,uVar7);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0x74);
    iVar2 = **(int **)(**(int **)(_UNK_02f3a4b4 + 0x2f3a320) + 0x5c);
    uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02f3a4b8 + 0x2f3a330));
    func_0x0152e3ec(uVar7,iVar4,**(undefined4 **)(_UNK_02f3a4bc + 0x2f3a358),0);
    if (*(int *)(**(int **)(_UNK_02f3a4c0 + 0x2f3a36c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_20 = 1;
    uStack_1c = 0;
    iVar4 = func_0x02aee9b4(uVar3,**(undefined4 **)(_UNK_02f3a4c8 + 0x2f3a398),
                            **(undefined4 **)(_UNK_02f3a4c4 + 0x2f3a38c),uVar7);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar4,0);
    *pcVar6 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x4cc,0);
  if (iVar5 == 0) {
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x024ef144(uVar7,0,0);
    if (iVar4 != 0 && iVar5 != 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = (*(code *)&UNK_05d3fe88)(iVar2,iVar4,0);
      return uVar1;
    }
    return 0;
  }
  iVar5 = func_0x029540a4(0x4cc,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar2,iVar4,0);
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
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,iVar2,0);
  func_0x01523a6c(&uStack_38,iVar4,0);
  iVar4 = *(int *)(iVar5 + 8);
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  iVar2 = *(int *)(iVar5 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
  uVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
  return uVar1;
}

