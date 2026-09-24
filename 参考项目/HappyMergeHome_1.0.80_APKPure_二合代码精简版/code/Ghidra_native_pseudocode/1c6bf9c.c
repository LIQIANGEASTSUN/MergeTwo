
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c7bf9c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
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
  
  pcVar4 = (char *)(_UNK_01c7c0cc + 0x1c7bfb0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7c0d0 + 0x1c7bfc4));
    func_0x01438628(*(undefined4 *)(_UNK_01c7c0d4 + 0x1c7bfd0));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xad8d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xad8d,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  iVar2 = FUN_01c733a0(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x14);
  iVar2 = FUN_01c733a0(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x54);
  if (iVar2 == 0) {
    func_0x014388e4();
    iVar5 = func_0x024f0f34(0,uVar6,**(undefined4 **)(_UNK_01c7c0d8 + 0x1c7c09c));
    if (iVar5 != 0) {
      return;
    }
    func_0x014388e4();
  }
  else {
    iVar5 = func_0x024f0f34(iVar2,uVar6,**(undefined4 **)(_UNK_01c7c0e0 + 0x1c7c074));
    if (iVar5 != 0) {
      return;
    }
  }
  iVar5 = **(int **)(_UNK_01c7c0dc + 0x1c7c0c0);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  iVar10 = *(int *)(iVar2 + 8);
  uVar8 = *(uint *)(iVar2 + 0xc);
  iVar11 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x20);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar10 == 0) {
    func_0x024f83d4();
  }
  if (uVar8 < *(uint *)(iVar10 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar8 + 1;
    *(undefined4 *)(iVar10 + uVar8 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x04cd29cc(iVar2,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
  }
  pcVar4 = (char *)(_UNK_03b75b8c + 0x3b75a94);
  if (*pcVar4 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b90 + 0x3b75aa8),
                    *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x24));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b94 + 0x3b75ab4));
    *pcVar4 = '\x01';
  }
  piVar7 = *(int **)(_UNK_03b75b98 + 0x3b75ac8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar9 = *(undefined4 **)(_UNK_03b75b9c + 0x3b75ae4);
  iVar5 = func_0x04e4a028(*puVar9);
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  uVar8 = *(uint *)(iVar5 + 0x60);
  cVar1 = *(char *)(iVar2 + 0x18);
  *(uint *)(iVar5 + 0x60) = uVar8 + 1;
  *(uint *)(iVar5 + 100) = *(int *)(iVar5 + 100) + (uint)(0xfffffffe < uVar8);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar5 = func_0x04e4a028(*puVar9);
    if (iVar5 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar5 + 0x38) = 1;
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

