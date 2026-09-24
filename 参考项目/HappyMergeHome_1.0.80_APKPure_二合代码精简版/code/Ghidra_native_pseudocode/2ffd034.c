
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300d034(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0300d418 + 0x300d04c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300d41c + 0x300d060));
    func_0x01438628(*(undefined4 *)(_UNK_0300d420 + 0x300d06c));
    func_0x01438628(*(undefined4 *)(_UNK_0300d424 + 0x300d078));
    func_0x01438628(*(undefined4 *)(_UNK_0300d428 + 0x300d084));
    func_0x01438628(*(undefined4 *)(_UNK_0300d42c + 0x300d090));
    func_0x01438628(*(undefined4 *)(_UNK_0300d430 + 0x300d09c));
    func_0x01438628(*(undefined4 *)(_UNK_0300d434 + 0x300d0a8));
    func_0x01438628(*(undefined4 *)(_UNK_0300d438 + 0x300d0b4));
    func_0x01438628(*(undefined4 *)(_UNK_0300d43c + 0x300d0c0));
    func_0x01438628(*(undefined4 *)(_UNK_0300d440 + 0x300d0cc));
    func_0x01438628(*(undefined4 *)(_UNK_0300d444 + 0x300d0d8));
    func_0x01438628(*(undefined4 *)(_UNK_0300d448 + 0x300d0e4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7284,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7284,0);
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
  if (*(int *)(**(int **)(_UNK_0300d44c + 0x300d140) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300d450 + 0x300d15c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0300d454 + 0x300d17c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x390);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0300d458 + 0x300d1b0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0300d45c + 0x300d1c8));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_0300d460 + 0x300d1e0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_0300d464 + 0x300d20c);
    puVar8 = *(undefined4 **)(_UNK_0300d468 + 0x300d214);
    do {
      if (*(int *)(**(int **)(_UNK_0300d46c + 0x300d21c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0300d470 + 0x300d238));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0300d474 + 0x300d258));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x390);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_0300d478 + 0x300d330));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_0300d47c + 0x300d368) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0300d480 + 0x300d384));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0300d484 + 0x300d3a4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x390);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_0300d488 + 0x300d3fc));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

