
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031114a8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_03111550 + 0x31114bc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03111554 + 0x31114d0));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x789a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x789a,0);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  if (param_1 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_03111558 + 0x3111544);
  pcVar7 = (char *)(_UNK_03b70e48 + 0x3b70d3c);
  if (*pcVar7 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70e4c + 0x3b70d50));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70e50 + 0x3b70d5c));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70e54 + 0x3b70d68));
    *pcVar7 = '\x01';
  }
  iVar10 = **(int **)(_UNK_03b70e58 + 0x3b70d7c);
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
  if (*(int *)(**(int **)(_UNK_03b70e5c + 0x3b70ddc) + 0x74) == 0) {
    func_0x024f83d8(**(int **)(_UNK_03b70e5c + 0x3b70ddc));
  }
  func_0x02679550(**(undefined4 **)(_UNK_03b70e60 + 0x3b70e0c),uVar8,0);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  func_0x046c268c(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x2c));
  pcVar7 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
  if (*pcVar7 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),
                    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x28));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
    *pcVar7 = '\x01';
  }
  piVar9 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar11 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar6 = func_0x04e4a028(*puVar11);
  if (iVar6 == 0) {
    func_0x024f83d4();
  }
  uVar3 = *(uint *)(iVar6 + 0x60);
  cVar1 = *(char *)(iVar2 + 0x30);
  *(uint *)(iVar6 + 0x60) = uVar3 + 1;
  *(uint *)(iVar6 + 100) = *(int *)(iVar6 + 100) + (uint)(0xfffffffe < uVar3);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar6 = func_0x04e4a028(*puVar11);
    if (iVar6 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  if (*(char *)(iVar2 + 0x31) != '\0') {
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

