
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b9f600(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  pcVar9 = (char *)(_UNK_02b9f83c + 0x2b9f61c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b9f840 + 0x2b9f630));
    func_0x01438628(*(undefined4 *)(_UNK_02b9f844 + 0x2b9f63c));
    func_0x01438628(*(undefined4 *)(_UNK_02b9f848 + 0x2b9f648));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xe70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe70,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    fStack_2c = fStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&iStack_38,param_1,0);
    func_0x01523a1c(&iStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&iStack_38,uVar4,0,0);
    return;
  }
  piVar10 = *(int **)(_UNK_02b9f84c + 0x2b9f6a8);
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b2f170(iVar1,0);
  if (iVar1 != 3) {
    iVar1 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b2f170(iVar1,0);
    if (iVar1 != 6) {
      return;
    }
  }
  iVar1 = **(int **)(**(int **)(_UNK_02b9f850 + 0x2b9f708) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iStack_20 = 0;
  func_0x02b6127c(iVar1,3,**(undefined4 **)(_UNK_02b9f854 + 0x2b9f730),0);
  func_0x02b9f858(param_1);
  func_0x02b9fc94(param_1);
  func_0x02b9fef4(param_1);
  func_0x02ba16e0(param_1);
  func_0x02ba1d20(param_1);
  func_0x02ba1f3c(param_1);
  func_0x02ba257c(param_1);
  func_0x02ba2b08(param_1);
  func_0x02ba3044(param_1);
  func_0x02ba3b0c(param_1);
  if (param_2 == 0) {
    func_0x02ba4698(param_1);
  }
  func_0x02ba46f8(param_1);
  func_0x02ba49d4(param_1);
  func_0x02ba4bfc(param_1);
  func_0x02ba4f00(param_1);
  func_0x02ba51ac(param_1);
  func_0x02ba599c(param_1);
  func_0x02ba621c(param_1);
  func_0x02ba67a8(param_1);
  func_0x02ba6ca0(param_1);
  func_0x02ba7358(param_1);
  func_0x02ba7770(param_1);
  func_0x02ba7db0(param_1);
  func_0x02ba8364(param_1);
  func_0x02ba879c(param_1);
  func_0x02ba9248(param_1);
  func_0x02ba96c0(param_1);
  func_0x02ba9d64(param_1);
  pcVar9 = (char *)(_UNK_02baa4e8 + 0x2ba9f84);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baa4ec + 0x2ba9f98));
    func_0x01438628(*(undefined4 *)(_UNK_02baa4f0 + 0x2ba9fa4));
    func_0x01438628(*(undefined4 *)(_UNK_02baa4f4 + 0x2ba9fb0));
    func_0x01438628(*(undefined4 *)(_UNK_02baa4f8 + 0x2ba9fbc));
    func_0x01438628(*(undefined4 *)(_UNK_02baa4fc + 0x2ba9fc8));
    func_0x01438628(*(undefined4 *)(_UNK_02baa500 + 0x2ba9fd4));
    func_0x01438628(*(undefined4 *)(_UNK_02baa504 + 0x2ba9fe0));
    func_0x01438628(*(undefined4 *)(_UNK_02baa508 + 0x2ba9fec));
    func_0x01438628(*(undefined4 *)(_UNK_02baa50c + 0x2ba9ff8));
    func_0x01438628(*(undefined4 *)(_UNK_02baa510 + 0x2baa004));
    func_0x01438628(*(undefined4 *)(_UNK_02baa514 + 0x2baa010));
    func_0x01438628(*(undefined4 *)(_UNK_02baa518 + 0x2baa01c));
    func_0x01438628(*(undefined4 *)(_UNK_02baa51c + 0x2baa028));
    func_0x01438628(*(undefined4 *)(_UNK_02baa520 + 0x2baa034));
    func_0x01438628(*(undefined4 *)(_UNK_02baa524 + 0x2baa040));
    func_0x01438628(*(undefined4 *)(_UNK_02baa528 + 0x2baa04c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1037,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_02baa52c + 0x2baa0a8);
    iVar1 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0x2d) != '\0') {
      piVar5 = *(int **)(_UNK_02baa530 + 0x2baa0d4);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar5;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) == '\0') {
        return;
      }
      iVar7 = **(int **)(*piVar10 + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
        iVar1 = *piVar5;
      }
      iVar3 = *(int *)(iVar1 + 0x74);
      *(undefined1 *)(iVar7 + 0x2d) = 0;
      if (iVar3 == 0) {
        func_0x014387a4();
        iVar1 = *piVar5;
      }
      *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4) = 0;
    }
    iVar1 = func_0x01cca620(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x01cca6e4(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = **(int **)(*piVar10 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b63a9c(iVar1,0x1132,0,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_02baa534 + 0x2baa1a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02baa538 + 0x2baa1c0));
        piVar5 = *(int **)(_UNK_02baa53c + 0x2baa1d4);
        iVar7 = *piVar5;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar5;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xd38);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0374c388(iVar1,uVar8,**(undefined4 **)(_UNK_02baa540 + 0x2baa20c));
        if (*(int *)(**(int **)(_UNK_02baa544 + 0x2baa224) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar8,0,0);
        if (iVar1 == 0) {
          iVar1 = **(int **)(*piVar10 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b63a9c(iVar1,0x1133,0,0);
          if (iVar1 == 0) {
            if (*(int *)(**(int **)(_UNK_02baa548 + 0x2baa28c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02baa54c + 0x2baa2a8));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02baa554 + 0x2baa2d4),
                                    **(undefined4 **)(_UNK_02baa550 + 0x2baa2c8));
            iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02baa558 + 0x2baa2ec));
            func_0x024eed9c(iVar7,**(undefined4 **)(_UNK_02baa55c + 0x2baa300));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x024eecb8(iVar1,0);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar7 + 8);
            uVar6 = *(uint *)(iVar7 + 0xc);
            piVar5 = *(int **)(_UNK_02baa560 + 0x2baa350);
            *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
            iVar12 = *piVar5;
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (uVar6 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar7 + 0xc) = uVar6 + 1;
              puVar2 = (undefined4 *)(iVar3 + uVar6 * 4 + 0x10);
              *puVar2 = uVar8;
              func_0x014385cc(puVar2,uVar8);
            }
            else {
              func_0x0152874c(iVar7,uVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
            iVar3 = **(int **)(*piVar10 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            piVar5 = (int *)func_0x024eecb8(iVar1,0);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            piVar11 = (int *)0x0;
            if ((piVar5 != (int *)0x0) &&
               (piVar11 = piVar5, *piVar5 != **(int **)(_UNK_02baa564 + 0x2baa3e8))) {
              piVar11 = (int *)0x0;
            }
            uStack_3c = 1;
            uStack_34 = 0;
            uStack_40 = 0;
            iStack_38 = iVar7;
            func_0x02b647b4(iVar3,0x1133,piVar11,0);
            iVar7 = **(int **)(*piVar10 + 0x5c);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            uStack_40 = 0;
            func_0x02b6127c(iVar7,0x1133,0,0);
            iVar7 = **(int **)(**(int **)(_UNK_02baa568 + 0x2baa458) + 0x5c);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x02d06f88(iVar7,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x024eecb8(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f0474(&fStack_2c,iVar1,0);
            uStack_40 = 0;
            func_0x0157e8ec(uVar8,_UNK_02baa4e4 - fStack_2c,0,0);
          }
        }
      }
    }
    return;
  }
  iVar1 = func_0x029540a4(0x1037,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  fStack_2c = fStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  iStack_20 = iStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  iStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar4);
  return;
}

