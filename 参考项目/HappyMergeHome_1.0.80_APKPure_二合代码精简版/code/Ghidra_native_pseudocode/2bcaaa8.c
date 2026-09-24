
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdaaa8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  pcVar8 = (char *)(_UNK_02bdb660 + 0x2bdaacc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdb664 + 0x2bdaae0));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb668 + 0x2bdaaec));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb66c + 0x2bdaaf8));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb670 + 0x2bdab04));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb674 + 0x2bdab10));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb678 + 0x2bdab1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb67c + 0x2bdab28));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb680 + 0x2bdab34));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb684 + 0x2bdab40));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb688 + 0x2bdab4c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb68c + 0x2bdab58));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb690 + 0x2bdab64));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb694 + 0x2bdab70));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb698 + 0x2bdab7c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb69c + 0x2bdab88));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb6a0 + 0x2bdab94));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb6a4 + 0x2bdaba0));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb6a8 + 0x2bdabac));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb6ac + 0x2bdabb8));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb6b0 + 0x2bdabc4));
    func_0x01438628(*(undefined4 *)(_UNK_02bdb6b4 + 0x2bdabd0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cf3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bdb6b8 + 0x2bdac38));
    func_0x02c38878(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_1;
    func_0x014385cc((undefined4 *)(iVar1 + 8),param_1);
    *(undefined4 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_4);
    piVar9 = *(int **)(_UNK_02bdb6c0 + 0x2bdac90);
    uVar5 = **(undefined4 **)(**(int **)(_UNK_02bdb6bc + 0x2bdac84) + 0x5c);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024ef144(uVar5,0,0);
    if (iVar2 != 0) {
      iVar2 = **(int **)(**(int **)(_UNK_02bdb6c4 + 0x2bdaccc) + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02c3d868(iVar2,0);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x024ef144(uVar5,0,0);
      if (iVar2 != 0) {
        iVar2 = **(int **)(**(int **)(_UNK_02bdb6c8 + 0x2bdad28) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x02bfc72c(iVar2,0);
      }
    }
    if (*(int *)(**(int **)(_UNK_02bdb6cc + 0x2bdad70) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bdb6d0 + 0x2bdad8c));
    piVar9 = *(int **)(_UNK_02bdb6d4 + 0x2bdada0);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar9;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x160);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02b0fc08(iVar2,uVar5,0);
    if (iVar2 != 0) {
      func_0x02b212e4(iVar2,1,0,0);
    }
    iVar2 = 0;
    puVar13 = *(undefined4 **)(_UNK_02bdb6d8 + 0x2bdae00);
    puVar12 = *(undefined4 **)(_UNK_02bdb6dc + 0x2bdae08);
    while( true ) {
      iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar2) break;
      iVar3 = func_0x014388d4(*puVar13);
      func_0x02c38880(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      piVar9 = (int *)(iVar3 + 0x14);
      *piVar9 = iVar1;
      func_0x014385cc(piVar9,iVar1);
      iVar10 = *piVar9;
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = FUN_02bad050(param_1,*(undefined4 *)(iVar10 + 0xc));
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar10 + 0x10);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = func_0x03b780b0(iVar10,iVar2,*puVar12);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar10 + 8)) {
        if (*(int *)(**(int **)(_UNK_02bdb6e0 + 0x2bdaee4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_02bdb6e4 + 0x2bdaf00));
        iVar6 = *piVar9;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = FUN_02bad050(param_1,*(undefined4 *)(iVar6 + 0xc));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x03b780b0(iVar6,iVar2,*puVar12);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar5 = *(undefined4 *)(iVar6 + 8);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x029a6fa8(iVar10,uVar5,0);
        piVar9 = (int *)(iVar3 + 8);
        *piVar9 = iVar10;
        func_0x014385cc(piVar9);
        iVar10 = *piVar9;
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar10 + 0x30) == param_2) {
          piVar9 = *(int **)(_UNK_02bdb6e8 + 0x2bdafc4);
          *(int *)(iVar3 + 0x10) = iVar2;
          iVar10 = **(int **)(*piVar9 + 0x5c);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x02c3d868(iVar10,0);
          uVar5 = *(undefined4 *)(iVar3 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x02beba7c(iVar10,uVar5,0);
          piVar9 = (int *)(iVar3 + 0xc);
          *piVar9 = iVar10;
          func_0x014385cc(piVar9,iVar10);
          iVar10 = func_0x02b1cc10(0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x02b1ec60(iVar10,0,0);
          iVar10 = *piVar9;
          iVar6 = **(int **)(**(int **)(_UNK_02bdb6ec + 0x2bdb058) + 0x5c);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0xc);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar5 = func_0x02c19590(iVar10,0);
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02bdb6f0 + 0x2bdb09c));
          func_0x0152e3ec(uVar4,iVar3,**(undefined4 **)(_UNK_02bdb6f4 + 0x2bdb0b8),0);
          if (*(int *)(**(int **)(_UNK_02bdb6f8 + 0x2bdb0cc) + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar5 = func_0x02aee9b4(uVar5,**(undefined4 **)(_UNK_02bdb6fc + 0x2bdb0f0),0,uVar4,1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02e76744(iVar6,uVar5,0);
          puVar12 = *(undefined4 **)(_UNK_02bdb700 + 0x2bdb138);
        }
      }
      iVar2 = iVar2 + 1;
    }
    iVar2 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    piVar9 = *(int **)(_UNK_02bdb704 + 0x2bdb17c);
    while( true ) {
      iVar2 = iVar2 + -1;
      iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (iVar2 < 0) break;
      iVar3 = *(int *)(iVar3 + 0x1c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar12);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 8)) {
        if (*(int *)(**(int **)(_UNK_02bdb708 + 0x2bdb1e4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bdb70c + 0x2bdb200));
        iVar10 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = *(int *)(iVar10 + 0x1c);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x03b780b0(iVar10,iVar2,*puVar12);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar5 = *(undefined4 *)(iVar10 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x029a6fa8(iVar3,uVar5,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0x30) == param_2) {
          iVar6 = *(int *)(iVar3 + 0x114);
          iVar10 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x1c);
          if (iVar6 < 1) {
            iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x1c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x03b780b0(iVar3,iVar2,*puVar12);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            func_0x03b77900(iVar10,uVar5,**(undefined4 **)(_UNK_02bdb710 + 0x2bdb360));
          }
          else {
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x03b780b0(iVar10,iVar2,*puVar12);
            uVar5 = *(undefined4 *)(iVar3 + 0x114);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_026f6b3c(iVar10,uVar5,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_02bdb714 + 0x2bdb374) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bdb718 + 0x2bdb390));
        iVar10 = *piVar9;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar9;
        }
        iVar11 = **(int **)(_UNK_02bdb71c + 0x2bdb3bc);
        iVar6 = *(int *)(iVar11 + 0x1c);
        uVar5 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x10);
        if (iVar6 == 0) {
          func_0x014909d8(iVar11);
          iVar6 = *(int *)(iVar11 + 0x1c);
        }
        iVar10 = *(int *)(iVar6 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02990414(iVar3,uVar5,uVar4,0);
      }
    }
    iVar2 = *(int *)(iVar3 + 0x14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(int *)(iVar2 + 0xc) - 1;
    if (-1 < (int)uVar7) {
      do {
        iVar2 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,uVar7,*puVar12);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar2 + 8)) {
          if (*(int *)(**(int **)(_UNK_02bdb720 + 0x2bdb4c8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bdb724 + 0x2bdb4e4));
          iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03b780b0(iVar3,uVar7,*puVar12);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar3 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x029a6fa8(iVar2,uVar5,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0x30) == param_2) {
            iVar10 = *(int *)(iVar2 + 0x114);
            iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar10 < 1) {
              iVar2 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x14);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar5 = func_0x03b780b0(iVar2,uVar7,*puVar12);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x03b77900(iVar3,uVar5,**(undefined4 **)(_UNK_02bdb728 + 0x2bdb644));
            }
            else {
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b780b0(iVar3,uVar7,*puVar12);
              uVar5 = *(undefined4 *)(iVar2 + 0x114);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              FUN_026f6b3c(iVar3,uVar5,0);
            }
          }
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cf3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fa43c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

