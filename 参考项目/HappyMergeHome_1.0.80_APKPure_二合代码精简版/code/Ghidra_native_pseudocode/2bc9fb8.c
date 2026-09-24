
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd9fb8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  pcVar4 = (char *)(_UNK_02bda824 + 0x2bd9fdc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bda828 + 0x2bd9ff0));
    func_0x01438628(*(undefined4 *)(_UNK_02bda82c + 0x2bd9ffc));
    func_0x01438628(*(undefined4 *)(_UNK_02bda830 + 0x2bda008));
    func_0x01438628(*(undefined4 *)(_UNK_02bda834 + 0x2bda014));
    func_0x01438628(*(undefined4 *)(_UNK_02bda838 + 0x2bda020));
    func_0x01438628(*(undefined4 *)(_UNK_02bda83c + 0x2bda02c));
    func_0x01438628(*(undefined4 *)(_UNK_02bda840 + 0x2bda038));
    func_0x01438628(*(undefined4 *)(_UNK_02bda844 + 0x2bda044));
    func_0x01438628(*(undefined4 *)(_UNK_02bda848 + 0x2bda050));
    func_0x01438628(*(undefined4 *)(_UNK_02bda84c + 0x2bda05c));
    func_0x01438628(*(undefined4 *)(_UNK_02bda850 + 0x2bda068));
    func_0x01438628(*(undefined4 *)(_UNK_02bda854 + 0x2bda074));
    func_0x01438628(*(undefined4 *)(_UNK_02bda858 + 0x2bda080));
    func_0x01438628(*(undefined4 *)(_UNK_02bda85c + 0x2bda08c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2ee9,0);
  if (iVar1 == 0) {
    piVar11 = *(int **)(_UNK_02bda860 + 0x2bda0f4);
    piVar9 = *(int **)(_UNK_02bda864 + 0x2bda100);
    uVar5 = **(undefined4 **)(*piVar11 + 0x5c);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 != 0) {
      iVar1 = **(int **)(*piVar11 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02c3d868(iVar1,0);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar5,0,0);
      if (iVar1 != 0) {
        iVar1 = **(int **)(*piVar11 + 0x5c);
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
    if (*(int *)(**(int **)(_UNK_02bda868 + 0x2bda1d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bda86c + 0x2bda1ec));
    piVar9 = *(int **)(_UNK_02bda870 + 0x2bda200);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar9;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x160);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = 0;
    iVar1 = func_0x02b0fc08(iVar1,uVar5,0);
    if (iVar1 != 0) {
      func_0x02b212e4(iVar1,1,0,0);
    }
    puVar12 = *(undefined4 **)(_UNK_02bda874 + 0x2bda264);
    while( true ) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar1 + 0xc);
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar6 <= iVar2) break;
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,iVar2,*puVar12);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar1 + 8)) {
        if (*(int *)(**(int **)(_UNK_02bda878 + 0x2bda2fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bda87c + 0x2bda318));
        iVar6 = FUN_02bad050(param_1,param_3);
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
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x029a6fa8(iVar1,uVar5,0);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_2)) {
          func_0x02bda8ac(param_1,iVar2,param_3,param_4,1);
        }
      }
      iVar2 = iVar2 + 1;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    piVar9 = *(int **)(_UNK_02bda880 + 0x2bda3e8);
    while( true ) {
      iVar1 = iVar1 + -1;
      iVar2 = FUN_02bad050(param_1,param_3);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar1 < 0) break;
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar12);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar2 + 8)) {
        if (*(int *)(**(int **)(_UNK_02bda884 + 0x2bda450) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bda888 + 0x2bda46c));
        iVar6 = FUN_02bad050(param_1,param_3);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0x1c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x03b780b0(iVar6,iVar1,*puVar12);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar5 = *(undefined4 *)(iVar6 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x029a6fa8(iVar2,uVar5,0);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_2)) {
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar2 + 0x1c);
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x1c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar5 = func_0x03b780b0(iVar2,iVar1,*puVar12);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x03b77900(iVar6,uVar5,**(undefined4 **)(_UNK_02bda88c + 0x2bda574));
          if (*(int *)(**(int **)(_UNK_02bda890 + 0x2bda588) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bda894 + 0x2bda5a4));
          iVar6 = *piVar9;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar9;
          }
          iVar8 = **(int **)(_UNK_02bda898 + 0x2bda5d0);
          iVar3 = *(int *)(iVar8 + 0x1c);
          uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x10);
          if (iVar3 == 0) {
            func_0x014909d8(iVar8);
            iVar3 = *(int *)(iVar8 + 0x1c);
          }
          iVar6 = *(int *)(iVar3 + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          uVar7 = **(undefined4 **)(iVar6 + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x02990414(iVar2,uVar5,uVar7,0);
          piVar9 = *(int **)(_UNK_02bda89c + 0x2bda660);
        }
      }
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar10) {
      do {
        iVar1 = FUN_02bad050(param_1,param_3);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,uVar10,*puVar12);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 8)) {
          if (*(int *)(**(int **)(_UNK_02bda8a0 + 0x2bda6e4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bda8a4 + 0x2bda700));
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x14);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,uVar10,*puVar12);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar2 + 8);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029a6fa8(iVar1,uVar5,0);
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_2)) {
            iVar1 = FUN_02bad050(param_1,param_3);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar1 + 0x14);
            iVar1 = FUN_02bad050(param_1,param_3);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x03b780b0(iVar1,uVar10,*puVar12);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x03b77900(iVar2,uVar5,**(undefined4 **)(_UNK_02bda8a8 + 0x2bda808));
          }
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2ee9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028c9a08(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

