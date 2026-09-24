
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fda25c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02fda5bc + 0x2fda270);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fda5c0 + 0x2fda284));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5c4 + 0x2fda290));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5c8 + 0x2fda29c));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5cc + 0x2fda2a8));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5d0 + 0x2fda2b4));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5d4 + 0x2fda2c0));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5d8 + 0x2fda2cc));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5dc + 0x2fda2d8));
    func_0x01438628(*(undefined4 *)(_UNK_02fda5e0 + 0x2fda2e4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x158f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x158f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar10 = *(int **)(_UNK_02fda5e4 + 0x2fda33c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02fc8d20();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02fca00c(iVar1);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar11 = *(int **)(_UNK_02fda5e8 + 0x2fda380);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_02fda5ec + 0x2fda39c);
    iVar1 = func_0x03b2c734(*puVar12);
    iVar7 = *piVar10;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar10;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = 0;
    iVar1 = func_0x02b76b98(iVar1,0,uVar5,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02fda5f0 + 0x2fda3fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fda5f4 + 0x2fda418));
      piVar6 = *(int **)(_UNK_02fda5f8 + 0x2fda42c);
      iVar7 = *piVar6;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar6;
      }
      iVar8 = **(int **)(_UNK_02fda5fc + 0x2fda44c);
      iVar2 = *(int *)(iVar8 + 0x1c);
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x9bc);
      if (iVar2 == 0) {
        func_0x014909d8(iVar8);
        iVar2 = *(int *)(iVar8 + 0x1c);
      }
      iVar7 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x0149097c();
      }
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar7 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      uVar5 = func_0x02b0c90c(iVar1,uVar5,uVar9,0);
      if (*(int *)(**(int **)(_UNK_02fda600 + 0x2fda4e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar5,0,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x03b2c734(*puVar12);
        iVar7 = *piVar10;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar10;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
        if (*(int *)(**(int **)(_UNK_02fda604 + 0x2fda550) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_02fda604 + 0x2fda550));
        }
        uStack_38 = func_0x02aed6d8(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        func_0x02b768cc(iVar1,0,uVar3);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

