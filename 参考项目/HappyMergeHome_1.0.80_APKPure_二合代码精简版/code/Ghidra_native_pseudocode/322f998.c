
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0323f998(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0323fd7c + 0x323f9b0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323fd80 + 0x323f9c4));
    func_0x01438628(*(undefined4 *)(_UNK_0323fd84 + 0x323f9d0));
    func_0x01438628(*(undefined4 *)(_UNK_0323fd88 + 0x323f9dc));
    func_0x01438628(*(undefined4 *)(_UNK_0323fd8c + 0x323f9e8));
    func_0x01438628(*(undefined4 *)(_UNK_0323fd90 + 0x323f9f4));
    func_0x01438628(*(undefined4 *)(_UNK_0323fd94 + 0x323fa00));
    func_0x01438628(*(undefined4 *)(_UNK_0323fd98 + 0x323fa0c));
    func_0x01438628(*(undefined4 *)(_UNK_0323fd9c + 0x323fa18));
    func_0x01438628(*(undefined4 *)(_UNK_0323fda0 + 0x323fa24));
    func_0x01438628(*(undefined4 *)(_UNK_0323fda4 + 0x323fa30));
    func_0x01438628(*(undefined4 *)(_UNK_0323fda8 + 0x323fa3c));
    func_0x01438628(*(undefined4 *)(_UNK_0323fdac + 0x323fa48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7fe0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7fe0,0);
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
  if (*(int *)(**(int **)(_UNK_0323fdb0 + 0x323faa4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0323fdb4 + 0x323fac0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0323fdb8 + 0x323fae0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3a8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0323fdbc + 0x323fb14));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0323fdc0 + 0x323fb2c));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_0323fdc4 + 0x323fb44));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_0323fdc8 + 0x323fb70);
    puVar8 = *(undefined4 **)(_UNK_0323fdcc + 0x323fb78);
    do {
      if (*(int *)(**(int **)(_UNK_0323fdd0 + 0x323fb80) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0323fdd4 + 0x323fb9c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0323fdd8 + 0x323fbbc));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x3a8);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_0323fddc + 0x323fc94));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_0323fde0 + 0x323fccc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0323fde4 + 0x323fce8));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_0323fde8 + 0x323fd08));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x3a8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_0323fdec + 0x323fd60));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

