
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5d1dc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_01b5d34c + 0x1b5d1f0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5d350 + 0x1b5d204));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d354 + 0x1b5d210));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d358 + 0x1b5d21c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5d35c + 0x1b5d228));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bae,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = FUN_01b5ba7c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x54) != '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b5d360 + 0x1b5d2a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5d364 + 0x1b5d2c0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01b5d368 + 0x1b5d2e0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f05a8(iVar1,0x3b,**(undefined4 **)(_UNK_01b5d36c + 0x1b5d318));
  iVar1 = FUN_01b5ba7c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_026c01a8 + 0x26c0120);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026c01ac + 0x26c0134),1,0);
    func_0x01438628(*(undefined4 *)(_UNK_026c01b0 + 0x26c0140));
    *pcVar5 = '\x01';
  }
  if (*(char *)(iVar1 + 0x54) == '\x01') {
    return;
  }
  piVar2 = *(int **)(_UNK_026c01b4 + 0x26c0160);
  *(undefined1 *)(iVar1 + 0x54) = 1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026c01b8 + 0x26c0180));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar1 + 0x60);
  *(uint *)(iVar1 + 0x60) = uVar3 + 1;
  *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

