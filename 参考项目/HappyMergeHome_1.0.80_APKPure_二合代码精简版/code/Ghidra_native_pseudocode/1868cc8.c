
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01878cc8(void)

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
  
  pcVar2 = (char *)(_UNK_01878f7c + 0x1878cdc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01878f80 + 0x1878cf0));
    func_0x01438628(*(undefined4 *)(_UNK_01878f84 + 0x1878cfc));
    func_0x01438628(*(undefined4 *)(_UNK_01878f88 + 0x1878d08));
    func_0x01438628(*(undefined4 *)(_UNK_01878f8c + 0x1878d14));
    func_0x01438628(*(undefined4 *)(_UNK_01878f90 + 0x1878d20));
    func_0x01438628(*(undefined4 *)(_UNK_01878f94 + 0x1878d2c));
    func_0x01438628(*(undefined4 *)(_UNK_01878f98 + 0x1878d38));
    func_0x01438628(*(undefined4 *)(_UNK_01878f9c + 0x1878d44));
    func_0x01438628(*(undefined4 *)(_UNK_01878fa0 + 0x1878d50));
    func_0x01438628(*(undefined4 *)(_UNK_01878fa4 + 0x1878d5c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x93c8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x93c8,0);
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
  if (*(int *)(**(int **)(_UNK_01878fa8 + 0x1878db4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01878fac + 0x1878dd0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01878fb0 + 0x1878df4);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2f0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01878fb4 + 0x1878e24));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01878fb8 + 0x1878e3c));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01878fbc + 0x1878e54));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01878fc0 + 0x1878e80);
    puVar7 = *(undefined4 **)(_UNK_01878fc4 + 0x1878e88);
    piVar8 = *(int **)(_UNK_01878fc8 + 0x1878e90);
    do {
      if (*(int *)(**(int **)(_UNK_01878fcc + 0x1878e98) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01878fd0 + 0x1878eb4));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x2f0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x0152983c(iVar1,uVar4,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f04d4(iVar6,uVar3,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_01878b08(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_01878c14(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

