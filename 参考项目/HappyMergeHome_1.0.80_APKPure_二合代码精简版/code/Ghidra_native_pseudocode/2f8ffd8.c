
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f9ffd8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x6f58,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6f58,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar3);
    return;
  }
  iVar1 = FUN_02f9f650(param_1);
  if (0 < iVar1) {
    pcVar4 = (char *)(_UNK_02fa04f4 + 0x2fa0064);
    uStack_24 = unaff_r4;
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02fa04f8 + 0x2fa0078));
      func_0x01438628(*(undefined4 *)(_UNK_02fa04fc + 0x2fa0084));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0500 + 0x2fa0090));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0504 + 0x2fa009c));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0508 + 0x2fa00a8));
      func_0x01438628(*(undefined4 *)(_UNK_02fa050c + 0x2fa00b4));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0510 + 0x2fa00c0));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0514 + 0x2fa00cc));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0518 + 0x2fa00d8));
      func_0x01438628(*(undefined4 *)(_UNK_02fa051c + 0x2fa00e4));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0520 + 0x2fa00f0));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0524 + 0x2fa00fc));
      func_0x01438628(*(undefined4 *)(_UNK_02fa0528 + 0x2fa0108));
      func_0x01438628(*(undefined4 *)(_UNK_02fa052c + 0x2fa0114));
      *pcVar4 = '\x01';
    }
    iVar6 = func_0x02953fd4(0x6f5e,0);
    if (iVar6 != 0) {
      iVar6 = func_0x029540a4(0x6f5e,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_20 = uStack_24;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      iStack_28 = 0;
      func_0x024f56c0(&uStack_50,0,iVar1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      iStack_2c = uStack_44;
      iStack_28 = iStack_40;
      if (*(int *)(iVar6 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar6 + 0x10),0);
      }
      func_0x01523a6c(&uStack_38,param_1,0);
      func_0x01523a2c(&uStack_38,iVar1,0);
      iVar7 = *(int *)(iVar6 + 8);
      uVar8 = *(undefined4 *)(iVar6 + 0xc);
      iVar1 = *(int *)(iVar6 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar3,0,0);
      return;
    }
    if (*(int *)(**(int **)(_UNK_02fa0530 + 0x2fa0174) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa0534 + 0x2fa0190));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x036c7bec(iVar6,**(undefined4 **)(_UNK_02fa0538 + 0x2fa01b0));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x03b72148(iVar6,0x40,**(undefined4 **)(_UNK_02fa053c + 0x2fa01e8));
    if (iVar6 != 0) {
      iVar7 = FUN_02f95f8c(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (iVar7 < iVar1) {
        iVar2 = *(int *)(iVar6 + 8);
        iVar9 = iVar2 * iVar7;
        iStack_2c = iVar1;
        if (iVar9 < iVar2 * iVar1) {
          iVar2 = iVar2 * (iVar1 - iVar7);
          puVar10 = *(undefined4 **)(_UNK_02fa0540 + 0x2fa0254);
          do {
            iVar1 = *(int *)(iVar6 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03b780b0(iVar1,iVar9,*puVar10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (0 < *(int *)(iVar1 + 8)) {
              iVar1 = FUN_02f95f8c(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar6 + 0x10);
              iVar1 = *(int *)(iVar1 + 0x18);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = func_0x03b780b0(iVar7,iVar9,*puVar10);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar8 = *(undefined4 *)(iVar7 + 8);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x03b75ba0(iVar1,uVar8,**(undefined4 **)(_UNK_02fa0544 + 0x2fa02f8));
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            }
            if (*(int *)(**(int **)(_UNK_02fa0548 + 0x2fa0318) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa054c + 0x2fa0334));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uStack_44 = 0x40;
            uStack_3c = 1;
            uStack_38 = 0xffffffff;
            uStack_48 = 0;
            uStack_34 = 0;
            uStack_30 = 0;
            iStack_40 = iVar9;
            func_0x02bd2cf0(iVar1,iVar9,0xffffffff,10);
            iVar2 = iVar2 + -1;
            iVar9 = iVar9 + 1;
          } while (iVar2 != 0);
        }
        iVar1 = FUN_02f95f8c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = iStack_2c;
        FUN_026efd30(iVar1,iStack_2c,0);
        if (*(int *)(**(int **)(_UNK_02fa0550 + 0x2fa03c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa0554 + 0x2fa03e0));
        piVar5 = *(int **)(_UNK_02fa0558 + 0x2fa03f4);
        iVar7 = *piVar5;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar5;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x330);
        piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fa055c + 0x2fa0418),1);
        iStack_28 = iVar6;
        iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_02fa0560 + 0x2fa0438),&iStack_28);
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar6 != 0) &&
           (iVar7 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar7 == 0)) {
          uVar3 = func_0x01438904();
          func_0x01438790(uVar3,0);
        }
        if (piVar5[3] == 0) {
          func_0x014388e8();
        }
        piVar5[4] = iVar6;
        func_0x014385cc(piVar5 + 4,iVar6);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar1,uVar8,piVar5,0);
        if (*(int *)(**(int **)(_UNK_02fa0564 + 0x2fa04c8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_02f94b94();
        if (iVar1 != 0) {
          func_0x02fbd194(iVar1,0);
        }
      }
    }
    return;
  }
  return;
}

