
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dab644(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01dab8f8 + 0x1dab658);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01dab8fc + 0x1dab66c));
    func_0x01438628(*(undefined4 *)(_UNK_01dab900 + 0x1dab678));
    func_0x01438628(*(undefined4 *)(_UNK_01dab904 + 0x1dab684));
    func_0x01438628(*(undefined4 *)(_UNK_01dab908 + 0x1dab690));
    func_0x01438628(*(undefined4 *)(_UNK_01dab90c + 0x1dab69c));
    func_0x01438628(*(undefined4 *)(_UNK_01dab910 + 0x1dab6a8));
    func_0x01438628(*(undefined4 *)(_UNK_01dab914 + 0x1dab6b4));
    func_0x01438628(*(undefined4 *)(_UNK_01dab918 + 0x1dab6c0));
    func_0x01438628(*(undefined4 *)(_UNK_01dab91c + 0x1dab6cc));
    func_0x01438628(*(undefined4 *)(_UNK_01dab920 + 0x1dab6d8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3f0d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3f0d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01dab924 + 0x1dab730) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01dab928 + 0x1dab74c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01dab92c + 0x1dab770);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x1ac);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01dab930 + 0x1dab7a0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01dab934 + 0x1dab7b8));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01dab938 + 0x1dab7d0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01dab93c + 0x1dab7fc);
    puVar7 = *(undefined4 **)(_UNK_01dab940 + 0x1dab804);
    piVar8 = *(int **)(_UNK_01dab944 + 0x1dab80c);
    do {
      if (*(int *)(**(int **)(_UNK_01dab948 + 0x1dab814) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01dab94c + 0x1dab830));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x1ac);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x0152983c(iVar1,uVar4,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x03b73d40(iVar6,uVar3,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_01dab484(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_01dab590(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

