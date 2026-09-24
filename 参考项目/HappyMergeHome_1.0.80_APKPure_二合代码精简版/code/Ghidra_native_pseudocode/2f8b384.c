
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f9b384(void)

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
  
  pcVar3 = (char *)(_UNK_02f9b638 + 0x2f9b398);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9b63c + 0x2f9b3ac));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b640 + 0x2f9b3b8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b644 + 0x2f9b3c4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b648 + 0x2f9b3d0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b64c + 0x2f9b3dc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b650 + 0x2f9b3e8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b654 + 0x2f9b3f4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b658 + 0x2f9b400));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b65c + 0x2f9b40c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b660 + 0x2f9b418));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6f89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6f89,0);
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
  if (*(int *)(**(int **)(_UNK_02f9b664 + 0x2f9b470) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9b668 + 0x2f9b48c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_02f9b66c + 0x2f9b4b0);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x380);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02f9b670 + 0x2f9b4e0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f9b674 + 0x2f9b4f8));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_02f9b678 + 0x2f9b510));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_02f9b67c + 0x2f9b53c);
    puVar7 = *(undefined4 **)(_UNK_02f9b680 + 0x2f9b544);
    piVar8 = *(int **)(_UNK_02f9b684 + 0x2f9b54c);
    do {
      if (*(int *)(**(int **)(_UNK_02f9b688 + 0x2f9b554) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9b68c + 0x2f9b570));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x380);
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
      iVar6 = FUN_02f9b1c4(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_02f9b2d0(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

