
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031eb728(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fStack_30;
  float fStack_2c;
  
  pcVar8 = (char *)(_UNK_031ebf04 + 0x31eb748);
  if (*pcVar8 == '\0') {
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
    *pcVar8 = '\x01';
  }
  uVar9 = 0;
  iVar1 = func_0x02953fd4(0x1af2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_031e6814(param_1);
    if (iVar1 != 0) {
      piVar6 = *(int **)(_UNK_031ebf3c + 0x31eb864);
      iVar1 = **(int **)(*piVar6 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar9 = 0;
        iVar1 = func_0x02b63a9c(iVar1,param_2,0,0);
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
              iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031ebf74 + 0x31ebc54));
              func_0x04cfd1b4(iVar2,**(undefined4 **)(_UNK_031ebf78 + 0x31ebc68));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x024ef308(iVar1,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar10 = *(int *)(iVar2 + 8);
              uVar7 = *(uint *)(iVar2 + 0xc);
              piVar6 = *(int **)(_UNK_031ebf7c + 0x31ebcb8);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
              iVar12 = *piVar6;
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              if (uVar7 < *(uint *)(iVar10 + 0xc)) {
                *(uint *)(iVar2 + 0xc) = uVar7 + 1;
                puVar3 = (undefined4 *)(iVar10 + uVar7 * 4 + 0x10);
                *puVar3 = uVar9;
                func_0x014385cc(puVar3,uVar9);
              }
              else {
                func_0x04cfda38(iVar2,uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
              }
              piVar6 = *(int **)(_UNK_031ebf80 + 0x31ebd14);
              iVar10 = **(int **)(*piVar6 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              piVar4 = (int *)func_0x024ef308(iVar1,0);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              piVar11 = (int *)0x0;
              if ((piVar4 != (int *)0x0) &&
                 (piVar11 = piVar4, *piVar4 != **(int **)(_UNK_031ebf84 + 0x31ebd58))) {
                piVar11 = (int *)0x0;
              }
              func_0x02b647b4(iVar10,param_3,piVar11,0,0,1,iVar2,0);
              iVar2 = **(int **)(*piVar6 + 0x5c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x02b6127c(iVar2,param_2,0,0,0);
              if (iVar2 == 0) {
                return 0;
              }
              piVar6 = *(int **)(_UNK_031ebf88 + 0x31ebdd4);
              piVar4 = *(int **)(_UNK_031ebf8c + 0x31ebde0);
              uVar9 = **(undefined4 **)(*piVar6 + 0x5c);
              if (*(int *)(*piVar4 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x024ef144(uVar9,0,0);
              if (iVar2 == 0) {
                return 1;
              }
              iVar2 = **(int **)(*piVar6 + 0x5c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x02d06f88(iVar2,0);
              if (*(int *)(*piVar4 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x024ef144(uVar9,0,0);
              if (iVar2 == 0) {
                return 1;
              }
              iVar2 = **(int **)(*piVar6 + 0x5c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x02d06f88(iVar2,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024ef308(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f0474(&fStack_30,iVar1,0);
              func_0x0157e8ec(uVar9,_UNK_031ebefc - fStack_30,0,0,0);
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
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031ebf50 + 0x31eb98c));
          func_0x04cfd1b4(iVar2,**(undefined4 **)(_UNK_031ebf54 + 0x31eb9a0));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x024ef308(iVar1,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar2 + 8);
          uVar7 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_031ebf58 + 0x31eb9f0);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar12 = *piVar6;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar7 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar7 + 1;
            puVar3 = (undefined4 *)(iVar10 + uVar7 * 4 + 0x10);
            *puVar3 = uVar9;
            func_0x014385cc(puVar3,uVar9);
          }
          else {
            func_0x04cfda38(iVar2,uVar9,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
          piVar6 = *(int **)(_UNK_031ebf5c + 0x31eba4c);
          iVar10 = **(int **)(*piVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar4 = (int *)func_0x024ef308(iVar1,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          piVar11 = (int *)0x0;
          if ((piVar4 != (int *)0x0) &&
             (piVar11 = piVar4, *piVar4 != **(int **)(_UNK_031ebf60 + 0x31eba90))) {
            piVar11 = (int *)0x0;
          }
          uVar9 = 0;
          func_0x02b647b4(iVar10,param_3,piVar11,0,0,1,iVar2,0);
          iVar2 = **(int **)(*piVar6 + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02b6127c(iVar2,param_2,0,0,0);
          if (iVar2 != 0) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024ef308(iVar1,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024eff78(iVar2,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_031ebf64 + 0x31ebb50));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar9 = 0;
            iVar1 = func_0x024ef308(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f0474(&fStack_30,iVar1,0);
            func_0x0157ead0(uVar5,_UNK_031ebf00 - fStack_2c,0,0,0);
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
    uVar9 = func_0x028b04e8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar9;
}

