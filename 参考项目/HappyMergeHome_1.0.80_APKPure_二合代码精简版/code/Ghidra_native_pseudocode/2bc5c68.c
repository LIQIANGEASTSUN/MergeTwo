
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bd5c68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(iRam02bd66a8 + 0x2bd5c90);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd66ac + 0x2bd5ca4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd66b0 + 0x2bd5cb0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd66b4 + 0x2bd5cbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd66b8 + 0x2bd5cc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd66bc + 0x2bd5cd4));
    *pcVar6 = '\x01';
  }
  uStack_3c = 0;
  iVar1 = func_0x02953fd4(0x5ce7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar10 = *(undefined4 **)(_UNK_02bd66c0 + 0x2bd5d78);
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 8) == -1) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02bd66c4 + 0x2bd5da4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd66c8 + 0x2bd5dc0));
      iVar3 = FUN_02bad050(param_1,param_3);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,param_2,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar3 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029a6fa8(iVar1,uVar7,0);
      if (iVar1 == 0) {
        iVar1 = FUN_02bad050(param_1,param_3);
        func_0x010af2ec();
        uVar8 = *(undefined4 *)(iVar1 + 0x10);
        func_0x010af2ec(uVar8);
        uVar7 = func_0x01438638(*(undefined4 *)(_UNK_02bd6704 + 0x2bd6620));
        iVar1 = func_0x010b98d4(uVar8,param_2,uVar7);
        func_0x010af2ec();
        uStack_3c = *(undefined4 *)(iVar1 + 8);
        uVar7 = func_0x01524ffc(&uStack_3c,0);
        uVar8 = func_0x01438638(*(undefined4 *)(_UNK_02bd6708 + 0x2bd665c));
        uVar7 = func_0x014e9568(uVar8,uVar7,0);
        func_0x01438638(*(undefined4 *)(_UNK_02bd670c + 0x2bd6678));
        uVar8 = func_0x014388d4();
        func_0x014e95c8(uVar8,uVar7,0);
        uVar7 = func_0x01438638(*(undefined4 *)(_UNK_02bd6710 + 0x2bd6698));
        func_0x01438790(uVar8,uVar7);
        func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(int *)(**(int **)(_UNK_02bd66cc + 0x2bd5e4c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd66d0 + 0x2bd5e68));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar14 = func_0x026ffbe0(iVar3,0);
      iVar3 = FUN_02bad050(param_1,param_3);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,param_2,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x014e6e04((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1000,0);
      iVar9 = *(int *)(iVar3 + 0x20);
      iVar3 = func_0x02bd6714(param_1,iVar1);
      iVar5 = FUN_02bad050(param_1,param_3);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar4 = iVar4 - iVar9;
      iVar5 = func_0x03b780b0(iVar5,param_2,*puVar10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x2c);
      uVar2 = (uint)(iVar4 < iVar3);
      if ((iVar5 < 1) && (piVar11 = (int *)(iVar1 + 0xe8), 0 < *piVar11)) {
        iVar1 = FUN_02bad050(param_1,param_3);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd66d4 + 0x2bd63b4));
        iVar9 = FUN_02bad050(param_1,param_3);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar9 + 0x10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x03b780b0(iVar9,param_2,**(undefined4 **)(_UNK_02bd66d8 + 0x2bd63fc));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar9 + 0x40)) {
          iVar9 = FUN_02bad050(param_1,param_3);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          puVar10 = *(undefined4 **)(_UNK_02bd66dc + 0x2bd6450);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x03b780b0(iVar9,param_2,*puVar10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          piVar11 = (int *)(iVar9 + 0x40);
        }
        iVar9 = *piVar11;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026f721c(iVar1,iVar9,0);
        uVar2 = (uint)(iVar4 < iVar3 && iVar5 < 1);
      }
      else {
        iVar3 = FUN_02bad050(param_1,param_3);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        puVar10 = *(undefined4 **)(_UNK_02bd66e0 + 0x2bd5fb0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b780b0(iVar3,param_2,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0x20) == 0 && *(int *)(iVar3 + 0x24) == 0) {
          iVar3 = FUN_02bad050(param_1,param_3);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03b780b0(iVar3,param_2,*puVar10);
          iVar4 = FUN_02bad050(param_1,param_3);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x03b780b0(iVar4,param_2,*puVar10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar4 + 0x40) < 1) {
            uVar7 = func_0x02bd67a0(param_1,iVar1);
          }
          else {
            iVar1 = FUN_02bad050(param_1,param_3);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar1 + 0x40);
          }
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          FUN_026f721c(iVar3,uVar7,0);
        }
        else {
          iVar3 = func_0x02bd6714(param_1,iVar1);
          if (iVar3 != 0) {
            fVar12 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
            fVar13 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
            pcVar6 = (char *)(_UNK_02bd66e4 + 0x2bd6020);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02bd66e8 + 0x2bd6034));
              *pcVar6 = '\x01';
            }
            if (*(int *)(**(int **)(_UNK_02bd66ec + 0x2bd604c) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar12 = (float)func_0x0152635c(fVar13 / fVar12);
            iVar3 = (int)fVar12;
            if (fVar12 == _UNK_02bd635c) {
              iVar3 = -0x80000000;
            }
            if (0 < iVar3) {
              iVar4 = FUN_02bad050(param_1,param_3);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03b780b0(iVar4,param_2,**(undefined4 **)(_UNK_02bd66f0 + 0x2bd60d0));
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar9 = *(int *)(iVar4 + 0x40);
              iVar5 = func_0x02bd67a0(param_1,iVar1);
              FUN_026f721c(iVar4,iVar5 * iVar3 + iVar9,0);
              iVar3 = FUN_02bad050(param_1,param_3);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b780b0(iVar3,param_2,**(undefined4 **)(_UNK_02bd66f4 + 0x2bd6144));
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar3 + 0x40);
              iVar3 = FUN_02bd5ae4(param_1,iVar1);
              if (iVar3 < iVar4) {
                iVar3 = FUN_02bad050(param_1,param_3);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = *(int *)(iVar3 + 0x10);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x03b780b0(iVar3,param_2,**(undefined4 **)(_UNK_02bd66f8 + 0x2bd61b0));
                uVar7 = FUN_02bd5ae4(param_1,iVar1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                FUN_026f721c(iVar3,uVar7,0);
              }
              if (0 < *(int *)(iVar1 + 0xb4)) {
                iVar3 = func_0x02bd67a0(param_1,iVar1);
                iVar4 = *(int *)(iVar1 + 0xb4);
                iVar1 = FUN_02bad050(param_1,param_3);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0x10);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd66fc + 0x2bd6258));
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = iVar4 * iVar3 - *(int *)(iVar1 + 0x2c);
                if (0 < iVar1) {
                  iVar3 = FUN_02bad050(param_1,param_3);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = *(int *)(iVar3 + 0x10);
                  puVar10 = *(undefined4 **)(_UNK_02bd6700 + 0x2bd62c0);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = func_0x03b780b0(iVar3,param_2,*puVar10);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  if (iVar1 < *(int *)(iVar3 + 0x40)) {
                    iVar3 = FUN_02bad050(param_1,param_3);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = *(int *)(iVar3 + 0x10);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = func_0x03b780b0(iVar3,param_2,*puVar10);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    FUN_026f721c(iVar3,iVar1,0);
                  }
                }
              }
            }
          }
          if (uVar2 != 0) {
            uVar2 = 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ce7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02898004(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

