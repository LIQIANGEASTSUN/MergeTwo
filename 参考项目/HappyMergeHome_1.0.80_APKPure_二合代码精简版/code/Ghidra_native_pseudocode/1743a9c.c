
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01753a9c(void)

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
  
  pcVar2 = (char *)(_UNK_01753d50 + 0x1753ab0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01753d54 + 0x1753ac4));
    func_0x01438628(*(undefined4 *)(_UNK_01753d58 + 0x1753ad0));
    func_0x01438628(*(undefined4 *)(_UNK_01753d5c + 0x1753adc));
    func_0x01438628(*(undefined4 *)(_UNK_01753d60 + 0x1753ae8));
    func_0x01438628(*(undefined4 *)(_UNK_01753d64 + 0x1753af4));
    func_0x01438628(*(undefined4 *)(_UNK_01753d68 + 0x1753b00));
    func_0x01438628(*(undefined4 *)(_UNK_01753d6c + 0x1753b0c));
    func_0x01438628(*(undefined4 *)(_UNK_01753d70 + 0x1753b18));
    func_0x01438628(*(undefined4 *)(_UNK_01753d74 + 0x1753b24));
    func_0x01438628(*(undefined4 *)(_UNK_01753d78 + 0x1753b30));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8d0b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8d0b,0);
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
  if (*(int *)(**(int **)(_UNK_01753d7c + 0x1753b88) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01753d80 + 0x1753ba4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01753d84 + 0x1753bc8);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x394);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01753d88 + 0x1753bf8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01753d8c + 0x1753c10));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01753d90 + 0x1753c28));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01753d94 + 0x1753c54);
    puVar7 = *(undefined4 **)(_UNK_01753d98 + 0x1753c5c);
    piVar8 = *(int **)(_UNK_01753d9c + 0x1753c64);
    do {
      if (*(int *)(**(int **)(_UNK_01753da0 + 0x1753c6c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01753da4 + 0x1753c88));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x394);
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
      iVar6 = FUN_017538dc(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_017539e8(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

