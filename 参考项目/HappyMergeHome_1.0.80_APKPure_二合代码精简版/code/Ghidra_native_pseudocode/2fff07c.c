
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300f07c(void)

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
  
  pcVar3 = (char *)(_UNK_0300f330 + 0x300f090);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300f334 + 0x300f0a4));
    func_0x01438628(*(undefined4 *)(_UNK_0300f338 + 0x300f0b0));
    func_0x01438628(*(undefined4 *)(_UNK_0300f33c + 0x300f0bc));
    func_0x01438628(*(undefined4 *)(_UNK_0300f340 + 0x300f0c8));
    func_0x01438628(*(undefined4 *)(_UNK_0300f344 + 0x300f0d4));
    func_0x01438628(*(undefined4 *)(_UNK_0300f348 + 0x300f0e0));
    func_0x01438628(*(undefined4 *)(_UNK_0300f34c + 0x300f0ec));
    func_0x01438628(*(undefined4 *)(_UNK_0300f350 + 0x300f0f8));
    func_0x01438628(*(undefined4 *)(_UNK_0300f354 + 0x300f104));
    func_0x01438628(*(undefined4 *)(_UNK_0300f358 + 0x300f110));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x728a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x728a,0);
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
  if (*(int *)(**(int **)(_UNK_0300f35c + 0x300f168) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300f360 + 0x300f184));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_0300f364 + 0x300f1a8);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x390);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0300f368 + 0x300f1d8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0300f36c + 0x300f1f0));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0300f370 + 0x300f208));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_0300f374 + 0x300f234);
    puVar7 = *(undefined4 **)(_UNK_0300f378 + 0x300f23c);
    piVar8 = *(int **)(_UNK_0300f37c + 0x300f244);
    do {
      if (*(int *)(**(int **)(_UNK_0300f380 + 0x300f24c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0300f384 + 0x300f268));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x390);
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
      iVar6 = FUN_0300eebc(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_0300efc8(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

