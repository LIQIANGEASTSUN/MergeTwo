
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01809434(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
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
  
  pcVar4 = (char *)(_UNK_01809590 + 0x1809448);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01809594 + 0x180945c));
    func_0x01438628(*(undefined4 *)(_UNK_01809598 + 0x1809468));
    func_0x01438628(*(undefined4 *)(_UNK_0180959c + 0x1809474));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x90a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x90a7,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar2 = func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3);
    return uVar2;
  }
  if (*(byte *)(param_1 + 0x52) != 0) {
    return (uint)*(byte *)(param_1 + 0x52);
  }
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,0,0);
  iVar1 = FUN_018013d8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026f1e0c(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_018095a0 + 0x1809528) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01800148();
  if (iVar1 == 0) {
    return 0;
  }
  uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_018095a4 + 0x1809554));
  func_0x0152e3ec(uVar7,param_1,**(undefined4 **)(_UNK_018095a8 + 0x1809570),0);
  pcVar4 = (char *)(_UNK_0182aff0 + 0x182ac34);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0182aff4 + 0x182ac48),uVar7,0);
    func_0x01438628(*(undefined4 *)(_UNK_0182aff8 + 0x182ac54));
    func_0x01438628(*(undefined4 *)(_UNK_0182affc + 0x182ac60));
    func_0x01438628(*(undefined4 *)(_UNK_0182b000 + 0x182ac6c));
    func_0x01438628(*(undefined4 *)(_UNK_0182b004 + 0x182ac78));
    func_0x01438628(*(undefined4 *)(_UNK_0182b008 + 0x182ac84));
    func_0x01438628(*(undefined4 *)(_UNK_0182b00c + 0x182ac90));
    func_0x01438628(*(undefined4 *)(_UNK_0182b010 + 0x182ac9c));
    func_0x01438628(*(undefined4 *)(_UNK_0182b014 + 0x182aca8));
    func_0x01438628(*(undefined4 *)(_UNK_0182b018 + 0x182acb4));
    func_0x01438628(*(undefined4 *)(_UNK_0182b01c + 0x182acc0));
    func_0x01438628(*(undefined4 *)(_UNK_0182b020 + 0x182accc));
    func_0x01438628(*(undefined4 *)(_UNK_0182b024 + 0x182acd8));
    func_0x01438628(*(undefined4 *)(_UNK_0182b028 + 0x182ace4));
    func_0x01438628(*(undefined4 *)(_UNK_0182b02c + 0x182acf0));
    func_0x01438628(*(undefined4 *)(_UNK_0182b030 + 0x182acfc));
    func_0x01438628(*(undefined4 *)(_UNK_0182b034 + 0x182ad08));
    *pcVar4 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x90a9,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x90a9,0);
    if (iVar5 == 0) {
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
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar1,0);
    func_0x01523a6c(&uStack_38,uVar7,0);
    iVar6 = *(int *)(iVar5 + 8);
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uVar2 = func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return uVar2;
  }
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0182b038 + 0x182ad68));
  func_0x0182c19c(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar5 + 8) = iVar1;
  func_0x014385cc((int *)(iVar5 + 8),iVar1);
  *(undefined4 *)(iVar5 + 0xc) = uVar7;
  func_0x014385cc((undefined4 *)(iVar5 + 0xc),uVar7);
  uVar7 = *(undefined4 *)(iVar1 + 0x7c);
  if (*(int *)(**(int **)(_UNK_0182b03c + 0x182adb0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar7,0,0);
  if (iVar6 == 0) {
    if (*(int *)(**(int **)(_UNK_0182b058 + 0x182aea8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0182b05c + 0x182aec4));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x02bb3638(iVar6,0x14,0);
    iVar6 = func_0x024eecb8(iVar1,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x024f0e6c(iVar6,**(undefined4 **)(_UNK_0182b060 + 0x182af14),0);
    uVar7 = func_0x03633ce4(uVar7,**(undefined4 **)(_UNK_0182b064 + 0x182af28),
                            **(undefined4 **)(_UNK_0182b068 + 0x182af34));
    *(undefined4 *)(iVar1 + 0x34) = uVar7;
    func_0x014385cc();
    puVar8 = *(undefined4 **)(_UNK_0182b06c + 0x182af54);
    uVar7 = func_0x014388d4(*puVar8);
    func_0x0152e3ec(uVar7,iVar5,**(undefined4 **)(_UNK_0182b070 + 0x182af70),0);
    func_0x0182b080(iVar1,**(undefined4 **)(_UNK_0182b074 + 0x182af88),uVar7);
    uVar7 = func_0x014388d4(*puVar8);
    func_0x0152e3ec(uVar7,iVar5,**(undefined4 **)(_UNK_0182b078 + 0x182afb0),0);
    if (*(int *)(**(int **)(_UNK_0182b07c + 0x182afc4) + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar4 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),uVar7,0);
      func_0x01438628(*(undefined4 *)(_UNK_029a9f40 + 0x29a9e4c));
      *pcVar4 = '\x01';
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
      func_0x01523a4c(&uStack_38,0x3dcccccd,0);
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
      uVar2 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
      return uVar2;
    }
    iVar6 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
    if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x029a9b60(0x3dcccccd,uVar7);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x7c);
    iVar6 = **(int **)(**(int **)(_UNK_0182b040 + 0x182adec) + 0x5c);
    uVar7 = **(undefined4 **)(_UNK_0182b044 + 0x182adfc);
    *(undefined1 *)(iVar1 + 0xb8) = 1;
    uVar7 = func_0x014388d4(uVar7);
    func_0x0152e3ec(uVar7,iVar5,**(undefined4 **)(_UNK_0182b048 + 0x182ae28),0);
    if (*(int *)(**(int **)(_UNK_0182b04c + 0x182ae3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_28 = 1;
    uStack_24 = 0;
    iVar1 = func_0x02aee9b4(uVar3,**(undefined4 **)(_UNK_0182b054 + 0x182ae68),
                            **(undefined4 **)(_UNK_0182b050 + 0x182ae5c),uVar7);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
  }
  pcVar4 = (char *)(_UNK_02e76828 + 0x2e7675c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar1,0);
    *pcVar4 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x4cc,0);
  if (iVar5 == 0) {
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x024ef144(uVar7,0,0);
    if (iVar1 != 0 && iVar5 != 0) {
      iVar5 = *(int *)(iVar6 + 0xc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar2 = (*(code *)&UNK_05d3fe88)(iVar5,iVar1,0);
      return uVar2;
    }
    return 0;
  }
  iVar5 = func_0x029540a4(0x4cc,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar6,iVar1,0);
    *pcVar4 = '\x01';
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
  func_0x01523a6c(&uStack_38,iVar6,0);
  func_0x01523a6c(&uStack_38,iVar1,0);
  iVar6 = *(int *)(iVar5 + 8);
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
  uVar2 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
  return uVar2;
}

