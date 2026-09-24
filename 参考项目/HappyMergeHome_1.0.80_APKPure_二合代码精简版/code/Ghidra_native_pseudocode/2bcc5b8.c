
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdc5b8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  pcVar3 = (char *)(_UNK_02bdcd7c + 0x2bdc5d8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd80 + 0x2bdc5f0));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd84 + 0x2bdc5fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd88 + 0x2bdc608));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd8c + 0x2bdc614));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd90 + 0x2bdc620));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd94 + 0x2bdc62c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd98 + 0x2bdc638));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcd9c + 0x2bdc644));
    func_0x01438628(*(undefined4 *)(_UNK_02bdcda0 + 0x2bdc650));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2185,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_02bdcda4 + 0x2bdc6bc);
    piVar12 = *(int **)(_UNK_02bdcda8 + 0x2bdc6c8);
    uVar6 = **(undefined4 **)(*piVar10 + 0x5c);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = 0;
    iVar1 = func_0x024ef144(uVar6,0,0);
    if (iVar1 != 0) {
      iVar1 = **(int **)(*piVar10 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02c3d868(iVar1,0);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar6,0,0);
      if (iVar1 != 0) {
        iVar1 = **(int **)(*piVar10 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02bfc72c(iVar1,0);
      }
    }
    puVar11 = *(undefined4 **)(_UNK_02bdcdac + 0x2bdc79c);
    while( true ) {
      iVar1 = FUN_02bad050(param_1,param_4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar1 + 0xc);
      iVar1 = FUN_02bad050(param_1,param_4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar9 <= iVar4) break;
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,iVar4,*puVar11);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar1 + 8)) {
        iVar1 = FUN_02bad050(param_1,param_4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,iVar4,*puVar11);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 8) == param_2) {
          iVar1 = FUN_02bad050(param_1,param_4);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,iVar4,*puVar11);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024eef64(*(undefined4 *)(iVar1 + 0x88),param_3,0);
          if (iVar1 == 0) {
            func_0x02bdcdc8(param_1,iVar4,param_4,1);
          }
        }
      }
      iVar4 = iVar4 + 1;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    while( true ) {
      iVar1 = iVar1 + -1;
      iVar4 = FUN_02bad050(param_1,param_4);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (iVar1 < 0) break;
      iVar4 = *(int *)(iVar4 + 0x1c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar11);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar4 + 8)) {
        iVar4 = FUN_02bad050(param_1,param_4);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x1c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar11);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar4 + 8) == param_2) {
          iVar4 = FUN_02bad050(param_1,param_4);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0x1c);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar11);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x024eef64(*(undefined4 *)(iVar4 + 0x88),param_3,0);
          if (iVar4 == 0) {
            iVar4 = FUN_02bad050(param_1,param_4);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar9 = *(int *)(iVar4 + 0x1c);
            iVar4 = FUN_02bad050(param_1,param_4);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(iVar4 + 0x1c);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x03b780b0(iVar4,iVar1,*puVar11);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x03b77900(iVar9,uVar6,**(undefined4 **)(_UNK_02bdcdb0 + 0x2bdcab8));
            if (*(int *)(**(int **)(_UNK_02bdcdb4 + 0x2bdcacc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bdcdb8 + 0x2bdcae8));
            piVar10 = *(int **)(_UNK_02bdcdbc + 0x2bdcafc);
            iVar9 = *piVar10;
            if (*(int *)(iVar9 + 0x74) == 0) {
              func_0x014387a4();
              iVar9 = *piVar10;
            }
            iVar7 = **(int **)(_UNK_02bdcdc0 + 0x2bdcb1c);
            iVar2 = *(int *)(iVar7 + 0x1c);
            uVar6 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x10);
            if (iVar2 == 0) {
              func_0x014909d8(iVar7);
              iVar2 = *(int *)(iVar7 + 0x1c);
            }
            iVar9 = *(int *)(iVar2 + 8);
            if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
              iVar9 = func_0x0149097c();
            }
            if (*(int *)(iVar9 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar9 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
            if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
              iVar9 = func_0x0149097c();
            }
            uVar8 = **(undefined4 **)(iVar9 + 0x5c);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x02990414(iVar4,uVar6,uVar8,0);
          }
        }
      }
    }
    iVar1 = *(int *)(iVar4 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar5) {
      do {
        iVar1 = FUN_02bad050(param_1,param_4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,uVar5,*puVar11);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 8)) {
          iVar1 = FUN_02bad050(param_1,param_4);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,uVar5,*puVar11);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 8) == param_2) {
            iVar1 = FUN_02bad050(param_1,param_4);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03b780b0(iVar1,uVar5,*puVar11);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x024eef64(*(undefined4 *)(iVar1 + 0x88),param_3,0);
            if (iVar1 == 0) {
              iVar1 = FUN_02bad050(param_1,param_4);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar1 + 0x14);
              iVar1 = FUN_02bad050(param_1,param_4);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x14);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar6 = func_0x03b780b0(iVar1,uVar5,*puVar11);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              func_0x03b77900(iVar4,uVar6,**(undefined4 **)(_UNK_02bdcdc4 + 0x2bdcd5c));
            }
          }
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2185,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028931e8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

