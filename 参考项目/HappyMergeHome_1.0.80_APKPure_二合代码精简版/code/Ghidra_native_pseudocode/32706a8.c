
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032806a8(void)

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
  
  pcVar4 = (char *)(_UNK_032809c0 + 0x32806bc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032809c4 + 0x32806d0));
    func_0x01438628(*(undefined4 *)(_UNK_032809c8 + 0x32806dc));
    func_0x01438628(*(undefined4 *)(_UNK_032809cc + 0x32806e8));
    func_0x01438628(*(undefined4 *)(_UNK_032809d0 + 0x32806f4));
    func_0x01438628(*(undefined4 *)(_UNK_032809d4 + 0x3280700));
    func_0x01438628(*(undefined4 *)(_UNK_032809d8 + 0x328070c));
    func_0x01438628(*(undefined4 *)(_UNK_032809dc + 0x3280718));
    func_0x01438628(*(undefined4 *)(_UNK_032809e0 + 0x3280724));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x143a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x143a,0);
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
  piVar9 = *(int **)(_UNK_032809e4 + 0x328077c);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03271308();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_032713ec(iVar1);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar10 = *(int **)(_UNK_032809e8 + 0x32807c0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_032809ec + 0x32807dc);
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
      if (*(int *)(**(int **)(_UNK_032809f0 + 0x328083c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032809f4 + 0x3280858));
      piVar6 = *(int **)(_UNK_032809f8 + 0x328086c);
      iVar7 = *piVar6;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar6;
      }
      iVar8 = **(int **)(_UNK_032809fc + 0x328088c);
      iVar2 = *(int *)(iVar8 + 0x1c);
      uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x830);
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
      if (*(int *)(**(int **)(_UNK_03280a00 + 0x3280954) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_03280a00 + 0x3280954));
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

