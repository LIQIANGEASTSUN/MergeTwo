
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031eb6c8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x1af1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1af1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    fStack_30 = 0.0;
    uStack_20 = 0;
    func_0x024f56c0(&fStack_48,0,0);
    fStack_30 = fStack_48;
    fStack_2c = (float)uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = iStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&fStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&fStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar8,&fStack_30,uVar4,0,0);
    uVar8 = func_0x024f56e0(&fStack_30,0,0);
    return uVar8;
  }
  pcVar9 = (char *)(_UNK_031ebf04 + 0x31eb748);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031ebf08 + 0x31eb75c));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf0c + 0x31eb768));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf10 + 0x31eb774));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf14 + 0x31eb780));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf18 + 0x31eb78c));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf1c + 0x31eb798));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf20 + 0x31eb7a4));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf24 + 0x31eb7b0));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf28 + 0x31eb7bc));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf2c + 0x31eb7c8));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf30 + 0x31eb7d4));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf34 + 0x31eb7e0));
    func_0x01438628(*(undefined4 *)(_UNK_031ebf38 + 0x31eb7ec));
    *pcVar9 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x02953fd4(0x1af2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_031e6814(param_1);
    if (iVar1 != 0) {
      piVar6 = *(int **)(_UNK_031ebf3c + 0x31eb864);
      iVar1 = **(int **)(*piVar6 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = 0;
        iVar1 = func_0x02b63a9c(iVar1,0xdac,0,0);
        if (iVar1 == 0) {
          piVar6 = *(int **)(_UNK_031ebf40 + 0x31eb8d4);
          iVar1 = **(int **)(*piVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b2f170(iVar1,0);
          if (iVar1 != 5) {
            iVar1 = **(int **)(*piVar6 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02b2f170(iVar1,0);
            if (iVar1 != 4) {
              iVar1 = **(int **)(*piVar6 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02b2f170(iVar1,0);
              if (iVar1 != 3) {
                return 0;
              }
              if (*(int *)(**(int **)(_UNK_031ebf68 + 0x31ebbfc) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031ebf6c + 0x31ebc18));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_031ebf70 + 0x31ebc3c),0);
              iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031ebf74 + 0x31ebc54));
              func_0x04cfd1b4(iVar5,**(undefined4 **)(_UNK_031ebf78 + 0x31ebc68));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x024ef308(iVar1,0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar10 = *(int *)(iVar5 + 8);
              uVar7 = *(uint *)(iVar5 + 0xc);
              piVar6 = *(int **)(_UNK_031ebf7c + 0x31ebcb8);
              *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
              iVar12 = *piVar6;
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              if (uVar7 < *(uint *)(iVar10 + 0xc)) {
                *(uint *)(iVar5 + 0xc) = uVar7 + 1;
                puVar2 = (undefined4 *)(iVar10 + uVar7 * 4 + 0x10);
                *puVar2 = uVar8;
                func_0x014385cc(puVar2,uVar8);
              }
              else {
                func_0x04cfda38(iVar5,uVar8,
                                *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
              }
              piVar6 = *(int **)(_UNK_031ebf80 + 0x31ebd14);
              iVar10 = **(int **)(*piVar6 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              piVar3 = (int *)func_0x024ef308(iVar1,0);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              piVar11 = (int *)0x0;
              if ((piVar3 != (int *)0x0) &&
                 (piVar11 = piVar3, *piVar3 != **(int **)(_UNK_031ebf84 + 0x31ebd58))) {
                piVar11 = (int *)0x0;
              }
              uStack_3c = 1;
              uStack_40 = 0;
              uStack_34 = 0;
              iStack_38 = iVar5;
              func_0x02b647b4(iVar10,0xdac,piVar11,0);
              iVar5 = **(int **)(*piVar6 + 0x5c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uStack_40 = 0;
              iVar5 = func_0x02b6127c(iVar5,0xdac,0,0);
              if (iVar5 == 0) {
                return 0;
              }
              piVar6 = *(int **)(_UNK_031ebf88 + 0x31ebdd4);
              piVar3 = *(int **)(_UNK_031ebf8c + 0x31ebde0);
              uVar8 = **(undefined4 **)(*piVar6 + 0x5c);
              if (*(int *)(*piVar3 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024ef144(uVar8,0,0);
              if (iVar5 == 0) {
                return 1;
              }
              iVar5 = **(int **)(*piVar6 + 0x5c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02d06f88(iVar5,0);
              if (*(int *)(*piVar3 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024ef144(uVar8,0,0);
              if (iVar5 == 0) {
                return 1;
              }
              iVar5 = **(int **)(*piVar6 + 0x5c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02d06f88(iVar5,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024ef308(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f0474(&fStack_30,iVar1,0);
              uStack_40 = 0;
              func_0x0157e8ec(uVar8,_UNK_031ebefc - fStack_30,0,0);
              return 1;
            }
          }
          if (*(int *)(**(int **)(_UNK_031ebf44 + 0x31eb934) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031ebf48 + 0x31eb950));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_031ebf4c + 0x31eb974),0);
          iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031ebf50 + 0x31eb98c));
          func_0x04cfd1b4(iVar5,**(undefined4 **)(_UNK_031ebf54 + 0x31eb9a0));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x024ef308(iVar1,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar5 + 8);
          uVar7 = *(uint *)(iVar5 + 0xc);
          piVar6 = *(int **)(_UNK_031ebf58 + 0x31eb9f0);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar12 = *piVar6;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar7 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar7 + 1;
            puVar2 = (undefined4 *)(iVar10 + uVar7 * 4 + 0x10);
            *puVar2 = uVar8;
            func_0x014385cc(puVar2,uVar8);
          }
          else {
            func_0x04cfda38(iVar5,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
          piVar6 = *(int **)(_UNK_031ebf5c + 0x31eba4c);
          iVar10 = **(int **)(*piVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar3 = (int *)func_0x024ef308(iVar1,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          piVar11 = (int *)0x0;
          if ((piVar3 != (int *)0x0) &&
             (piVar11 = piVar3, *piVar3 != **(int **)(_UNK_031ebf60 + 0x31eba90))) {
            piVar11 = (int *)0x0;
          }
          uVar8 = 0;
          uStack_3c = 1;
          uStack_40 = 0;
          uStack_34 = 0;
          iStack_38 = iVar5;
          func_0x02b647b4(iVar10,0xdac,piVar11,0);
          iVar5 = **(int **)(*piVar6 + 0x5c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uStack_40 = 0;
          iVar5 = func_0x02b6127c(iVar5,0xdac,0,0);
          if (iVar5 != 0) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024ef308(iVar1,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024eff78(iVar5,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x035e8140(iVar5,**(undefined4 **)(_UNK_031ebf64 + 0x31ebb50));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar8 = 0;
            iVar1 = func_0x024ef308(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f0474(&fStack_30,iVar1,0);
            uStack_40 = 0;
            func_0x0157ead0(uVar4,_UNK_031ebf00 - fStack_2c,0,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x1af2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_40 = 0;
    uVar8 = func_0x028b04e8(iVar1,param_1,0xdac,0xdac);
  }
  return uVar8;
}

