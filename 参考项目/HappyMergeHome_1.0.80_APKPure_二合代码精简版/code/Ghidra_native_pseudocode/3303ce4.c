
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03313ce4(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  pcVar3 = (char *)(_UNK_03313f98 + 0x3313cf8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03313f9c + 0x3313d0c));
    func_0x01438628(*(undefined4 *)(_UNK_03313fa0 + 0x3313d18));
    func_0x01438628(*(undefined4 *)(_UNK_03313fa4 + 0x3313d24));
    func_0x01438628(*(undefined4 *)(_UNK_03313fa8 + 0x3313d30));
    func_0x01438628(*(undefined4 *)(_UNK_03313fac + 0x3313d3c));
    func_0x01438628(*(undefined4 *)(_UNK_03313fb0 + 0x3313d48));
    func_0x01438628(*(undefined4 *)(_UNK_03313fb4 + 0x3313d54));
    func_0x01438628(*(undefined4 *)(_UNK_03313fb8 + 0x3313d60));
    func_0x01438628(*(undefined4 *)(_UNK_03313fbc + 0x3313d6c));
    func_0x01438628(*(undefined4 *)(_UNK_03313fc0 + 0x3313d78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8538,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8538,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_03313fc4 + 0x3313dd0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03313fc8 + 0x3313dec));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_03313fcc + 0x3313e10);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x270);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03313fd0 + 0x3313e40));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03313fd4 + 0x3313e58));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03313fd8 + 0x3313e70));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_03313fdc + 0x3313e9c);
    puVar7 = *(undefined4 **)(_UNK_03313fe0 + 0x3313ea4);
    piVar8 = *(int **)(_UNK_03313fe4 + 0x3313eac);
    do {
      if (*(int *)(**(int **)(_UNK_03313fe8 + 0x3313eb4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03313fec + 0x3313ed0));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x270);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x04cfd760(iVar1,uVar5,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b73d40(iVar6,uVar2,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_03313b24(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_03313c30(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

