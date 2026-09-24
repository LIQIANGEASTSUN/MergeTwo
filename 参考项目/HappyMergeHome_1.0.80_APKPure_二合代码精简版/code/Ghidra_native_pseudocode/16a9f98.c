
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b9f98(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_016ba37c + 0x16b9fb0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016ba380 + 0x16b9fc4));
    func_0x01438628(*(undefined4 *)(_UNK_016ba384 + 0x16b9fd0));
    func_0x01438628(*(undefined4 *)(_UNK_016ba388 + 0x16b9fdc));
    func_0x01438628(*(undefined4 *)(_UNK_016ba38c + 0x16b9fe8));
    func_0x01438628(*(undefined4 *)(_UNK_016ba390 + 0x16b9ff4));
    func_0x01438628(*(undefined4 *)(_UNK_016ba394 + 0x16ba000));
    func_0x01438628(*(undefined4 *)(_UNK_016ba398 + 0x16ba00c));
    func_0x01438628(*(undefined4 *)(_UNK_016ba39c + 0x16ba018));
    func_0x01438628(*(undefined4 *)(_UNK_016ba3a0 + 0x16ba024));
    func_0x01438628(*(undefined4 *)(_UNK_016ba3a4 + 0x16ba030));
    func_0x01438628(*(undefined4 *)(_UNK_016ba3a8 + 0x16ba03c));
    func_0x01438628(*(undefined4 *)(_UNK_016ba3ac + 0x16ba048));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8922,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8922,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_016ba3b0 + 0x16ba0a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016ba3b4 + 0x16ba0c0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016ba3b8 + 0x16ba0e0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x35c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016ba3bc + 0x16ba114));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016ba3c0 + 0x16ba12c));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_016ba3c4 + 0x16ba144));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_016ba3c8 + 0x16ba170);
    puVar8 = *(undefined4 **)(_UNK_016ba3cc + 0x16ba178);
    do {
      if (*(int *)(**(int **)(_UNK_016ba3d0 + 0x16ba180) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_016ba3d4 + 0x16ba19c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04cc(iVar5,**(undefined4 **)(_UNK_016ba3d8 + 0x16ba1bc));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x35c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e9678(iVar2,uVar7,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_016ba3dc + 0x16ba294));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_016ba3e0 + 0x16ba2cc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_016ba3e4 + 0x16ba2e8));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f04cc(iVar5,**(undefined4 **)(_UNK_016ba3e8 + 0x16ba308));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x35c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_016ba3ec + 0x16ba360));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

