// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.CreateField 0x10DD09C; private void CreateField(GameStateSave gameSave) {
// Image base: 0x10000; Ghidra address: 010ed09c; native size hint: 0x69C


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_CreateField_010DD09C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint in_fpscr;
  undefined8 uVar22;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_010edf08 + 0x10ed0b8);
  if (*pcVar7 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf0c + 0x10ed0cc));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf10 + 0x10ed0d8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf14 + 0x10ed0e4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf18 + 0x10ed0f0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf1c + 0x10ed0fc));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf20 + 0x10ed108));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf24 + 0x10ed114));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf28 + 0x10ed120));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf2c + 0x10ed12c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf30 + 0x10ed138));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf34 + 0x10ed144));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf38 + 0x10ed150));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf3c + 0x10ed15c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf40 + 0x10ed168));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf44 + 0x10ed174));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf48 + 0x10ed180));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf4c + 0x10ed18c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf50 + 0x10ed198));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf54 + 0x10ed1a4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf58 + 0x10ed1b0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf5c + 0x10ed1bc));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf60 + 0x10ed1c8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf64 + 0x10ed1d4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf68 + 0x10ed1e0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf6c + 0x10ed1ec));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf70 + 0x10ed1f8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf74 + 0x10ed204));
    func_0x00f6b160(*(undefined4 *)(_UNK_010edf78 + 0x10ed210));
    *pcVar7 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x010f0608(0,param_2);
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  piVar14 = *(int **)(_UNK_010edf7c + 0x10ed244);
  iVar8 = *(int *)(param_2 + 0xc);
  iVar1 = *piVar14;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x00f6b294();
    iVar1 = *piVar14;
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x5c);
  iVar9 = puVar6[4];
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x00f6b294();
      puVar6 = *(undefined4 **)(*piVar14 + 0x5c);
    }
    uVar12 = *puVar6;
    iVar9 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010edf80 + 0x10ed290));
    func_0x024e5818(iVar9,uVar12,**(undefined4 **)(_UNK_010edf84 + 0x10ed2b0),0);
    *(int *)(*(int *)(*piVar14 + 0x5c) + 0x10) = iVar9;
  }
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  func_0x02c0486c(iVar8,iVar9,**(undefined4 **)(_UNK_010edf88 + 0x10ed2e0));
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
    iVar8 = func_0x03083e58(0,0,0);
    func_0x00f6b3d0();
    iVar9 = func_0x03083e58(0,1,0);
    func_0x00f6b3d0();
  }
  else {
    iVar8 = func_0x03083e58(iVar1,0,0);
    iVar9 = func_0x03083e58(iVar1,1,0);
  }
  uVar2 = func_0x03080834(iVar1,0,0);
  if ((int)uVar2 <= iVar8) {
    piVar14 = *(int **)(_UNK_010edf8c + 0x10ed384);
    do {
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      for (uVar3 = func_0x03080834(iVar1,1,0); (int)uVar3 <= iVar9; uVar3 = uVar3 + 1) {
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        puVar4 = *(uint **)(iVar1 + 8);
        if (*puVar4 <= uVar2) {
          func_0x00f6b3d4();
          puVar4 = *(uint **)(iVar1 + 8);
        }
        uVar10 = puVar4[2];
        if (uVar10 <= uVar3) {
          func_0x00f6b3d4();
        }
        iVar15 = *(int *)(iVar1 + (uVar2 * uVar10 + uVar3) * 4 + 0x10);
        if (*(int *)(*piVar14 + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar5 = func_0x01034b74(iVar15,0,0);
        if (iVar5 != 0) {
          if (iVar15 == 0) {
            func_0x00f6b3d0();
          }
          if (*(char *)(iVar15 + 0x28) == '\0') {
            piVar11 = *(int **)(iVar15 + 0x24);
            if (piVar11 == (int *)0x0) {
              func_0x00f6b3d0();
            }
            (**(code **)(*piVar11 + 0x170))(piVar11,*(undefined4 *)(*piVar11 + 0x174));
          }
          func_0x010dcc80(iVar15,0);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= iVar8);
    if (param_2 == 0) {
      func_0x00f6b3d0();
    }
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (-1 < iVar1 + -1) {
    do {
      iVar8 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010edf90 + 0x10ed4b0));
      func_0x010ffc5c(iVar8,0);
      iVar9 = *(int *)(param_2 + 0xc);
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      iVar1 = iVar1 + -1;
      iVar9 = func_0x02c02900(iVar9,iVar1,**(undefined4 **)(_UNK_010edf94 + 0x10ed4e4));
      if (iVar8 == 0) {
        func_0x00f6b3d0();
      }
      *(int *)(iVar8 + 8) = iVar9;
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      iVar15 = *(int *)(param_1 + 0x38);
      iVar9 = *(int *)(iVar9 + 0x1c);
      uVar12 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010edf98 + 0x10ed518));
      if (iVar9 == 5) {
        func_0x01ddde88(uVar12,iVar8,**(undefined4 **)(_UNK_010edf9c + 0x10ed544),0);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        iVar9 = func_0x02c03288(iVar15,uVar12,**(undefined4 **)(_UNK_010edfa0 + 0x10ed568));
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        iVar15 = *(int *)(iVar8 + 8);
        iVar9 = *(int *)(iVar9 + 0x28);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        uVar12 = *(undefined4 *)(iVar15 + 0xc);
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar9 + 0xc) == 0) {
          func_0x00f6b3d4();
          uVar16 = *(undefined4 *)(iVar9 + 0x10);
          if (*(int *)(iVar9 + 0xc) == 0) {
            func_0x00f6b3d4();
            iVar15 = -1;
          }
          else {
            iVar15 = *(int *)(iVar9 + 0xc) + -1;
          }
        }
        else {
          uVar16 = *(undefined4 *)(iVar9 + 0x10);
          iVar15 = *(int *)(iVar9 + 0xc) + -1;
        }
        iVar15 = func_0x018b5208(iVar9,uVar12,uVar16,*(undefined4 *)(iVar9 + iVar15 * 4 + 0x10),
                                 **(undefined4 **)(_UNK_010edfa4 + 0x10ed694));
        iVar9 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010edfa8 + 0x10ed6b8));
        func_0x0112578c(iVar9,0);
        iVar5 = *(int *)(iVar8 + 8);
        if (iVar5 == 0) {
          func_0x00f6b3d0();
        }
        uVar12 = *(undefined4 *)(iVar5 + 0x1c);
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        *(int *)(iVar9 + 0x28) = iVar15;
        *(undefined4 *)(iVar9 + 0x4c) = uVar12;
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        iVar5 = *(int *)(iVar15 + 0x18);
        if (iVar5 == 0) {
          func_0x00f6b3d0();
          iVar5 = *(int *)(iVar15 + 0x18);
          *(undefined4 *)(iVar9 + 8) = uRam00000008;
          if (iVar5 == 0) {
            func_0x00f6b3d0();
            iVar5 = 0;
          }
        }
        else {
          *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar5 + 8);
        }
        uVar22 = *(undefined8 *)(iVar5 + 0xb0);
        *(undefined4 *)(iVar9 + 0xb8) = *(undefined4 *)(iVar5 + 0xb8);
        *(undefined8 *)(iVar9 + 0xb0) = uVar22;
      }
      else {
        func_0x01ddde88(uVar12,iVar8,**(undefined4 **)(_UNK_010edfac + 0x10ed5d0),0);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        iVar9 = func_0x02c03288(iVar15,uVar12,**(undefined4 **)(_UNK_010edfb0 + 0x10ed5f4));
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        iVar15 = *(int *)(iVar8 + 8);
        iVar9 = *(int *)(iVar9 + 0x28);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        uVar12 = *(undefined4 *)(iVar15 + 0xc);
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar9 + 0xc) == 0) {
          func_0x00f6b3d4();
          uVar16 = *(undefined4 *)(iVar9 + 0x10);
          if (*(int *)(iVar9 + 0xc) == 0) {
            func_0x00f6b3d4();
            iVar15 = -1;
          }
          else {
            iVar15 = *(int *)(iVar9 + 0xc) + -1;
          }
        }
        else {
          uVar16 = *(undefined4 *)(iVar9 + 0x10);
          iVar15 = *(int *)(iVar9 + 0xc) + -1;
        }
        iVar9 = func_0x018b5208(iVar9,uVar12,uVar16,*(undefined4 *)(iVar9 + iVar15 * 4 + 0x10),
                                **(undefined4 **)(_UNK_010edfb4 + 0x10ed768));
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        iVar15 = *(int *)(iVar8 + 8);
        iVar9 = *(int *)(iVar9 + 0x18);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        if (*(char *)(iVar15 + 0x10) != '\0') {
          if (iVar9 == 0) {
            func_0x00f6b3d0();
          }
          *(int *)(iVar9 + 0x20) = iVar9;
        }
      }
      iVar15 = *(int *)(iVar8 + 8);
      if (iVar9 == 0 || iVar15 == 0) {
LAB_010ed7cc:
        if (iVar15 == 0) goto LAB_010edf04;
      }
      else if (*(int *)(iVar15 + 0x1c) != *(int *)(iVar9 + 0x4c)) {
        func_0x010ee840();
        iVar15 = *(int *)(iVar8 + 8);
        goto LAB_010ed7cc;
      }
      iVar5 = *(int *)(param_1 + 0x40);
      iVar15 = *(int *)(iVar15 + 0x28);
      if (iVar5 == 0) {
        func_0x00f6b3d0();
      }
      iVar5 = func_0x03081f44(iVar5,0,0);
      if (iVar15 < iVar5) {
        iVar15 = *(int *)(iVar8 + 8);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        iVar5 = *(int *)(param_1 + 0x40);
        iVar15 = *(int *)(iVar15 + 0x2c);
        if (iVar5 == 0) {
          func_0x00f6b3d0();
        }
        iVar5 = func_0x03081f44(iVar5,1,0);
        if (iVar5 <= iVar15) goto LAB_010ed9e8;
        iVar17 = *(int *)(iVar8 + 8);
        iVar5 = *(int *)(param_1 + 0x40);
        iVar15 = iVar17;
        if (iVar17 == 0) {
          func_0x00f6b3d0();
          iVar15 = *(int *)(iVar8 + 8);
          if (iVar15 == 0) {
LAB_010edf04:
            func_0x00f6b3d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        uVar3 = *(uint *)(iVar15 + 0x2c);
        uVar2 = *(uint *)(iVar17 + 0x28);
        if (iVar5 == 0) {
          func_0x00f6b3d0();
        }
        puVar4 = *(uint **)(iVar5 + 8);
        if (*puVar4 <= uVar2) {
          func_0x00f6b3d4();
          puVar4 = *(uint **)(iVar5 + 8);
        }
        uVar10 = puVar4[2];
        if (uVar10 <= uVar3) {
          func_0x00f6b3d4();
        }
        iVar15 = *(int *)(iVar5 + (uVar10 * uVar2 + uVar3) * 4 + 0x10);
        if (*(int *)(**(int **)(_UNK_010edfb8 + 0x10ed8b0) + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar5 = func_0x02007e9c(iVar15,0,0);
        if (iVar5 != 0) {
          if (iVar9 == 0) {
            func_0x00f6b3d0();
          }
          iVar15 = *(int *)(iVar9 + 8);
          if (iVar15 == 0) {
            func_0x00f6b3d0();
          }
          uVar19 = *(undefined4 *)(iVar15 + 0x18);
          uVar12 = func_0x01119de8(iVar9,0);
          uVar18 = *(undefined4 *)(iVar9 + 0xb0);
          uVar20 = *(undefined4 *)(iVar9 + 0xb4);
          uVar13 = *(undefined4 *)(iVar9 + 0xb8);
          uVar16 = func_0x010eb448();
          if (*(int *)(**(int **)(_UNK_010edfbc + 0x10ed934) + 0x74) == 0) {
            func_0x00f6b294();
          }
          func_0x01138f78(uVar19,uVar12,uVar18,uVar20,uVar13,uVar16,1,0);
          iVar15 = *(int *)(param_2 + 0xc);
          if (iVar15 == 0) {
            func_0x00f6b3d0();
          }
          func_0x02c04564(iVar15,iVar1,**(undefined4 **)(_UNK_010edfc0 + 0x10ed990));
          uVar18 = *(undefined4 *)(iVar8 + 8);
          uVar13 = *(undefined4 *)(param_1 + 0x3c);
          uVar12 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010edfc4 + 0x10ed9b8));
          uVar16 = **(undefined4 **)(_UNK_010edfc8 + 0x10ed9d4);
          goto LAB_010edaec;
        }
        if (*(int *)(**(int **)(_UNK_010edfe0 + 0x10edb4c) + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar5 = func_0x01034b74(iVar15,0,0);
        if (iVar5 == 0) {
LAB_010edd04:
          func_0x010f0b2c(param_1,*(undefined4 *)(iVar8 + 8),iVar9,iVar15);
        }
        else {
          if (iVar15 == 0) {
            func_0x00f6b3d0();
          }
          uVar12 = *(undefined4 *)(iVar15 + 0x24);
          if (*(int *)(**(int **)(_UNK_010edfe4 + 0x10edb8c) + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar5 = func_0x01034b74(uVar12,0,0);
          if (iVar5 == 0) goto LAB_010edd04;
          uVar16 = VectorSignedToFloat(*(undefined4 *)(iVar15 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
          uVar12 = *(undefined4 *)(iVar15 + 0x24);
          uVar13 = VectorSignedToFloat(*(undefined4 *)(iVar15 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
          iVar15 = func_0x010f064c(param_1,uVar16,uVar13,iVar15);
          if (*(int *)(**(int **)(_UNK_010edfe8 + 0x10edbf4) + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar5 = func_0x01034b74(iVar15,0,0);
          if (iVar5 == 0) {
            if (iVar9 == 0) {
              func_0x00f6b3d0();
            }
            if (*(int *)(**(int **)(_UNK_010edffc + 0x10edd34) + 0x74) == 0) {
              func_0x00f6b294();
            }
            iVar15 = func_0x0150892c(iVar9 + 0xb0,0);
            if (iVar15 != 1) {
              if (iVar9 == 0) {
                func_0x00f6b3d0();
              }
              if (*(int *)(**(int **)(_UNK_010ee000 + 0x10edd74) + 0x74) == 0) {
                func_0x00f6b294();
              }
              iVar15 = func_0x0150892c(iVar9 + 0xb0,0);
              if (iVar15 != 2) {
                uVar16 = **(undefined4 **)(&LAB_010ede70 + _UNK_010ee010);
                goto LAB_010ede70;
              }
            }
            if (iVar9 == 0) {
              func_0x00f6b3d0();
            }
            iVar15 = *(int *)(iVar9 + 8);
            if (iVar15 == 0) {
              func_0x00f6b3d0();
            }
            uVar21 = *(undefined4 *)(iVar15 + 0x18);
            uVar16 = func_0x01119de8(iVar9,0);
            uVar20 = *(undefined4 *)(iVar9 + 0xb0);
            uVar19 = *(undefined4 *)(iVar9 + 0xb4);
            uVar18 = *(undefined4 *)(iVar9 + 0xb8);
            uVar13 = func_0x010eb448();
            if (*(int *)(**(int **)(_UNK_010ee004 + 0x10edde8) + 0x74) == 0) {
              func_0x00f6b294();
            }
            func_0x01138f78(uVar21,uVar16,uVar20,uVar19,uVar18,uVar13,1,0);
            iVar15 = *(int *)(param_2 + 0xc);
            uVar16 = **(undefined4 **)(_UNK_010ee008 + 0x10ede3c);
            if (iVar15 == 0) {
              func_0x00f6b3d0();
            }
            func_0x02c04564(iVar15,iVar1,**(undefined4 **)(_UNK_010ee00c + 0x10ede50));
          }
          else {
            iVar5 = *(int *)(param_2 + 0xc);
            if (iVar5 == 0) {
              func_0x00f6b3d0();
            }
            iVar5 = func_0x02c02900(iVar5,iVar1,**(undefined4 **)(_UNK_010edfec + 0x10edc38));
            if (iVar15 == 0) {
              func_0x00f6b3d0();
            }
            uVar16 = *(undefined4 *)(iVar15 + 0x14);
            uVar13 = *(undefined4 *)(iVar15 + 0x18);
            if (iVar5 == 0) {
              func_0x00f6b3d0();
            }
            *(undefined4 *)(iVar5 + 0x28) = uVar16;
            *(undefined4 *)(iVar5 + 0x2c) = uVar13;
            iVar17 = *(int *)(param_2 + 0xc);
            if (iVar17 == 0) {
              func_0x00f6b3d0();
            }
            func_0x02c0294c(iVar17,iVar1,iVar5,**(undefined4 **)(_UNK_010edff0 + 0x10edc98));
            func_0x010f0b2c(param_1,*(undefined4 *)(iVar8 + 8),iVar9,iVar15);
            uStack_30 = *(undefined4 *)(iVar15 + 0x14);
            uStack_2c = *(undefined4 *)(iVar15 + 0x18);
            uVar16 = func_0x010fdb74(&uStack_30,0,0,0);
            uVar16 = func_0x02ea9128(**(undefined4 **)(_UNK_010edff4 + 0x10edcec),uVar16,
                                     **(undefined4 **)(_UNK_010edff8 + 0x10edcf8),0);
          }
LAB_010ede70:
          uVar16 = func_0x02e99740(**(undefined4 **)(_UNK_010ee014 + 0x10ede84),uVar16,0);
          uVar19 = *(undefined4 *)(param_1 + 0x3c);
          uVar18 = *(undefined4 *)(iVar8 + 8);
          uVar13 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010ee018 + 0x10edea0));
          func_0x010fdce8(uVar13,uVar16,uVar12,iVar9,uVar19,uVar18,0);
          if (*(int *)(**(int **)(_UNK_010ee01c + 0x10eded8) + 0x74) == 0) {
            func_0x00f6b294();
          }
          func_0x0200818c(uVar13,0);
        }
      }
      else {
LAB_010ed9e8:
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        iVar15 = *(int *)(iVar9 + 8);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        uVar13 = *(undefined4 *)(iVar15 + 0x18);
        uVar12 = func_0x01119de8(iVar9,0);
        uVar18 = *(undefined4 *)(iVar9 + 0xb0);
        uVar19 = *(undefined4 *)(iVar9 + 0xb4);
        uVar20 = *(undefined4 *)(iVar9 + 0xb8);
        uVar16 = func_0x010eb448();
        if (*(int *)(**(int **)(_UNK_010edfcc + 0x10eda3c) + 0x74) == 0) {
          func_0x00f6b294();
        }
        func_0x01138f78(uVar13,uVar12,uVar18,uVar19,uVar20,uVar16,1,0);
        iVar15 = *(int *)(param_2 + 0xc);
        if (iVar15 == 0) {
          func_0x00f6b3d0();
        }
        func_0x02c04564(iVar15,iVar1,**(undefined4 **)(_UNK_010edfd0 + 0x10eda98));
        uVar18 = *(undefined4 *)(iVar8 + 8);
        uVar13 = *(undefined4 *)(param_1 + 0x3c);
        uVar12 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010edfd4 + 0x10edac4));
        uVar16 = **(undefined4 **)(_UNK_010edfd8 + 0x10edadc);
LAB_010edaec:
        func_0x010fdce8(uVar12,uVar16,0,iVar9,uVar13,uVar18,0);
        if (*(int *)(**(int **)(_UNK_010edfdc + 0x10edafc) + 0x74) == 0) {
          func_0x00f6b294();
        }
        func_0x0200818c(uVar12,0);
      }
    } while (0 < iVar1);
  }
  return;
}

