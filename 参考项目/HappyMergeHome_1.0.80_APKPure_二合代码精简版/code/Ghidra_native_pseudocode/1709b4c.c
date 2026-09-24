
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01719b4c(void)

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
  
  pcVar2 = (char *)(_UNK_01719e00 + 0x1719b60);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01719e04 + 0x1719b74));
    func_0x01438628(*(undefined4 *)(_UNK_01719e08 + 0x1719b80));
    func_0x01438628(*(undefined4 *)(_UNK_01719e0c + 0x1719b8c));
    func_0x01438628(*(undefined4 *)(_UNK_01719e10 + 0x1719b98));
    func_0x01438628(*(undefined4 *)(_UNK_01719e14 + 0x1719ba4));
    func_0x01438628(*(undefined4 *)(_UNK_01719e18 + 0x1719bb0));
    func_0x01438628(*(undefined4 *)(_UNK_01719e1c + 0x1719bbc));
    func_0x01438628(*(undefined4 *)(_UNK_01719e20 + 0x1719bc8));
    func_0x01438628(*(undefined4 *)(_UNK_01719e24 + 0x1719bd4));
    func_0x01438628(*(undefined4 *)(_UNK_01719e28 + 0x1719be0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b85,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8b85,0);
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
  if (*(int *)(**(int **)(_UNK_01719e2c + 0x1719c38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01719e30 + 0x1719c54));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01719e34 + 0x1719c78);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3a0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01719e38 + 0x1719ca8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01719e3c + 0x1719cc0));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01719e40 + 0x1719cd8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01719e44 + 0x1719d04);
    puVar7 = *(undefined4 **)(_UNK_01719e48 + 0x1719d0c);
    piVar8 = *(int **)(_UNK_01719e4c + 0x1719d14);
    do {
      if (*(int *)(**(int **)(_UNK_01719e50 + 0x1719d1c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01719e54 + 0x1719d38));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x3a0);
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
      iVar6 = FUN_0171998c(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_01719a98(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

