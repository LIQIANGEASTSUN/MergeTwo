
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6077c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01b60c78 + 0x1b60794);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b60c7c + 0x1b607a8));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c80 + 0x1b607b4));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c84 + 0x1b607c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c88 + 0x1b607cc));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c8c + 0x1b607d8));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c90 + 0x1b607e4));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c94 + 0x1b607f0));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c98 + 0x1b607fc));
    func_0x01438628(*(undefined4 *)(_UNK_01b60c9c + 0x1b60808));
    func_0x01438628(*(undefined4 *)(_UNK_01b60ca0 + 0x1b60814));
    func_0x01438628(*(undefined4 *)(_UNK_01b60ca4 + 0x1b60820));
    func_0x01438628(*(undefined4 *)(_UNK_01b60ca8 + 0x1b6082c));
    func_0x01438628(*(undefined4 *)(_UNK_01b60cac + 0x1b60838));
    func_0x01438628(*(undefined4 *)(_UNK_01b60cb0 + 0x1b60844));
    func_0x01438628(*(undefined4 *)(_UNK_01b60cb4 + 0x1b60850));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa6ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa6ab,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = FUN_01b5fc44(param_1);
  if (0 < iVar1) {
    if (*(int *)(**(int **)(_UNK_01b60cb8 + 0x1b608c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01b60cbc + 0x1b608dc));
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x036c7bec(iVar8,**(undefined4 **)(_UNK_01b60cc0 + 0x1b608fc));
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 == 0) {
      func_0x014388e4();
      iVar2 = func_0x024f0584(0,0x3b,**(undefined4 **)(_UNK_01b60cc4 + 0x1b60958));
      if (iVar2 == 0) {
        return;
      }
      func_0x014388e4();
    }
    else {
      iVar2 = func_0x024f0584(iVar8,0x3b,**(undefined4 **)(_UNK_01b60cf4 + 0x1b60930));
      if (iVar2 == 0) {
        return;
      }
    }
    iVar8 = func_0x024f110c(iVar8,0x3b,**(undefined4 **)(_UNK_01b60cc8 + 0x1b6097c));
    iVar2 = FUN_01b5ba7c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x50);
    if (iVar2 < iVar1) {
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar8 + 8);
      iVar10 = iVar3 * iVar2;
      if (iVar10 < iVar3 * iVar1) {
        iVar3 = iVar3 * (iVar1 - iVar2);
        do {
          iVar2 = *(int *)(iVar8 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar10) break;
          iVar2 = *(int *)(iVar8 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x014e9698(iVar2,iVar10,**(undefined4 **)(_UNK_01b60ccc + 0x1b60a14));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 8)) {
            iVar2 = FUN_01b5ba14(param_1);
            iVar6 = *(int *)(iVar8 + 0x10);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x014e9698(iVar6,iVar10,**(undefined4 **)(_UNK_01b60cd0 + 0x1b60a64));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar9 = *(undefined4 *)(iVar6 + 8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar2,uVar9,**(undefined4 **)(_UNK_01b60cd4 + 0x1b60a9c));
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
          }
          if (*(int *)(**(int **)(_UNK_01b60cd8 + 0x1b60abc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b60cdc + 0x1b60ad8));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x3b;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar10;
          func_0x02bd2cf0(iVar2,iVar10,0xffffffff,10);
          iVar3 = iVar3 + -1;
          iVar10 = iVar10 + 1;
        } while (iVar3 != 0);
      }
      iVar8 = FUN_01b5ba7c(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x026c004c(iVar8,iVar1,0);
      if (*(int *)(**(int **)(_UNK_01b60ce0 + 0x1b60b64) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01b60ce4 + 0x1b60b80));
      piVar7 = *(int **)(_UNK_01b60ce8 + 0x1b60b94);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x36c);
      piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01b60cec + 0x1b60bb8),1);
      iStack_28 = iVar1;
      iVar1 = func_0x014387ac(**(undefined4 **)(_UNK_01b60cf0 + 0x1b60bd8),&iStack_28);
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar7[3] == 0) {
        func_0x014388e8();
      }
      piVar7[4] = iVar1;
      func_0x014385cc(piVar7 + 4,iVar1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar8,uVar9,piVar7,0);
      iVar1 = FUN_01b5b6f8();
      if (iVar1 != 0) {
        func_0x01b749f0(iVar1,0);
      }
    }
  }
  return;
}

