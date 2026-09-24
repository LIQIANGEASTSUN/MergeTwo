
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f48000(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02f483e4 + 0x2f48018);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f483e8 + 0x2f4802c));
    func_0x01438628(*(undefined4 *)(_UNK_02f483ec + 0x2f48038));
    func_0x01438628(*(undefined4 *)(_UNK_02f483f0 + 0x2f48044));
    func_0x01438628(*(undefined4 *)(_UNK_02f483f4 + 0x2f48050));
    func_0x01438628(*(undefined4 *)(_UNK_02f483f8 + 0x2f4805c));
    func_0x01438628(*(undefined4 *)(_UNK_02f483fc + 0x2f48068));
    func_0x01438628(*(undefined4 *)(_UNK_02f48400 + 0x2f48074));
    func_0x01438628(*(undefined4 *)(_UNK_02f48404 + 0x2f48080));
    func_0x01438628(*(undefined4 *)(_UNK_02f48408 + 0x2f4808c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4840c + 0x2f48098));
    func_0x01438628(*(undefined4 *)(_UNK_02f48410 + 0x2f480a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f48414 + 0x2f480b0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6e06,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6e06,0);
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
  if (*(int *)(**(int **)(_UNK_02f48418 + 0x2f4810c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4841c + 0x2f48128));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f48420 + 0x2f48148));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x37c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02f48424 + 0x2f4817c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f48428 + 0x2f48194));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_02f4842c + 0x2f481ac));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_02f48430 + 0x2f481d8);
    puVar8 = *(undefined4 **)(_UNK_02f48434 + 0x2f481e0);
    do {
      if (*(int *)(**(int **)(_UNK_02f48438 + 0x2f481e8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4843c + 0x2f48204));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_02f48440 + 0x2f48224));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x37c);
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
      iVar2 = func_0x014e9678(iVar2,uVar6,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_02f48444 + 0x2f482fc));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_02f48448 + 0x2f48334) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4844c + 0x2f48350));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_02f48450 + 0x2f48370));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x37c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_02f48454 + 0x2f483c8));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

