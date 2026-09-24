
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03214188(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_032144a0 + 0x321419c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032144a4 + 0x32141b0));
    func_0x01438628(*(undefined4 *)(_UNK_032144a8 + 0x32141bc));
    func_0x01438628(*(undefined4 *)(_UNK_032144ac + 0x32141c8));
    func_0x01438628(*(undefined4 *)(_UNK_032144b0 + 0x32141d4));
    func_0x01438628(*(undefined4 *)(_UNK_032144b4 + 0x32141e0));
    func_0x01438628(*(undefined4 *)(_UNK_032144b8 + 0x32141ec));
    func_0x01438628(*(undefined4 *)(_UNK_032144bc + 0x32141f8));
    func_0x01438628(*(undefined4 *)(_UNK_032144c0 + 0x3214204));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1420,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1420,0);
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
  piVar9 = *(int **)(_UNK_032144c4 + 0x321425c);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03204330();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_0320561c(iVar1);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar10 = *(int **)(_UNK_032144c8 + 0x32142a0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_032144cc + 0x32142bc);
    iVar1 = func_0x03b2c734(*puVar11);
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar9;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = 0;
    iVar1 = func_0x02b76b98(iVar1,0,uVar5,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_032144d0 + 0x321431c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032144d4 + 0x3214338));
      piVar6 = *(int **)(_UNK_032144d8 + 0x321434c);
      iVar7 = *piVar6;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar6;
      }
      iVar8 = **(int **)(_UNK_032144dc + 0x321436c);
      iVar2 = *(int *)(iVar8 + 0x1c);
      uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x748);
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
      uVar5 = **(undefined4 **)(iVar7 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b0c90c(iVar1,uVar3,uVar5,0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(*puVar11);
      iVar7 = *piVar9;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar9;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
      if (*(int *)(**(int **)(_UNK_032144e0 + 0x3214434) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_032144e0 + 0x3214434));
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
  return uVar3;
}

