
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0320d138(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0320d51c + 0x320d150);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320d520 + 0x320d164));
    func_0x01438628(*(undefined4 *)(_UNK_0320d524 + 0x320d170));
    func_0x01438628(*(undefined4 *)(_UNK_0320d528 + 0x320d17c));
    func_0x01438628(*(undefined4 *)(_UNK_0320d52c + 0x320d188));
    func_0x01438628(*(undefined4 *)(_UNK_0320d530 + 0x320d194));
    func_0x01438628(*(undefined4 *)(_UNK_0320d534 + 0x320d1a0));
    func_0x01438628(*(undefined4 *)(_UNK_0320d538 + 0x320d1ac));
    func_0x01438628(*(undefined4 *)(_UNK_0320d53c + 0x320d1b8));
    func_0x01438628(*(undefined4 *)(_UNK_0320d540 + 0x320d1c4));
    func_0x01438628(*(undefined4 *)(_UNK_0320d544 + 0x320d1d0));
    func_0x01438628(*(undefined4 *)(_UNK_0320d548 + 0x320d1dc));
    func_0x01438628(*(undefined4 *)(_UNK_0320d54c + 0x320d1e8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7e89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7e89,0);
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
  if (*(int *)(**(int **)(_UNK_0320d550 + 0x320d244) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0320d554 + 0x320d260));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0320d558 + 0x320d280));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2b8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0320d55c + 0x320d2b4));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0320d560 + 0x320d2cc));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_0320d564 + 0x320d2e4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_0320d568 + 0x320d310);
    puVar8 = *(undefined4 **)(_UNK_0320d56c + 0x320d318);
    do {
      if (*(int *)(**(int **)(_UNK_0320d570 + 0x320d320) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0320d574 + 0x320d33c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0320d578 + 0x320d35c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x2b8);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_0320d57c + 0x320d434));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_0320d580 + 0x320d46c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0320d584 + 0x320d488));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0320d588 + 0x320d4a8));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x2b8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_0320d58c + 0x320d500));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

