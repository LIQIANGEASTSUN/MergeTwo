
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c09760(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02c0a74c + 0x2c0977c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0a750 + 0x2c09790));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a754 + 0x2c0979c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a758 + 0x2c097a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a75c + 0x2c097b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a760 + 0x2c097c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a764 + 0x2c097cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a768 + 0x2c097d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a76c + 0x2c097e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a770 + 0x2c097f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a774 + 0x2c097fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a778 + 0x2c09808));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a77c + 0x2c09814));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a780 + 0x2c09820));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a784 + 0x2c0982c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a788 + 0x2c09838));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a78c + 0x2c09844));
    func_0x01438628(*(undefined4 *)(_UNK_02c0a790 + 0x2c09850));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5ec8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ec8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02873a70(iVar1,param_1,param_2,0);
    return uVar2;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c0a794 + 0x2c098b8));
  func_0x02c45ae8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar15 = (uint *)(iVar1 + 8);
  *puVar15 = param_2;
  *(int *)(iVar1 + 0xc) = param_1;
  func_0x014385cc((int *)(iVar1 + 0xc),param_1);
  iVar9 = *(int *)(param_1 + 0x44);
  uVar6 = *puVar15;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar9 + 0xc) <= uVar6) {
    func_0x014388e8();
  }
  iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  piVar14 = *(int **)(_UNK_02c0a928 + 0x2c09930);
  uVar2 = *(undefined4 *)(iVar9 + 0xc);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar9 = func_0x024eec50(uVar2,0,0);
  if (iVar9 != 0) {
    return 0;
  }
  iVar9 = *(int *)(param_1 + 0x44);
  uVar6 = *puVar15;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar9 + 0xc) <= uVar6) {
    func_0x014388e8();
  }
  iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x1c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar9 + 0x1c) != 99) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_02c0a92c + 0x2c099d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar11 = *(undefined4 **)(_UNK_02c0a930 + 0x2c099ec);
  iVar9 = func_0x014e9518(*puVar11);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *puVar15;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = FUN_02bd12f0(iVar9,uVar6,uVar2,0);
  if (iVar9 != 0) {
    if (*(int *)(**(int **)(_UNK_02c0a934 + 0x2c09a30) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x014e9518(*puVar11);
    iVar3 = func_0x014e9518(*puVar11);
    uVar12 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0xb0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02bad204(iVar3,uVar2,uVar12,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = FUN_02baf28c(iVar9,uVar2,0);
    puVar11 = *(undefined4 **)(_UNK_02c0a938 + 0x2c09ab0);
    if (iVar9 != 0) {
      if (*(int *)(**(int **)(_UNK_02c0a93c + 0x2c09abc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar11);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = *puVar15;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bad204(iVar1,uVar6,uVar2,0);
      iVar9 = func_0x014e9518(*puVar11);
      iVar3 = *(int *)(param_1 + 0x44);
      uVar6 = *puVar15;
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar6) {
        func_0x014388e8();
      }
      iVar3 = *(int *)(iVar3 + uVar6 * 4 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(iVar3 + 0x1c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_02be5cb0(iVar9,uVar2,0);
      if (iVar9 != 0) {
        iVar3 = *(int *)(param_1 + 0x44);
        uVar6 = *(uint *)(param_1 + 0xb0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x014388e8();
        }
        iVar3 = *(int *)(iVar3 + uVar6 * 4 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x02c3f4b4(iVar3,0);
        iVar9 = func_0x02b53c1c(iVar9,uVar2,0);
        if (iVar9 != 0) {
          if (*(int *)(**(int **)(_UNK_02c0a940 + 0x2c09bec) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar9 = func_0x014e9518(*puVar11);
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(param_1 + 0xb0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar6) {
            func_0x014388e8();
          }
          iVar3 = *(int *)(iVar3 + uVar6 * 4 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x02c3f4b4(iVar3,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = FUN_02be6048(iVar9,iVar1,uVar2,0);
          if (iVar9 == 0) {
            iVar9 = *(int *)(param_1 + 0x44);
            uVar6 = *(uint *)(param_1 + 0xb0);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar9 + 0xc) <= uVar6) {
              func_0x014388e8();
            }
            iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x02c3f4b4(iVar9,0);
            if (*(int *)(**(int **)(_UNK_02c0a944 + 0x2c09cc8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar9 = func_0x014e9518(*puVar11);
            iVar3 = *(int *)(param_1 + 0x44);
            uVar6 = *(uint *)(param_1 + 0xb0);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar3 + 0xc) <= uVar6) {
              func_0x014388e8();
            }
            iVar3 = *(int *)(iVar3 + uVar6 * 4 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar2 = func_0x02c3f4b4(iVar3,0);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            FUN_02be5d18(iVar9,iVar1,uVar2,0);
            iVar9 = func_0x014e9518(*puVar11);
            uVar12 = *(undefined4 *)(param_1 + 0x10);
            uVar2 = *(undefined4 *)(param_1 + 0xb0);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            FUN_02bda8ac(iVar9,uVar2,uVar12,**(undefined4 **)(_UNK_02c0a948 + 0x2c09d84),1,0);
            iVar9 = *(int *)(param_1 + 0x44);
            uVar6 = *puVar15;
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            puVar11 = *(undefined4 **)(_UNK_02c0a94c + 0x2c09dbc);
            if (*(uint *)(iVar9 + 0xc) <= uVar6) {
              func_0x014388e8();
            }
            iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
            if (iVar9 != 0) {
              iVar9 = *(int *)(iVar9 + 0xc);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              func_0x02c279d8(iVar9,0);
            }
            iVar9 = *(int *)(param_1 + 0x44);
            uVar6 = *puVar15;
            *(uint *)(param_1 + 0xa0) = uVar6;
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar9 + 0xc) <= uVar6) {
              func_0x014388e8();
            }
            iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
            if (iVar9 != 0) {
              iVar9 = *(int *)(iVar9 + 0xc);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              func_0x02c24dd4(iVar9,0);
            }
            if (*(int *)(**(int **)(_UNK_02c0a950 + 0x2c09e4c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar9 = func_0x014e9518(*puVar11);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar9 = FUN_02be5aa8(iVar9,iVar1,0);
            if (iVar9 == 0) {
              return 1;
            }
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            FUN_026f6bf8(iVar1,1,0);
            if (*(int *)(**(int **)(_UNK_02c0a954 + 0x2c09eb8) + 0x74) == 0) {
              func_0x014387a4();
            }
            puVar11 = *(undefined4 **)(_UNK_02c0a958 + 0x2c09ed4);
            iVar9 = func_0x014e9518(*puVar11);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            uVar16 = func_0x026ffbe0(iVar9,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar16 = func_0x014e6e04((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),1000,0);
            uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
            FUN_026f72d8(iVar1,uVar2,(int)uVar16,uVar2,0);
            iVar9 = func_0x014e9518(*puVar11);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            uVar16 = func_0x026ffbe0(iVar9,0);
            uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
            if (iVar1 == 0) {
              func_0x014388e4();
              uVar16 = func_0x014e6e04((int)uVar16,uVar2,1000,0);
              uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
              FUN_026f6d70(0,uVar2,(int)uVar16,uVar2,0);
              func_0x014388e4();
            }
            else {
              uVar16 = func_0x014e6e04((int)uVar16,uVar2,1000,0);
              uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
              FUN_026f6d70(iVar1,uVar2,(int)uVar16,uVar2,0);
            }
            FUN_026f7160(iVar1,0,0);
            iVar9 = *(int *)(param_1 + 0x44);
            uVar6 = *puVar15;
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar9 + 0xc) <= uVar6) {
              func_0x014388e8();
            }
            iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar9 = *(int *)(iVar9 + 0xc);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar9 = *(int *)(iVar9 + 0x1c);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar9 + 0x78) != '\0') {
              iVar9 = *(int *)(param_1 + 0x44);
              uVar6 = *puVar15;
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar9 + 0xc) <= uVar6) {
                func_0x014388e8();
              }
              iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              iVar9 = *(int *)(iVar9 + 0xc);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              iVar9 = *(int *)(iVar9 + 0x1c);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar9 + 0x8c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              FUN_026f7160(iVar1,uVar2,0);
            }
            FUN_02bf6abc(param_1,*puVar15);
            FUN_02bef6b4(param_1,0);
            iVar1 = *(int *)(param_1 + 0x44);
            uVar6 = *puVar15;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar6) {
              func_0x014388e8();
            }
            iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
            if (iVar1 == 0) {
              return 1;
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02c1c724(iVar1,0xffffffff,0);
            return 1;
          }
        }
      }
      goto LAB_02c0a5e8;
    }
  }
  iVar9 = *(int *)(param_1 + 0x44);
  uVar6 = *puVar15;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar9 + 0xc) <= uVar6) {
    func_0x014388e8();
  }
  iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x1c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar9 + 0x20) == 1) {
    piVar4 = (int *)func_0x01ae369c(0);
    if (piVar4 == (int *)0x0) {
      func_0x014388e4();
    }
    iVar9 = (**(code **)(*piVar4 + 0x110))(piVar4,0,*(undefined4 *)(*piVar4 + 0x114));
    if (iVar9 == 0) {
LAB_02c0a5e8:
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xb0);
      FUN_02c04cf8(param_1);
      return 1;
    }
  }
  iVar9 = *(int *)(param_1 + 0x44);
  uVar6 = *(uint *)(param_1 + 0xb0);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar9 + 0xc) <= uVar6) {
    func_0x014388e8();
  }
  iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(undefined4 *)(iVar9 + 0xc);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar9 = func_0x024ef144(uVar2,0,0);
  if (iVar9 != 0) {
    iVar9 = *(int *)(param_1 + 0x44);
    uVar6 = *(uint *)(param_1 + 0xb0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar9 + 0x1c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar9 + 0x1c) != 0x1e) goto LAB_02c0a5b8;
    iVar9 = *(int *)(param_1 + 0x44);
    uVar6 = *puVar15;
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    if (*(int *)(iVar9 + uVar6 * 4 + 0x10) == 0) goto LAB_02c0a5b8;
    iVar9 = *(int *)(param_1 + 0x44);
    uVar6 = *puVar15;
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar9 = *(int *)(iVar9 + uVar6 * 4 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar9 + 0xc);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x024eec50(uVar2,0,0);
    if (iVar9 != 0) goto LAB_02c0a5b8;
    if (*(int *)(**(int **)(_UNK_02c0a95c + 0x2c0a1a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_02c0a960 + 0x2c0a1c4);
    iVar9 = func_0x014e9518(*puVar11);
    iVar3 = *(int *)(param_1 + 0x44);
    uVar6 = *puVar15;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar3 = *(int *)(iVar3 + uVar6 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    puVar13 = *(undefined4 **)(_UNK_02c0a964 + 0x2c0a218);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02c4acc8(iVar9,uVar2,0);
    iVar9 = func_0x014e9518(*puVar11);
    iVar3 = *(int *)(param_1 + 0x44);
    uVar10 = *puVar15;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar10) {
      func_0x014388e8();
    }
    iVar3 = *(int *)(iVar3 + uVar10 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar10 = func_0x02c4ab04(iVar9,uVar2,0);
    if ((uVar6 | uVar10) != 1) goto LAB_02c0a5b8;
    uStack_28 = 0;
    if (*(int *)(**(int **)(_UNK_02c0a968 + 0x2c0a2d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x014e9518(*puVar13);
    iVar3 = *(int *)(param_1 + 0x44);
    uVar10 = *puVar15;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar10) {
      func_0x014388e8();
    }
    iVar3 = *(int *)(iVar3 + uVar10 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar12 = *(undefined4 *)(iVar3 + 0x1c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = FUN_02bd8b98(iVar9,uVar10,uVar12,&uStack_28,uVar2,0);
    if (*(int *)(**(int **)(_UNK_02c0a96c + 0x2c0a37c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c0a970 + 0x2c0a398));
    iVar7 = *(int *)(param_1 + 0x44);
    uVar10 = *puVar15;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar10) {
      func_0x014388e8();
    }
    iVar7 = *(int *)(iVar7 + uVar10 * 4 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(param_1 + 0x44);
    uVar10 = *puVar15;
    uVar2 = *(undefined4 *)(iVar7 + 0x11c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar10) {
      func_0x014388e8();
    }
    iVar7 = *(int *)(iVar8 + uVar10 * 4 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar12 = *(undefined4 *)(iVar7 + 0x1c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_02bd8188(iVar3,uVar2,uVar12,&uStack_28,0);
    if (uVar6 != 0) {
      if (*(int *)(**(int **)(_UNK_02c0a974 + 0x2c0a490) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02c0a978 + 0x2c0a4ac));
      iVar8 = *(int *)(param_1 + 0x44);
      uVar6 = *puVar15;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar8 + 0xc) <= uVar6) {
        func_0x014388e8();
      }
      iVar8 = *(int *)(iVar8 + uVar6 * 4 + 0x10);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar12 = *(undefined4 *)(iVar8 + 0x1c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = FUN_02bd6ae8(iVar7,uVar6,uVar12,&uStack_28,uVar2,0);
      if (0 < iVar7) {
        iVar7 = *(int *)(param_1 + 0x44);
        uVar6 = *puVar15;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar6) {
          func_0x014388e8();
        }
        iVar7 = *(int *)(iVar7 + uVar6 * 4 + 0x10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0xc);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x11c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x38);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if ((iVar9 < 1 && iVar3 < 1) && 0 < *(int *)(iVar7 + 0xc)) goto LAB_02c0a5b8;
        goto LAB_02c0a610;
      }
    }
    if (0 < iVar9 || 0 < iVar3) {
LAB_02c0a610:
      puVar11 = *(undefined4 **)(_UNK_02c0a97c + 0x2c0a61c);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0xb0);
      iVar9 = func_0x014388d4(*puVar11);
      func_0x02a32c7c(iVar9,0);
      if (*(int *)(**(int **)(_UNK_02c0a980 + 0x2c0a640) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x0202bb70(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x0202bc14(iVar3,**(undefined4 **)(_UNK_02c0a984 + 0x2c0a678),0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar9 + 0xc) = uVar2;
      func_0x014385cc((undefined4 *)(iVar9 + 0xc),uVar2);
      puVar11 = *(undefined4 **)(_UNK_02c0a988 + 0x2c0a6b0);
      *(undefined1 *)(iVar9 + 0x18) = 1;
      uVar2 = func_0x014388d4(*puVar11);
      func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02c0a98c + 0x2c0a6d0),0);
      *(undefined4 *)(iVar9 + 0x10) = uVar2;
      func_0x014385cc((undefined4 *)(iVar9 + 0x10),uVar2);
      uVar2 = func_0x014388d4(*puVar11);
      func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02c0a990 + 0x2c0a708),0);
      *(undefined4 *)(iVar9 + 0x1c) = uVar2;
      func_0x014385cc((undefined4 *)(iVar9 + 0x1c),uVar2);
      if (*(int *)(**(int **)(_UNK_02c0a994 + 0x2c0a72c) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x02aef2ec(iVar9,0);
      return 1;
    }
  }
LAB_02c0a5b8:
  *(uint *)(param_1 + 0xa0) = *puVar15;
  iVar1 = FUN_02bfb30c(param_1);
  if (iVar1 != 0) {
    FUN_02c071a4(param_1,*(undefined4 *)(param_1 + 0xb0),*puVar15);
  }
  return 1;
}

