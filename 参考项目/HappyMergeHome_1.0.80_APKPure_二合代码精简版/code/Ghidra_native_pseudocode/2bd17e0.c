
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be17e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar7 = (char *)(_UNK_02be18f8 + 0x2be17f8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be18fc + 0x2be180c));
    func_0x01438628(*(undefined4 *)(_UNK_02be1900 + 0x2be1818));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xcb7,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xcb7,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar2 = FUN_02baef1c(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x046c26fc(iVar2,param_2,**(undefined4 **)(_UNK_02be1904 + 0x2be18a0));
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_02baef1c(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar5 = **(int **)(_UNK_02be1908 + 0x2be18ec);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  func_0x046c24b0(iVar2,param_2,param_2,
                  *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x24));
  pcVar7 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
  if (*pcVar7 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),
                    *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x28));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar9 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar5 = func_0x04e4a028(*puVar9);
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  uVar3 = *(uint *)(iVar5 + 0x60);
  cVar1 = *(char *)(iVar2 + 0x30);
  *(uint *)(iVar5 + 0x60) = uVar3 + 1;
  *(uint *)(iVar5 + 100) = *(int *)(iVar5 + 100) + (uint)(0xfffffffe < uVar3);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar5 = func_0x04e4a028(*puVar9);
    if (iVar5 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  if (*(char *)(iVar2 + 0x31) != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
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

