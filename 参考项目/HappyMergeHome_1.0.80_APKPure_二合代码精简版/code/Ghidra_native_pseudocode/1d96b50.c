
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01da6b50(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 extraout_r1;
  undefined1 extraout_r2;
  undefined1 extraout_r3;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  undefined1 *extraout_r12;
  bool bVar18;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar9 = (char *)(_UNK_01da6bd4 + 0x1da6b60);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da6bd8 + 0x1da6b74));
    func_0x01438628(*(undefined4 *)(_UNK_01da6bdc + 0x1da6b80));
    *pcVar9 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01da6be0 + 0x1da6b94) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x03b2c734(**(undefined4 **)(_UNK_01da6be4 + 0x1da6bb0));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  pcVar9 = (char *)(_UNK_01da44bc + 0x1da437c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da44c0 + 0x1da4390));
    func_0x01438628(*(undefined4 *)(_UNK_01da44c4 + 0x1da439c));
    func_0x01438628(*(undefined4 *)(_UNK_01da44c8 + 0x1da43a8));
    func_0x01438628(*(undefined4 *)(_UNK_01da44cc + 0x1da43b4));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x3ec4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x3ec4,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piStack_38 = (int *)0x0;
    auStack_28[0] = 0;
    func_0x024f56c0(&piStack_50,0,0,0);
    piStack_38 = piStack_50;
    piStack_34 = (int *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&piStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&piStack_38,iVar7,0);
    func_0x01523a1c(&piStack_38,0,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar7 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uVar8 = 3;
    if (iVar7 == 0) {
      uVar8 = 2;
    }
    iVar7 = func_0x024f56d0(iVar11,uVar14,&piStack_38,uVar8,0,0);
    return iVar7;
  }
  if (*(int *)(**(int **)(_UNK_01da44d0 + 0x1da4410) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01da44d4 + 0x1da442c));
  piVar12 = *(int **)(_UNK_01da44d8 + 0x1da4440);
  iVar11 = *piVar12;
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x014387a4();
    iVar11 = *piVar12;
  }
  uVar14 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x5f8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar14 = func_0x02b0fc08(iVar2,uVar14,0);
  if (*(int *)(**(int **)(_UNK_01da44dc + 0x1da4488) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024eec50(uVar14,0,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  pcVar9 = (char *)(_UNK_01da53e8 + 0x1da44f8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da5500 + 0x1da450c));
    func_0x01438628(*(undefined4 *)(_UNK_01da5504 + 0x1da4518));
    func_0x01438628(*(undefined4 *)(_UNK_01da5508 + 0x1da4524));
    func_0x01438628(*(undefined4 *)(_UNK_01da550c + 0x1da4530));
    func_0x01438628(*(undefined4 *)(_UNK_01da5510 + 0x1da453c));
    func_0x01438628(*(undefined4 *)(_UNK_01da5514 + 0x1da4548));
    func_0x01438628(*(undefined4 *)(_UNK_01da5518 + 0x1da4554));
    func_0x01438628(*(undefined4 *)(_UNK_01da551c + 0x1da4560));
    func_0x01438628(*(undefined4 *)(_UNK_01da5520 + 0x1da456c));
    func_0x01438628(*(undefined4 *)(_UNK_01da5524 + 0x1da4578));
    *pcVar9 = '\x01';
  }
  auStack_28[0] = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar2 = func_0x02953fd4(0x3ec5,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x3ec5,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02868e1c(iVar2,iVar7,0);
    return iVar7;
  }
  piVar12 = *(int **)(_UNK_01da55c8 + 0x1da45e0);
  iVar7 = **(int **)(*piVar12 + 0x5c);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x02b63a9c(iVar7,4,0,0);
  iVar2 = **(int **)(*piVar12 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (iVar7 != 0) goto LAB_01da564c;
  uStack_48 = 0;
  func_0x02b6127c(iVar2,4,**(undefined4 **)(_UNK_01da55cc + 0x1da4640),0);
  iVar7 = **(int **)(*piVar12 + 0x5c);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x02b67abc(iVar7,2,0);
  if (iVar7 != 0) {
    iVar7 = **(int **)(*piVar12 + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02b6105c(iVar7,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar7 + 0x20)) {
      iVar7 = **(int **)(*piVar12 + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x02b6105c(iVar7,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar7 + 0x24)) {
        piVar16 = *(int **)(_UNK_01da5664 + 0x1da470c);
        iVar7 = **(int **)(*piVar16 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x02be9134(iVar7,0);
        iVar2 = **(int **)(*piVar12 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02b6105c(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(uint *)(iVar2 + 0x20);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar10) {
          func_0x014388e8();
        }
        iVar7 = *(int *)(iVar7 + uVar10 * 4 + 0x10);
        iVar2 = **(int **)(*piVar16 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x30);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02be9134(iVar2,0);
        iVar11 = **(int **)(*piVar12 + 0x5c);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        iVar11 = func_0x02b6105c(iVar11,0);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(uint *)(iVar11 + 0x24);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar10) {
          func_0x014388e8();
        }
        iVar2 = *(int *)(iVar2 + uVar10 * 4 + 0x10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar11 = func_0x02c3f4b4(iVar7,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02c3f4b4(iVar2,0);
        if (iVar11 == iVar3) {
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          auStack_28[0] = func_0x02c3f4b4(iVar7,0);
          uVar14 = func_0x01524ffc(auStack_28,0);
          iVar11 = **(int **)(*piVar12 + 0x5c);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x02b667ac(iVar11,0);
          iVar11 = func_0x01523ccc(uVar14,uVar8,0);
          if (iVar11 != 0) {
            iVar11 = **(int **)(*piVar16 + 0x5c);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x30);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x50);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar11 + 0xc);
            *(undefined4 *)(iVar11 + 0xc) = 0;
            *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
            if (0 < iVar3) {
              func_0x01523bec(*(undefined4 *)(iVar11 + 8),0,iVar3,0);
            }
            iVar11 = **(int **)(*piVar16 + 0x5c);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x30);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            func_0x02bee744(iVar11,0xffffffff,1,0);
            iVar11 = **(int **)(*piVar16 + 0x5c);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x30);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x50);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar11 + 0xc);
            *(undefined4 *)(iVar11 + 0xc) = 0;
            *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
            if (0 < iVar3) {
              func_0x01523bec(*(undefined4 *)(iVar11 + 8),0,iVar3,0);
            }
            iVar11 = **(int **)(*piVar16 + 0x5c);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x30);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x50);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar11 + 8);
            uVar10 = *(uint *)(iVar11 + 0xc);
            piVar12 = *(int **)(iRam01da5938 + 0x1da4a38);
            *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
            iVar17 = *piVar12;
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (uVar10 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar11 + 0xc) = uVar10 + 1;
              piVar4 = (int *)(iVar3 + uVar10 * 4 + 0x10);
              *piVar4 = iVar7;
              func_0x014385cc(piVar4,iVar7);
            }
            else {
              func_0x0152874c(iVar11,iVar7,
                              *(undefined4 *)(*(int *)(*(int *)(iVar17 + 0x10) + 0x60) + 0x38));
            }
            piVar4 = *(int **)(iRam01da593c + 0x1da5244);
            iVar11 = **(int **)(*piVar16 + 0x5c);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x30);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x50);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar11 + 8);
            uVar10 = *(uint *)(iVar11 + 0xc);
            iVar17 = *piVar12;
            *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (uVar10 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar11 + 0xc) = uVar10 + 1;
              piVar12 = (int *)(iVar3 + uVar10 * 4 + 0x10);
              *piVar12 = iVar2;
              func_0x014385cc(piVar12,iVar2);
            }
            else {
              func_0x0152874c(iVar11,iVar2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar17 + 0x10) + 0x60) + 0x38));
            }
            iVar11 = **(int **)(*piVar16 + 0x5c);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x30);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            func_0x02bf1628(iVar11,0xffffffff,0x40200000,0);
            iVar11 = **(int **)(*piVar4 + 0x5c);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar7 + 0xc);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            piVar12 = (int *)func_0x024eecb8(iVar7,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar2 + 0xc);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            piVar16 = (int *)func_0x024eecb8(iVar7,0);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            piVar4 = (int *)0x0;
            if ((piVar12 != (int *)0x0) &&
               (piVar4 = piVar12, *piVar12 != **(int **)(iRam01da5940 + 0x1da53a0))) {
              piVar4 = (int *)0x0;
            }
            piVar12 = (int *)0x0;
            if ((piVar16 != (int *)0x0) &&
               (piVar12 = piVar16, *piVar16 != **(int **)(iRam01da5940 + 0x1da53a0))) {
              piVar12 = (int *)0x0;
            }
            goto LAB_01da5920;
          }
        }
      }
    }
  }
  piVar16 = *(int **)(iRam01da5944 + 0x1da4a78);
  iVar7 = **(int **)(*piVar16 + 0x5c);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x30);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar7 + 0x50) == 0) {
LAB_01da4aec:
    iVar7 = **(int **)(*piVar16 + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x50);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar7 + 0xc);
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x01523bec(*(undefined4 *)(iVar7 + 8),0,iVar2,0);
    }
    iVar7 = **(int **)(*piVar16 + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02bef6b4(iVar7,0,0);
  }
  else {
    iVar7 = **(int **)(*piVar16 + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x50);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar7 + 0xc) == 0) goto LAB_01da4aec;
  }
  iVar7 = **(int **)(*piVar16 + 0x5c);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x30);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar7 + 0x50) != 0) {
    iVar7 = **(int **)(*piVar16 + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x50);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar7 + 0xc) != 0) {
      iVar7 = **(int **)(*piVar12 + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x02b67abc(iVar7,2,0);
      iVar2 = **(int **)(*piVar12 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar7 == 0) goto LAB_01da564c;
      uVar14 = func_0x02b667ac(iVar2,0);
      iVar7 = func_0x015fcde8(uVar14,0);
      if (iVar7 != 0) goto LAB_01da5634;
      iVar7 = **(int **)(*piVar16 + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x30);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0x50) == 0) {
LAB_01da4e30:
        iVar7 = **(int **)(*piVar12 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x02b66668(iVar7,0);
        iVar7 = **(int **)(*piVar16 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_44 = 0;
        uStack_48 = uVar14;
        iVar7 = func_0x02c009b8(iVar7,0,0,0);
        iVar2 = 1;
        while( true ) {
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar11 = iVar2 + -1;
          if (*(int *)(iVar7 + 0xc) <= iVar11) goto LAB_01da5634;
          iVar3 = func_0x0152983c(iVar7,iVar11,**(undefined4 **)(iRam01da594c + 0x1da4ed8));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uStack_30 = func_0x02c3f4b4(iVar3,0);
          iVar3 = **(int **)(*piVar12 + 0x5c);
          uVar14 = func_0x01524ffc(&uStack_30,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02b665b8(iVar3,uVar14,0);
          if (iVar3 != 0) break;
          iVar2 = iVar2 + 2;
        }
        puVar13 = *(undefined4 **)(iRam01da5950 + 0x1da4f5c);
        piVar4 = (int *)func_0x0152983c(iVar7,iVar11,*puVar13);
        piVar5 = (int *)func_0x0152983c(iVar7,iVar2,*puVar13);
        if (piVar4 != (int *)0x0 && piVar5 != (int *)0x0) {
          iVar7 = **(int **)(*piVar16 + 0x5c);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x30);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x50);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          piVar6 = (int *)func_0x0152983c(iVar7,0,**(undefined4 **)(iRam01da5954 + 0x1da4fd0));
          if (piVar4 == piVar6) {
            iVar7 = **(int **)(*piVar16 + 0x5c);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar7 + 0x30);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar7 + 0x50);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            piVar6 = (int *)func_0x0152983c(iVar7,1,**(undefined4 **)(iRam01da5958 + 0x1da5028));
            if (piVar5 == piVar6) goto LAB_01da5628;
          }
          iVar7 = 0;
          pcVar9 = (char *)(iRam01da595c + 0x1da5054);
          piVar12 = *(int **)(iRam01da5960 + 0x1da5058);
          piStack_38 = piVar4;
          piStack_34 = piVar5;
          while( true ) {
            iVar2 = **(int **)(*piVar16 + 0x5c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x30);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x50);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            iVar11 = **(int **)(*piVar16 + 0x5c);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0x30);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            if (iVar2 <= iVar7) break;
            iVar2 = *(int *)(iVar11 + 0x50);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x0152983c(iVar2,iVar7,**(undefined4 **)(iRam01da5964 + 0x1da50e0));
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(iRam01da5968 + 0x1da5114));
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x024f1048(iVar2,**(undefined4 **)(iRam01da596c + 0x1da513c),0);
            iVar2 = **(int **)(*piVar16 + 0x5c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x30);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x50);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x0152983c(iVar2,iVar7,**(undefined4 **)(iRam01da5970 + 0x1da518c));
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024eecb8(iVar2,0);
            if (*pcVar9 == '\0') {
              func_0x01438628(piVar12);
              *pcVar9 = '\x01';
            }
            iVar11 = *(int *)(*piVar12 + 0x5c);
            uVar14 = *(undefined4 *)(iVar11 + 0xc);
            uVar8 = *(undefined4 *)(iVar11 + 0x10);
            uVar15 = *(undefined4 *)(iVar11 + 0x14);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uStack_48 = 0;
            func_0x024ef328(iVar2,uVar14,uVar8,uVar15);
            iVar7 = iVar7 + 1;
          }
          func_0x02bee744(iVar11,0xffffffff,1,0);
          iVar7 = **(int **)(*piVar16 + 0x5c);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          piVar4 = piStack_38;
          iVar7 = *(int *)(iVar7 + 0x30);
          piVar12 = *(int **)(iRam01da5974 + 0x1da542c);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x50);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar7 + 0xc);
          *(undefined4 *)(iVar7 + 0xc) = 0;
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          if (0 < iVar2) {
            func_0x01523bec(*(undefined4 *)(iVar7 + 8),0,iVar2,0);
          }
          iVar7 = **(int **)(*piVar16 + 0x5c);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x30);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x50);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar11 = *(int *)(iVar7 + 8);
          uVar10 = *(uint *)(iVar7 + 0xc);
          piVar5 = *(int **)(iRam01da5978 + 0x1da54cc);
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          iVar2 = *piVar5;
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          if (uVar10 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar10 + 1;
            piVar6 = (int *)(iVar11 + uVar10 * 4 + 0x10);
            *piVar6 = (int)piVar4;
            func_0x014385cc(piVar6,piVar4);
          }
          else {
            func_0x0152874c(iVar7,piVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
          iVar7 = **(int **)(*piVar16 + 0x5c);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x30);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x50);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar11 = *(int *)(iVar7 + 8);
          uVar10 = *(uint *)(iVar7 + 0xc);
          iVar2 = *piVar5;
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          piVar5 = piStack_34;
          if (uVar10 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar10 + 1;
            piVar6 = (int *)(iVar11 + uVar10 * 4 + 0x10);
            *piVar6 = (int)piStack_34;
            func_0x014385cc(piVar6,piStack_34);
          }
          else {
            func_0x0152874c(iVar7,piStack_34,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
          iVar7 = **(int **)(*piVar16 + 0x5c);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0x30);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x02bf1628(iVar7,0xffffffff,0x40200000,0);
        }
      }
      else {
        iVar7 = **(int **)(*piVar16 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x50);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) < 1) goto LAB_01da4e30;
        iVar7 = **(int **)(*piVar16 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x50);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        puVar13 = *(undefined4 **)(iRam01da5948 + 0x1da4d30);
        iVar7 = func_0x0152983c(iVar7,0,*puVar13);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_2c = func_0x02c3f4b4(iVar7,0);
        iVar7 = **(int **)(*piVar12 + 0x5c);
        uVar14 = func_0x01524ffc(&uStack_2c,0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x02b665b8(iVar7,uVar14,0);
        if (iVar7 == 0) goto LAB_01da4e30;
        iVar7 = **(int **)(*piVar16 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x50);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        piVar4 = (int *)func_0x0152983c(iVar7,0,*puVar13);
        iVar7 = **(int **)(*piVar16 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x50);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        piVar5 = (int *)func_0x0152983c(iVar7,1,*puVar13);
      }
