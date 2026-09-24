
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bdbea0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  pcVar4 = (char *)(_UNK_02bdc55c + 0x2bdbec0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdc560 + 0x2bdbed4));
    func_0x01438628(*(undefined4 *)(_UNK_02bdc564 + 0x2bdbee0));
    func_0x01438628(*(undefined4 *)(_UNK_02bdc568 + 0x2bdbeec));
    func_0x01438628(*(undefined4 *)(_UNK_02bdc56c + 0x2bdbef8));
    func_0x01438628(*(undefined4 *)(_UNK_02bdc570 + 0x2bdbf04));
    func_0x01438628(*(undefined4 *)(_UNK_02bdc574 + 0x2bdbf10));
    func_0x01438628(*(undefined4 *)(_UNK_02bdc578 + 0x2bdbf1c));
    *pcVar4 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x02953fd4(0x5cfc,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bdc57c + 0x2bdbf84));
    func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02bdc580 + 0x2bdbf98));
    puVar8 = *(undefined4 **)(_UNK_02bdc584 + 0x2bdbfac);
    while( true ) {
      iVar2 = FUN_02bad050(param_1,param_3);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar2 + 0xc);
      iVar2 = FUN_02bad050(param_1,param_3);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar5 <= iVar7) break;
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b780b0(iVar2,iVar7,*puVar8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar2 + 8)) {
        iVar2 = FUN_02bad050(param_1,param_3);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar7,*puVar8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) == 1) {
          if (*(int *)(**(int **)(_UNK_02bdc588 + 0x2bdc0a0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bdc58c + 0x2bdc0bc));
          iVar5 = FUN_02bad050(param_1,param_3);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b780b0(iVar5,iVar7,*puVar8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar6 = *(undefined4 *)(iVar5 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x029a6fa8(iVar2,uVar6,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0x30) == param_2) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar1 + 8);
            uVar11 = *(uint *)(iVar1 + 0xc);
            piVar3 = *(int **)(_UNK_02bdc590 + 0x2bdc178);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar9 = *piVar3;
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (uVar11 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar11 + 1;
              piVar3 = (int *)(iVar5 + uVar11 * 4 + 0x10);
              *piVar3 = iVar2;
              func_0x014385cc(piVar3,iVar2);
            }
            else {
              func_0x0152874c(iVar1,iVar2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
            }
            puVar8 = *(undefined4 **)(_UNK_02bdc594 + 0x2bdc1d4);
          }
        }
      }
      iVar7 = iVar7 + 1;
    }
    iVar7 = *(int *)(iVar2 + 0x1c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    while( true ) {
      iVar7 = iVar7 + -1;
      iVar2 = FUN_02bad050(param_1,param_3);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar7 < 0) break;
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b780b0(iVar2,iVar7,*puVar8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar2 + 8)) {
        if (*(int *)(**(int **)(_UNK_02bdc598 + 0x2bdc25c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bdc59c + 0x2bdc278));
        iVar5 = FUN_02bad050(param_1,param_3);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x1c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b780b0(iVar5,iVar7,*puVar8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar5 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x029a6fa8(iVar2,uVar6,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0x30) == param_2) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar1 + 8);
          uVar11 = *(uint *)(iVar1 + 0xc);
          piVar3 = *(int **)(_UNK_02bdc5a0 + 0x2bdc334);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar9 = *piVar3;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar11 + 1;
            piVar3 = (int *)(iVar5 + uVar11 * 4 + 0x10);
            *piVar3 = iVar2;
            func_0x014385cc(piVar3,iVar2);
          }
          else {
            func_0x0152874c(iVar1,iVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
          puVar8 = *(undefined4 **)(_UNK_02bdc5a4 + 0x2bdc390);
        }
      }
    }
    iVar7 = *(int *)(iVar2 + 0x14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(int *)(iVar7 + 0xc) - 1;
    if (-1 < (int)uVar11) {
      do {
        iVar7 = FUN_02bad050(param_1,param_3);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x14);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x03b780b0(iVar7,uVar11,*puVar8);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar7 + 8)) {
          if (*(int *)(**(int **)(_UNK_02bdc5a8 + 0x2bdc414) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bdc5ac + 0x2bdc430));
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x14);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,uVar11,*puVar8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = *(undefined4 *)(iVar2 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x029a6fa8(iVar7,uVar6,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar7 + 0x30) == param_2) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar1 + 8);
            uVar10 = *(uint *)(iVar1 + 0xc);
            piVar3 = *(int **)(_UNK_02bdc5b0 + 0x2bdc4ec);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar5 = *piVar3;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (uVar10 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar10 + 1;
              piVar3 = (int *)(iVar2 + uVar10 * 4 + 0x10);
              *piVar3 = iVar7;
              func_0x014385cc(piVar3,iVar7);
            }
            else {
              func_0x0152874c(iVar1,iVar7,
                              *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
            }
            puVar8 = *(undefined4 **)(_UNK_02bdc5b4 + 0x2bdc548);
          }
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cfc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028fa530(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

