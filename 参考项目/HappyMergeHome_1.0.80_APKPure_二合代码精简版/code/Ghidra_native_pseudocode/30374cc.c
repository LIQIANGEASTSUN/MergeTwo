
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030474cc(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_030478b0 + 0x30474e4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030478b4 + 0x30474f8));
    func_0x01438628(*(undefined4 *)(_UNK_030478b8 + 0x3047504));
    func_0x01438628(*(undefined4 *)(_UNK_030478bc + 0x3047510));
    func_0x01438628(*(undefined4 *)(_UNK_030478c0 + 0x304751c));
    func_0x01438628(*(undefined4 *)(_UNK_030478c4 + 0x3047528));
    func_0x01438628(*(undefined4 *)(_UNK_030478c8 + 0x3047534));
    func_0x01438628(*(undefined4 *)(_UNK_030478cc + 0x3047540));
    func_0x01438628(*(undefined4 *)(_UNK_030478d0 + 0x304754c));
    func_0x01438628(*(undefined4 *)(_UNK_030478d4 + 0x3047558));
    func_0x01438628(*(undefined4 *)(_UNK_030478d8 + 0x3047564));
    func_0x01438628(*(undefined4 *)(_UNK_030478dc + 0x3047570));
    func_0x01438628(*(undefined4 *)(_UNK_030478e0 + 0x304757c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7418,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7418,0);
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
  if (*(int *)(**(int **)(_UNK_030478e4 + 0x30475d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030478e8 + 0x30475f4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_030478ec + 0x3047614));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x368);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_030478f0 + 0x3047648));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030478f4 + 0x3047660));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_030478f8 + 0x3047678));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_030478fc + 0x30476a4);
    puVar8 = *(undefined4 **)(_UNK_03047900 + 0x30476ac);
    do {
      if (*(int *)(**(int **)(_UNK_03047904 + 0x30476b4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_03047908 + 0x30476d0));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0304790c + 0x30476f0));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x368);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_03047910 + 0x30477c8));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_03047914 + 0x3047800) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_03047918 + 0x304781c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0304791c + 0x304783c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x368);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_03047920 + 0x3047894));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

