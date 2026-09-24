
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be1414(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  pcVar6 = (char *)(_UNK_02be1528 + 0x2be142c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be152c + 0x2be1440));
    func_0x01438628(*(undefined4 *)(_UNK_02be1530 + 0x2be144c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d07,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5d07,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  iVar2 = FUN_02baef1c(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0f34(iVar2,param_2,**(undefined4 **)(_UNK_02be1534 + 0x2be14d4));
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_02baef1c(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar4 = **(int **)(_UNK_02be1538 + 0x2be151c);
  uStack_20 = unaff_r4;
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  iVar10 = *(int *)(iVar2 + 8);
  uVar8 = *(uint *)(iVar2 + 0xc);
  iVar11 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x20);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar10 == 0) {
    func_0x024f83d4();
  }
  if (uVar8 < *(uint *)(iVar10 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar8 + 1;
    *(undefined4 *)(iVar10 + uVar8 * 4 + 0x10) = param_2;
  }
  else {
    func_0x04cd29cc(iVar2,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
  }
  uStack_18 = uStack_20;
  pcVar6 = (char *)(_UNK_03b75b8c + 0x3b75a94);
  if (*pcVar6 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b90 + 0x3b75aa8),
                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x24));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b94 + 0x3b75ab4));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_03b75b98 + 0x3b75ac8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar9 = *(undefined4 **)(_UNK_03b75b9c + 0x3b75ae4);
  iVar4 = func_0x04e4a028(*puVar9);
  if (iVar4 == 0) {
    func_0x024f83d4();
  }
  uVar8 = *(uint *)(iVar4 + 0x60);
  cVar1 = *(char *)(iVar2 + 0x18);
  *(uint *)(iVar4 + 0x60) = uVar8 + 1;
  *(uint *)(iVar4 + 100) = *(int *)(iVar4 + 100) + (uint)(0xfffffffe < uVar8);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar4 = func_0x04e4a028(*puVar9);
    if (iVar4 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  if (*(char *)(iVar2 + 0x19) != '\0') {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

