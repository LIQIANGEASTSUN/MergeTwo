
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192b65c(void)

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
  
  pcVar2 = (char *)(_UNK_0192b910 + 0x192b670);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0192b914 + 0x192b684));
    func_0x01438628(*(undefined4 *)(_UNK_0192b918 + 0x192b690));
    func_0x01438628(*(undefined4 *)(_UNK_0192b91c + 0x192b69c));
    func_0x01438628(*(undefined4 *)(_UNK_0192b920 + 0x192b6a8));
    func_0x01438628(*(undefined4 *)(_UNK_0192b924 + 0x192b6b4));
    func_0x01438628(*(undefined4 *)(_UNK_0192b928 + 0x192b6c0));
    func_0x01438628(*(undefined4 *)(_UNK_0192b92c + 0x192b6cc));
    func_0x01438628(*(undefined4 *)(_UNK_0192b930 + 0x192b6d8));
    func_0x01438628(*(undefined4 *)(_UNK_0192b934 + 0x192b6e4));
    func_0x01438628(*(undefined4 *)(_UNK_0192b938 + 0x192b6f0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x97a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x97a3,0);
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
  if (*(int *)(**(int **)(_UNK_0192b93c + 0x192b748) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0192b940 + 0x192b764));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_0192b944 + 0x192b788);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3ac);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0192b948 + 0x192b7b8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0192b94c + 0x192b7d0));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_0192b950 + 0x192b7e8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_0192b954 + 0x192b814);
    puVar7 = *(undefined4 **)(_UNK_0192b958 + 0x192b81c);
    piVar8 = *(int **)(_UNK_0192b95c + 0x192b824);
    do {
      if (*(int *)(**(int **)(_UNK_0192b960 + 0x192b82c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0192b964 + 0x192b848));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x3ac);
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
      iVar6 = FUN_0192b49c(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_0192b5a8(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

