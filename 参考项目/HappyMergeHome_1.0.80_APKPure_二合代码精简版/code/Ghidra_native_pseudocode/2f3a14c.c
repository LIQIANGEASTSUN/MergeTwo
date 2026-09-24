
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f4a14c(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02f4a400 + 0x2f4a160);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4a404 + 0x2f4a174));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a408 + 0x2f4a180));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a40c + 0x2f4a18c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a410 + 0x2f4a198));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a414 + 0x2f4a1a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a418 + 0x2f4a1b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a41c + 0x2f4a1bc));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a420 + 0x2f4a1c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a424 + 0x2f4a1d4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4a428 + 0x2f4a1e0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6e0c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6e0c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02f4a42c + 0x2f4a238) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4a430 + 0x2f4a254));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_02f4a434 + 0x2f4a278);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x37c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02f4a438 + 0x2f4a2a8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f4a43c + 0x2f4a2c0));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_02f4a440 + 0x2f4a2d8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_02f4a444 + 0x2f4a304);
    puVar7 = *(undefined4 **)(_UNK_02f4a448 + 0x2f4a30c);
    piVar8 = *(int **)(_UNK_02f4a44c + 0x2f4a314);
    do {
      if (*(int *)(**(int **)(_UNK_02f4a450 + 0x2f4a31c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4a454 + 0x2f4a338));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x37c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x04cfd760(iVar1,uVar5,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b73d40(iVar6,uVar2,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_02f49f8c(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_02f4a098(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

