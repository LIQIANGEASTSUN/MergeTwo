
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4b498(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02b4b780 + 0x2b4b4b0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4b784 + 0x2b4b4c4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b788 + 0x2b4b4d0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b78c + 0x2b4b4dc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b790 + 0x2b4b4e8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b794 + 0x2b4b4f4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b798 + 0x2b4b500));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b79c + 0x2b4b50c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b7a0 + 0x2b4b518));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b7a4 + 0x2b4b524));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b7a8 + 0x2b4b530));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b7ac + 0x2b4b53c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x19e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x19e7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02b4b7b0 + 0x2b4b598) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02b4b7b4 + 0x2b4b5b4);
  iVar1 = func_0x014e9518(*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_02b4b7b8 + 0x2b4b5d8);
  iVar1 = func_0x036c7bec(iVar1,*puVar10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x130);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02b4b7bc + 0x2b4b608));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4b7c0 + 0x2b4b620));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_02b4b7c4 + 0x2b4b638));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar11 = *(undefined4 **)(_UNK_02b4b7c8 + 0x2b4b664);
    puVar8 = *(undefined4 **)(_UNK_02b4b7cc + 0x2b4b66c);
    do {
      if (*(int *)(**(int **)(_UNK_02b4b7d0 + 0x2b4b674) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(*puVar9);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x036c7bec(iVar4,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x130);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar11);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03b73d40(iVar4,uVar7,*puVar8);
      iVar2 = FUN_02b4aaa8();
      if (iVar2 != 0) {
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x026a1458(iVar4,*(undefined4 *)(iVar4 + 0x10),0);
        iVar2 = *(int *)(iVar4 + 0x18);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b70d24(iVar2,**(undefined4 **)(_UNK_02b4b7d4 + 0x2b4b740));
        iVar4 = *(int *)(iVar4 + 0x1c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_02b4b7d8 + 0x2b4b764));
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

