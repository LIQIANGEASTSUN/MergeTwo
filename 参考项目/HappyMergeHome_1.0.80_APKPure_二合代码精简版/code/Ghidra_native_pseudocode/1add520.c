
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aed520(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_01aed690 + 0x1aed534);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aed694 + 0x1aed548));
    func_0x01438628(*(undefined4 *)(_UNK_01aed698 + 0x1aed554));
    func_0x01438628(*(undefined4 *)(_UNK_01aed69c + 0x1aed560));
    func_0x01438628(*(undefined4 *)(_UNK_01aed6a0 + 0x1aed56c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bb1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bb1,0);
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
  iVar1 = FUN_01ae99ac(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x54) != '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01aed6a4 + 0x1aed5e8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aed6a8 + 0x1aed604));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01aed6ac + 0x1aed624));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f05a8(iVar1,0x59,**(undefined4 **)(_UNK_01aed6b0 + 0x1aed65c));
  iVar1 = FUN_01ae99ac(param_1);
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

