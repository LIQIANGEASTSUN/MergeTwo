
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0327b450(void)

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
  
  pcVar3 = (char *)(_UNK_0327b704 + 0x327b464);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0327b708 + 0x327b478));
    func_0x01438628(*(undefined4 *)(_UNK_0327b70c + 0x327b484));
    func_0x01438628(*(undefined4 *)(_UNK_0327b710 + 0x327b490));
    func_0x01438628(*(undefined4 *)(_UNK_0327b714 + 0x327b49c));
    func_0x01438628(*(undefined4 *)(_UNK_0327b718 + 0x327b4a8));
    func_0x01438628(*(undefined4 *)(_UNK_0327b71c + 0x327b4b4));
    func_0x01438628(*(undefined4 *)(_UNK_0327b720 + 0x327b4c0));
    func_0x01438628(*(undefined4 *)(_UNK_0327b724 + 0x327b4cc));
    func_0x01438628(*(undefined4 *)(_UNK_0327b728 + 0x327b4d8));
    func_0x01438628(*(undefined4 *)(_UNK_0327b72c + 0x327b4e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x815e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x815e,0);
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
  if (*(int *)(**(int **)(_UNK_0327b730 + 0x327b53c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0327b734 + 0x327b558));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_0327b738 + 0x327b57c);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x328);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0327b73c + 0x327b5ac));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0327b740 + 0x327b5c4));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0327b744 + 0x327b5dc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_0327b748 + 0x327b608);
    puVar7 = *(undefined4 **)(_UNK_0327b74c + 0x327b610);
    piVar8 = *(int **)(_UNK_0327b750 + 0x327b618);
    do {
      if (*(int *)(**(int **)(_UNK_0327b754 + 0x327b620) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0327b758 + 0x327b63c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x328);
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
      iVar6 = FUN_0327b290(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_0327b39c(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

