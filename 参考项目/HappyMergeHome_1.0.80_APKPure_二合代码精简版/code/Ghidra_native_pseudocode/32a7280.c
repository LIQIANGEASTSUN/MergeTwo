
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b7280(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_032b7814 + 0x32b7298);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b7818 + 0x32b72ac));
    func_0x01438628(*(undefined4 *)(_UNK_032b781c + 0x32b72b8));
    func_0x01438628(*(undefined4 *)(_UNK_032b7820 + 0x32b72c4));
    func_0x01438628(*(undefined4 *)(_UNK_032b7824 + 0x32b72d0));
    func_0x01438628(*(undefined4 *)(_UNK_032b7828 + 0x32b72dc));
    func_0x01438628(*(undefined4 *)(_UNK_032b782c + 0x32b72e8));
    func_0x01438628(*(undefined4 *)(_UNK_032b7830 + 0x32b72f4));
    func_0x01438628(*(undefined4 *)(_UNK_032b7834 + 0x32b7300));
    func_0x01438628(*(undefined4 *)(_UNK_032b7838 + 0x32b730c));
    func_0x01438628(*(undefined4 *)(_UNK_032b783c + 0x32b7318));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_032b7840 + 0x32b7330);
  iStack_28 = 0;
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar2 = FUN_032a7050(0);
  if (*(int *)(**(int **)(_UNK_032b7844 + 0x32b735c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024eec50(uVar2,0,0);
  if (iVar3 == 0) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = FUN_032a7050(0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x032b7874(iVar3);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_032a7920(iVar3,iVar9 * 6 + 6,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar3 + 0xc);
    if (*(int *)(**(int **)(_UNK_032b7848 + 0x32b741c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x051608f4(0,iVar9 + -1,0);
    if (5 < iVar9) {
      puVar10 = *(undefined4 **)(_UNK_032b784c + 0x32b7464);
      do {
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x04cfd760(iVar3,iVar9,*puVar10);
        if (iVar4 != 0) {
          if (*(int *)(**(int **)(_UNK_032b7850 + 0x32b7490) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032b7854 + 0x32b74ac));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x04cfd760(iVar3,iVar9,*puVar10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar5 + 0x24);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x04cfd760(iVar3,iVar9,*puVar10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar5 + 0x24);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,uVar2,0xffffffff,10,0,0x15,uVar7,1,0xffffffff,0,0);
        }
        bVar1 = 6 < iVar9;
        iVar9 = iVar9 + -1;
      } while (bVar1);
    }
    iVar9 = 5;
    puVar10 = *(undefined4 **)(_UNK_032b7858 + 0x32b757c);
    do {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x04cfd760(iVar3,iVar9,*puVar10);
      if (iVar4 != 0) {
        if (*(int *)(**(int **)(_UNK_032b785c + 0x32b75a8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032b7860 + 0x32b75c4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x04cfd760(iVar3,iVar9,*puVar10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar5 + 0x24);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x04cfd760(iVar3,iVar9,*puVar10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar5 + 0x24);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02bd2cf0(iVar4,uVar2,0xffffffff,1,0,0x15,uVar7,1,0xffffffff,0,0);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != -1);
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_032a7be8(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x026eee4c(iVar3,*(int *)(param_1 + 0xc) + *(int *)(iVar3 + 0x80),0);
    if (*(int *)(**(int **)(_UNK_032b7864 + 0x32b76d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x0202346c(0);
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = FUN_032a7be8(iVar9,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iStack_28 = *(int *)(iVar9 + 0x80) * 100 + 800;
    uVar2 = func_0x0515c4b0(&iStack_28,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar3,0x26c,uVar2,0,0,0,0);
    if (*(int *)(**(int **)(_UNK_032b7868 + 0x32b778c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = FUN_032a7050(0);
    if (iVar3 != 0) {
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar9 == 0) {
        iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_032b786c + 0x32b77cc));
        func_0x05096384(iVar9,param_1,**(undefined4 **)(_UNK_032b7870 + 0x32b77e8),0);
        *(int *)(param_1 + 0x10) = iVar9;
        func_0x014385cc((int *)(param_1 + 0x10),iVar9);
      }
      func_0x032b78c8(iVar3,iVar9);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined1 *)(iVar3 + 0x4a) = 0;
  }
  return;
}

