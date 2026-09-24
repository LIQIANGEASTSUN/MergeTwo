
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032aa50c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_032aa8f0 + 0x32aa524);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032aa8f4 + 0x32aa538));
    func_0x01438628(*(undefined4 *)(_UNK_032aa8f8 + 0x32aa544));
    func_0x01438628(*(undefined4 *)(_UNK_032aa8fc + 0x32aa550));
    func_0x01438628(*(undefined4 *)(_UNK_032aa900 + 0x32aa55c));
    func_0x01438628(*(undefined4 *)(_UNK_032aa904 + 0x32aa568));
    func_0x01438628(*(undefined4 *)(_UNK_032aa908 + 0x32aa574));
    func_0x01438628(*(undefined4 *)(_UNK_032aa90c + 0x32aa580));
    func_0x01438628(*(undefined4 *)(_UNK_032aa910 + 0x32aa58c));
    func_0x01438628(*(undefined4 *)(_UNK_032aa914 + 0x32aa598));
    func_0x01438628(*(undefined4 *)(_UNK_032aa918 + 0x32aa5a4));
    func_0x01438628(*(undefined4 *)(_UNK_032aa91c + 0x32aa5b0));
    func_0x01438628(*(undefined4 *)(_UNK_032aa920 + 0x32aa5bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8280,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8280,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_032aa924 + 0x32aa618) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032aa928 + 0x32aa634));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032aa92c + 0x32aa654));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 600);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_032aa930 + 0x32aa688));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032aa934 + 0x32aa6a0));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_032aa938 + 0x32aa6b8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_032aa93c + 0x32aa6e4);
    puVar8 = *(undefined4 **)(_UNK_032aa940 + 0x32aa6ec);
    do {
      if (*(int *)(**(int **)(_UNK_032aa944 + 0x32aa6f4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032aa948 + 0x32aa710));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_032aa94c + 0x32aa730));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 600);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x03b73d40(iVar5,uVar6,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04f6a364(iVar2,uVar6,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_032aa950 + 0x32aa808));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_032aa954 + 0x32aa840) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032aa958 + 0x32aa85c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_032aa95c + 0x32aa87c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 600);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_032aa960 + 0x32aa8d4));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

