
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03049618(void)

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
  
  pcVar3 = (char *)(_UNK_030498cc + 0x304962c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030498d0 + 0x3049640));
    func_0x01438628(*(undefined4 *)(_UNK_030498d4 + 0x304964c));
    func_0x01438628(*(undefined4 *)(_UNK_030498d8 + 0x3049658));
    func_0x01438628(*(undefined4 *)(_UNK_030498dc + 0x3049664));
    func_0x01438628(*(undefined4 *)(_UNK_030498e0 + 0x3049670));
    func_0x01438628(*(undefined4 *)(_UNK_030498e4 + 0x304967c));
    func_0x01438628(*(undefined4 *)(_UNK_030498e8 + 0x3049688));
    func_0x01438628(*(undefined4 *)(_UNK_030498ec + 0x3049694));
    func_0x01438628(*(undefined4 *)(_UNK_030498f0 + 0x30496a0));
    func_0x01438628(*(undefined4 *)(_UNK_030498f4 + 0x30496ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x741e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x741e,0);
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
  if (*(int *)(**(int **)(_UNK_030498f8 + 0x3049704) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030498fc + 0x3049720));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_03049900 + 0x3049744);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x368);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03049904 + 0x3049774));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03049908 + 0x304978c));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0304990c + 0x30497a4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_03049910 + 0x30497d0);
    puVar7 = *(undefined4 **)(_UNK_03049914 + 0x30497d8);
    piVar8 = *(int **)(_UNK_03049918 + 0x30497e0);
    do {
      if (*(int *)(**(int **)(_UNK_0304991c + 0x30497e8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03049920 + 0x3049804));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x368);
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
      iVar6 = FUN_03049458(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_03049564(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

