
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0187b86c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_0187b9c8 + 0x187b880);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187b9cc + 0x187b894));
    func_0x01438628(*(undefined4 *)(_UNK_0187b9d0 + 0x187b8a0));
    func_0x01438628(*(undefined4 *)(_UNK_0187b9d4 + 0x187b8ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x93a0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x93a0,0);
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
  iVar1 = FUN_01873864(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026ce380(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_0187b9d8 + 0x187b960) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018725d4();
  if (iVar1 == 0) {
    return 0;
  }
  uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0187b9dc + 0x187b98c));
  func_0x0152e3ec(uVar7,param_1,**(undefined4 **)(_UNK_0187b9e0 + 0x187b9a8),0);
  pcVar4 = (char *)(_UNK_0189d2cc + 0x189cf10);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0189d2d0 + 0x189cf24),uVar7,0);
    func_0x01438628(*(undefined4 *)(_UNK_0189d2d4 + 0x189cf30));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2d8 + 0x189cf3c));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2dc + 0x189cf48));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2e0 + 0x189cf54));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2e4 + 0x189cf60));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2e8 + 0x189cf6c));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2ec + 0x189cf78));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2f0 + 0x189cf84));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2f4 + 0x189cf90));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2f8 + 0x189cf9c));
    func_0x01438628(*(undefined4 *)(_UNK_0189d2fc + 0x189cfa8));
    func_0x01438628(*(undefined4 *)(_UNK_0189d300 + 0x189cfb4));
    func_0x01438628(*(undefined4 *)(_UNK_0189d304 + 0x189cfc0));
    func_0x01438628(*(undefined4 *)(_UNK_0189d308 + 0x189cfcc));
    func_0x01438628(*(undefined4 *)(_UNK_0189d30c + 0x189cfd8));
    func_0x01438628(*(undefined4 *)(_UNK_0189d310 + 0x189cfe4));
    *pcVar4 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x93a2,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x93a2,0);
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
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0189d314 + 0x189d044));
  func_0x018b5cf0(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar5 + 8) = iVar1;
  func_0x014385cc((int *)(iVar5 + 8),iVar1);
  *(undefined4 *)(iVar5 + 0xc) = uVar7;
  func_0x014385cc((undefined4 *)(iVar5 + 0xc),uVar7);
  uVar7 = *(undefined4 *)(iVar1 + 0x7c);
  if (*(int *)(**(int **)(_UNK_0189d318 + 0x189d08c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar7,0,0);
  if (iVar6 == 0) {
    if (*(int *)(**(int **)(_UNK_0189d334 + 0x189d184) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0189d338 + 0x189d1a0));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x02bb3638(iVar6,0x1d,0);
    iVar6 = func_0x024eecb8(iVar1,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x024f0e6c(iVar6,**(undefined4 **)(_UNK_0189d33c + 0x189d1f0),0);
    uVar7 = func_0x03633ce4(uVar7,**(undefined4 **)(_UNK_0189d340 + 0x189d204),
                            **(undefined4 **)(_UNK_0189d344 + 0x189d210));
    *(undefined4 *)(iVar1 + 0x34) = uVar7;
    func_0x014385cc();
    puVar8 = *(undefined4 **)(_UNK_0189d348 + 0x189d230);
    uVar7 = func_0x014388d4(*puVar8);
    func_0x0152e3ec(uVar7,iVar5,**(undefined4 **)(_UNK_0189d34c + 0x189d24c),0);
    func_0x0189d35c(iVar1,**(undefined4 **)(_UNK_0189d350 + 0x189d264),uVar7);
    uVar7 = func_0x014388d4(*puVar8);
    func_0x0152e3ec(uVar7,iVar5,**(undefined4 **)(_UNK_0189d354 + 0x189d28c),0);
    if (*(int *)(**(int **)(_UNK_0189d358 + 0x189d2a0) + 0x74) == 0) {
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
    iVar6 = **(int **)(**(int **)(_UNK_0189d31c + 0x189d0c8) + 0x5c);
    uVar7 = **(undefined4 **)(_UNK_0189d320 + 0x189d0d8);
    *(undefined1 *)(iVar1 + 0xb8) = 1;
    uVar7 = func_0x014388d4(uVar7);
    func_0x0152e3ec(uVar7,iVar5,**(undefined4 **)(_UNK_0189d324 + 0x189d104),0);
    if (*(int *)(**(int **)(_UNK_0189d328 + 0x189d118) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_28 = 1;
    uStack_24 = 0;
    iVar1 = func_0x02aee9b4(uVar3,**(undefined4 **)(_UNK_0189d330 + 0x189d144),
                            **(undefined4 **)(_UNK_0189d32c + 0x189d138),uVar7);
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

