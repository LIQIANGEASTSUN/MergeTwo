
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b1f884(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
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
  
  pcVar6 = (char *)(_UNK_01b1fb5c + 0x1b1f89c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb60 + 0x1b1f8b0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb64 + 0x1b1f8bc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb68 + 0x1b1f8c8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb6c + 0x1b1f8d4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb70 + 0x1b1f8e0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb74 + 0x1b1f8ec));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb78 + 0x1b1f8f8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb7c + 0x1b1f904));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb80 + 0x1b1f910));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb84 + 0x1b1f91c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb88 + 0x1b1f928));
    func_0x01438628(*(undefined4 *)(_UNK_01b1fb8c + 0x1b1f934));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6c2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6c2,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uVar7 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return uVar7;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1fb90 + 0x1b1f990));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  iVar5 = FUN_01b188f4();
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_01b1e6fc(iVar5);
  if (*(int *)(**(int **)(_UNK_01b1fb94 + 0x1b1f9d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01b1fb98 + 0x1b1f9f4));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar5,0);
  uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01b1fb9c + 0x1b1fa20));
  func_0x024eed9c(uVar7,**(undefined4 **)(_UNK_01b1fba0 + 0x1b1fa34));
  *(undefined4 *)(iVar1 + 0x10) = uVar7;
  func_0x014385cc((undefined4 *)(iVar1 + 0x10),uVar7);
  if (*(int *)(**(int **)(_UNK_01b1fba4 + 0x1b1fa58) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01b1fba8 + 0x1b1fa74));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x03579aec(iVar5,**(undefined4 **)(_UNK_01b1fbb0 + 0x1b1faa0),
                          **(undefined4 **)(_UNK_01b1fbac + 0x1b1fa94));
  piVar4 = (int *)(iVar1 + 8);
  *piVar4 = iVar5;
  func_0x014385cc(piVar4,iVar5);
  if (*piVar4 != 0) {
    func_0x01a01720(*piVar4,0);
  }
  iVar5 = FUN_01b188f4();
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  uVar3 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_01b1e1cc(iVar5,uVar7,uVar3);
  uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01b1fbb4 + 0x1b1fb08));
  func_0x0152e3ec(uVar7,iVar1,**(undefined4 **)(_UNK_01b1fbb8 + 0x1b1fb24),0);
  if (*(int *)(**(int **)(_UNK_01b1fbbc + 0x1b1fb38) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar6 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),uVar7,0);
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
    func_0x024f56c0(&uStack_50,0,uVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a4c(&uStack_38,0x3f800000,0);
    func_0x01523a6c(&uStack_38,uVar7,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uVar7 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return uVar7;
  }
  iVar1 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
  if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x029a9b60(0x3f800000,uVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar5,0);
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar1,0);
    func_0x01523a6c(&uStack_38,iVar5,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
    uVar7 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
    return uVar7;
  }
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024ef144(uVar7,0,0);
  if (iVar5 != 0 && iVar2 != 0) {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar7 = (*(code *)&UNK_05d3fe88)(iVar1,iVar5,0);
    return uVar7;
  }
  return 0;
}

