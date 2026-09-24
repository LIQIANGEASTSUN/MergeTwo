
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03181c30(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_03182014 + 0x3181c48);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03182018 + 0x3181c5c));
    func_0x01438628(*(undefined4 *)(_UNK_0318201c + 0x3181c68));
    func_0x01438628(*(undefined4 *)(_UNK_03182020 + 0x3181c74));
    func_0x01438628(*(undefined4 *)(_UNK_03182024 + 0x3181c80));
    func_0x01438628(*(undefined4 *)(_UNK_03182028 + 0x3181c8c));
    func_0x01438628(*(undefined4 *)(_UNK_0318202c + 0x3181c98));
    func_0x01438628(*(undefined4 *)(_UNK_03182030 + 0x3181ca4));
    func_0x01438628(*(undefined4 *)(_UNK_03182034 + 0x3181cb0));
    func_0x01438628(*(undefined4 *)(_UNK_03182038 + 0x3181cbc));
    func_0x01438628(*(undefined4 *)(_UNK_0318203c + 0x3181cc8));
    func_0x01438628(*(undefined4 *)(_UNK_03182040 + 0x3181cd4));
    func_0x01438628(*(undefined4 *)(_UNK_03182044 + 0x3181ce0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7b9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7b9b,0);
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
  if (*(int *)(**(int **)(_UNK_03182048 + 0x3181d3c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0318204c + 0x3181d58));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03182050 + 0x3181d78));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x208);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03182054 + 0x3181dac));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03182058 + 0x3181dc4));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_0318205c + 0x3181ddc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_03182060 + 0x3181e08);
    puVar8 = *(undefined4 **)(_UNK_03182064 + 0x3181e10);
    do {
      if (*(int *)(**(int **)(_UNK_03182068 + 0x3181e18) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0318206c + 0x3181e34));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_03182070 + 0x3181e54));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x208);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_03182074 + 0x3181f2c));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_03182078 + 0x3181f64) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0318207c + 0x3181f80));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_03182080 + 0x3181fa0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x208);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_03182084 + 0x3181ff8));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

