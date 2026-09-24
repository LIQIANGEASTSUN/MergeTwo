
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1cd34(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01b1cecc + 0x1b1cd48);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1ced0 + 0x1b1cd5c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ced4 + 0x1b1cd68));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ced8 + 0x1b1cd74));
    func_0x01438628(*(undefined4 *)(_UNK_01b1cedc + 0x1b1cd80));
    func_0x01438628(*(undefined4 *)(_UNK_01b1cee0 + 0x1b1cd8c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1a00,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1a00,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b1cee4 + 0x1b1cde4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b1cee8 + 0x1b1ce00));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_01b1ceec + 0x1b1ce20));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x134);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x015fcde8(*(undefined4 *)(iVar2 + 0x24),0);
  if (iVar7 != 0) {
    return;
  }
  iVar7 = FUN_01b1c4dc(iVar2);
  if (iVar7 == 0) {
    return;
  }
  func_0x026c6930(iVar2,*(undefined4 *)(iVar2 + 0x10),0);
  iVar7 = *(int *)(iVar2 + 0x18);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  func_0x024f0570(iVar7,**(undefined4 **)(_UNK_01b1cef0 + 0x1b1ce9c));
  iVar2 = *(int *)(iVar2 + 0x1c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar7 = **(int **)(_UNK_01b1cef4 + 0x1b1cec0);
  pcVar6 = (char *)(_UNK_03b75da8 + 0x3b75c9c);
  if (*pcVar6 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75dac + 0x3b75cb0));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75db0 + 0x3b75cbc));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75db4 + 0x3b75cc8));
    *pcVar6 = '\x01';
  }
  iVar10 = **(int **)(_UNK_03b75db8 + 0x3b75cdc);
  iVar4 = *(int *)(iVar10 + 0x1c);
  if (iVar4 == 0) {
    func_0x024f83f8(iVar10);
    iVar4 = *(int *)(iVar10 + 0x1c);
  }
  iVar4 = *(int *)(iVar4 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x024f83fc();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar4 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x024f83fc();
  }
  uVar8 = **(undefined4 **)(iVar4 + 0x5c);
  if (*(int *)(**(int **)(_UNK_03b75dbc + 0x3b75d3c) + 0x74) == 0) {
    func_0x024f83d8(**(int **)(_UNK_03b75dbc + 0x3b75d3c));
  }
  func_0x02679550(**(undefined4 **)(_UNK_03b75dc0 + 0x3b75d70),uVar8,0);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  iVar7 = *(int *)(iVar7 + 0x10);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  iVar7 = *(int *)(iVar7 + 0x60);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  pcVar6 = (char *)(_UNK_03b75b8c + 0x3b75a94);
  if (*pcVar6 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b90 + 0x3b75aa8),*(undefined4 *)(iVar7 + 0x24));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b94 + 0x3b75ab4));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_03b75b98 + 0x3b75ac8);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar11 = *(undefined4 **)(_UNK_03b75b9c + 0x3b75ae4);
  iVar7 = func_0x04e4a028(*puVar11);
  if (iVar7 == 0) {
    func_0x024f83d4();
  }
  uVar3 = *(uint *)(iVar7 + 0x60);
  cVar1 = *(char *)(iVar2 + 0x18);
  *(uint *)(iVar7 + 0x60) = uVar3 + 1;
  *(uint *)(iVar7 + 100) = *(int *)(iVar7 + 100) + (uint)(0xfffffffe < uVar3);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar7 = func_0x04e4a028(*puVar11);
    if (iVar7 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar7 + 0x38) = 1;
  }
  if (*(char *)(iVar2 + 0x19) != '\0') {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar11);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

