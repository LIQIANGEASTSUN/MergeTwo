
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03183ce4(void)

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
  
  pcVar3 = (char *)(_UNK_03183f98 + 0x3183cf8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03183f9c + 0x3183d0c));
    func_0x01438628(*(undefined4 *)(_UNK_03183fa0 + 0x3183d18));
    func_0x01438628(*(undefined4 *)(_UNK_03183fa4 + 0x3183d24));
    func_0x01438628(*(undefined4 *)(_UNK_03183fa8 + 0x3183d30));
    func_0x01438628(*(undefined4 *)(_UNK_03183fac + 0x3183d3c));
    func_0x01438628(*(undefined4 *)(_UNK_03183fb0 + 0x3183d48));
    func_0x01438628(*(undefined4 *)(_UNK_03183fb4 + 0x3183d54));
    func_0x01438628(*(undefined4 *)(_UNK_03183fb8 + 0x3183d60));
    func_0x01438628(*(undefined4 *)(_UNK_03183fbc + 0x3183d6c));
    func_0x01438628(*(undefined4 *)(_UNK_03183fc0 + 0x3183d78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7ba2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7ba2,0);
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
  if (*(int *)(**(int **)(_UNK_03183fc4 + 0x3183dd0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03183fc8 + 0x3183dec));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_03183fcc + 0x3183e10);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x208);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03183fd0 + 0x3183e40));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03183fd4 + 0x3183e58));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03183fd8 + 0x3183e70));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_03183fdc + 0x3183e9c);
    puVar7 = *(undefined4 **)(_UNK_03183fe0 + 0x3183ea4);
    piVar8 = *(int **)(_UNK_03183fe4 + 0x3183eac);
    do {
      if (*(int *)(**(int **)(_UNK_03183fe8 + 0x3183eb4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03183fec + 0x3183ed0));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x208);
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
      iVar6 = FUN_03183b24(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_03183c30(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