LAB_01da5628:
      if (piVar5 != (int *)0x0 && piVar4 != (int *)0x0) {
        iVar7 = **(int **)(*piVar16 + 0x5c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        bVar18 = false;
        iVar7 = func_0x02be9188(iVar7,0);
        if (0 < iVar7) {
          iVar2 = **(int **)(*piVar16 + 0x5c);
          iVar7 = iVar2;
          if (iVar2 == 0) {
            func_0x014388e4();
            iVar7 = **(int **)(*piVar16 + 0x5c);
            bVar18 = iVar7 == 0;
            if (bVar18) {
              iVar7 = func_0x014388e4();
              uVar1 = (undefined1)iVar7;
              if (bVar18) {
                *extraout_r12 = extraout_r3;
                extraout_r12[-0xe4] = extraout_r1;
                extraout_r12[-0x1a8] = uVar1;
                extraout_r12[-0xf5c] = 0x38;
                extraout_r12[-0x1e2c] = extraout_r2;
                extraout_r12[-0x2c24] = extraout_r2;
                extraout_r12[-0x3874] = extraout_r2;
                extraout_r12[-0x4440] = extraout_r2;
                extraout_r12[-0x4f98] = extraout_r2;
                extraout_r12[-0x5a98] = uVar1;
                extraout_r12[-0x5f8c] = extraout_r2;
                extraout_r12[-0x69d4] = extraout_r2;
                extraout_r12[-0x7178] = extraout_r2;
                extraout_r12[-0x7b6c] = extraout_r2;
                extraout_r12[-0x8508] = uVar1;
                extraout_r12[-0x93e4] = extraout_r2;
                extraout_r12[-0x9a34] = uVar1;
              }
              uStack_4c = 0x1da5938;
              pcVar9 = (char *)(_UNK_01da59f0 + 0x1da5994);
              piStack_50 = piVar12;
              if (*pcVar9 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_01da59f4 + 0x1da59a8));
                func_0x01438628(*(undefined4 *)(_UNK_01da59f8 + 0x1da59b4));
                *pcVar9 = '\x01';
              }
              if (*(int *)(**(int **)(_UNK_01da59fc + 0x1da59c8) + 0x74) == 0) {
                func_0x014387a4();
              }
              return iVar7;
            }
          }
          iVar7 = *(int *)(iVar7 + 0x30);
          iVar2 = *(int *)(iVar2 + 0x30);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x02be9188(iVar7,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          piVar16 = (int *)func_0x02beba7c(iVar2,uVar14,0);
          bVar18 = piVar16 != (int *)0x0 && piVar16 == piVar5;
        }
        iVar7 = **(int **)(*piVar12 + 0x5c);
        piVar16 = piVar5;
        if (bVar18 || piVar4[5] == 0) {
          piVar16 = piVar4;
          piVar4 = piVar5;
        }
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x02b6105c(iVar7,0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar11 = **(int **)(*piVar12 + 0x5c);
        if (*(char *)(iVar7 + 0x1c) == '\0') {
          if (piVar4 == (int *)0x0) {
            func_0x014388e4();
          }
        }
        else {
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x02b6105c(iVar11,0);
          if (piVar4 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar2 = piVar4[3];
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x02c19900(iVar2,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar2 = *piVar12;
          *(undefined4 *)(iVar7 + 0x20) = uVar14;
          iVar7 = **(int **)(iVar2 + 0x5c);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x02b6105c(iVar7,0);
          if (piVar16 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar2 = piVar16[3];
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x02c19900(iVar2,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar2 = *piVar12;
          *(undefined4 *)(iVar7 + 0x24) = uVar14;
          iVar11 = **(int **)(iVar2 + 0x5c);
        }
        iVar7 = piVar4[3];
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        piVar12 = (int *)func_0x024eecb8(iVar7,0);
        if (piVar16 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar7 = piVar16[3];
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        piVar16 = (int *)func_0x024eecb8(iVar7,0);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        piVar4 = (int *)0x0;
        if ((piVar12 != (int *)0x0) &&
           (piVar4 = piVar12, *piVar12 != **(int **)(iRam01da597c + 0x1da58dc))) {
          piVar4 = (int *)0x0;
        }
        piVar12 = (int *)0x0;
        if ((piVar16 != (int *)0x0) &&
           (piVar12 = piVar16, *piVar16 != **(int **)(iRam01da597c + 0x1da58dc))) {
          piVar12 = (int *)0x0;
        }
LAB_01da5920:
        uStack_40 = 0;
        uStack_44 = 1;
        uStack_48 = 0;
        uStack_3c = 0;
        iVar7 = func_0x02b647b4(iVar11,2,piVar4,piVar12);
        return iVar7;
      }
    }
  }
LAB_01da5634:
  iVar2 = **(int **)(*piVar12 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
LAB_01da564c:
  iVar7 = func_0x02b649c0(iVar2,2,0);
  return iVar7;
}

