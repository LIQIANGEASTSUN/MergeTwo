
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171e80c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  pcVar4 = (char *)(_UNK_0171ecb8 + 0x171e828);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0171ecbc + 0x171e83c));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecc0 + 0x171e848));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecc4 + 0x171e854));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecc8 + 0x171e860));
    func_0x01438628(*(undefined4 *)(_UNK_0171eccc + 0x171e86c));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecd0 + 0x171e878));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecd4 + 0x171e884));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecd8 + 0x171e890));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecdc + 0x171e89c));
    func_0x01438628(*(undefined4 *)(_UNK_0171ece0 + 0x171e8a8));
    func_0x01438628(*(undefined4 *)(_UNK_0171ece4 + 0x171e8b4));
    func_0x01438628(*(undefined4 *)(_UNK_0171ece8 + 0x171e8c0));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecec + 0x171e8cc));
    func_0x01438628(*(undefined4 *)(_UNK_0171ecf0 + 0x171e8d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8b5a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
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
  if (*(int *)(**(int **)(_UNK_0171ecf4 + 0x171e938) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0171ecf8 + 0x171e954));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0171ecfc + 0x171e974));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f110c(iVar1,0x54,**(undefined4 **)(_UNK_0171ed00 + 0x171e9ac));
  if (iVar1 != 0) {
    iVar7 = FUN_01714754(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x70);
    if (iVar7 < param_2) {
      iVar2 = *(int *)(iVar1 + 8);
      iVar9 = iVar2 * iVar7;
      iStack_2c = param_2;
      if (iVar9 < iVar2 * param_2) {
        iVar2 = iVar2 * (param_2 - iVar7);
        puVar10 = *(undefined4 **)(_UNK_0171ed04 + 0x171ea18);
        do {
          iVar7 = *(int *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x014e9698(iVar7,iVar9,*puVar10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar7 + 8)) {
            iVar7 = FUN_01714754(param_1);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar1 + 0x10);
            iVar7 = *(int *)(iVar7 + 0x18);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x014e9698(iVar6,iVar9,*puVar10);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar6 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar7,uVar8,**(undefined4 **)(_UNK_0171ed08 + 0x171eabc));
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
          if (*(int *)(**(int **)(_UNK_0171ed0c + 0x171eadc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0171ed10 + 0x171eaf8));
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x54;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar9;
          func_0x02bd2cf0(iVar7,iVar9,0xffffffff,10);
          iVar2 = iVar2 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar2 != 0);
      }
      iVar1 = FUN_01714754(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar7 = iStack_2c;
      func_0x026efd30(iVar1,iStack_2c,0);
      if (*(int *)(**(int **)(_UNK_0171ed14 + 0x171eb88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0171ed18 + 0x171eba4));
      piVar5 = *(int **)(_UNK_0171ed1c + 0x171ebb8);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x330);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0171ed20 + 0x171ebdc),1);
      iStack_28 = iVar7;
      iVar7 = func_0x014387ac(**(undefined4 **)(_UNK_0171ed24 + 0x171ebfc),&iStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar7 != 0) &&
         (iVar2 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01438904();
        func_0x01438790(uVar3,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar7;
      func_0x014385cc(piVar5 + 4,iVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar8,piVar5,0);
      if (*(int *)(**(int **)(_UNK_0171ed28 + 0x171ec8c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0171335c();
      if (iVar1 != 0) {
        func_0x0173bafc(iVar1,0);
      }
    }
  }
  return;
}

