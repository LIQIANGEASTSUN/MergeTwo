
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01681b48(void)

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
  
  pcVar2 = (char *)(_UNK_01681dfc + 0x1681b5c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01681e00 + 0x1681b70));
    func_0x01438628(*(undefined4 *)(_UNK_01681e04 + 0x1681b7c));
    func_0x01438628(*(undefined4 *)(_UNK_01681e08 + 0x1681b88));
    func_0x01438628(*(undefined4 *)(_UNK_01681e0c + 0x1681b94));
    func_0x01438628(*(undefined4 *)(_UNK_01681e10 + 0x1681ba0));
    func_0x01438628(*(undefined4 *)(_UNK_01681e14 + 0x1681bac));
    func_0x01438628(*(undefined4 *)(_UNK_01681e18 + 0x1681bb8));
    func_0x01438628(*(undefined4 *)(_UNK_01681e1c + 0x1681bc4));
    func_0x01438628(*(undefined4 *)(_UNK_01681e20 + 0x1681bd0));
    func_0x01438628(*(undefined4 *)(_UNK_01681e24 + 0x1681bdc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x87a0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x87a0,0);
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
  if (*(int *)(**(int **)(_UNK_01681e28 + 0x1681c34) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01681e2c + 0x1681c50));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01681e30 + 0x1681c74);
  iVar1 = func_0x024f04cc(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x398);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01681e34 + 0x1681ca4));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01681e38 + 0x1681cbc));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01681e3c + 0x1681cd4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01681e40 + 0x1681d00);
    puVar7 = *(undefined4 **)(_UNK_01681e44 + 0x1681d08);
    piVar8 = *(int **)(_UNK_01681e48 + 0x1681d10);
    do {
      if (*(int *)(**(int **)(_UNK_01681e4c + 0x1681d18) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01681e50 + 0x1681d34));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x024f04cc(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x398);
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
      iVar6 = FUN_01681988(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_01681a94(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

