
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b9fef4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02ba0f00 + 0x2b9ff0c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f04 + 0x2b9ff20));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f08 + 0x2b9ff2c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f0c + 0x2b9ff38));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f10 + 0x2b9ff44));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f14 + 0x2b9ff50));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f18 + 0x2b9ff5c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f1c + 0x2b9ff68));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f20 + 0x2b9ff74));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f24 + 0x2b9ff80));
    func_0x01438628(*(undefined4 *)(_UNK_02ba0f28 + 0x2b9ff8c));
    *pcVar8 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xe95,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe95,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
    return;
  }
  piVar14 = *(int **)(_UNK_02ba0f2c + 0x2b9fff4);
  iVar1 = **(int **)(*piVar14 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,4,0,0);
  iVar6 = **(int **)(*piVar14 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (iVar1 != 0) goto LAB_02ba11a8;
  func_0x02b6127c(iVar6,4,**(undefined4 **)(_UNK_02ba0f30 + 0x2ba0054),0,0);
  iVar1 = **(int **)(*piVar14 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67abc(iVar1,2,0);
  if (iVar1 != 0) {
    iVar1 = **(int **)(*piVar14 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b6105c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar1 + 0x20)) {
      iVar1 = **(int **)(*piVar14 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b6105c(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar1 + 0x24)) {
        iVar1 = **(int **)(*piVar14 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b6105c(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x20) < 0) {
LAB_02ba0ab8:
          iVar1 = **(int **)(*piVar14 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b64afc(iVar1,0,0);
          return;
        }
        iVar1 = **(int **)(*piVar14 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b6105c(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        piVar13 = *(int **)(_UNK_02ba1114 + 0x2ba0194);
        iVar6 = *(int *)(iVar1 + 0x20);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02be9134(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) <= iVar6) goto LAB_02ba0ab8;
        iVar1 = **(int **)(*piVar14 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b6105c(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x24) < 0) goto LAB_02ba0ab8;
        iVar1 = **(int **)(*piVar14 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b6105c(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar1 + 0x24);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02be9134(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) <= iVar6) goto LAB_02ba0ab8;
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02be9134(iVar1,0);
        iVar6 = **(int **)(*piVar14 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02b6105c(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(uint *)(iVar6 + 0x20);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar9) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar9 * 4 + 0x10);
        iVar6 = **(int **)(*piVar13 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02c3d868(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02be9134(iVar6,0);
        iVar10 = **(int **)(*piVar14 + 0x5c);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x02b6105c(iVar10,0);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(uint *)(iVar10 + 0x24);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar9) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + uVar9 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x02c3f4b4(iVar1,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3f4b4(iVar6,0);
        if (iVar10 == iVar2) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_28 = func_0x02c3f4b4(iVar1,0);
          uVar3 = func_0x01524ffc(&uStack_28,0);
          iVar10 = **(int **)(*piVar14 + 0x5c);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x02b667ac(iVar10,0);
          iVar10 = func_0x01523ccc(uVar3,uVar4,0);
          if (iVar10 != 0) {
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0x50);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar10 + 0xc);
            *(undefined4 *)(iVar10 + 0xc) = 0;
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            if (0 < iVar2) {
              func_0x01523bec(*(undefined4 *)(iVar10 + 8),0,iVar2,0);
            }
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            func_0x02bee744(iVar10,0xffffffff,1,0);
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0x50);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar10 + 0xc);
            *(undefined4 *)(iVar10 + 0xc) = 0;
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            if (0 < iVar2) {
              func_0x01523bec(*(undefined4 *)(iVar10 + 8),0,iVar2,0);
            }
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0x50);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar10 + 8);
            uVar9 = *(uint *)(iVar10 + 0xc);
            piVar14 = *(int **)(_UNK_02ba1558 + 0x2ba063c);
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            iVar15 = *piVar14;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (uVar9 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(iVar10 + 0xc) = uVar9 + 1;
              piVar5 = (int *)(iVar2 + uVar9 * 4 + 0x10);
              *piVar5 = iVar1;
              func_0x014385cc(piVar5,iVar1);
            }
            else {
              func_0x0152874c(iVar10,iVar1,
                              *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
            }
            piVar5 = *(int **)(_UNK_02ba16a0 + 0x2ba14cc);
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0x50);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar10 + 8);
            uVar9 = *(uint *)(iVar10 + 0xc);
            iVar15 = *piVar14;
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (uVar9 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(iVar10 + 0xc) = uVar9 + 1;
              piVar14 = (int *)(iVar2 + uVar9 * 4 + 0x10);
              *piVar14 = iVar6;
              func_0x014385cc(piVar14,iVar6);
            }
            else {
              func_0x0152874c(iVar10,iVar6,
                              *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
            }
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            func_0x02bf1628(iVar10,0xffffffff,0x40200000,0);
            iVar10 = **(int **)(*piVar5 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            piVar14 = (int *)func_0x024eecb8(iVar1,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar6 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            piVar13 = (int *)func_0x024eecb8(iVar1,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            piVar5 = (int *)0x0;
            if ((piVar14 != (int *)0x0) &&
               (piVar5 = piVar14, *piVar14 != **(int **)(_UNK_02ba16a4 + 0x2ba1648))) {
              piVar5 = (int *)0x0;
            }
            piVar14 = (int *)0x0;
            if ((piVar13 != (int *)0x0) &&
               (piVar14 = piVar13, *piVar13 != **(int **)(_UNK_02ba16a4 + 0x2ba1648))) {
              piVar14 = (int *)0x0;
            }
            goto LAB_02ba168c;
          }
        }
      }
    }
  }
  piVar13 = *(int **)(_UNK_02ba155c + 0x2ba067c);
  iVar1 = **(int **)(*piVar13 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c3d868(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x50) == 0) {
LAB_02ba0708:
    iVar1 = **(int **)(*piVar13 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3d868(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar6) {
      func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
    }
    iVar1 = **(int **)(*piVar13 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3d868(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02bef6b4(iVar1,0,0);
  }
  else {
    iVar1 = **(int **)(*piVar13 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3d868(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) goto LAB_02ba0708;
  }
  iVar1 = **(int **)(*piVar13 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c3d868(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x50) != 0) {
    iVar1 = **(int **)(*piVar13 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3d868(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = **(int **)(*piVar14 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b67abc(iVar1,2,0);
      iVar6 = **(int **)(*piVar14 + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (iVar1 == 0) goto LAB_02ba11a8;
      uVar3 = func_0x02b667ac(iVar6,0);
      iVar1 = func_0x015fcde8(uVar3,0);
      if (iVar1 != 0) goto LAB_02ba1190;
      iVar1 = **(int **)(*piVar13 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c3d868(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x50) == 0) {
LAB_02ba0ae4:
        iVar1 = **(int **)(*piVar14 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x02b66668(iVar1,0);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c009b8(iVar1,0,0,0,uVar3,0);
        iVar6 = 1;
        puVar11 = *(undefined4 **)(_UNK_02ba16ac + 0x2ba0b74);
        while( true ) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar10 = iVar6 + -1;
          if (*(int *)(iVar1 + 0xc) <= iVar10) goto LAB_02ba1190;
          iVar2 = func_0x0152983c(iVar1,iVar10,*puVar11);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uStack_30 = func_0x02c3f4b4(iVar2,0);
          iVar2 = **(int **)(*piVar14 + 0x5c);
          uVar3 = func_0x01524ffc(&uStack_30,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02b665b8(iVar2,uVar3,0);
          if (iVar2 != 0) break;
          iVar6 = iVar6 + 2;
        }
        iVar2 = func_0x0152983c(iVar1,iVar10,*puVar11);
        iVar1 = func_0x0152983c(iVar1,iVar6,*puVar11);
        if (iVar2 != 0 && iVar1 != 0) {
          piVar13 = *(int **)(_UNK_02ba16b0 + 0x2ba0c48);
          iVar6 = **(int **)(*piVar13 + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c3d868(iVar6,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x50);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x0152983c(iVar6,0,*puVar11);
          if (iVar2 == iVar6) {
            iVar6 = **(int **)(*piVar13 + 0x5c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x02c3d868(iVar6,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0x50);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x0152983c(iVar6,1,*puVar11);
            if (iVar1 == iVar6) goto LAB_02ba1184;
          }
          iVar6 = 0;
          pcVar8 = (char *)(_UNK_02ba16b4 + 0x2ba0d18);
          piVar14 = *(int **)(_UNK_02ba16b8 + 0x2ba0d1c);
          while( true ) {
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0x50);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar15 = *(int *)(iVar10 + 0xc);
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            if (iVar15 <= iVar6) break;
            iVar10 = *(int *)(iVar10 + 0x50);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x0152983c(iVar10,iVar6,*puVar11);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0xc);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x035e8140(iVar10,**(undefined4 **)(_UNK_02ba16bc + 0x2ba0de8));
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            func_0x024f1048(iVar10,**(undefined4 **)(_UNK_02ba16c0 + 0x2ba0e10),0);
            iVar10 = **(int **)(*piVar13 + 0x5c);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x02c3d868(iVar10,0);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0x50);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x0152983c(iVar10,iVar6,*puVar11);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0xc);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x024eecb8(iVar10,0);
            if (*pcVar8 == '\0') {
              func_0x01438628(piVar14);
              *pcVar8 = '\x01';
            }
            iVar15 = *(int *)(*piVar14 + 0x5c);
            uVar3 = *(undefined4 *)(iVar15 + 0xc);
            uVar4 = *(undefined4 *)(iVar15 + 0x10);
            uVar12 = *(undefined4 *)(iVar15 + 0x14);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            func_0x024ef328(iVar10,uVar3,uVar4,uVar12,0);
            iVar6 = iVar6 + 1;
            piVar13 = *(int **)(&UNK_02ba0f00 + _UNK_02ba16c4);
          }
          func_0x02bee744(iVar10,0xffffffff,1,0);
          iVar6 = **(int **)(*piVar13 + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c3d868(iVar6,0);
          piVar14 = *(int **)(_UNK_02ba16c8 + 0x2ba0f80);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x50);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar6 + 0xc);
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (0 < iVar10) {
            func_0x01523bec(*(undefined4 *)(iVar6 + 8),0,iVar10,0);
          }
          iVar6 = **(int **)(*piVar13 + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c3d868(iVar6,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x50);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar6 + 8);
          uVar9 = *(uint *)(iVar6 + 0xc);
          piVar13 = *(int **)(_UNK_02ba16cc + 0x2ba102c);
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          iVar15 = *piVar13;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar9 + 1;
            piVar5 = (int *)(iVar10 + uVar9 * 4 + 0x10);
            *piVar5 = iVar2;
            func_0x014385cc(piVar5,iVar2);
          }
          else {
            func_0x0152874c(iVar6,iVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar6 = **(int **)(**(int **)(_UNK_02ba16d0 + 0x2ba1084) + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c3d868(iVar6,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x50);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar6 + 8);
          uVar9 = *(uint *)(iVar6 + 0xc);
          iVar15 = *piVar13;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar9 + 1;
            piVar13 = (int *)(iVar10 + uVar9 * 4 + 0x10);
            *piVar13 = iVar1;
            func_0x014385cc(piVar13,iVar1);
          }
          else {
            func_0x0152874c(iVar6,iVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar6 = **(int **)(**(int **)(_UNK_02ba16d4 + 0x2ba113c) + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c3d868(iVar6,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02bf1628(iVar6,0xffffffff,0x40200000,0);
        }
      }
      else {
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) < 1) goto LAB_02ba0ae4;
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puVar11 = *(undefined4 **)(_UNK_02ba16a8 + 0x2ba09a0);
        iVar1 = func_0x0152983c(iVar1,0,*puVar11);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_2c = func_0x02c3f4b4(iVar1,0);
        iVar1 = **(int **)(*piVar14 + 0x5c);
        uVar3 = func_0x01524ffc(&uStack_2c,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b665b8(iVar1,uVar3,0);
        if (iVar1 == 0) goto LAB_02ba0ae4;
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x0152983c(iVar1,0,*puVar11);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3d868(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152983c(iVar1,1,*puVar11);
      }
LAB_02ba1184:
      if (iVar1 != 0 && iVar2 != 0) {
        piVar13 = *(int **)(_UNK_02ba16d8 + 0x2ba11cc);
        iVar6 = **(int **)(*piVar13 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        bVar7 = false;
        iVar6 = func_0x02c3d868(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02be9188(iVar6,0);
        if (0 < iVar6) {
          iVar6 = **(int **)(*piVar13 + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c3d868(iVar6,0);
          iVar10 = **(int **)(*piVar13 + 0x5c);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x02c3d868(iVar10,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x02be9188(iVar10,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02beba7c(iVar6,uVar3,0);
          bVar7 = iVar6 != 0 && iVar6 == iVar1;
        }
        iVar10 = **(int **)(*piVar14 + 0x5c);
        iVar6 = iVar1;
        if (bVar7 || *(int *)(iVar2 + 0x14) == 0) {
          iVar6 = iVar2;
          iVar2 = iVar1;
        }
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b6105c(iVar10,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar10 = **(int **)(*piVar14 + 0x5c);
        if (*(char *)(iVar1 + 0x1c) == '\0') {
          if (iVar2 == 0) {
            func_0x014388e4();
          }
        }
        else {
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b6105c(iVar10,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar2 + 0xc);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x02c19900(iVar10,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar10 = *piVar14;
          *(undefined4 *)(iVar1 + 0x20) = uVar3;
          iVar1 = **(int **)(iVar10 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b6105c(iVar1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar6 + 0xc);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x02c19900(iVar10,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar10 = *piVar14;
          *(undefined4 *)(iVar1 + 0x24) = uVar3;
          iVar10 = **(int **)(iVar10 + 0x5c);
        }
        iVar1 = *(int *)(iVar2 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        piVar14 = (int *)func_0x024eecb8(iVar1,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar6 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        piVar13 = (int *)func_0x024eecb8(iVar1,0);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        piVar5 = (int *)0x0;
        if ((piVar14 != (int *)0x0) &&
           (piVar5 = piVar14, *piVar14 != **(int **)(_UNK_02ba16dc + 0x2ba1460))) {
          piVar5 = (int *)0x0;
        }
        piVar14 = (int *)0x0;
        if ((piVar13 != (int *)0x0) &&
           (piVar14 = piVar13, *piVar13 != **(int **)(_UNK_02ba16dc + 0x2ba1460))) {
          piVar14 = (int *)0x0;
        }
LAB_02ba168c:
        func_0x02b647b4(iVar10,2,piVar5,piVar14,0,1,0,0);
        return;
      }
    }
  }
LAB_02ba1190:
  iVar6 = **(int **)(*piVar14 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
LAB_02ba11a8:
  func_0x02b649c0(iVar6,2,0);
  return;
}

