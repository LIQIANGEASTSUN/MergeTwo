
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b60304(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01b60724 + 0x1b6031c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b60728 + 0x1b60330));
    func_0x01438628(*(undefined4 *)(_UNK_01b6072c + 0x1b6033c));
    func_0x01438628(*(undefined4 *)(_UNK_01b60730 + 0x1b60348));
    func_0x01438628(*(undefined4 *)(_UNK_01b60734 + 0x1b60354));
    func_0x01438628(*(undefined4 *)(_UNK_01b60738 + 0x1b60360));
    func_0x01438628(*(undefined4 *)(_UNK_01b6073c + 0x1b6036c));
    func_0x01438628(*(undefined4 *)(_UNK_01b60740 + 0x1b60378));
    func_0x01438628(*(undefined4 *)(_UNK_01b60744 + 0x1b60384));
    func_0x01438628(*(undefined4 *)(_UNK_01b60748 + 0x1b60390));
    func_0x01438628(*(undefined4 *)(_UNK_01b6074c + 0x1b6039c));
    func_0x01438628(*(undefined4 *)(_UNK_01b60750 + 0x1b603a8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa6af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa6af,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar5,0,0);
    uVar9 = func_0x024f56e0(&uStack_30,0,0);
    return uVar9;
  }
  if (*(int *)(**(int **)(_UNK_01b60754 + 0x1b60404) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b60758 + 0x1b60420));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01b6075c + 0x1b60440));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar8 = func_0x024f0584(0,0x3b,**(undefined4 **)(_UNK_01b60760 + 0x1b604a0));
    if (iVar8 == 0) {
      return 0;
    }
    func_0x014388e4();
  }
  else {
    iVar8 = func_0x024f0584(iVar1,0x3b,**(undefined4 **)(_UNK_01b60778 + 0x1b60474));
    if (iVar8 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x024f110c(iVar1,0x3b,**(undefined4 **)(_UNK_01b60764 + 0x1b604c8));
  uVar9 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_01b5b268(param_1);
    iVar8 = 0;
    if (iVar2 != 0) {
      iVar8 = *(int *)(iVar2 + 0x20);
    }
    if (iVar2 != 0 && iVar8 != 0) {
      iVar8 = FUN_01b5b268(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar8 + 0xc)) {
        iVar8 = FUN_01b5b268(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x1c);
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        iVar2 = FUN_01b5ba7c(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x014e5f78(*(undefined4 *)(iVar2 + 0x50),iVar8);
        iVar8 = FUN_01b5b268(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x20);
        uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar8 + 0xc) <= (int)uVar3) {
          iVar8 = FUN_01b5b268(param_1);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar8 + 0x20);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar3 = *(int *)(iVar8 + 0xc) - 1;
        }
        iVar8 = *(int *)(iVar1 + 8);
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        iVar2 = FUN_01b5b268(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x20);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f0530(iVar2,uVar3,**(undefined4 **)(_UNK_01b60768 + 0x1b60630));
        iVar4 = FUN_01b5ba7c(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar4 + 0x50) * iVar8;
        if (iVar6 < iVar2 * iVar8) {
          iVar8 = iVar8 * (iVar2 - *(int *)(iVar4 + 0x50));
          puVar11 = *(undefined4 **)(_UNK_01b6076c + 0x1b60680);
          puVar10 = *(undefined4 **)(_UNK_01b60770 + 0x1b60688);
          do {
            iVar2 = *(int *)(iVar1 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0xc) <= iVar6) break;
            if (*(int *)(**(int **)(_UNK_01b60774 + 0x1b606ac) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(*puVar11);
            iVar4 = *(int *)(iVar1 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x014e9698(iVar4,iVar6,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02bd10d0(iVar2,uVar9,0);
            if (iVar2 == 0) {
              return 0;
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar9 = 1;
      }
    }
  }
  return uVar9;
}

