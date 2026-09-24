
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0314acf8(void)

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
  
  pcVar3 = (char *)(_UNK_0314afac + 0x314ad0c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314afb0 + 0x314ad20));
    func_0x01438628(*(undefined4 *)(_UNK_0314afb4 + 0x314ad2c));
    func_0x01438628(*(undefined4 *)(_UNK_0314afb8 + 0x314ad38));
    func_0x01438628(*(undefined4 *)(_UNK_0314afbc + 0x314ad44));
    func_0x01438628(*(undefined4 *)(_UNK_0314afc0 + 0x314ad50));
    func_0x01438628(*(undefined4 *)(_UNK_0314afc4 + 0x314ad5c));
    func_0x01438628(*(undefined4 *)(_UNK_0314afc8 + 0x314ad68));
    func_0x01438628(*(undefined4 *)(_UNK_0314afcc + 0x314ad74));
    func_0x01438628(*(undefined4 *)(_UNK_0314afd0 + 0x314ad80));
    func_0x01438628(*(undefined4 *)(_UNK_0314afd4 + 0x314ad8c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7a23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7a23,0);
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
  if (*(int *)(**(int **)(_UNK_0314afd8 + 0x314ade4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0314afdc + 0x314ae00));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_0314afe0 + 0x314ae24);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2fc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0314afe4 + 0x314ae54));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0314afe8 + 0x314ae6c));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0314afec + 0x314ae84));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_0314aff0 + 0x314aeb0);
    puVar7 = *(undefined4 **)(_UNK_0314aff4 + 0x314aeb8);
    piVar8 = *(int **)(_UNK_0314aff8 + 0x314aec0);
    do {
      if (*(int *)(**(int **)(_UNK_0314affc + 0x314aec8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0314b000 + 0x314aee4));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x2fc);
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
      iVar6 = FUN_0314ab38(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_0314ac44(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

