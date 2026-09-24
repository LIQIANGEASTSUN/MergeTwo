
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03188868(void)

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
  
  pcVar4 = (char *)(_UNK_03188bc8 + 0x318887c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03188bcc + 0x3188890));
    func_0x01438628(*(undefined4 *)(_UNK_03188bd0 + 0x318889c));
    func_0x01438628(*(undefined4 *)(_UNK_03188bd4 + 0x31888a8));
    func_0x01438628(*(undefined4 *)(_UNK_03188bd8 + 0x31888b4));
    func_0x01438628(*(undefined4 *)(_UNK_03188bdc + 0x31888c0));
    func_0x01438628(*(undefined4 *)(_UNK_03188be0 + 0x31888cc));
    func_0x01438628(*(undefined4 *)(_UNK_03188be4 + 0x31888d8));
    func_0x01438628(*(undefined4 *)(_UNK_03188be8 + 0x31888e4));
    func_0x01438628(*(undefined4 *)(_UNK_03188bec + 0x31888f0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1373,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1373,0);
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
  piVar10 = *(int **)(_UNK_03188bf0 + 0x3188948);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_031783f4();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_031796e0(iVar1);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar11 = *(int **)(_UNK_03188bf4 + 0x318898c);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_03188bf8 + 0x31889a8);
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
      if (*(int *)(**(int **)(_UNK_03188bfc + 0x3188a08) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03188c00 + 0x3188a24));
      piVar6 = *(int **)(_UNK_03188c04 + 0x3188a38);
      iVar7 = *piVar6;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar6;
      }
      iVar8 = **(int **)(_UNK_03188c08 + 0x3188a58);
      iVar2 = *(int *)(iVar8 + 0x1c);
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x64c);
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
      if (*(int *)(**(int **)(_UNK_03188c0c + 0x3188af0) + 0x74) == 0) {
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
        if (*(int *)(**(int **)(_UNK_03188c10 + 0x3188b5c) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_03188c10 + 0x3188b5c));
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

