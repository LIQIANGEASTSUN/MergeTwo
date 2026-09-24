/* BoardItemChestSpawner.GetRandomItem VA=0x18C67C0 | public virtual SpawnedItem GetRandomItem() { } */

/* WARNING: Removing unreachable block (ram,0x0243edb4) */
/* WARNING: Removing unreachable block (ram,0x0243e314) */
/* WARNING: Removing unreachable block (ram,0x0243df0c) */
/* WARNING: Removing unreachable block (ram,0x0243e834) */
/* WARNING: Removing unreachable block (ram,0x0243f1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * BoardItemChestSpawner_GetRandomItem_18C67C0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int extraout_r2;
  uint uVar14;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int *piVar15;
  int *piVar16;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  code *pcVar17;
  char *pcVar18;
  code *pcVar19;
  code *pcVar20;
  int iVar21;
  int iVar22;
  int unaff_r7;
  uint unaff_r9;
  uint uVar23;
  uint unaff_r10;
  int iVar24;
  int *piVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int aiStack_190 [62];
  int iStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined8 uStack_88;
  code *pcStack_80;
  int *piStack_7c;
  char cStack_75;
  int *piStack_74;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_58;
  uint uStack_54;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar18 = (char *)(_UNK_018d68d8 + 0x18d67d8);
  if (*pcVar18 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d68dc + 0x18d67ec));
    func_0x0165b424(*(undefined4 *)(_UNK_018d68e0 + 0x18d67f8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d68e4 + 0x18d6804));
    func_0x0165b424(*(undefined4 *)(_UNK_018d68e8 + 0x18d6810));
    *pcVar18 = '\x01';
  }
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d68ec + 0x18d6824));
  func_0x026f769c(iVar3,0);
  uVar4 = func_0x026f8714(0,0x3f800000,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 8) = uVar4;
  iVar5 = func_0x018d66fc(param_1);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  piVar6 = (int *)func_0x0189610c(iVar5,0);
  iVar5 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d68f0 + 0x18d6894));
  func_0x026f8108(iVar5,iVar3,**(undefined4 **)(_UNK_018d68f4 + 0x18d68b0),0);
  iVar3 = **(int **)(_UNK_018d68f8 + 0x18d68c8);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243df20 + 0x243dba8));
    func_0x0165b424(*(undefined4 *)(iRam0243df24 + 0x243dbb4));
    if (*(int *)(iVar3 + 0x1c) == 0) {
      func_0x016cc90c(iVar3);
    }
  }
  if (piVar6 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243df28 + 0x243de34);
  }
  else {
    if (iVar5 != 0) {
      iVar11 = **(int **)(iVar3 + 0x1c);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x016cc8b0(iVar11);
      }
      iVar7 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar15[-1] == iVar11) {
            puVar8 = (undefined4 *)(iVar7 + *piVar15 * 8 + 0xc0);
            goto LAB_0243dc44;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar11,0);
LAB_0243dc44:
      piVar6 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
      piVar15 = *(int **)(iRam0243df30 + 0x243dc64);
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar11 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar16[-1] == *piVar15) {
              puVar8 = (undefined4 *)(iVar11 + *piVar16 * 8 + 0xc0);
              goto LAB_0243dcbc;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,*piVar15,0);
LAB_0243dcbc:
        iVar11 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar11 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          goto LAB_0243dd90;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar11 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x016cc8b0(iVar11);
        }
        iVar7 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar11) {
              puVar8 = (undefined4 *)(iVar7 + *piVar16 * 8 + 0xc0);
              goto LAB_0243dd4c;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar11,0);
LAB_0243dd4c:
        piVar16 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
        iVar11 = (**(code **)(iVar5 + 0xc))
                           (*(undefined4 *)(iVar5 + 0x20),piVar16,*(undefined4 *)(iVar5 + 0x14));
      } while (iVar11 == 0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243dd94;
    }
    uVar4 = *(undefined4 *)(iRam0243df2c + 0x243de40);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,iVar3);
  uVar27 = func_0x0165b3c4();
  uVar12 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar15 = (int *)func_0x017010e8(uVar12);
    iVar5 = *piVar15;
    iVar3 = 0;
    func_0x0171ece4();
LAB_0243dd90:
    piVar16 = (int *)0x0;
LAB_0243dd94:
    if (piVar6 != (int *)0x0) {
      iVar11 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar15[-1] == **(int **)(iRam0243df34 + 0x243ddac)) {
            puVar8 = (undefined4 *)(iVar11 + *piVar15 * 8 + 0xc0);
            goto LAB_0243ddf4;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243df34 + 0x243ddac),0);
LAB_0243ddf4:
      (*(code *)*puVar8)(piVar6,puVar8[1]);
    }
    if (iVar5 != 0) {
      func_0x0165b6dc(iVar5);
    }
    if (iVar3 == 0xb || iVar3 == 0) {
      piVar16 = (int *)0x0;
    }
    return piVar16;
  }
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    uVar13 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        unaff_r7 = piVar15[-1];
        if (unaff_r7 == **(int **)(iRam0243df38 + 0x243deac)) {
          puVar8 = (undefined4 *)(iVar5 + *piVar15 * 8 + 0xc0);
          goto LAB_0243def4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243df38 + 0x243deac),0);
LAB_0243def4:
    (*(code *)*puVar8)(piVar6,puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(uVar12);
  uVar27 = func_0x01178c80();
  piVar15 = (int *)((ulonglong)uVar27 >> 0x20);
  piVar16 = (int *)uVar27;
  uVar13 = extraout_r3;
  if ((bool)uVar26) {
    uVar13 = uVar12 | 0x800000;
    piVar6 = (int *)(uVar12 | 0x70000);
    unaff_r10 = uVar12 | 0x70014;
    unaff_r9 = uVar12 | 0x71300;
  }
  uStack_2c = 0;
  piStack_3c = piVar6;
  iStack_38 = iVar3;
  uStack_34 = uVar12;
  iStack_30 = unaff_r7;
  uStack_28 = unaff_r9;
  uStack_24 = unaff_r10;
  if (*(int *)(uVar13 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243e328 + 0x243df6c));
    func_0x0165b424(*(undefined4 *)(iRam0243e32c + 0x243df78));
    if (*(int *)(uVar13 + 0x1c) == 0) {
      func_0x016cc90c(uVar13);
    }
  }
  if (piVar15 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243e330 + 0x243e23c);
  }
  else {
    if (extraout_r2 != 0) {
      iVar3 = **(int **)(uVar13 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar15;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e00c;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243e00c:
      piVar15 = (int *)(*(code *)*puVar8)(piVar15,puVar8[1]);
      piVar25 = *(int **)(iRam0243e338 + 0x243e030);
      do {
        if (piVar15 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar15;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar12 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar25) {
              puVar8 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_0243e088;
            }
            uVar12 = uVar12 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar15,*piVar25,0);
LAB_0243e088:
        iVar3 = (*(code *)*puVar8)(piVar15,puVar8[1]);
        piStack_48 = piVar16;
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          piVar6 = (int *)0x0;
          goto LAB_0243e168;
        }
        if (piVar15 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar15;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
              goto LAB_0243e118;
            }
            uVar12 = uVar12 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243e118:
        (*(code *)*puVar8)(&iStack_44,piVar15,puVar8[1]);
        iVar7 = iStack_40;
        iVar11 = iStack_44;
        piVar6 = (int *)(**(code **)(extraout_r2 + 0xc))
                                  (*(undefined4 *)(extraout_r2 + 0x20),iStack_44,iStack_40,
                                   *(undefined4 *)(extraout_r2 + 0x14));
      } while (piVar6 == (int *)0x0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243e170;
    }
    uVar4 = *(undefined4 *)(iRam0243e334 + 0x243e248);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar13);
  uVar27 = func_0x0165b3c4();
  uVar12 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
    uVar23 = 0;
    if (piVar16 != (int *)0x0) {
      iVar3 = *piVar16;
      uVar14 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar14 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = piVar6[-1];
          if (unaff_r7 == **(int **)(iRam0243e340 + 0x243e2b4)) {
            puVar8 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e2fc;
          }
          uVar14 = uVar14 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243e340 + 0x243e2b4),0);
LAB_0243e2fc:
      (*(code *)*puVar8)(piVar16,puVar8[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar12);
    uStack_88 = func_0x01178c80();
    uVar14 = extraout_r3_00;
    if ((bool)uVar26) {
      piVar15 = (int *)(uVar12 | 0x5000000);
      uVar23 = uVar12 | 0x5110000;
      uVar14 = uVar12;
    }
    piStack_74 = (int *)**(int **)(iRam0243e848 + 0x243e36c);
    pcVar17 = *(code **)(uVar14 + 0x1c);
    uStack_90 = extraout_r2_00;
    piStack_6c = piVar15;
    piStack_68 = piVar16;
    uStack_64 = uVar12;
    iStack_60 = unaff_r7;
    uStack_58 = uVar23;
    uStack_54 = uVar13;
    if (pcVar17 == (code *)0x0) {
      func_0x0165b424(*(undefined4 *)(iRam0243e84c + 0x243e388));
      func_0x0165b424(*(undefined4 *)(iRam0243e850 + 0x243e394));
      pcVar17 = *(code **)(uVar14 + 0x1c);
      if (pcVar17 == (code *)0x0) {
        func_0x016cc90c(uVar14);
        pcVar17 = *(code **)(uVar14 + 0x1c);
      }
    }
    pcVar19 = *(code **)(*(int *)(pcVar17 + 0x14) + 0x84);
    uVar12 = (uint)(pcVar19 + 7) & 0xfffffff8;
    piVar16 = (int *)((int)&iStack_98 - uVar12);
    piVar6 = (int *)((int)piVar16 - uVar12);
    iVar3 = (int)piVar6 - uVar12;
    func_0x016fea2c(iVar3,pcVar19);
    piVar15 = (int *)(iVar3 - uVar12);
    piStack_8c = piVar15;
    func_0x016fea2c(piVar15,pcVar19);
    piVar15 = (int *)((int)piVar15 - uVar12);
    piStack_94 = piVar15;
    pcStack_80 = pcVar19;
    func_0x016fea2c(piVar15,pcVar19);
    pcVar19 = (code *)uStack_88;
    pcVar20 = (code *)uStack_88;
    if ((code *)uStack_88 == (code *)0x0) goto LAB_0243e754;
    if (uStack_88._4_4_ == 0) {
      uVar4 = *(undefined4 *)(iRam0243e858 + 0x243e76c);
      goto LAB_0243e768;
    }
    iVar5 = *(int *)pcVar17;
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x016cc8b0(iVar5);
    }
    iVar11 = *(int *)pcVar19;
    uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar12 != 0) {
      piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar25[-1] == iVar5) {
          puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e48c;
        }
        uVar12 = uVar12 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(pcVar19,iVar5,0);
LAB_0243e48c:
    pcVar17 = (code *)(*(code *)*puVar8)(pcVar19,puVar8[1]);
    iVar5 = 0;
    do {
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)pcVar17;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      pcVar20 = pcVar19;
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          pcVar20 = (code *)piVar25[-1];
          if (pcVar20 == (code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0)) {
            puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
            goto LAB_0243e508;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)
               func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0),0);
LAB_0243e508:
      iVar11 = (*(code *)*puVar8)(pcVar17,puVar8[1]);
      if (iVar11 == 0) {
        uVar14 = 0xb;
        piVar6 = piStack_8c;
        goto LAB_0243e668;
      }
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)(*(int *)(uVar14 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x016cc8b0(iVar11);
      }
      iVar7 = *(int *)pcVar17;
      uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar25[-1] == iVar11) {
            iVar11 = iVar7 + *piVar25 * 8 + 0xc0;
            goto LAB_0243e598;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      iVar11 = func_0x016cc99c(pcVar17,iVar11,0);
LAB_0243e598:
      iVar11 = *(int *)(iVar11 + 4);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      pcVar19 = *(code **)(iVar11 + 8);
      piStack_7c = piVar16;
      piVar15[-2] = (int)piVar16;
      (*pcVar19)(uVar4,iVar11,pcVar17,&piStack_7c);
      pcVar19 = pcStack_80;
      func_0x016fea14(iVar3,piVar16,pcStack_80);
      func_0x016fea14(piVar6,iVar3,pcVar19);
      puVar8 = *(undefined4 **)(*(int *)(uVar14 + 0x1c) + 0x18);
      piStack_7c = piVar6;
      if (-1 < *(int *)(*(int *)(*(int *)(uVar14 + 0x1c) + 0x14) + 0x14)) {
        piStack_7c = (int *)*piVar6;
      }
      uVar4 = *puVar8;
      pcVar19 = (code *)puVar8[2];
      piVar15[-2] = (int)&cStack_75;
      (*pcVar19)(uVar4,puVar8,uStack_88._4_4_,&piStack_7c);
      pcVar20 = pcStack_80;
    } while (cStack_75 == '\0');
    func_0x016fea14(piVar16,iVar3,pcStack_80);
    piVar6 = piStack_8c;
    func_0x016fea14(piStack_8c,piVar16,pcVar20);
    uVar14 = 10;
LAB_0243e668:
    do {
      if (pcVar17 != (code *)0x0) {
        iVar11 = *(int *)pcVar17;
        uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar12 != 0) {
          piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            pcVar20 = (code *)piVar25[-1];
            if (pcVar20 == (code *)**(undefined4 **)(iRam0243e860 + 0x243e680)) {
              puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
              goto LAB_0243e6c8;
            }
            uVar12 = uVar12 - 1;
            piVar25 = piVar25 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)
                 func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e860 + 0x243e680),0);
LAB_0243e6c8:
        (*(code *)*puVar8)(pcVar17,puVar8[1]);
      }
      if (iVar5 != 0) {
        func_0x0165b6dc(iVar5);
      }
      piVar25 = piStack_94;
      if (uVar14 == 0xb) {
LAB_0243e700:
        func_0x016fea2c(piStack_94,pcStack_80);
        piVar6 = piVar25;
LAB_0243e710:
        pcVar17 = pcStack_80;
        func_0x016fea14(piVar16,piVar6,pcStack_80);
        func_0x016fea14(uStack_90,piVar16,pcVar17);
      }
      else {
        if (uVar14 == 10) goto LAB_0243e710;
        if (uVar14 == 0) goto LAB_0243e700;
      }
      if ((int *)**(int **)(iRam0243e864 + 0x243e740) == piStack_74) {
        return (int *)**(int **)(iRam0243e864 + 0x243e740);
      }
      func_0x017015a8();
LAB_0243e754:
      uVar4 = *(undefined4 *)(iRam0243e854 + 0x243e760);
LAB_0243e768:
      uVar4 = func_0x0165b434(uVar4);
      uVar4 = func_0x026fd688(uVar4,0);
      func_0x0165b590(uVar4,uVar14);
      uVar27 = func_0x0165b3c4();
      iVar5 = (int)uVar27;
      if ((int)((ulonglong)uVar27 >> 0x20) != 1) goto LAB_0243e7bc;
      piVar6 = (int *)func_0x017010e8(iVar5);
      iVar5 = *piVar6;
      uVar14 = 0;
      func_0x0171ece4();
      piVar6 = piStack_8c;
    } while( true );
  }
  piVar6 = (int *)func_0x017010e8(uVar12);
  iVar5 = *piVar6;
  iVar3 = 0;
  piVar6 = (int *)func_0x0171ece4();
  piVar15 = piVar16;
LAB_0243e168:
  iVar7 = 0;
  iVar11 = 0;
LAB_0243e170:
  if (piVar15 != (int *)0x0) {
    iVar9 = *piVar15;
    uVar12 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar12 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(iRam0243e33c + 0x243e188)) {
          puVar8 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
          goto LAB_0243e1d0;
        }
        uVar12 = uVar12 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar15,**(int **)(iRam0243e33c + 0x243e188),0);
LAB_0243e1d0:
    piVar6 = (int *)(*(code *)*puVar8)(piVar15,puVar8[1]);
  }
  if (iVar5 != 0) {
    piVar6 = (int *)func_0x0165b6dc(iVar5);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      *piStack_48 = iVar11;
      piStack_48[1] = iVar7;
      return piStack_48;
    }
    if (iVar3 != 0) {
      return piVar6;
    }
  }
  *piStack_48 = 0;
  piStack_48[1] = 0;
  return (int *)0x0;
LAB_0243e7bc:
  if (pcVar17 != (code *)0x0) {
    iVar11 = *(int *)pcVar17;
    uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar12 != 0) {
      piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        piVar16 = (int *)piVar25[-1];
        if (piVar16 == (int *)**(uint **)(iRam0243e868 + 0x243e7d4)) {
          puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e81c;
        }
        uVar12 = uVar12 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(pcVar17,(int *)**(uint **)(iRam0243e868 + 0x243e7d4),0);
LAB_0243e81c:
    (*(code *)*puVar8)(pcVar17,puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar5);
  uVar27 = func_0x01178c80();
  piVar25 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar23 = (uint)uVar27;
  uVar12 = extraout_r3_01;
  uVar13 = extraout_r2_01;
  if ((bool)uVar26) {
    uVar13 = (uint)piVar16 | 0xdc00;
    uVar12 = (uint)piVar16 | 0x3c0;
    piVar25 = (int *)((uint)pcVar20 | 0x70000);
    piVar6 = (int *)((uint)pcVar17 | 0x24000000);
  }
  piVar15[-1] = 0x243e848;
  piVar15[-2] = (int)&stack0xffffffb0;
  piVar15[-3] = iVar3;
  piVar15[-4] = (int)piVar6;
  piVar15[-5] = 0;
  piVar15[-6] = iVar5;
  piVar15[-7] = (int)piVar16;
  piVar15[-8] = (int)pcVar20;
  piVar15[-9] = (int)pcVar17;
  iVar11 = *(int *)(uVar12 + 0x1c);
  piVar15[-0x16] = uVar13;
  if (iVar11 == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243edc8 + 0x243e89c));
    func_0x0165b424(*(undefined4 *)(iRam0243edcc + 0x243e8a8));
    if (*(int *)(uVar12 + 0x1c) == 0) {
      func_0x016cc90c(uVar12);
    }
  }
  if (piVar25 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243edd0 + 0x243ec88);
  }
  else {
    if (piVar15[-0x16] != 0) {
      iVar3 = **(int **)(uVar12 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar25;
      piVar15[-0x1f] = uVar23;
      piVar15[-0x18] = uVar12;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e944;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar25,iVar3,0);
LAB_0243e944:
      piVar6 = (int *)(*(code *)*puVar8)(piVar25,puVar8[1]);
      piVar15[-0x17] = (int)piVar6;
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar5 = piVar15[-0x18];
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar16[-1] == **(int **)(iRam0243edd8 + 0x243e978)) {
              puVar8 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
              goto LAB_0243e9c4;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243edd8 + 0x243e978),0);
LAB_0243e9c4:
        iVar3 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar3 == 0) {
          iVar3 = 0;
          piVar15[-0x19] = 0;
          piVar15[-0x1a] = 0;
          piVar15[-0x1b] = 0;
          piVar15[-0x15] = 0;
          piVar15[-0x1c] = 0;
          iVar9 = 0xb;
          iVar5 = 0;
          iVar11 = 0;
          iVar24 = 0;
          iVar21 = 0;
          iVar7 = 0;
          piVar15[-0x1d] = 0;
          goto LAB_0243eb70;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(iVar5 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar16 * 8 + 0xc0);
              goto LAB_0243ea54;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar3,0);
LAB_0243ea54:
        (*(code *)*puVar8)(piVar15 + -0x14,piVar6,puVar8[1]);
        iVar3 = piVar15[-0x16];
        iVar24 = piVar15[-0xc];
        iVar11 = piVar15[-0xb];
        iVar9 = *(int *)(iVar3 + 0x14);
        uVar4 = *(undefined4 *)(iVar3 + 0x20);
        iVar21 = piVar15[-0x10];
        iVar7 = piVar15[-0x12];
        iVar5 = piVar15[-10];
        piVar15[-0x15] = *(int *)(iVar3 + 0xc);
        piVar15[-0x27] = iVar21;
        piVar15[-0x26] = piVar15[-0xf];
        piVar15[-0x1e] = piVar15[-0x11];
        piVar15[-0x28] = piVar15[-0x11];
        piVar15[-0x1a] = piVar15[-0xe];
        piVar15[-0x25] = piVar15[-0xe];
        piVar15[-0x19] = piVar15[-0xd];
        piVar15[-0x24] = piVar15[-0xd];
        piVar15[-0x20] = iVar9;
        piVar15[-0x1b] = piVar15[-0xf];
        piVar15[-0x23] = iVar24;
        piVar15[-0x22] = iVar11;
        piVar15[-0x21] = iVar5;
        piVar15[-0x1d] = piVar15[-0x14];
        piVar15[-0x1c] = piVar15[-0x13];
        iVar3 = (*(code *)piVar15[-0x15])(uVar4,piVar15[-0x14],piVar15[-0x13],iVar7);
        piVar6 = (int *)piVar15[-0x17];
      } while (iVar3 == 0);
      iVar9 = 10;
      iVar3 = 0;
      piVar15[-0x15] = iVar21;
      iVar21 = piVar15[-0x1e];
      goto LAB_0243eb70;
    }
    uVar4 = *(undefined4 *)(iRam0243edd4 + 0x243ec94);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar12);
  uVar27 = func_0x0165b3c4();
  iVar11 = (int)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar6 = (int *)func_0x017010e8(iVar11);
    iVar3 = *piVar6;
    func_0x0171ece4();
    piVar6 = (int *)piVar15[-0x17];
    piVar15[-0x19] = 0;
    piVar15[-0x1a] = 0;
    piVar15[-0x1b] = 0;
    piVar15[-0x15] = 0;
    piVar15[-0x1c] = 0;
    piVar15[-0x1d] = 0;
    iVar5 = 0;
    iVar11 = 0;
    iVar24 = 0;
    iVar21 = 0;
    iVar7 = 0;
    iVar9 = 0;
LAB_0243eb70:
    if (piVar6 != (int *)0x0) {
      iVar10 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(iRam0243eddc + 0x243eb8c)) {
            iVar22 = piVar15[-0x17];
            puVar8 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
            goto LAB_0243ebdc;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      iVar22 = piVar15[-0x17];
      puVar8 = (undefined4 *)func_0x016cc99c(iVar22,**(int **)(iRam0243eddc + 0x243eb8c),0);
LAB_0243ebdc:
      (*(code *)*puVar8)(iVar22,puVar8[1]);
    }
    piVar6 = (int *)0x0;
    if (iVar3 != 0) {
      piVar6 = (int *)func_0x0165b6dc();
    }
    if (iVar9 != 0xb) {
      if (iVar9 == 10) {
        piVar6 = (int *)piVar15[-0x1f];
        *piVar6 = piVar15[-0x1d];
        iVar3 = piVar15[-0x1c];
        piVar6[8] = iVar24;
        piVar6[1] = iVar3;
        piVar6[2] = iVar7;
        piVar6[3] = iVar21;
        piVar6[4] = piVar15[-0x15];
        piVar6[5] = piVar15[-0x1b];
        piVar6[6] = piVar15[-0x1a];
        iVar3 = piVar15[-0x19];
        piVar6[9] = iVar11;
        piVar6[10] = iVar5;
        piVar6[7] = iVar3;
        return piVar6;
      }
      if (iVar9 != 0) {
        return piVar6;
      }
    }
    puVar8 = (undefined4 *)piVar15[-0x1f];
    uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *puVar8 = 0;
    puVar8[1] = uVar4;
    puVar8[2] = uVar1;
    puVar8[3] = uVar2;
    puVar8[7] = 0;
    puVar8[8] = uVar4;
    puVar8[9] = uVar1;
    puVar8[10] = uVar2;
    puVar8[4] = 0;
    puVar8[5] = uVar4;
    puVar8[6] = uVar1;
    puVar8[7] = uVar2;
    return (int *)0x1c;
  }
  if (piVar15[-0x17] != 0) {
    iVar7 = *(int *)piVar15[-0x17];
    uVar13 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        iVar5 = piVar16[-1];
        if (iVar5 == **(int **)(iRam0243ede0 + 0x243ed54)) {
          puVar8 = (undefined4 *)(iVar7 + *piVar16 * 8 + 0xc0);
          goto LAB_0243ed9c;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar15[-0x17],**(int **)(iRam0243ede0 + 0x243ed54),0);
LAB_0243ed9c:
    (*(code *)*puVar8)(piVar15[-0x17],puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar11);
  uVar27 = func_0x01178c80();
  piVar16 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar13 = extraout_r3_02;
  uVar14 = extraout_r2_02;
  if ((bool)uVar26) {
    uVar14 = uVar12 | 0x2d00000;
    uVar13 = uVar12 | 0xc8000;
    piVar6 = (int *)0x6c;
    uVar23 = 0xa40;
  }
  piVar15[-0x29] = 0x243edc8;
  piVar15[-0x2a] = (int)&stack0xffffffb0;
  piVar15[-0x2b] = iVar3;
  piVar15[-0x2c] = (int)piVar6;
  piVar15[-0x2d] = uVar23;
  piVar15[-0x2e] = iVar5;
  piVar15[-0x2f] = uVar12;
  piVar15[-0x30] = iVar11;
  piVar15[-0x31] = 0;
  if (*(int *)(uVar13 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243f1e4 + 0x243ee14));
    func_0x0165b424(*(undefined4 *)(iRam0243f1e8 + 0x243ee20));
    if (*(int *)(uVar13 + 0x1c) == 0) {
      func_0x016cc90c(uVar13);
    }
  }
  if (piVar16 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243f1ec + 0x243f0f8);
  }
  else {
    if (uVar14 != 0) {
      piVar6 = *(int **)(uVar13 + 0x1c);
      piVar15[-0x35] = (int)uVar27;
      iVar3 = *piVar6;
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar16;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243eeb4;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar16,iVar3,0);
LAB_0243eeb4:
      piVar6 = (int *)(*(code *)*puVar8)(piVar16,puVar8[1]);
      piVar25 = *(int **)(iRam0243f1f4 + 0x243eed4);
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar16[-1] == *piVar25) {
              puVar8 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
              goto LAB_0243ef2c;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,*piVar25,0);
LAB_0243ef2c:
        iVar3 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          piVar16 = (int *)0x0;
          goto LAB_0243f018;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar16 * 8 + 0xc0);
              goto LAB_0243efbc;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar3,0);
LAB_0243efbc:
        (*(code *)*puVar8)(piVar15 + -0x34,piVar6,puVar8[1]);
        iVar9 = piVar15[-0x34];
        iVar7 = piVar15[-0x33];
        iVar11 = piVar15[-0x32];
        uVar4 = *(undefined4 *)(uVar14 + 0x20);
        pcVar17 = *(code **)(uVar14 + 0xc);
        piVar15[-0x36] = *(undefined4 *)(uVar14 + 0x14);
        piVar16 = (int *)(*pcVar17)(uVar4,iVar9,iVar7,iVar11);
      } while (piVar16 == (int *)0x0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243f024;
    }
    uVar4 = *(undefined4 *)(iRam0243f1f0 + 0x243f104);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar13);
  uVar28 = func_0x0165b3c4();
  uVar12 = (uint)uVar28;
  if ((int)((ulonglong)uVar28 >> 0x20) != 1) {
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      uVar13 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar13 != 0) {
        piVar25 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          iVar5 = piVar25[-1];
          if (iVar5 == **(int **)(iRam0243f1fc + 0x243f170)) {
            puVar8 = (undefined4 *)(iVar3 + *piVar25 * 8 + 0xc0);
            goto LAB_0243f1b8;
          }
          uVar13 = uVar13 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243f1fc + 0x243f170),0);
LAB_0243f1b8:
      (*(code *)*puVar8)(piVar6,puVar8[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar12);
    uVar28 = func_0x01178c80();
    uVar13 = extraout_r2_03;
    if ((bool)uVar26) {
      uVar13 = uVar12 | 0x10000001;
      uVar23 = (uint)piVar16 | 0x88000;
    }
    piVar15[-0x37] = 0x243f1e4;
    piVar15[-0x38] = uVar23;
    piVar15[-0x39] = iVar5;
    piVar15[-0x3a] = uVar12;
    piVar15[-0x3b] = (int)uVar27;
    piVar15[-0x3c] = (int)piVar16;
    iVar3 = *(int *)(uVar13 + 0x1c);
    if (iVar3 == 0) {
      func_0x016cc90c(uVar13);
      iVar3 = *(int *)(uVar13 + 0x1c);
    }
    uVar4 = func_0x02852564(*(undefined4 *)(iVar3 + 8));
    if ((*(ushort *)(*(int *)(*(int *)(uVar13 + 0x1c) + 0x14) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    piVar6 = (int *)func_0x0165b6d4();
    iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0x18);
    piVar15[-0x3e] = 0;
    piVar15[-0x3d] = iVar3;
    func_0x02804be0(piVar6,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar4);
    return piVar6;
  }
  piVar16 = (int *)func_0x017010e8(uVar12);
  iVar5 = *piVar16;
  iVar3 = 0;
  piVar16 = (int *)func_0x0171ece4();
LAB_0243f018:
  iVar11 = 0;
  iVar7 = 0;
  iVar9 = 0;
LAB_0243f024:
  if (piVar6 != (int *)0x0) {
    iVar24 = *piVar6;
    uVar12 = (uint)*(ushort *)(iVar24 + 0xb6);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(int *)(iVar24 + 0x58) + 4);
      do {
        if (piVar16[-1] == **(int **)(iRam0243f1f8 + 0x243f03c)) {
          puVar8 = (undefined4 *)(iVar24 + *piVar16 * 8 + 0xc0);
          goto LAB_0243f084;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243f1f8 + 0x243f03c),0);
LAB_0243f084:
    piVar16 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
  }
  if (iVar5 != 0) {
    piVar16 = (int *)func_0x0165b6dc(iVar5);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      piVar6 = (int *)piVar15[-0x35];
      *piVar6 = iVar9;
      piVar6[1] = iVar7;
      piVar6[2] = iVar11;
      return piVar6;
    }
    if (iVar3 != 0) {
      return piVar16;
    }
  }
  puVar8 = (undefined4 *)piVar15[-0x35];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  return (int *)0x0;
}


/* BoardItemChestSpawner.IsMergeable VA=0x18C732C | public override bool IsMergeable(IItemRuntimeData itself, IItemRuntimeData other) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint BoardItemChestSpawner_IsMergeable_18C732C(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  
  pcVar8 = (char *)(_UNK_018d7638 + 0x18d7344);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d763c + 0x18d7358));
    func_0x0165b424(*(undefined4 *)(_UNK_018d7640 + 0x18d7364));
    *pcVar8 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *param_2;
  piVar9 = *(int **)(_UNK_018d7644 + 0x18d7388);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar3 = *piVar9;
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_018d73d0;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_2,iVar3,0);
LAB_018d73d0:
  piVar6 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  if (param_3 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *param_3;
  iVar3 = *piVar9;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
        goto LAB_018d7440;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_3,iVar3,0);
LAB_018d7440:
  piVar9 = (int *)(*(code *)*puVar2)(param_3,puVar2[1]);
  if (piVar6 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *piVar6;
  piVar10 = *(int **)(_UNK_018d7648 + 0x18d7470);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xe8);
        goto LAB_018d74b8;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar10,5);
LAB_018d74b8:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  uVar4 = 0;
  if (iVar1 == 0) {
    if (piVar9 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xe8);
          goto LAB_018d7530;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar9,*piVar10,5);
LAB_018d7530:
    iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar1 == 0) {
      if (piVar6 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar1 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xf0);
            goto LAB_018d75a4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar10,6);
LAB_018d75a4:
      iVar1 = (*(code *)*puVar2)(piVar6,piVar9,puVar2[1]);
      if (iVar1 != 0) {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar1 = *piVar6;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar10) {
              puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xd0);
              goto LAB_018d761c;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar10,2);
LAB_018d761c:
        uVar4 = (*(code *)*puVar2)(piVar6,puVar2[1]);
        uVar4 = uVar4 ^ 1;
      }
    }
  }
  return uVar4;
}


/* BoardItemChestSpawner.IsMergeable VA=0x18C764C | public override bool IsMergeable(IItemRuntimeData itself) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemChestSpawner_IsMergeable_18C764C(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_018d7780 + 0x18d7660);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d7784 + 0x18d7674));
    func_0x0165b424(*(undefined4 *)(_UNK_018d7788 + 0x18d7680));
    *pcVar6 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_018d778c + 0x18d76a4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_018d76ec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_2,**(int **)(_UNK_018d778c + 0x18d76a4),0);
LAB_018d76ec:
  piVar4 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  if (piVar4 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *piVar4;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_018d7790 + 0x18d771c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_018d7764;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar4,**(int **)(_UNK_018d7790 + 0x18d771c),5);
LAB_018d7764:
  iVar1 = (*(code *)*puVar2)(piVar4,puVar2[1]);
  return iVar1 == 0;
}


/* BoardItemChestSpawner.IsMergeable VA=0x18C7794 | public override bool IsMergeable(IItemEntity itemEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemChestSpawner_IsMergeable_18C7794(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_018d7844 + 0x18d77a8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d7848 + 0x18d77bc));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_018d784c + 0x18d77e0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xe8);
        goto LAB_018d7828;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_2,**(int **)(_UNK_018d784c + 0x18d77e0),5);
LAB_018d7828:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  return iVar1 == 0;
}


/* BoardItemSpawnerData.GetRandomItem VA=0x18C7E90 | public SpawnedItem GetRandomItem() { } */

/* WARNING: Removing unreachable block (ram,0x0243edb4) */
/* WARNING: Removing unreachable block (ram,0x0243e314) */
/* WARNING: Removing unreachable block (ram,0x0243df0c) */
/* WARNING: Removing unreachable block (ram,0x0243e834) */
/* WARNING: Removing unreachable block (ram,0x0243f1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * BoardItemSpawnerData_GetRandomItem_18C7E90(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int extraout_r2;
  uint uVar14;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int *piVar15;
  int *piVar16;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  code *pcVar17;
  char *pcVar18;
  code *pcVar19;
  code *pcVar20;
  int iVar21;
  int iVar22;
  int unaff_r7;
  uint unaff_r9;
  uint uVar23;
  uint unaff_r10;
  int iVar24;
  int *piVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int aiStack_190 [62];
  int iStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined8 uStack_88;
  code *pcStack_80;
  int *piStack_7c;
  char cStack_75;
  int *piStack_74;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_58;
  uint uStack_54;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar18 = (char *)(_UNK_018d7fa4 + 0x18d7ea8);
  if (*pcVar18 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d7fa8 + 0x18d7ebc));
    func_0x0165b424(*(undefined4 *)(_UNK_018d7fac + 0x18d7ec8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d7fb0 + 0x18d7ed4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d7fb4 + 0x18d7ee0));
    *pcVar18 = '\x01';
  }
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d7fb8 + 0x18d7ef4));
  func_0x026f769c(iVar3,0);
  uVar4 = func_0x026f8714(0,0x3f800000,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 8) = uVar4;
  iVar5 = func_0x018d6300(param_1);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  piVar6 = (int *)func_0x018d09b0(iVar5);
  iVar5 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d7fbc + 0x18d7f60));
  func_0x026f8108(iVar5,iVar3,**(undefined4 **)(_UNK_018d7fc0 + 0x18d7f7c),0);
  iVar3 = **(int **)(_UNK_018d7fc4 + 0x18d7f94);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243df20 + 0x243dba8));
    func_0x0165b424(*(undefined4 *)(iRam0243df24 + 0x243dbb4));
    if (*(int *)(iVar3 + 0x1c) == 0) {
      func_0x016cc90c(iVar3);
    }
  }
  if (piVar6 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243df28 + 0x243de34);
  }
  else {
    if (iVar5 != 0) {
      iVar11 = **(int **)(iVar3 + 0x1c);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x016cc8b0(iVar11);
      }
      iVar7 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar15[-1] == iVar11) {
            puVar8 = (undefined4 *)(iVar7 + *piVar15 * 8 + 0xc0);
            goto LAB_0243dc44;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar11,0);
LAB_0243dc44:
      piVar6 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
      piVar15 = *(int **)(iRam0243df30 + 0x243dc64);
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar11 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar16[-1] == *piVar15) {
              puVar8 = (undefined4 *)(iVar11 + *piVar16 * 8 + 0xc0);
              goto LAB_0243dcbc;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,*piVar15,0);
LAB_0243dcbc:
        iVar11 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar11 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          goto LAB_0243dd90;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar11 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x016cc8b0(iVar11);
        }
        iVar7 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar11) {
              puVar8 = (undefined4 *)(iVar7 + *piVar16 * 8 + 0xc0);
              goto LAB_0243dd4c;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar11,0);
LAB_0243dd4c:
        piVar16 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
        iVar11 = (**(code **)(iVar5 + 0xc))
                           (*(undefined4 *)(iVar5 + 0x20),piVar16,*(undefined4 *)(iVar5 + 0x14));
      } while (iVar11 == 0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243dd94;
    }
    uVar4 = *(undefined4 *)(iRam0243df2c + 0x243de40);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,iVar3);
  uVar27 = func_0x0165b3c4();
  uVar12 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar15 = (int *)func_0x017010e8(uVar12);
    iVar5 = *piVar15;
    iVar3 = 0;
    func_0x0171ece4();
LAB_0243dd90:
    piVar16 = (int *)0x0;
LAB_0243dd94:
    if (piVar6 != (int *)0x0) {
      iVar11 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar15[-1] == **(int **)(iRam0243df34 + 0x243ddac)) {
            puVar8 = (undefined4 *)(iVar11 + *piVar15 * 8 + 0xc0);
            goto LAB_0243ddf4;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243df34 + 0x243ddac),0);
LAB_0243ddf4:
      (*(code *)*puVar8)(piVar6,puVar8[1]);
    }
    if (iVar5 != 0) {
      func_0x0165b6dc(iVar5);
    }
    if (iVar3 == 0xb || iVar3 == 0) {
      piVar16 = (int *)0x0;
    }
    return piVar16;
  }
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    uVar13 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        unaff_r7 = piVar15[-1];
        if (unaff_r7 == **(int **)(iRam0243df38 + 0x243deac)) {
          puVar8 = (undefined4 *)(iVar5 + *piVar15 * 8 + 0xc0);
          goto LAB_0243def4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243df38 + 0x243deac),0);
LAB_0243def4:
    (*(code *)*puVar8)(piVar6,puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(uVar12);
  uVar27 = func_0x01178c80();
  piVar15 = (int *)((ulonglong)uVar27 >> 0x20);
  piVar16 = (int *)uVar27;
  uVar13 = extraout_r3;
  if ((bool)uVar26) {
    uVar13 = uVar12 | 0x800000;
    piVar6 = (int *)(uVar12 | 0x70000);
    unaff_r10 = uVar12 | 0x70014;
    unaff_r9 = uVar12 | 0x71300;
  }
  uStack_2c = 0;
  piStack_3c = piVar6;
  iStack_38 = iVar3;
  uStack_34 = uVar12;
  iStack_30 = unaff_r7;
  uStack_28 = unaff_r9;
  uStack_24 = unaff_r10;
  if (*(int *)(uVar13 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243e328 + 0x243df6c));
    func_0x0165b424(*(undefined4 *)(iRam0243e32c + 0x243df78));
    if (*(int *)(uVar13 + 0x1c) == 0) {
      func_0x016cc90c(uVar13);
    }
  }
  if (piVar15 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243e330 + 0x243e23c);
  }
  else {
    if (extraout_r2 != 0) {
      iVar3 = **(int **)(uVar13 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar15;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e00c;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243e00c:
      piVar15 = (int *)(*(code *)*puVar8)(piVar15,puVar8[1]);
      piVar25 = *(int **)(iRam0243e338 + 0x243e030);
      do {
        if (piVar15 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar15;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar12 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar25) {
              puVar8 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_0243e088;
            }
            uVar12 = uVar12 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar15,*piVar25,0);
LAB_0243e088:
        iVar3 = (*(code *)*puVar8)(piVar15,puVar8[1]);
        piStack_48 = piVar16;
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          piVar6 = (int *)0x0;
          goto LAB_0243e168;
        }
        if (piVar15 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar15;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
              goto LAB_0243e118;
            }
            uVar12 = uVar12 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243e118:
        (*(code *)*puVar8)(&iStack_44,piVar15,puVar8[1]);
        iVar7 = iStack_40;
        iVar11 = iStack_44;
        piVar6 = (int *)(**(code **)(extraout_r2 + 0xc))
                                  (*(undefined4 *)(extraout_r2 + 0x20),iStack_44,iStack_40,
                                   *(undefined4 *)(extraout_r2 + 0x14));
      } while (piVar6 == (int *)0x0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243e170;
    }
    uVar4 = *(undefined4 *)(iRam0243e334 + 0x243e248);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar13);
  uVar27 = func_0x0165b3c4();
  uVar12 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
    uVar23 = 0;
    if (piVar16 != (int *)0x0) {
      iVar3 = *piVar16;
      uVar14 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar14 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = piVar6[-1];
          if (unaff_r7 == **(int **)(iRam0243e340 + 0x243e2b4)) {
            puVar8 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e2fc;
          }
          uVar14 = uVar14 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243e340 + 0x243e2b4),0);
LAB_0243e2fc:
      (*(code *)*puVar8)(piVar16,puVar8[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar12);
    uStack_88 = func_0x01178c80();
    uVar14 = extraout_r3_00;
    if ((bool)uVar26) {
      piVar15 = (int *)(uVar12 | 0x5000000);
      uVar23 = uVar12 | 0x5110000;
      uVar14 = uVar12;
    }
    piStack_74 = (int *)**(int **)(iRam0243e848 + 0x243e36c);
    pcVar17 = *(code **)(uVar14 + 0x1c);
    uStack_90 = extraout_r2_00;
    piStack_6c = piVar15;
    piStack_68 = piVar16;
    uStack_64 = uVar12;
    iStack_60 = unaff_r7;
    uStack_58 = uVar23;
    uStack_54 = uVar13;
    if (pcVar17 == (code *)0x0) {
      func_0x0165b424(*(undefined4 *)(iRam0243e84c + 0x243e388));
      func_0x0165b424(*(undefined4 *)(iRam0243e850 + 0x243e394));
      pcVar17 = *(code **)(uVar14 + 0x1c);
      if (pcVar17 == (code *)0x0) {
        func_0x016cc90c(uVar14);
        pcVar17 = *(code **)(uVar14 + 0x1c);
      }
    }
    pcVar19 = *(code **)(*(int *)(pcVar17 + 0x14) + 0x84);
    uVar12 = (uint)(pcVar19 + 7) & 0xfffffff8;
    piVar16 = (int *)((int)&iStack_98 - uVar12);
    piVar6 = (int *)((int)piVar16 - uVar12);
    iVar3 = (int)piVar6 - uVar12;
    func_0x016fea2c(iVar3,pcVar19);
    piVar15 = (int *)(iVar3 - uVar12);
    piStack_8c = piVar15;
    func_0x016fea2c(piVar15,pcVar19);
    piVar15 = (int *)((int)piVar15 - uVar12);
    piStack_94 = piVar15;
    pcStack_80 = pcVar19;
    func_0x016fea2c(piVar15,pcVar19);
    pcVar19 = (code *)uStack_88;
    pcVar20 = (code *)uStack_88;
    if ((code *)uStack_88 == (code *)0x0) goto LAB_0243e754;
    if (uStack_88._4_4_ == 0) {
      uVar4 = *(undefined4 *)(iRam0243e858 + 0x243e76c);
      goto LAB_0243e768;
    }
    iVar5 = *(int *)pcVar17;
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x016cc8b0(iVar5);
    }
    iVar11 = *(int *)pcVar19;
    uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar12 != 0) {
      piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar25[-1] == iVar5) {
          puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e48c;
        }
        uVar12 = uVar12 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(pcVar19,iVar5,0);
LAB_0243e48c:
    pcVar17 = (code *)(*(code *)*puVar8)(pcVar19,puVar8[1]);
    iVar5 = 0;
    do {
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)pcVar17;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      pcVar20 = pcVar19;
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          pcVar20 = (code *)piVar25[-1];
          if (pcVar20 == (code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0)) {
            puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
            goto LAB_0243e508;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)
               func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0),0);
LAB_0243e508:
      iVar11 = (*(code *)*puVar8)(pcVar17,puVar8[1]);
      if (iVar11 == 0) {
        uVar14 = 0xb;
        piVar6 = piStack_8c;
        goto LAB_0243e668;
      }
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)(*(int *)(uVar14 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x016cc8b0(iVar11);
      }
      iVar7 = *(int *)pcVar17;
      uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar25[-1] == iVar11) {
            iVar11 = iVar7 + *piVar25 * 8 + 0xc0;
            goto LAB_0243e598;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      iVar11 = func_0x016cc99c(pcVar17,iVar11,0);
LAB_0243e598:
      iVar11 = *(int *)(iVar11 + 4);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      pcVar19 = *(code **)(iVar11 + 8);
      piStack_7c = piVar16;
      piVar15[-2] = (int)piVar16;
      (*pcVar19)(uVar4,iVar11,pcVar17,&piStack_7c);
      pcVar19 = pcStack_80;
      func_0x016fea14(iVar3,piVar16,pcStack_80);
      func_0x016fea14(piVar6,iVar3,pcVar19);
      puVar8 = *(undefined4 **)(*(int *)(uVar14 + 0x1c) + 0x18);
      piStack_7c = piVar6;
      if (-1 < *(int *)(*(int *)(*(int *)(uVar14 + 0x1c) + 0x14) + 0x14)) {
        piStack_7c = (int *)*piVar6;
      }
      uVar4 = *puVar8;
      pcVar19 = (code *)puVar8[2];
      piVar15[-2] = (int)&cStack_75;
      (*pcVar19)(uVar4,puVar8,uStack_88._4_4_,&piStack_7c);
      pcVar20 = pcStack_80;
    } while (cStack_75 == '\0');
    func_0x016fea14(piVar16,iVar3,pcStack_80);
    piVar6 = piStack_8c;
    func_0x016fea14(piStack_8c,piVar16,pcVar20);
    uVar14 = 10;
LAB_0243e668:
    do {
      if (pcVar17 != (code *)0x0) {
        iVar11 = *(int *)pcVar17;
        uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar12 != 0) {
          piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            pcVar20 = (code *)piVar25[-1];
            if (pcVar20 == (code *)**(undefined4 **)(iRam0243e860 + 0x243e680)) {
              puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
              goto LAB_0243e6c8;
            }
            uVar12 = uVar12 - 1;
            piVar25 = piVar25 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)
                 func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e860 + 0x243e680),0);
LAB_0243e6c8:
        (*(code *)*puVar8)(pcVar17,puVar8[1]);
      }
      if (iVar5 != 0) {
        func_0x0165b6dc(iVar5);
      }
      piVar25 = piStack_94;
      if (uVar14 == 0xb) {
LAB_0243e700:
        func_0x016fea2c(piStack_94,pcStack_80);
        piVar6 = piVar25;
LAB_0243e710:
        pcVar17 = pcStack_80;
        func_0x016fea14(piVar16,piVar6,pcStack_80);
        func_0x016fea14(uStack_90,piVar16,pcVar17);
      }
      else {
        if (uVar14 == 10) goto LAB_0243e710;
        if (uVar14 == 0) goto LAB_0243e700;
      }
      if ((int *)**(int **)(iRam0243e864 + 0x243e740) == piStack_74) {
        return (int *)**(int **)(iRam0243e864 + 0x243e740);
      }
      func_0x017015a8();
LAB_0243e754:
      uVar4 = *(undefined4 *)(iRam0243e854 + 0x243e760);
LAB_0243e768:
      uVar4 = func_0x0165b434(uVar4);
      uVar4 = func_0x026fd688(uVar4,0);
      func_0x0165b590(uVar4,uVar14);
      uVar27 = func_0x0165b3c4();
      iVar5 = (int)uVar27;
      if ((int)((ulonglong)uVar27 >> 0x20) != 1) goto LAB_0243e7bc;
      piVar6 = (int *)func_0x017010e8(iVar5);
      iVar5 = *piVar6;
      uVar14 = 0;
      func_0x0171ece4();
      piVar6 = piStack_8c;
    } while( true );
  }
  piVar6 = (int *)func_0x017010e8(uVar12);
  iVar5 = *piVar6;
  iVar3 = 0;
  piVar6 = (int *)func_0x0171ece4();
  piVar15 = piVar16;
LAB_0243e168:
  iVar7 = 0;
  iVar11 = 0;
LAB_0243e170:
  if (piVar15 != (int *)0x0) {
    iVar9 = *piVar15;
    uVar12 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar12 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(iRam0243e33c + 0x243e188)) {
          puVar8 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
          goto LAB_0243e1d0;
        }
        uVar12 = uVar12 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar15,**(int **)(iRam0243e33c + 0x243e188),0);
LAB_0243e1d0:
    piVar6 = (int *)(*(code *)*puVar8)(piVar15,puVar8[1]);
  }
  if (iVar5 != 0) {
    piVar6 = (int *)func_0x0165b6dc(iVar5);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      *piStack_48 = iVar11;
      piStack_48[1] = iVar7;
      return piStack_48;
    }
    if (iVar3 != 0) {
      return piVar6;
    }
  }
  *piStack_48 = 0;
  piStack_48[1] = 0;
  return (int *)0x0;
LAB_0243e7bc:
  if (pcVar17 != (code *)0x0) {
    iVar11 = *(int *)pcVar17;
    uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar12 != 0) {
      piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        piVar16 = (int *)piVar25[-1];
        if (piVar16 == (int *)**(uint **)(iRam0243e868 + 0x243e7d4)) {
          puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e81c;
        }
        uVar12 = uVar12 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(pcVar17,(int *)**(uint **)(iRam0243e868 + 0x243e7d4),0);
LAB_0243e81c:
    (*(code *)*puVar8)(pcVar17,puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar5);
  uVar27 = func_0x01178c80();
  piVar25 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar23 = (uint)uVar27;
  uVar12 = extraout_r3_01;
  uVar13 = extraout_r2_01;
  if ((bool)uVar26) {
    uVar13 = (uint)piVar16 | 0xdc00;
    uVar12 = (uint)piVar16 | 0x3c0;
    piVar25 = (int *)((uint)pcVar20 | 0x70000);
    piVar6 = (int *)((uint)pcVar17 | 0x24000000);
  }
  piVar15[-1] = 0x243e848;
  piVar15[-2] = (int)&stack0xffffffb0;
  piVar15[-3] = iVar3;
  piVar15[-4] = (int)piVar6;
  piVar15[-5] = 0;
  piVar15[-6] = iVar5;
  piVar15[-7] = (int)piVar16;
  piVar15[-8] = (int)pcVar20;
  piVar15[-9] = (int)pcVar17;
  iVar11 = *(int *)(uVar12 + 0x1c);
  piVar15[-0x16] = uVar13;
  if (iVar11 == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243edc8 + 0x243e89c));
    func_0x0165b424(*(undefined4 *)(iRam0243edcc + 0x243e8a8));
    if (*(int *)(uVar12 + 0x1c) == 0) {
      func_0x016cc90c(uVar12);
    }
  }
  if (piVar25 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243edd0 + 0x243ec88);
  }
  else {
    if (piVar15[-0x16] != 0) {
      iVar3 = **(int **)(uVar12 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar25;
      piVar15[-0x1f] = uVar23;
      piVar15[-0x18] = uVar12;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e944;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar25,iVar3,0);
LAB_0243e944:
      piVar6 = (int *)(*(code *)*puVar8)(piVar25,puVar8[1]);
      piVar15[-0x17] = (int)piVar6;
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar5 = piVar15[-0x18];
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar16[-1] == **(int **)(iRam0243edd8 + 0x243e978)) {
              puVar8 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
              goto LAB_0243e9c4;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243edd8 + 0x243e978),0);
LAB_0243e9c4:
        iVar3 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar3 == 0) {
          iVar3 = 0;
          piVar15[-0x19] = 0;
          piVar15[-0x1a] = 0;
          piVar15[-0x1b] = 0;
          piVar15[-0x15] = 0;
          piVar15[-0x1c] = 0;
          iVar9 = 0xb;
          iVar5 = 0;
          iVar11 = 0;
          iVar24 = 0;
          iVar21 = 0;
          iVar7 = 0;
          piVar15[-0x1d] = 0;
          goto LAB_0243eb70;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(iVar5 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar16 * 8 + 0xc0);
              goto LAB_0243ea54;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar3,0);
LAB_0243ea54:
        (*(code *)*puVar8)(piVar15 + -0x14,piVar6,puVar8[1]);
        iVar3 = piVar15[-0x16];
        iVar24 = piVar15[-0xc];
        iVar11 = piVar15[-0xb];
        iVar9 = *(int *)(iVar3 + 0x14);
        uVar4 = *(undefined4 *)(iVar3 + 0x20);
        iVar21 = piVar15[-0x10];
        iVar7 = piVar15[-0x12];
        iVar5 = piVar15[-10];
        piVar15[-0x15] = *(int *)(iVar3 + 0xc);
        piVar15[-0x27] = iVar21;
        piVar15[-0x26] = piVar15[-0xf];
        piVar15[-0x1e] = piVar15[-0x11];
        piVar15[-0x28] = piVar15[-0x11];
        piVar15[-0x1a] = piVar15[-0xe];
        piVar15[-0x25] = piVar15[-0xe];
        piVar15[-0x19] = piVar15[-0xd];
        piVar15[-0x24] = piVar15[-0xd];
        piVar15[-0x20] = iVar9;
        piVar15[-0x1b] = piVar15[-0xf];
        piVar15[-0x23] = iVar24;
        piVar15[-0x22] = iVar11;
        piVar15[-0x21] = iVar5;
        piVar15[-0x1d] = piVar15[-0x14];
        piVar15[-0x1c] = piVar15[-0x13];
        iVar3 = (*(code *)piVar15[-0x15])(uVar4,piVar15[-0x14],piVar15[-0x13],iVar7);
        piVar6 = (int *)piVar15[-0x17];
      } while (iVar3 == 0);
      iVar9 = 10;
      iVar3 = 0;
      piVar15[-0x15] = iVar21;
      iVar21 = piVar15[-0x1e];
      goto LAB_0243eb70;
    }
    uVar4 = *(undefined4 *)(iRam0243edd4 + 0x243ec94);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar12);
  uVar27 = func_0x0165b3c4();
  iVar11 = (int)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar6 = (int *)func_0x017010e8(iVar11);
    iVar3 = *piVar6;
    func_0x0171ece4();
    piVar6 = (int *)piVar15[-0x17];
    piVar15[-0x19] = 0;
    piVar15[-0x1a] = 0;
    piVar15[-0x1b] = 0;
    piVar15[-0x15] = 0;
    piVar15[-0x1c] = 0;
    piVar15[-0x1d] = 0;
    iVar5 = 0;
    iVar11 = 0;
    iVar24 = 0;
    iVar21 = 0;
    iVar7 = 0;
    iVar9 = 0;
LAB_0243eb70:
    if (piVar6 != (int *)0x0) {
      iVar10 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(iRam0243eddc + 0x243eb8c)) {
            iVar22 = piVar15[-0x17];
            puVar8 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
            goto LAB_0243ebdc;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      iVar22 = piVar15[-0x17];
      puVar8 = (undefined4 *)func_0x016cc99c(iVar22,**(int **)(iRam0243eddc + 0x243eb8c),0);
LAB_0243ebdc:
      (*(code *)*puVar8)(iVar22,puVar8[1]);
    }
    piVar6 = (int *)0x0;
    if (iVar3 != 0) {
      piVar6 = (int *)func_0x0165b6dc();
    }
    if (iVar9 != 0xb) {
      if (iVar9 == 10) {
        piVar6 = (int *)piVar15[-0x1f];
        *piVar6 = piVar15[-0x1d];
        iVar3 = piVar15[-0x1c];
        piVar6[8] = iVar24;
        piVar6[1] = iVar3;
        piVar6[2] = iVar7;
        piVar6[3] = iVar21;
        piVar6[4] = piVar15[-0x15];
        piVar6[5] = piVar15[-0x1b];
        piVar6[6] = piVar15[-0x1a];
        iVar3 = piVar15[-0x19];
        piVar6[9] = iVar11;
        piVar6[10] = iVar5;
        piVar6[7] = iVar3;
        return piVar6;
      }
      if (iVar9 != 0) {
        return piVar6;
      }
    }
    puVar8 = (undefined4 *)piVar15[-0x1f];
    uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *puVar8 = 0;
    puVar8[1] = uVar4;
    puVar8[2] = uVar1;
    puVar8[3] = uVar2;
    puVar8[7] = 0;
    puVar8[8] = uVar4;
    puVar8[9] = uVar1;
    puVar8[10] = uVar2;
    puVar8[4] = 0;
    puVar8[5] = uVar4;
    puVar8[6] = uVar1;
    puVar8[7] = uVar2;
    return (int *)0x1c;
  }
  if (piVar15[-0x17] != 0) {
    iVar7 = *(int *)piVar15[-0x17];
    uVar13 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        iVar5 = piVar16[-1];
        if (iVar5 == **(int **)(iRam0243ede0 + 0x243ed54)) {
          puVar8 = (undefined4 *)(iVar7 + *piVar16 * 8 + 0xc0);
          goto LAB_0243ed9c;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar15[-0x17],**(int **)(iRam0243ede0 + 0x243ed54),0);
LAB_0243ed9c:
    (*(code *)*puVar8)(piVar15[-0x17],puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar11);
  uVar27 = func_0x01178c80();
  piVar16 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar13 = extraout_r3_02;
  uVar14 = extraout_r2_02;
  if ((bool)uVar26) {
    uVar14 = uVar12 | 0x2d00000;
    uVar13 = uVar12 | 0xc8000;
    piVar6 = (int *)0x6c;
    uVar23 = 0xa40;
  }
  piVar15[-0x29] = 0x243edc8;
  piVar15[-0x2a] = (int)&stack0xffffffb0;
  piVar15[-0x2b] = iVar3;
  piVar15[-0x2c] = (int)piVar6;
  piVar15[-0x2d] = uVar23;
  piVar15[-0x2e] = iVar5;
  piVar15[-0x2f] = uVar12;
  piVar15[-0x30] = iVar11;
  piVar15[-0x31] = 0;
  if (*(int *)(uVar13 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243f1e4 + 0x243ee14));
    func_0x0165b424(*(undefined4 *)(iRam0243f1e8 + 0x243ee20));
    if (*(int *)(uVar13 + 0x1c) == 0) {
      func_0x016cc90c(uVar13);
    }
  }
  if (piVar16 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243f1ec + 0x243f0f8);
  }
  else {
    if (uVar14 != 0) {
      piVar6 = *(int **)(uVar13 + 0x1c);
      piVar15[-0x35] = (int)uVar27;
      iVar3 = *piVar6;
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar16;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243eeb4;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar16,iVar3,0);
LAB_0243eeb4:
      piVar6 = (int *)(*(code *)*puVar8)(piVar16,puVar8[1]);
      piVar25 = *(int **)(iRam0243f1f4 + 0x243eed4);
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar16[-1] == *piVar25) {
              puVar8 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
              goto LAB_0243ef2c;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,*piVar25,0);
LAB_0243ef2c:
        iVar3 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          piVar16 = (int *)0x0;
          goto LAB_0243f018;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar16 * 8 + 0xc0);
              goto LAB_0243efbc;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar3,0);
LAB_0243efbc:
        (*(code *)*puVar8)(piVar15 + -0x34,piVar6,puVar8[1]);
        iVar9 = piVar15[-0x34];
        iVar7 = piVar15[-0x33];
        iVar11 = piVar15[-0x32];
        uVar4 = *(undefined4 *)(uVar14 + 0x20);
        pcVar17 = *(code **)(uVar14 + 0xc);
        piVar15[-0x36] = *(undefined4 *)(uVar14 + 0x14);
        piVar16 = (int *)(*pcVar17)(uVar4,iVar9,iVar7,iVar11);
      } while (piVar16 == (int *)0x0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243f024;
    }
    uVar4 = *(undefined4 *)(iRam0243f1f0 + 0x243f104);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar13);
  uVar28 = func_0x0165b3c4();
  uVar12 = (uint)uVar28;
  if ((int)((ulonglong)uVar28 >> 0x20) != 1) {
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      uVar13 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar13 != 0) {
        piVar25 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          iVar5 = piVar25[-1];
          if (iVar5 == **(int **)(iRam0243f1fc + 0x243f170)) {
            puVar8 = (undefined4 *)(iVar3 + *piVar25 * 8 + 0xc0);
            goto LAB_0243f1b8;
          }
          uVar13 = uVar13 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243f1fc + 0x243f170),0);
LAB_0243f1b8:
      (*(code *)*puVar8)(piVar6,puVar8[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar12);
    uVar28 = func_0x01178c80();
    uVar13 = extraout_r2_03;
    if ((bool)uVar26) {
      uVar13 = uVar12 | 0x10000001;
      uVar23 = (uint)piVar16 | 0x88000;
    }
    piVar15[-0x37] = 0x243f1e4;
    piVar15[-0x38] = uVar23;
    piVar15[-0x39] = iVar5;
    piVar15[-0x3a] = uVar12;
    piVar15[-0x3b] = (int)uVar27;
    piVar15[-0x3c] = (int)piVar16;
    iVar3 = *(int *)(uVar13 + 0x1c);
    if (iVar3 == 0) {
      func_0x016cc90c(uVar13);
      iVar3 = *(int *)(uVar13 + 0x1c);
    }
    uVar4 = func_0x02852564(*(undefined4 *)(iVar3 + 8));
    if ((*(ushort *)(*(int *)(*(int *)(uVar13 + 0x1c) + 0x14) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    piVar6 = (int *)func_0x0165b6d4();
    iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0x18);
    piVar15[-0x3e] = 0;
    piVar15[-0x3d] = iVar3;
    func_0x02804be0(piVar6,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar4);
    return piVar6;
  }
  piVar16 = (int *)func_0x017010e8(uVar12);
  iVar5 = *piVar16;
  iVar3 = 0;
  piVar16 = (int *)func_0x0171ece4();
LAB_0243f018:
  iVar11 = 0;
  iVar7 = 0;
  iVar9 = 0;
LAB_0243f024:
  if (piVar6 != (int *)0x0) {
    iVar24 = *piVar6;
    uVar12 = (uint)*(ushort *)(iVar24 + 0xb6);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(int *)(iVar24 + 0x58) + 4);
      do {
        if (piVar16[-1] == **(int **)(iRam0243f1f8 + 0x243f03c)) {
          puVar8 = (undefined4 *)(iVar24 + *piVar16 * 8 + 0xc0);
          goto LAB_0243f084;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243f1f8 + 0x243f03c),0);
LAB_0243f084:
    piVar16 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
  }
  if (iVar5 != 0) {
    piVar16 = (int *)func_0x0165b6dc(iVar5);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      piVar6 = (int *)piVar15[-0x35];
      *piVar6 = iVar9;
      piVar6[1] = iVar7;
      piVar6[2] = iVar11;
      return piVar6;
    }
    if (iVar3 != 0) {
      return piVar16;
    }
  }
  puVar8 = (undefined4 *)piVar15[-0x35];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  return (int *)0x0;
}


/* BoardItemSpawnerData.ProcessOfflineCapacity VA=0x18C8A80 | public void ProcessOfflineCapacity(IItemController item, long millisecondsPassed, bool isFromPause) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardItemSpawnerData_ProcessOfflineCapacity_18C8A80
               (undefined4 param_1,int *param_2,uint param_3,int param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  uint in_fpscr;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  
  pcVar14 = (char *)(_UNK_018d8e7c + 0x18d8aa8);
  if (*pcVar14 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d8e80 + 0x18d8ac4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8e84 + 0x18d8ad0));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8e88 + 0x18d8adc));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8e8c + 0x18d8ae8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8e90 + 0x18d8af4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8e94 + 0x18d8b00));
    *pcVar14 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar2 = *param_2;
  uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_018d8e98 + 0x18d8b24)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xd8);
        goto LAB_018d8b6c;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined4 *)func_0x016cc99c(param_2,**(int **)(_UNK_018d8e98 + 0x18d8b24),3);
LAB_018d8b6c:
  iVar2 = (*(code *)*puVar3)(param_2,0,puVar3[1]);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_018d8e9c + 0x18d8b94) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar4 = **(undefined4 **)(_UNK_018d8ea0 + 0x18d8bb4);
    pcVar14 = (char *)(_UNK_018b4538 + 0x18b44b0);
    if (*pcVar14 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_018b453c + 0x18b44c4),0);
      *pcVar14 = '\x01';
    }
    piVar11 = *(int **)(_UNK_018b4540 + 0x18b44d8);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar2 = func_0x018b3dac();
    if (iVar2 != 0) {
      iVar2 = *piVar11;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x0165b5a4();
        iVar2 = *piVar11;
      }
      iVar15 = **(int **)(iVar2 + 0x5c);
      iVar2 = (*(int **)(iVar2 + 0x5c))[1];
      if (iVar15 == 0) {
        func_0x0165b6e0();
      }
      (*(code *)&UNK_0570a634)(iVar15,iVar2,uVar4,0);
      return;
    }
    return;
  }
  iVar2 = func_0x018d6300(param_1);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  iVar2 = func_0x018d6300(param_1);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  fVar19 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar18 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  fVar18 = (fVar19 / fVar18) * _UNK_018d8e74;
  uVar9 = (uint)fVar18;
  if (*(int *)(**(int **)(_UNK_018d8ea4 + 0x18d8c40) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar2 = (int)uVar9 >> 0x1f;
  uVar17 = in_fpscr & 0xfffffff | (uint)(fVar18 == _UNK_018d8e78) << 0x1e;
  if (SUB41(uVar17 >> 0x1e,0)) {
    uVar9 = 0x80000000;
    iVar2 = -1;
  }
  uVar21 = func_0x016fe664(param_3,param_4,uVar9,iVar2);
  iVar7 = (int)(uVar21 >> 0x20);
  iVar15 = func_0x026f9980((int)uVar21,iVar7,0);
  if (0 < iVar15) {
    lVar1 = (ulonglong)uVar9 * (uVar21 & 0xffffffff);
    uVar5 = (uint)lVar1;
    iVar16 = param_3 - uVar5;
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar6 = *param_2;
    piVar11 = *(int **)(_UNK_018d8ea8 + 0x18d8cdc);
    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
    iVar8 = *piVar11;
    if (uVar10 != 0) {
      piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar12[-1] == iVar8) {
          puVar3 = (undefined4 *)(iVar6 + *piVar12 * 8 + 200);
          goto LAB_018d8d24;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined4 *)func_0x016cc99c(param_2,iVar8,1);
LAB_018d8d24:
    piVar12 = (int *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (piVar12 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar6 = *piVar12;
    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_018d8eac + 0x18d8d5c)) {
          puVar3 = (undefined4 *)(iVar6 + *piVar13 * 8 + 0xe8);
          goto LAB_018d8da4;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_018d8eac + 0x18d8d5c),5);
LAB_018d8da4:
    (*(code *)*puVar3)(piVar12,(code *)*puVar3,-iVar16,
                       -((param_4 -
                         (iVar7 * uVar9 + (int)uVar21 * iVar2 + (int)((ulonglong)lVar1 >> 0x20) +
                         (uint)(param_3 < uVar5))) + (uint)(iVar16 != 0)),puVar3[1]);
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar2 = *param_2;
    uVar20 = VectorSignedToFloat(iVar15,(byte)(uVar17 >> 0x16) & 3);
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar4 = **(undefined4 **)(_UNK_018d8eb0 + 0x18d8dec);
    iVar15 = *piVar11;
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar15) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xd0);
          goto LAB_018d8e3c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined4 *)func_0x016cc99c(param_2,iVar15,2);
LAB_018d8e3c:
    (*(code *)*puVar3)(param_2,param_1,uVar20,0,0,uVar4,param_5 ^ 1,puVar3[1]);
  }
  return;
}


/* BoardItemData.IsMergeable VA=0x18CA188 | public virtual bool IsMergeable(IItemRuntimeData itself, IItemRuntimeData other) { } */

undefined4 BoardItemData_IsMergeable_18CA188(void)

{
  return 1;
}


/* BoardItemData.IsMergeable VA=0x18CA190 | public virtual bool IsMergeable(IItemRuntimeData itself) { } */

undefined4 BoardItemData_IsMergeable_18CA190(void)

{
  return 1;
}


/* BoardItemData.IsMergeable VA=0x18CA198 | public virtual bool IsMergeable(IItemEntity itemEntity) { } */

undefined4 BoardItemData_IsMergeable_18CA198(void)

{
  return 1;
}


/* BoardItemPerishableSpawner.GetRandomItem VA=0x18CA538 | public SpawnedItem GetRandomItem() { } */

/* WARNING: Removing unreachable block (ram,0x0243edb4) */
/* WARNING: Removing unreachable block (ram,0x0243e314) */
/* WARNING: Removing unreachable block (ram,0x0243df0c) */
/* WARNING: Removing unreachable block (ram,0x0243e834) */
/* WARNING: Removing unreachable block (ram,0x0243f1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * BoardItemPerishableSpawner_GetRandomItem_18CA538(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int extraout_r2;
  uint uVar14;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int *piVar15;
  int *piVar16;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  code *pcVar17;
  char *pcVar18;
  code *pcVar19;
  code *pcVar20;
  int iVar21;
  int iVar22;
  int unaff_r7;
  uint unaff_r9;
  uint uVar23;
  uint unaff_r10;
  int iVar24;
  int *piVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int aiStack_190 [62];
  int iStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined8 uStack_88;
  code *pcStack_80;
  int *piStack_7c;
  char cStack_75;
  int *piStack_74;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_58;
  uint uStack_54;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar18 = (char *)(_UNK_018da650 + 0x18da550);
  if (*pcVar18 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018da654 + 0x18da564));
    func_0x0165b424(*(undefined4 *)(_UNK_018da658 + 0x18da570));
    func_0x0165b424(*(undefined4 *)(_UNK_018da65c + 0x18da57c));
    func_0x0165b424(*(undefined4 *)(_UNK_018da660 + 0x18da588));
    *pcVar18 = '\x01';
  }
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_018da664 + 0x18da59c));
  func_0x026f769c(iVar3,0);
  uVar4 = func_0x026f8714(0,0x3f800000,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 8) = uVar4;
  iVar5 = func_0x018da050(param_1);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  piVar6 = (int *)func_0x018cf02c(iVar5,0);
  iVar5 = func_0x0165b6d4(**(undefined4 **)(_UNK_018da668 + 0x18da60c));
  func_0x026f8108(iVar5,iVar3,**(undefined4 **)(_UNK_018da66c + 0x18da628),0);
  iVar3 = **(int **)(_UNK_018da670 + 0x18da640);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243df20 + 0x243dba8));
    func_0x0165b424(*(undefined4 *)(iRam0243df24 + 0x243dbb4));
    if (*(int *)(iVar3 + 0x1c) == 0) {
      func_0x016cc90c(iVar3);
    }
  }
  if (piVar6 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243df28 + 0x243de34);
  }
  else {
    if (iVar5 != 0) {
      iVar11 = **(int **)(iVar3 + 0x1c);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x016cc8b0(iVar11);
      }
      iVar7 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar15[-1] == iVar11) {
            puVar8 = (undefined4 *)(iVar7 + *piVar15 * 8 + 0xc0);
            goto LAB_0243dc44;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar11,0);
LAB_0243dc44:
      piVar6 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
      piVar15 = *(int **)(iRam0243df30 + 0x243dc64);
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar11 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar16[-1] == *piVar15) {
              puVar8 = (undefined4 *)(iVar11 + *piVar16 * 8 + 0xc0);
              goto LAB_0243dcbc;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,*piVar15,0);
LAB_0243dcbc:
        iVar11 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar11 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          goto LAB_0243dd90;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar11 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x016cc8b0(iVar11);
        }
        iVar7 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar11) {
              puVar8 = (undefined4 *)(iVar7 + *piVar16 * 8 + 0xc0);
              goto LAB_0243dd4c;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar11,0);
LAB_0243dd4c:
        piVar16 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
        iVar11 = (**(code **)(iVar5 + 0xc))
                           (*(undefined4 *)(iVar5 + 0x20),piVar16,*(undefined4 *)(iVar5 + 0x14));
      } while (iVar11 == 0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243dd94;
    }
    uVar4 = *(undefined4 *)(iRam0243df2c + 0x243de40);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,iVar3);
  uVar27 = func_0x0165b3c4();
  uVar12 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar15 = (int *)func_0x017010e8(uVar12);
    iVar5 = *piVar15;
    iVar3 = 0;
    func_0x0171ece4();
LAB_0243dd90:
    piVar16 = (int *)0x0;
LAB_0243dd94:
    if (piVar6 != (int *)0x0) {
      iVar11 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar15[-1] == **(int **)(iRam0243df34 + 0x243ddac)) {
            puVar8 = (undefined4 *)(iVar11 + *piVar15 * 8 + 0xc0);
            goto LAB_0243ddf4;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243df34 + 0x243ddac),0);
LAB_0243ddf4:
      (*(code *)*puVar8)(piVar6,puVar8[1]);
    }
    if (iVar5 != 0) {
      func_0x0165b6dc(iVar5);
    }
    if (iVar3 == 0xb || iVar3 == 0) {
      piVar16 = (int *)0x0;
    }
    return piVar16;
  }
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    uVar13 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        unaff_r7 = piVar15[-1];
        if (unaff_r7 == **(int **)(iRam0243df38 + 0x243deac)) {
          puVar8 = (undefined4 *)(iVar5 + *piVar15 * 8 + 0xc0);
          goto LAB_0243def4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243df38 + 0x243deac),0);
LAB_0243def4:
    (*(code *)*puVar8)(piVar6,puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(uVar12);
  uVar27 = func_0x01178c80();
  piVar15 = (int *)((ulonglong)uVar27 >> 0x20);
  piVar16 = (int *)uVar27;
  uVar13 = extraout_r3;
  if ((bool)uVar26) {
    uVar13 = uVar12 | 0x800000;
    piVar6 = (int *)(uVar12 | 0x70000);
    unaff_r10 = uVar12 | 0x70014;
    unaff_r9 = uVar12 | 0x71300;
  }
  uStack_2c = 0;
  piStack_3c = piVar6;
  iStack_38 = iVar3;
  uStack_34 = uVar12;
  iStack_30 = unaff_r7;
  uStack_28 = unaff_r9;
  uStack_24 = unaff_r10;
  if (*(int *)(uVar13 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243e328 + 0x243df6c));
    func_0x0165b424(*(undefined4 *)(iRam0243e32c + 0x243df78));
    if (*(int *)(uVar13 + 0x1c) == 0) {
      func_0x016cc90c(uVar13);
    }
  }
  if (piVar15 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243e330 + 0x243e23c);
  }
  else {
    if (extraout_r2 != 0) {
      iVar3 = **(int **)(uVar13 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar15;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e00c;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243e00c:
      piVar15 = (int *)(*(code *)*puVar8)(piVar15,puVar8[1]);
      piVar25 = *(int **)(iRam0243e338 + 0x243e030);
      do {
        if (piVar15 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar15;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar12 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar25) {
              puVar8 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_0243e088;
            }
            uVar12 = uVar12 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar15,*piVar25,0);
LAB_0243e088:
        iVar3 = (*(code *)*puVar8)(piVar15,puVar8[1]);
        piStack_48 = piVar16;
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          piVar6 = (int *)0x0;
          goto LAB_0243e168;
        }
        if (piVar15 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar15;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
              goto LAB_0243e118;
            }
            uVar12 = uVar12 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243e118:
        (*(code *)*puVar8)(&iStack_44,piVar15,puVar8[1]);
        iVar7 = iStack_40;
        iVar11 = iStack_44;
        piVar6 = (int *)(**(code **)(extraout_r2 + 0xc))
                                  (*(undefined4 *)(extraout_r2 + 0x20),iStack_44,iStack_40,
                                   *(undefined4 *)(extraout_r2 + 0x14));
      } while (piVar6 == (int *)0x0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243e170;
    }
    uVar4 = *(undefined4 *)(iRam0243e334 + 0x243e248);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar13);
  uVar27 = func_0x0165b3c4();
  uVar12 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
    uVar23 = 0;
    if (piVar16 != (int *)0x0) {
      iVar3 = *piVar16;
      uVar14 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar14 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = piVar6[-1];
          if (unaff_r7 == **(int **)(iRam0243e340 + 0x243e2b4)) {
            puVar8 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e2fc;
          }
          uVar14 = uVar14 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243e340 + 0x243e2b4),0);
LAB_0243e2fc:
      (*(code *)*puVar8)(piVar16,puVar8[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar12);
    uStack_88 = func_0x01178c80();
    uVar14 = extraout_r3_00;
    if ((bool)uVar26) {
      piVar15 = (int *)(uVar12 | 0x5000000);
      uVar23 = uVar12 | 0x5110000;
      uVar14 = uVar12;
    }
    piStack_74 = (int *)**(int **)(iRam0243e848 + 0x243e36c);
    pcVar17 = *(code **)(uVar14 + 0x1c);
    uStack_90 = extraout_r2_00;
    piStack_6c = piVar15;
    piStack_68 = piVar16;
    uStack_64 = uVar12;
    iStack_60 = unaff_r7;
    uStack_58 = uVar23;
    uStack_54 = uVar13;
    if (pcVar17 == (code *)0x0) {
      func_0x0165b424(*(undefined4 *)(iRam0243e84c + 0x243e388));
      func_0x0165b424(*(undefined4 *)(iRam0243e850 + 0x243e394));
      pcVar17 = *(code **)(uVar14 + 0x1c);
      if (pcVar17 == (code *)0x0) {
        func_0x016cc90c(uVar14);
        pcVar17 = *(code **)(uVar14 + 0x1c);
      }
    }
    pcVar19 = *(code **)(*(int *)(pcVar17 + 0x14) + 0x84);
    uVar12 = (uint)(pcVar19 + 7) & 0xfffffff8;
    piVar16 = (int *)((int)&iStack_98 - uVar12);
    piVar6 = (int *)((int)piVar16 - uVar12);
    iVar3 = (int)piVar6 - uVar12;
    func_0x016fea2c(iVar3,pcVar19);
    piVar15 = (int *)(iVar3 - uVar12);
    piStack_8c = piVar15;
    func_0x016fea2c(piVar15,pcVar19);
    piVar15 = (int *)((int)piVar15 - uVar12);
    piStack_94 = piVar15;
    pcStack_80 = pcVar19;
    func_0x016fea2c(piVar15,pcVar19);
    pcVar19 = (code *)uStack_88;
    pcVar20 = (code *)uStack_88;
    if ((code *)uStack_88 == (code *)0x0) goto LAB_0243e754;
    if (uStack_88._4_4_ == 0) {
      uVar4 = *(undefined4 *)(iRam0243e858 + 0x243e76c);
      goto LAB_0243e768;
    }
    iVar5 = *(int *)pcVar17;
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x016cc8b0(iVar5);
    }
    iVar11 = *(int *)pcVar19;
    uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar12 != 0) {
      piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar25[-1] == iVar5) {
          puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e48c;
        }
        uVar12 = uVar12 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(pcVar19,iVar5,0);
LAB_0243e48c:
    pcVar17 = (code *)(*(code *)*puVar8)(pcVar19,puVar8[1]);
    iVar5 = 0;
    do {
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)pcVar17;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      pcVar20 = pcVar19;
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          pcVar20 = (code *)piVar25[-1];
          if (pcVar20 == (code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0)) {
            puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
            goto LAB_0243e508;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)
               func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0),0);
LAB_0243e508:
      iVar11 = (*(code *)*puVar8)(pcVar17,puVar8[1]);
      if (iVar11 == 0) {
        uVar14 = 0xb;
        piVar6 = piStack_8c;
        goto LAB_0243e668;
      }
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)(*(int *)(uVar14 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x016cc8b0(iVar11);
      }
      iVar7 = *(int *)pcVar17;
      uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar25[-1] == iVar11) {
            iVar11 = iVar7 + *piVar25 * 8 + 0xc0;
            goto LAB_0243e598;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      iVar11 = func_0x016cc99c(pcVar17,iVar11,0);
LAB_0243e598:
      iVar11 = *(int *)(iVar11 + 4);
      uVar4 = *(undefined4 *)(iVar11 + 4);
      pcVar19 = *(code **)(iVar11 + 8);
      piStack_7c = piVar16;
      piVar15[-2] = (int)piVar16;
      (*pcVar19)(uVar4,iVar11,pcVar17,&piStack_7c);
      pcVar19 = pcStack_80;
      func_0x016fea14(iVar3,piVar16,pcStack_80);
      func_0x016fea14(piVar6,iVar3,pcVar19);
      puVar8 = *(undefined4 **)(*(int *)(uVar14 + 0x1c) + 0x18);
      piStack_7c = piVar6;
      if (-1 < *(int *)(*(int *)(*(int *)(uVar14 + 0x1c) + 0x14) + 0x14)) {
        piStack_7c = (int *)*piVar6;
      }
      uVar4 = *puVar8;
      pcVar19 = (code *)puVar8[2];
      piVar15[-2] = (int)&cStack_75;
      (*pcVar19)(uVar4,puVar8,uStack_88._4_4_,&piStack_7c);
      pcVar20 = pcStack_80;
    } while (cStack_75 == '\0');
    func_0x016fea14(piVar16,iVar3,pcStack_80);
    piVar6 = piStack_8c;
    func_0x016fea14(piStack_8c,piVar16,pcVar20);
    uVar14 = 10;
LAB_0243e668:
    do {
      if (pcVar17 != (code *)0x0) {
        iVar11 = *(int *)pcVar17;
        uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar12 != 0) {
          piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            pcVar20 = (code *)piVar25[-1];
            if (pcVar20 == (code *)**(undefined4 **)(iRam0243e860 + 0x243e680)) {
              puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
              goto LAB_0243e6c8;
            }
            uVar12 = uVar12 - 1;
            piVar25 = piVar25 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)
                 func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e860 + 0x243e680),0);
LAB_0243e6c8:
        (*(code *)*puVar8)(pcVar17,puVar8[1]);
      }
      if (iVar5 != 0) {
        func_0x0165b6dc(iVar5);
      }
      piVar25 = piStack_94;
      if (uVar14 == 0xb) {
LAB_0243e700:
        func_0x016fea2c(piStack_94,pcStack_80);
        piVar6 = piVar25;
LAB_0243e710:
        pcVar17 = pcStack_80;
        func_0x016fea14(piVar16,piVar6,pcStack_80);
        func_0x016fea14(uStack_90,piVar16,pcVar17);
      }
      else {
        if (uVar14 == 10) goto LAB_0243e710;
        if (uVar14 == 0) goto LAB_0243e700;
      }
      if ((int *)**(int **)(iRam0243e864 + 0x243e740) == piStack_74) {
        return (int *)**(int **)(iRam0243e864 + 0x243e740);
      }
      func_0x017015a8();
LAB_0243e754:
      uVar4 = *(undefined4 *)(iRam0243e854 + 0x243e760);
LAB_0243e768:
      uVar4 = func_0x0165b434(uVar4);
      uVar4 = func_0x026fd688(uVar4,0);
      func_0x0165b590(uVar4,uVar14);
      uVar27 = func_0x0165b3c4();
      iVar5 = (int)uVar27;
      if ((int)((ulonglong)uVar27 >> 0x20) != 1) goto LAB_0243e7bc;
      piVar6 = (int *)func_0x017010e8(iVar5);
      iVar5 = *piVar6;
      uVar14 = 0;
      func_0x0171ece4();
      piVar6 = piStack_8c;
    } while( true );
  }
  piVar6 = (int *)func_0x017010e8(uVar12);
  iVar5 = *piVar6;
  iVar3 = 0;
  piVar6 = (int *)func_0x0171ece4();
  piVar15 = piVar16;
LAB_0243e168:
  iVar7 = 0;
  iVar11 = 0;
LAB_0243e170:
  if (piVar15 != (int *)0x0) {
    iVar9 = *piVar15;
    uVar12 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar12 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(iRam0243e33c + 0x243e188)) {
          puVar8 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
          goto LAB_0243e1d0;
        }
        uVar12 = uVar12 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar15,**(int **)(iRam0243e33c + 0x243e188),0);
LAB_0243e1d0:
    piVar6 = (int *)(*(code *)*puVar8)(piVar15,puVar8[1]);
  }
  if (iVar5 != 0) {
    piVar6 = (int *)func_0x0165b6dc(iVar5);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      *piStack_48 = iVar11;
      piStack_48[1] = iVar7;
      return piStack_48;
    }
    if (iVar3 != 0) {
      return piVar6;
    }
  }
  *piStack_48 = 0;
  piStack_48[1] = 0;
  return (int *)0x0;
LAB_0243e7bc:
  if (pcVar17 != (code *)0x0) {
    iVar11 = *(int *)pcVar17;
    uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar12 != 0) {
      piVar25 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        piVar16 = (int *)piVar25[-1];
        if (piVar16 == (int *)**(uint **)(iRam0243e868 + 0x243e7d4)) {
          puVar8 = (undefined4 *)(iVar11 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e81c;
        }
        uVar12 = uVar12 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(pcVar17,(int *)**(uint **)(iRam0243e868 + 0x243e7d4),0);
LAB_0243e81c:
    (*(code *)*puVar8)(pcVar17,puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar5);
  uVar27 = func_0x01178c80();
  piVar25 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar23 = (uint)uVar27;
  uVar12 = extraout_r3_01;
  uVar13 = extraout_r2_01;
  if ((bool)uVar26) {
    uVar13 = (uint)piVar16 | 0xdc00;
    uVar12 = (uint)piVar16 | 0x3c0;
    piVar25 = (int *)((uint)pcVar20 | 0x70000);
    piVar6 = (int *)((uint)pcVar17 | 0x24000000);
  }
  piVar15[-1] = 0x243e848;
  piVar15[-2] = (int)&stack0xffffffb0;
  piVar15[-3] = iVar3;
  piVar15[-4] = (int)piVar6;
  piVar15[-5] = 0;
  piVar15[-6] = iVar5;
  piVar15[-7] = (int)piVar16;
  piVar15[-8] = (int)pcVar20;
  piVar15[-9] = (int)pcVar17;
  iVar11 = *(int *)(uVar12 + 0x1c);
  piVar15[-0x16] = uVar13;
  if (iVar11 == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243edc8 + 0x243e89c));
    func_0x0165b424(*(undefined4 *)(iRam0243edcc + 0x243e8a8));
    if (*(int *)(uVar12 + 0x1c) == 0) {
      func_0x016cc90c(uVar12);
    }
  }
  if (piVar25 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243edd0 + 0x243ec88);
  }
  else {
    if (piVar15[-0x16] != 0) {
      iVar3 = **(int **)(uVar12 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar25;
      piVar15[-0x1f] = uVar23;
      piVar15[-0x18] = uVar12;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243e944;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar25,iVar3,0);
LAB_0243e944:
      piVar6 = (int *)(*(code *)*puVar8)(piVar25,puVar8[1]);
      piVar15[-0x17] = (int)piVar6;
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar5 = piVar15[-0x18];
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar16[-1] == **(int **)(iRam0243edd8 + 0x243e978)) {
              puVar8 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
              goto LAB_0243e9c4;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243edd8 + 0x243e978),0);
LAB_0243e9c4:
        iVar3 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar3 == 0) {
          iVar3 = 0;
          piVar15[-0x19] = 0;
          piVar15[-0x1a] = 0;
          piVar15[-0x1b] = 0;
          piVar15[-0x15] = 0;
          piVar15[-0x1c] = 0;
          iVar9 = 0xb;
          iVar5 = 0;
          iVar11 = 0;
          iVar24 = 0;
          iVar21 = 0;
          iVar7 = 0;
          piVar15[-0x1d] = 0;
          goto LAB_0243eb70;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(iVar5 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar16 * 8 + 0xc0);
              goto LAB_0243ea54;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar3,0);
LAB_0243ea54:
        (*(code *)*puVar8)(piVar15 + -0x14,piVar6,puVar8[1]);
        iVar3 = piVar15[-0x16];
        iVar24 = piVar15[-0xc];
        iVar11 = piVar15[-0xb];
        iVar9 = *(int *)(iVar3 + 0x14);
        uVar4 = *(undefined4 *)(iVar3 + 0x20);
        iVar21 = piVar15[-0x10];
        iVar7 = piVar15[-0x12];
        iVar5 = piVar15[-10];
        piVar15[-0x15] = *(int *)(iVar3 + 0xc);
        piVar15[-0x27] = iVar21;
        piVar15[-0x26] = piVar15[-0xf];
        piVar15[-0x1e] = piVar15[-0x11];
        piVar15[-0x28] = piVar15[-0x11];
        piVar15[-0x1a] = piVar15[-0xe];
        piVar15[-0x25] = piVar15[-0xe];
        piVar15[-0x19] = piVar15[-0xd];
        piVar15[-0x24] = piVar15[-0xd];
        piVar15[-0x20] = iVar9;
        piVar15[-0x1b] = piVar15[-0xf];
        piVar15[-0x23] = iVar24;
        piVar15[-0x22] = iVar11;
        piVar15[-0x21] = iVar5;
        piVar15[-0x1d] = piVar15[-0x14];
        piVar15[-0x1c] = piVar15[-0x13];
        iVar3 = (*(code *)piVar15[-0x15])(uVar4,piVar15[-0x14],piVar15[-0x13],iVar7);
        piVar6 = (int *)piVar15[-0x17];
      } while (iVar3 == 0);
      iVar9 = 10;
      iVar3 = 0;
      piVar15[-0x15] = iVar21;
      iVar21 = piVar15[-0x1e];
      goto LAB_0243eb70;
    }
    uVar4 = *(undefined4 *)(iRam0243edd4 + 0x243ec94);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar12);
  uVar27 = func_0x0165b3c4();
  iVar11 = (int)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar6 = (int *)func_0x017010e8(iVar11);
    iVar3 = *piVar6;
    func_0x0171ece4();
    piVar6 = (int *)piVar15[-0x17];
    piVar15[-0x19] = 0;
    piVar15[-0x1a] = 0;
    piVar15[-0x1b] = 0;
    piVar15[-0x15] = 0;
    piVar15[-0x1c] = 0;
    piVar15[-0x1d] = 0;
    iVar5 = 0;
    iVar11 = 0;
    iVar24 = 0;
    iVar21 = 0;
    iVar7 = 0;
    iVar9 = 0;
LAB_0243eb70:
    if (piVar6 != (int *)0x0) {
      iVar10 = *piVar6;
      uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(iRam0243eddc + 0x243eb8c)) {
            iVar22 = piVar15[-0x17];
            puVar8 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
            goto LAB_0243ebdc;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      iVar22 = piVar15[-0x17];
      puVar8 = (undefined4 *)func_0x016cc99c(iVar22,**(int **)(iRam0243eddc + 0x243eb8c),0);
LAB_0243ebdc:
      (*(code *)*puVar8)(iVar22,puVar8[1]);
    }
    piVar6 = (int *)0x0;
    if (iVar3 != 0) {
      piVar6 = (int *)func_0x0165b6dc();
    }
    if (iVar9 != 0xb) {
      if (iVar9 == 10) {
        piVar6 = (int *)piVar15[-0x1f];
        *piVar6 = piVar15[-0x1d];
        iVar3 = piVar15[-0x1c];
        piVar6[8] = iVar24;
        piVar6[1] = iVar3;
        piVar6[2] = iVar7;
        piVar6[3] = iVar21;
        piVar6[4] = piVar15[-0x15];
        piVar6[5] = piVar15[-0x1b];
        piVar6[6] = piVar15[-0x1a];
        iVar3 = piVar15[-0x19];
        piVar6[9] = iVar11;
        piVar6[10] = iVar5;
        piVar6[7] = iVar3;
        return piVar6;
      }
      if (iVar9 != 0) {
        return piVar6;
      }
    }
    puVar8 = (undefined4 *)piVar15[-0x1f];
    uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *puVar8 = 0;
    puVar8[1] = uVar4;
    puVar8[2] = uVar1;
    puVar8[3] = uVar2;
    puVar8[7] = 0;
    puVar8[8] = uVar4;
    puVar8[9] = uVar1;
    puVar8[10] = uVar2;
    puVar8[4] = 0;
    puVar8[5] = uVar4;
    puVar8[6] = uVar1;
    puVar8[7] = uVar2;
    return (int *)0x1c;
  }
  if (piVar15[-0x17] != 0) {
    iVar7 = *(int *)piVar15[-0x17];
    uVar13 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        iVar5 = piVar16[-1];
        if (iVar5 == **(int **)(iRam0243ede0 + 0x243ed54)) {
          puVar8 = (undefined4 *)(iVar7 + *piVar16 * 8 + 0xc0);
          goto LAB_0243ed9c;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar15[-0x17],**(int **)(iRam0243ede0 + 0x243ed54),0);
LAB_0243ed9c:
    (*(code *)*puVar8)(piVar15[-0x17],puVar8[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar11);
  uVar27 = func_0x01178c80();
  piVar16 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar13 = extraout_r3_02;
  uVar14 = extraout_r2_02;
  if ((bool)uVar26) {
    uVar14 = uVar12 | 0x2d00000;
    uVar13 = uVar12 | 0xc8000;
    piVar6 = (int *)0x6c;
    uVar23 = 0xa40;
  }
  piVar15[-0x29] = 0x243edc8;
  piVar15[-0x2a] = (int)&stack0xffffffb0;
  piVar15[-0x2b] = iVar3;
  piVar15[-0x2c] = (int)piVar6;
  piVar15[-0x2d] = uVar23;
  piVar15[-0x2e] = iVar5;
  piVar15[-0x2f] = uVar12;
  piVar15[-0x30] = iVar11;
  piVar15[-0x31] = 0;
  if (*(int *)(uVar13 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243f1e4 + 0x243ee14));
    func_0x0165b424(*(undefined4 *)(iRam0243f1e8 + 0x243ee20));
    if (*(int *)(uVar13 + 0x1c) == 0) {
      func_0x016cc90c(uVar13);
    }
  }
  if (piVar16 == (int *)0x0) {
    uVar4 = *(undefined4 *)(iRam0243f1ec + 0x243f0f8);
  }
  else {
    if (uVar14 != 0) {
      piVar6 = *(int **)(uVar13 + 0x1c);
      piVar15[-0x35] = (int)uVar27;
      iVar3 = *piVar6;
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar5 = *piVar16;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xc0);
            goto LAB_0243eeb4;
          }
          uVar12 = uVar12 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar16,iVar3,0);
LAB_0243eeb4:
      piVar6 = (int *)(*(code *)*puVar8)(piVar16,puVar8[1]);
      piVar25 = *(int **)(iRam0243f1f4 + 0x243eed4);
      do {
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar16[-1] == *piVar25) {
              puVar8 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
              goto LAB_0243ef2c;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,*piVar25,0);
LAB_0243ef2c:
        iVar3 = (*(code *)*puVar8)(piVar6,puVar8[1]);
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar3 = 0xb;
          piVar16 = (int *)0x0;
          goto LAB_0243f018;
        }
        if (piVar6 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar5 = *piVar6;
        uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar3) {
              puVar8 = (undefined4 *)(iVar5 + *piVar16 * 8 + 0xc0);
              goto LAB_0243efbc;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x016cc99c(piVar6,iVar3,0);
LAB_0243efbc:
        (*(code *)*puVar8)(piVar15 + -0x34,piVar6,puVar8[1]);
        iVar9 = piVar15[-0x34];
        iVar7 = piVar15[-0x33];
        iVar11 = piVar15[-0x32];
        uVar4 = *(undefined4 *)(uVar14 + 0x20);
        pcVar17 = *(code **)(uVar14 + 0xc);
        piVar15[-0x36] = *(undefined4 *)(uVar14 + 0x14);
        piVar16 = (int *)(*pcVar17)(uVar4,iVar9,iVar7,iVar11);
      } while (piVar16 == (int *)0x0);
      iVar3 = 10;
      iVar5 = 0;
      goto LAB_0243f024;
    }
    uVar4 = *(undefined4 *)(iRam0243f1f0 + 0x243f104);
  }
  uVar4 = func_0x0165b434(uVar4);
  uVar4 = func_0x026fd688(uVar4,0);
  func_0x0165b590(uVar4,uVar13);
  uVar28 = func_0x0165b3c4();
  uVar12 = (uint)uVar28;
  if ((int)((ulonglong)uVar28 >> 0x20) != 1) {
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      uVar13 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar13 != 0) {
        piVar25 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          iVar5 = piVar25[-1];
          if (iVar5 == **(int **)(iRam0243f1fc + 0x243f170)) {
            puVar8 = (undefined4 *)(iVar3 + *piVar25 * 8 + 0xc0);
            goto LAB_0243f1b8;
          }
          uVar13 = uVar13 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243f1fc + 0x243f170),0);
LAB_0243f1b8:
      (*(code *)*puVar8)(piVar6,puVar8[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar12);
    uVar28 = func_0x01178c80();
    uVar13 = extraout_r2_03;
    if ((bool)uVar26) {
      uVar13 = uVar12 | 0x10000001;
      uVar23 = (uint)piVar16 | 0x88000;
    }
    piVar15[-0x37] = 0x243f1e4;
    piVar15[-0x38] = uVar23;
    piVar15[-0x39] = iVar5;
    piVar15[-0x3a] = uVar12;
    piVar15[-0x3b] = (int)uVar27;
    piVar15[-0x3c] = (int)piVar16;
    iVar3 = *(int *)(uVar13 + 0x1c);
    if (iVar3 == 0) {
      func_0x016cc90c(uVar13);
      iVar3 = *(int *)(uVar13 + 0x1c);
    }
    uVar4 = func_0x02852564(*(undefined4 *)(iVar3 + 8));
    if ((*(ushort *)(*(int *)(*(int *)(uVar13 + 0x1c) + 0x14) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    piVar6 = (int *)func_0x0165b6d4();
    iVar3 = *(int *)(*(int *)(uVar13 + 0x1c) + 0x18);
    piVar15[-0x3e] = 0;
    piVar15[-0x3d] = iVar3;
    func_0x02804be0(piVar6,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar4);
    return piVar6;
  }
  piVar16 = (int *)func_0x017010e8(uVar12);
  iVar5 = *piVar16;
  iVar3 = 0;
  piVar16 = (int *)func_0x0171ece4();
LAB_0243f018:
  iVar11 = 0;
  iVar7 = 0;
  iVar9 = 0;
LAB_0243f024:
  if (piVar6 != (int *)0x0) {
    iVar24 = *piVar6;
    uVar12 = (uint)*(ushort *)(iVar24 + 0xb6);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(int *)(iVar24 + 0x58) + 4);
      do {
        if (piVar16[-1] == **(int **)(iRam0243f1f8 + 0x243f03c)) {
          puVar8 = (undefined4 *)(iVar24 + *piVar16 * 8 + 0xc0);
          goto LAB_0243f084;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(iRam0243f1f8 + 0x243f03c),0);
LAB_0243f084:
    piVar16 = (int *)(*(code *)*puVar8)(piVar6,puVar8[1]);
  }
  if (iVar5 != 0) {
    piVar16 = (int *)func_0x0165b6dc(iVar5);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      piVar6 = (int *)piVar15[-0x35];
      *piVar6 = iVar9;
      piVar6[1] = iVar7;
      piVar6[2] = iVar11;
      return piVar6;
    }
    if (iVar3 != 0) {
      return piVar16;
    }
  }
  puVar8 = (undefined4 *)piVar15[-0x35];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  return (int *)0x0;
}


/* ItemController.ChangeCurrentCapacity VA=0x1886B5C | public void ChangeCurrentCapacity(BoardItemSpawnerData spawnerData, float amount, bool isRewardedCapacity = False, bool animateClockDisappear = False, string changeReason = "", bool saveBoard = True) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_ChangeCurrentCapacity_1886B5C
               (int param_1,int param_2,float param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,int param_7)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_44;
  
  pcVar3 = (char *)(_UNK_01896f68 + 0x1896b80);
  fStack_44 = param_3;
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01896f6c + 0x1896b9c));
    func_0x0165b424(*(undefined4 *)(_UNK_01896f70 + 0x1896ba8));
    func_0x0165b424(*(undefined4 *)(_UNK_01896f74 + 0x1896bb4));
    func_0x0165b424(*(undefined4 *)(_UNK_01896f78 + 0x1896bc0));
    func_0x0165b424(*(undefined4 *)(_UNK_01896f7c + 0x1896bcc));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 0x44);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(param_1 + 0x68);
  fVar7 = *(float *)(iVar4 + 0x28);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar5 + 0x44);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  fVar8 = *(float *)(iVar4 + 0x28);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x018d6300(param_2,0);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = func_0x018d0924(iVar4,0);
  iVar4 = *(int *)(param_1 + 0x68);
  fVar8 = fVar8 + param_3;
  fVar9 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 0x44);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar9) << 0x1f;
  uVar6 = uVar1 | (uint)(NAN(fVar8) || NAN(fVar9)) << 0x1c;
  if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
    if (param_2 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = func_0x018d6300(param_2,0);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = func_0x018d0924(iVar5,0);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar6 >> 0x16) & 3);
    *(undefined4 *)(iVar4 + 0x28) = uVar2;
  }
  else {
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(param_1 + 0x68);
    fVar8 = *(float *)(iVar4 + 0x28);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *(int *)(iVar5 + 0x44);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    if (fVar8 + param_3 <= 0.0) {
      *(undefined4 *)(iVar4 + 0x28) = 0;
    }
    else {
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + param_3;
    }
  }
  if (0.0 < fVar7) {
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *(int *)(iVar4 + 0x44);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    if (*(float *)(iVar4 + 0x28) == 0.0) {
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      iVar4 = *(int *)(iVar4 + 0x44);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      func_0x01892de0(iVar4,param_2,0);
    }
  }
  iVar4 = func_0x0165b4f0(**(undefined4 **)(_UNK_01896f80 + 0x1896da8),6);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = **(undefined4 **)(_UNK_01896f84 + 0x1896dc8);
  if (*(int *)(iVar4 + 0xc) == 0) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar4 + 0x10) = uVar2;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x10),uVar2);
  uVar2 = func_0x017204f4(&fStack_44,0);
  if (*(uint *)(iVar4 + 0xc) < 2) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar4 + 0x14) = uVar2;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x14),uVar2);
  uVar2 = **(undefined4 **)(_UNK_01896f88 + 0x1896e34);
  if (*(uint *)(iVar4 + 0xc) < 3) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar4 + 0x18) = uVar2;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x18),uVar2);
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar5 + 0x44);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = func_0x017204f4(iVar5 + 0x28,0);
  if (*(uint *)(iVar4 + 0xc) < 4) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar4 + 0x1c) = uVar2;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x1c),uVar2);
  uVar2 = **(undefined4 **)(_UNK_01896f8c + 0x1896eb4);
  if (*(uint *)(iVar4 + 0xc) < 5) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar4 + 0x20) = uVar2;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x20),uVar2);
  if (*(uint *)(iVar4 + 0xc) < 6) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar4 + 0x24) = param_6;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x24),param_6);
  uVar2 = func_0x026f792c(iVar4,0);
  if (*(int *)(**(int **)(_UNK_01896f90 + 0x1896f18) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018b4544(uVar2,0);
  func_0x01896f94(param_1,param_2,param_4,param_5);
  if (param_7 != 0) {
    func_0x01c5865c(0,0);
  }
  return;
}


/* ItemController.ProcessSpawn VA=0x1887B70 | public bool ProcessSpawn(BoardItemSpawnerData boardItemSpawnerData, int energyConsumeAmount) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemController_ProcessSpawn_1887B70(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  
  pcVar7 = (char *)(_UNK_0189840c + 0x1897b98);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01898410 + 0x1897bac));
    func_0x0165b424(*(undefined4 *)(_UNK_01898414 + 0x1897bb8));
    func_0x0165b424(*(undefined4 *)(_UNK_01898418 + 0x1897bc4));
    func_0x0165b424(*(undefined4 *)(_UNK_0189841c + 0x1897bd0));
    func_0x0165b424(*(undefined4 *)(_UNK_01898420 + 0x1897bdc));
    func_0x0165b424(*(undefined4 *)(_UNK_01898424 + 0x1897be8));
    func_0x0165b424(*(undefined4 *)(_UNK_01898428 + 0x1897bf4));
    func_0x0165b424(*(undefined4 *)(_UNK_0189842c + 0x1897c00));
    func_0x0165b424(*(undefined4 *)(_UNK_01898430 + 0x1897c0c));
    func_0x0165b424(*(undefined4 *)(_UNK_01898434 + 0x1897c18));
    func_0x0165b424(*(undefined4 *)(_UNK_01898438 + 0x1897c24));
    *pcVar7 = '\x01';
  }
  iVar11 = *(int *)(param_1 + 0x68);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  iVar14 = *(int *)(param_1 + 0x70);
  iVar11 = *(int *)(iVar11 + 0x44);
  if (iVar14 == 0) {
    func_0x0165b6e0();
  }
  iVar14 = *(int *)(iVar14 + 0x6c);
  if (iVar14 == 0) {
    func_0x0165b6e0();
  }
  iVar8 = *(int *)(param_1 + 0x70);
  iVar14 = *(int *)(iVar14 + 0x10);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  iVar8 = *(int *)(iVar8 + 0x70);
  if ((iVar8 == 0) || (*(char *)(iVar8 + 0x68) != '\0')) {
    if (iVar14 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar14 + 0x80);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    if (*(char *)(iVar9 + 8) == '\0') {
      iVar9 = func_0x01898498(param_1);
      if ((iVar9 != 0) && (*(int *)(iVar14 + 0x10) - param_3 < 0)) {
        return 0;
      }
      goto LAB_01897d08;
    }
  }
  else {
    iVar9 = func_0x01898498(param_1);
    if ((iVar9 != 0) && (iVar9 = func_0x017f6870(iVar8,0), iVar9 - param_3 < 0)) {
      return 0;
    }
LAB_01897d08:
    if (iVar11 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar11 + 0x3c) == 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_0189843c + 0x1897d2c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  lVar20 = func_0x018b98a8(0);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  fVar18 = *(float *)(iVar11 + 0x28);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar11 = func_0x018d6300(param_2,0);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = func_0x018d0924(iVar11,0);
  fVar19 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  pcVar7 = (char *)(_UNK_01898440 + 0x1897da8);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01898444 + 0x1897dbc));
    *pcVar7 = '\x01';
  }
  fVar16 = ABS(fVar18);
  fVar17 = ABS(fVar19);
  if (ABS(fVar19) < fVar16) {
    fVar17 = fVar16;
  }
  fVar16 = **(float **)(**(int **)(_UNK_01898448 + 0x1897de0) + 0x5c) * 8.0;
  if (fVar16 < fVar17 * _UNK_01898080) {
    fVar16 = fVar17 * _UNK_01898080;
  }
  if (ABS(fVar19 - fVar18) < fVar16) {
    iVar11 = *(int *)(param_1 + 0x68);
    if (iVar11 == 0) {
      func_0x0165b6e0();
    }
    uVar4 = *(uint *)(iVar11 + 0x18);
    *(uint *)(iVar11 + 0x10) = (uint)lVar20 + uVar4;
    *(uint *)(iVar11 + 0x14) =
         (int)((ulonglong)lVar20 >> 0x20) + ((int)uVar4 >> 0x1f) + (uint)CARRY4((uint)lVar20,uVar4);
  }
  piVar10 = *(int **)(_UNK_0189844c + 0x1897e50);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar7 = (char *)(_UNK_01898450 + 0x1897e6c);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01898454 + 0x1897e80));
    *pcVar7 = '\x01';
  }
  iVar11 = *piVar10;
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar11 = *piVar10;
  }
  iVar11 = **(int **)(iVar11 + 0x5c);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  iVar11 = *(int *)(iVar11 + 0x194);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  iVar11 = func_0x02513db0(iVar11,**(undefined4 **)(_UNK_01898458 + 0x1897ed0));
  if (iVar11 != 0) {
    func_0x02b0bf88(&uStack_58,iVar11,**(undefined4 **)(_UNK_0189845c + 0x1897f00));
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    piStack_3c = piStack_4c;
    cVar2 = '\0';
    puVar12 = *(undefined4 **)(_UNK_01898460 + 0x1897f28);
    piVar10 = *(int **)(_UNK_01898464 + 0x1897f30);
    puVar15 = *(undefined4 **)(_UNK_01898468 + 0x1897f38);
    while (iVar11 = func_0x01710964(&uStack_48,*puVar12), piVar1 = piStack_3c, iVar11 != 0) {
      if (piStack_3c == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar11 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar5 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0xc0);
            goto LAB_01897fa8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar1,*piVar10,0);
LAB_01897fa8:
      iVar11 = (*(code *)*puVar5)(piVar1,puVar5[1]);
      iVar9 = *(int *)(param_1 + 0x68);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar9 = *(int *)(iVar9 + 0x44);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      uVar3 = *(undefined4 *)(iVar9 + 0x14);
      if (iVar11 == 0) {
        func_0x0165b6e0();
      }
      iVar11 = func_0x02ad78a4(iVar11,uVar3,*puVar15);
      if (iVar11 != 0) {
        if (piVar1 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar11 = *piVar1;
        uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_0189846c + 0x1898020)) {
              puVar5 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0xc0);
              goto LAB_01898068;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar1,**(int **)(_UNK_0189846c + 0x1898020),0);
LAB_01898068:
        cVar2 = (*(code *)*puVar5)(piVar1,puVar5[1]);
      }
    }
    func_0x0172cd54(&uStack_48,**(undefined4 **)(_UNK_01898470 + 0x1898090));
    if (cVar2 != '\0') goto LAB_01898144;
  }
  iVar11 = func_0x018969a4();
  iVar9 = *(int *)(param_1 + 0x68);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = *(int *)(iVar9 + 0x44);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar13 = *(int *)(param_1 + 0x70);
  uVar3 = *(undefined4 *)(iVar9 + 0x14);
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  cVar2 = *(char *)(iVar13 + 0xb4);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = func_0x01dd4ecc(iVar11,uVar3,cVar2 != '\0',0);
  ItemController_ChangeCurrentCapacity_1886B5C
            (param_1,param_2,uVar4 ^ 0x80000000,0,0,**(undefined4 **)(_UNK_01898478 + 0x1898134),0);
LAB_01898144:
  iVar11 = func_0x01898498(param_1);
  if (iVar11 == 0) {
    return 1;
  }
  if ((iVar8 != 0) && (*(char *)(iVar8 + 0x68) == '\0')) {
    iVar11 = func_0x017f6870(iVar8,0);
    iVar14 = *(int *)(param_1 + 0x70);
    if (iVar14 == 0) {
      func_0x0165b6e0();
    }
    iVar14 = *(int *)(iVar14 + 0xb0);
    if (iVar14 == 0) {
      func_0x0165b6e0();
    }
    iVar14 = func_0x01925c98(iVar14,0);
    if (iVar14 <= iVar11) {
      piVar10 = *(int **)(_UNK_0189847c + 0x18982bc);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      pcVar7 = (char *)(_UNK_01898480 + 0x18982d8);
      if (*pcVar7 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_01898484 + 0x18982ec));
        *pcVar7 = '\x01';
      }
      iVar11 = *piVar10;
      if (*(int *)(iVar11 + 0x74) == 0) {
        func_0x0165b5a4();
        iVar11 = *piVar10;
      }
      iVar11 = **(int **)(iVar11 + 0x5c);
      if (iVar11 == 0) {
        func_0x0165b6e0();
      }
      *(longlong *)(iVar8 + 0x40) = lVar20 + *(longlong *)(iVar11 + 0x158);
    }
    func_0x017f6d48(iVar8,-param_3,1,0,0);
    return 1;
  }
  if (iVar14 == 0) {
    func_0x0165b6e0();
  }
  iVar11 = *(int *)(param_1 + 0x70);
  iVar8 = *(int *)(iVar14 + 0x10);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  iVar11 = *(int *)(iVar11 + 0xb0);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  iVar11 = func_0x01925c98(iVar11,0);
  if (iVar11 <= iVar8) {
    piVar10 = *(int **)(_UNK_0189848c + 0x18981c0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar7 = (char *)(_UNK_01898490 + 0x18981dc);
    if (*pcVar7 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_01898494 + 0x18981f0));
      *pcVar7 = '\x01';
    }
    iVar11 = *piVar10;
    if (*(int *)(iVar11 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar11 = *piVar10;
    }
    iVar11 = **(int **)(iVar11 + 0x5c);
    if (iVar11 == 0) {
      func_0x0165b6e0();
    }
    *(longlong *)(iVar14 + 0x40) = lVar20 + *(longlong *)(iVar11 + 0x158);
  }
  func_0x01a67638(iVar14,-param_3,1,0,0);
  return 1;
}


/* ItemController.ProcessSpawn VA=0x18887EC | public bool ProcessSpawn(BoardItemPerishableSpawner boardItemPerishableSpawner, int energyConsumeAmount) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemController_ProcessSpawn_18887EC(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  float fVar19;
  longlong lVar20;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  
  pcVar7 = (char *)(_UNK_018991e8 + 0x1898814);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018991ec + 0x1898828));
    func_0x0165b424(*(undefined4 *)(_UNK_018991f0 + 0x1898834));
    func_0x0165b424(*(undefined4 *)(_UNK_018991f4 + 0x1898840));
    func_0x0165b424(*(undefined4 *)(_UNK_018991f8 + 0x189884c));
    func_0x0165b424(*(undefined4 *)(_UNK_018991fc + 0x1898858));
    func_0x0165b424(*(undefined4 *)(_UNK_01899200 + 0x1898864));
    func_0x0165b424(*(undefined4 *)(_UNK_01899204 + 0x1898870));
    func_0x0165b424(*(undefined4 *)(_UNK_01899208 + 0x189887c));
    func_0x0165b424(*(undefined4 *)(_UNK_0189920c + 0x1898888));
    func_0x0165b424(*(undefined4 *)(_UNK_01899210 + 0x1898894));
    func_0x0165b424(*(undefined4 *)(_UNK_01899214 + 0x18988a0));
    func_0x0165b424(*(undefined4 *)(_UNK_01899218 + 0x18988ac));
    func_0x0165b424(*(undefined4 *)(_UNK_0189921c + 0x18988b8));
    func_0x0165b424(*(undefined4 *)(_UNK_01899220 + 0x18988c4));
    func_0x0165b424(*(undefined4 *)(_UNK_01899224 + 0x18988d0));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar12 = *(int *)(param_1 + 0x68);
  uStack_40 = 0;
  fStack_44 = 0.0;
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  iVar8 = *(int *)(param_1 + 0x70);
  iVar12 = *(int *)(iVar12 + 0x44);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  iVar8 = *(int *)(iVar8 + 0x6c);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  iVar13 = *(int *)(param_1 + 0x70);
  iVar8 = *(int *)(iVar8 + 0x10);
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  iVar13 = *(int *)(iVar13 + 0x70);
  if ((iVar13 == 0) || (*(char *)(iVar13 + 0x68) != '\0')) {
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar8 + 0x80);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    if (((*(char *)(iVar9 + 8) == '\0') && (iVar9 = func_0x01898498(param_1), iVar9 != 0)) &&
       (*(int *)(iVar8 + 0x10) - param_3 < 0)) {
      return 0;
    }
  }
  else {
    iVar9 = func_0x01898498(param_1);
    if ((iVar9 != 0) && (iVar9 = func_0x017f6870(iVar13,0), iVar9 - param_3 < 0)) {
      return 0;
    }
  }
  piVar10 = *(int **)(_UNK_01899228 + 0x18989d4);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar7 = (char *)(_UNK_0189922c + 0x18989f0);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01899230 + 0x1898a04));
    *pcVar7 = '\x01';
  }
  iVar9 = *piVar10;
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar9 = *piVar10;
  }
  iVar9 = **(int **)(iVar9 + 0x5c);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = *(int *)(iVar9 + 0x194);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = func_0x02513db0(iVar9,**(undefined4 **)(_UNK_01899234 + 0x1898a54));
  if (iVar9 != 0) {
    func_0x02b0bf88(&uStack_58,iVar9,**(undefined4 **)(_UNK_01899238 + 0x1898a84));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    piStack_34 = piStack_4c;
    cVar2 = '\0';
    puVar17 = *(undefined4 **)(_UNK_0189923c + 0x1898aac);
    piVar10 = *(int **)(_UNK_01899240 + 0x1898ab4);
    puVar16 = *(undefined4 **)(_UNK_01899244 + 0x1898abc);
    while (iVar9 = func_0x01710964(&uStack_40,*puVar17), piVar1 = piStack_34, iVar9 != 0) {
      if (piStack_34 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar9 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
            goto LAB_01898b2c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x016cc99c(piVar1,*piVar10,0);
LAB_01898b2c:
      iVar9 = (*(code *)*puVar3)(piVar1,puVar3[1]);
      iVar11 = *(int *)(param_1 + 0x68);
      if (iVar11 == 0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)(iVar11 + 0x44);
      if (iVar11 == 0) {
        func_0x0165b6e0();
      }
      uVar15 = *(undefined4 *)(iVar11 + 0x14);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar9 = func_0x02ad78a4(iVar9,uVar15,*puVar16);
      if (iVar9 != 0) {
        if (piVar1 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar9 = *piVar1;
        uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01899248 + 0x1898ba4)) {
              puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
              goto LAB_01898bec;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x016cc99c(piVar1,**(int **)(_UNK_01899248 + 0x1898ba4),0);
LAB_01898bec:
        cVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
      }
    }
    func_0x0172cd54(&uStack_40,**(undefined4 **)(_UNK_0189924c + 0x1898c10));
    if (cVar2 != '\0') goto LAB_01898e28;
  }
  iVar9 = func_0x018969a4();
  iVar11 = *(int *)(param_1 + 0x68);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  iVar11 = *(int *)(iVar11 + 0x44);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  iVar14 = *(int *)(param_1 + 0x70);
  uVar15 = *(undefined4 *)(iVar11 + 0x14);
  if (iVar14 == 0) {
    func_0x0165b6e0();
  }
  cVar2 = *(char *)(iVar14 + 0xb4);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  fVar4 = (float)func_0x01dd4ecc(iVar9,uVar15,cVar2 != '\0',0);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  fVar19 = *(float *)(iVar12 + 0x28) - fVar4;
  uVar15 = **(undefined4 **)(_UNK_01899254 + 0x1898cc8);
  if (fVar19 <= 0.0) {
    fVar19 = _UNK_01899010;
  }
  *(float *)(iVar12 + 0x28) = fVar19;
  iVar9 = func_0x0165b4f0(uVar15,5);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  uVar15 = **(undefined4 **)(_UNK_01899258 + 0x1898cf8);
  if (*(int *)(iVar9 + 0xc) == 0) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar9 + 0x10) = uVar15;
  func_0x0165b3c0((undefined4 *)(iVar9 + 0x10),uVar15);
  fStack_44 = -fVar4;
  uVar15 = func_0x017204f4(&fStack_44,0);
  if (*(uint *)(iVar9 + 0xc) < 2) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar9 + 0x14) = uVar15;
  func_0x0165b3c0((undefined4 *)(iVar9 + 0x14),uVar15);
  uVar15 = **(undefined4 **)(_UNK_0189925c + 0x1898d74);
  if (*(uint *)(iVar9 + 0xc) < 3) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar9 + 0x18) = uVar15;
  func_0x0165b3c0((undefined4 *)(iVar9 + 0x18),uVar15);
  uVar15 = func_0x017204f4(iVar12 + 0x28,0);
  if (*(uint *)(iVar9 + 0xc) < 4) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar9 + 0x1c) = uVar15;
  func_0x0165b3c0((undefined4 *)(iVar9 + 0x1c),uVar15);
  uVar15 = **(undefined4 **)(_UNK_01899260 + 0x1898dd8);
  if (*(uint *)(iVar9 + 0xc) < 5) {
    func_0x0165b6e4();
  }
  *(undefined4 *)(iVar9 + 0x20) = uVar15;
  func_0x0165b3c0((undefined4 *)(iVar9 + 0x20),uVar15);
  uVar15 = func_0x026f792c(iVar9,0);
  if (*(int *)(**(int **)(_UNK_01899264 + 0x1898e0c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018b4544(uVar15,0);
LAB_01898e28:
  if (param_2 == 0) {
    func_0x0165b6e0();
    iVar9 = func_0x018da050(0,0);
    func_0x0165b6e0();
  }
  else {
    iVar9 = func_0x018da050(param_2,0);
  }
  bVar18 = *(int *)(param_2 + 0x34) != 0;
  if (bVar18) {
    param_2 = *(int *)(param_1 + 0x98);
  }
  if (bVar18 && param_2 != 0) {
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    uVar15 = *(undefined4 *)(iVar9 + 0x18);
    if (iVar12 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = (int)*(float *)(iVar12 + 0x28);
    if (*(float *)(iVar12 + 0x28) == _UNK_018991e4) {
      iVar9 = -0x80000000;
    }
    func_0x018e1058(param_2,uVar15,iVar9,1,0);
  }
  iVar12 = func_0x01898498(param_1);
  if (iVar12 != 0) {
    if ((iVar13 == 0) || (*(char *)(iVar13 + 0x68) != '\0')) {
      if (iVar8 == 0) {
        func_0x0165b6e0();
      }
      iVar12 = *(int *)(param_1 + 0x70);
      iVar13 = *(int *)(iVar8 + 0x10);
      if (iVar12 == 0) {
        func_0x0165b6e0();
      }
      iVar12 = *(int *)(iVar12 + 0xb0);
      if (iVar12 == 0) {
        func_0x0165b6e0();
      }
      iVar12 = func_0x01925c98(iVar12,0);
      if (iVar12 <= iVar13) {
        if (*(int *)(**(int **)(_UNK_01899280 + 0x1898f44) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        lVar20 = func_0x018b98a8(0);
        if (*(int *)(**(int **)(_UNK_01899284 + 0x1898f70) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        pcVar7 = (char *)(_UNK_01899288 + 0x1898f8c);
        if (*pcVar7 == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_0189928c + 0x1898fa0));
          *pcVar7 = '\x01';
        }
        piVar10 = *(int **)(_UNK_01899290 + 0x1898fb4);
        iVar12 = *piVar10;
        if (*(int *)(iVar12 + 0x74) == 0) {
          func_0x0165b5a4();
          iVar12 = *piVar10;
        }
        iVar12 = **(int **)(iVar12 + 0x5c);
        if (iVar12 == 0) {
          func_0x0165b6e0();
        }
        *(longlong *)(iVar8 + 0x40) = lVar20 + *(longlong *)(iVar12 + 0x158);
      }
      func_0x01a67638(iVar8,-param_3,1,1,0);
    }
    else {
      iVar12 = func_0x017f6870(iVar13,0);
      iVar8 = *(int *)(param_1 + 0x70);
      if (iVar8 == 0) {
        func_0x0165b6e0();
      }
      iVar8 = *(int *)(iVar8 + 0xb0);
      if (iVar8 == 0) {
        func_0x0165b6e0();
      }
      iVar8 = func_0x01925c98(iVar8,0);
      if (iVar8 <= iVar12) {
        if (*(int *)(**(int **)(_UNK_0189926c + 0x1899068) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        lVar20 = func_0x018b98a8(0);
        if (*(int *)(**(int **)(_UNK_01899270 + 0x1899094) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        pcVar7 = (char *)(_UNK_01899274 + 0x18990b0);
        if (*pcVar7 == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_01899278 + 0x18990c4));
          *pcVar7 = '\x01';
        }
        piVar10 = *(int **)(_UNK_0189927c + 0x18990d8);
        iVar12 = *piVar10;
        if (*(int *)(iVar12 + 0x74) == 0) {
          func_0x0165b5a4();
          iVar12 = *piVar10;
        }
        iVar12 = **(int **)(iVar12 + 0x5c);
        if (iVar12 == 0) {
          func_0x0165b6e0();
        }
        *(longlong *)(iVar13 + 0x40) = lVar20 + *(longlong *)(iVar12 + 0x158);
      }
      func_0x017f6d48(iVar13,-param_3,1,1,0);
    }
  }
  return 1;
}


/* ItemController.ProcessSpawn VA=0x1889294 | public bool ProcessSpawn(BoardItemChestSpawner boardItemChestSpawner, int energyConsumeAmount) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemController_ProcessSpawn_1889294(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float fVar14;
  longlong lVar15;
  float fStack_34;
  
  pcVar3 = (char *)(_UNK_0189987c + 0x18992b8);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01899880 + 0x18992cc));
    func_0x0165b424(*(undefined4 *)(_UNK_01899884 + 0x18992d8));
    func_0x0165b424(*(undefined4 *)(_UNK_01899888 + 0x18992e4));
    func_0x0165b424(*(undefined4 *)(_UNK_0189988c + 0x18992f0));
    func_0x0165b424(*(undefined4 *)(_UNK_01899890 + 0x18992fc));
    func_0x0165b424(*(undefined4 *)(_UNK_01899894 + 0x1899308));
    func_0x0165b424(*(undefined4 *)(_UNK_01899898 + 0x1899314));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x68);
  fStack_34 = 0.0;
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar8 = *(int *)(param_1 + 0x70);
  iVar4 = *(int *)(iVar4 + 0x44);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  iVar8 = *(int *)(iVar8 + 0x6c);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = *(int *)(param_1 + 0x70);
  iVar8 = *(int *)(iVar8 + 0x10);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = *(int *)(iVar9 + 0x70);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar8 + 0x80);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = 0;
  uVar10 = 0;
  if (*(char *)(iVar5 + 8) == '\0') {
    iVar5 = func_0x01898498(param_1);
    uVar10 = 0;
    if (iVar5 != 0) {
      uVar10 = (uint)(*(int *)(iVar8 + 0x10) - param_3) >> 0x1f;
    }
  }
  if ((iVar9 != 0) && (iVar5 = func_0x01898498(param_1), iVar5 != 0)) {
    iVar5 = func_0x017f6870(iVar9,0);
    uVar6 = (uint)(iVar5 - param_3) >> 0x1f;
  }
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  if (iVar9 != 0) {
    uVar10 = uVar6;
  }
  if (uVar10 == 0 && *(int *)(iVar4 + 0x38) == 2) {
    iVar5 = func_0x018969a4();
    iVar11 = *(int *)(param_1 + 0x68);
    if (iVar11 == 0) {
      func_0x0165b6e0();
    }
    iVar11 = *(int *)(iVar11 + 0x44);
    if (iVar11 == 0) {
      func_0x0165b6e0();
    }
    iVar12 = *(int *)(param_1 + 0x70);
    uVar7 = *(undefined4 *)(iVar11 + 0x14);
    if (iVar12 == 0) {
      func_0x0165b6e0();
    }
    cVar1 = *(char *)(iVar12 + 0xb4);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    fVar2 = (float)func_0x01dd4ecc(iVar5,uVar7,cVar1 != '\0',0);
    fVar14 = *(float *)(iVar4 + 0x28) - fVar2;
    uVar7 = **(undefined4 **)(_UNK_0189989c + 0x18994c0);
    if (fVar14 <= 0.0) {
      fVar14 = _UNK_01899878;
    }
    *(float *)(iVar4 + 0x28) = fVar14;
    iVar5 = func_0x0165b4f0(uVar7,5);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    uVar7 = **(undefined4 **)(_UNK_018998a0 + 0x18994f0);
    if (*(int *)(iVar5 + 0xc) == 0) {
      func_0x0165b6e4();
    }
    *(undefined4 *)(iVar5 + 0x10) = uVar7;
    func_0x0165b3c0((undefined4 *)(iVar5 + 0x10),uVar7);
    fStack_34 = -fVar2;
    uVar7 = func_0x017204f4(&fStack_34,0);
    if (*(uint *)(iVar5 + 0xc) < 2) {
      func_0x0165b6e4();
    }
    *(undefined4 *)(iVar5 + 0x14) = uVar7;
    func_0x0165b3c0((undefined4 *)(iVar5 + 0x14),uVar7);
    uVar7 = **(undefined4 **)(_UNK_018998a4 + 0x1899568);
    if (*(uint *)(iVar5 + 0xc) < 3) {
      func_0x0165b6e4();
    }
    *(undefined4 *)(iVar5 + 0x18) = uVar7;
    func_0x0165b3c0((undefined4 *)(iVar5 + 0x18),uVar7);
    uVar7 = func_0x017204f4(iVar4 + 0x28,0);
    if (*(uint *)(iVar5 + 0xc) < 4) {
      func_0x0165b6e4();
    }
    *(undefined4 *)(iVar5 + 0x1c) = uVar7;
    func_0x0165b3c0((undefined4 *)(iVar5 + 0x1c),uVar7);
    uVar7 = **(undefined4 **)(_UNK_018998a8 + 0x18995cc);
    if (*(uint *)(iVar5 + 0xc) < 5) {
      func_0x0165b6e4();
    }
    *(undefined4 *)(iVar5 + 0x20) = uVar7;
    func_0x0165b3c0((undefined4 *)(iVar5 + 0x20),uVar7);
    uVar7 = func_0x026f792c(iVar5,0);
    if (*(int *)(**(int **)(_UNK_018998ac + 0x1899600) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x018b4544(uVar7,0);
    iVar4 = func_0x01898498(param_1);
    uVar7 = 1;
    if (iVar4 != 0) {
      if (iVar9 == 0) {
        iVar4 = *(int *)(param_1 + 0x70);
        iVar9 = *(int *)(iVar8 + 0x10);
        if (iVar4 == 0) {
          func_0x0165b6e0();
        }
        iVar4 = *(int *)(iVar4 + 0xb0);
        if (iVar4 == 0) {
          func_0x0165b6e0();
        }
        iVar4 = func_0x01925c98(iVar4,0);
        if (iVar4 <= iVar9) {
          if (*(int *)(**(int **)(_UNK_018998c0 + 0x18997a0) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          lVar15 = func_0x018b98a8(0);
          piVar13 = *(int **)(_UNK_018998c4 + 0x18997cc);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x0165b5a4();
          }
          pcVar3 = (char *)(_UNK_018998c8 + 0x18997e8);
          if (*pcVar3 == '\0') {
            func_0x0165b424(*(undefined4 *)(_UNK_018998cc + 0x18997fc));
            *pcVar3 = '\x01';
          }
          iVar4 = *piVar13;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x0165b5a4();
            iVar4 = *piVar13;
          }
          iVar4 = **(int **)(iVar4 + 0x5c);
          if (iVar4 == 0) {
            func_0x0165b6e0();
          }
          *(longlong *)(iVar8 + 0x40) = lVar15 + *(longlong *)(iVar4 + 0x158);
        }
        uVar7 = 1;
        func_0x01a67638(iVar8,-param_3,1,0,0);
      }
      else {
        iVar4 = func_0x017f6870(iVar9,0);
        iVar8 = *(int *)(param_1 + 0x70);
        if (iVar8 == 0) {
          func_0x0165b6e0();
        }
        iVar8 = *(int *)(iVar8 + 0xb0);
        if (iVar8 == 0) {
          func_0x0165b6e0();
        }
        iVar8 = func_0x01925c98(iVar8,0);
        if (iVar8 <= iVar4) {
          if (*(int *)(**(int **)(_UNK_018998b0 + 0x1899690) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          lVar15 = func_0x018b98a8(0);
          piVar13 = *(int **)(_UNK_018998b4 + 0x18996bc);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x0165b5a4();
          }
          pcVar3 = (char *)(_UNK_018998b8 + 0x18996d8);
          if (*pcVar3 == '\0') {
            func_0x0165b424(*(undefined4 *)(_UNK_018998bc + 0x18996ec));
            *pcVar3 = '\x01';
          }
          iVar4 = *piVar13;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x0165b5a4();
            iVar4 = *piVar13;
          }
          iVar4 = **(int **)(iVar4 + 0x5c);
          if (iVar4 == 0) {
            func_0x0165b6e0();
          }
          *(longlong *)(iVar9 + 0x40) = lVar15 + *(longlong *)(iVar4 + 0x158);
        }
        uVar7 = 1;
        func_0x017f6d48(iVar9,-param_3,1,0,0);
      }
    }
  }
  else {
    uVar7 = 0;
    if (*(int *)(iVar4 + 0x38) != 2) {
      func_0x018998d0(param_1,4);
    }
  }
  return uVar7;
}


/* ItemController.Unbox VA=0x188FF1C | public void Unbox(bool withAnimation) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_Unbox_188FF1C(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_018a0190 + 0x189ff38);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a0194 + 0x189ff4c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a0198 + 0x189ff58));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar5 + 0x44);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  *(undefined1 *)(iVar5 + 100) = 0;
  func_0x018dcb18(&uStack_30,iVar5,1,0);
  uVar6 = uStack_2c;
  uVar2 = uStack_30;
  iVar9 = *(int *)(param_1 + 0x70);
  cVar1 = *(char *)(iVar5 + 0x18);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  piVar10 = *(int **)(iVar9 + 0xe0);
  if (piVar10 == (int *)0x0) {
    func_0x0165b6e0();
  }
  if (cVar1 == '\0') {
    func_0x01bb0494(piVar10,uVar2,uVar6,0);
  }
  else {
    (**(code **)(*piVar10 + 0x148))(piVar10,uVar2,uVar6,*(undefined4 *)(*piVar10 + 0x14c));
  }
  iVar9 = *(int *)(param_1 + 0x68);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  if (*(char *)(iVar9 + 0x8c) != '\0') {
    func_0x018a01b0(param_1);
  }
  func_0x01c5865c(0,0);
  if (*(char *)(iVar5 + 0x18) == '\0') {
    iVar5 = *(int *)(param_1 + 0x6c);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    func_0x018c9138(iVar5,0,0);
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  func_0x018e045c(iVar5,1,0);
  func_0x018a02ac(param_1);
  func_0x018a0334(param_1);
  if (param_2 != 0) {
    func_0x01bf1f84(0x2b,0);
    iVar5 = *(int *)(param_1 + 0x70);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(iVar5 + 0xb0);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0xb4);
    iVar5 = func_0x026f7c90(param_1,0);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f7a00(&uStack_30,iVar5,0);
    pcVar4 = (char *)(_UNK_018a019c + 0x18a0104);
    if (*pcVar4 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_018a01a0 + 0x18a0120));
      *pcVar4 = '\x01';
    }
    puVar3 = *(undefined4 **)(**(int **)(_UNK_018a01a4 + 0x18a0134) + 0x5c);
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar11 = puVar3[3];
    if (*(int *)(**(int **)(_UNK_018a01a8 + 0x18a0140) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x02538bb0(uVar2,uStack_30,uStack_2c,uStack_28,uVar6,uVar7,uVar8,uVar11,
                    **(undefined4 **)(_UNK_018a01ac + 0x18a0170));
  }
  func_0x0189fbc8(param_1);
  return;
}


/* ItemController.PreventMerge VA=0x18914D4 | public bool PreventMerge() { } */

undefined1 ItemController_PreventMerge_18914D4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar1 = 1;
  if (*(int *)(iVar2 + 0x14) != 2) {
    iVar2 = *(int *)(param_1 + 0x6c);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar2 + 0x14) != 4) {
      iVar2 = *(int *)(param_1 + 0x68);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      uVar1 = 0;
      if (*(char *)(iVar2 + 0x98) != '\0') {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* ItemController.IsMergeAvailable VA=0x189153C | public ItemController IsMergeAvailable(bool performMerge) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemController_IsMergeAvailable_189153C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint in_fpscr;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  pcVar10 = (char *)(_UNK_018a2550 + 0x18a1560);
  if (*pcVar10 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a256c + 0x18a1574));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2578 + 0x18a1580));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2584 + 0x18a158c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2590 + 0x18a1598));
    func_0x0165b424(*(undefined4 *)(_UNK_018a259c + 0x18a15a4));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25a8 + 0x18a15b0));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25b4 + 0x18a15bc));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25c0 + 0x18a15c8));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25cc + 0x18a15d4));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25d8 + 0x18a15e0));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25e4 + 0x18a15ec));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25f0 + 0x18a15f8));
    func_0x0165b424(*(undefined4 *)(_UNK_018a25fc + 0x18a1604));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2608 + 0x18a1610));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2614 + 0x18a161c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2620 + 0x18a1628));
    func_0x0165b424(*(undefined4 *)(_UNK_018a262c + 0x18a1634));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2638 + 0x18a1640));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2644 + 0x18a164c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a2648 + 0x18a1658));
    *pcVar10 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar11 = 0;
  uStack_58 = 0;
  iStack_5c = 0;
  iStack_60 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018a264c + 0x18a1678));
  func_0x018dcf98(iVar1,0);
  iVar2 = *(int *)(param_1 + 0x68);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x44);
  }
  if (iVar2 != 0 && iVar3 != 0) {
    iVar11 = 0;
    iVar3 = func_0x01893b24(iVar3,0);
    if (iVar3 == 0) {
      uVar15 = *(undefined4 *)(param_1 + 0x6c);
      if (*(int *)(**(int **)(_UNK_018a26d4 + 0x18a16dc) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar11 = 0;
      iVar3 = func_0x026f7930(uVar15,0,0);
      if (iVar3 == 0) {
        uVar15 = *(undefined4 *)(param_1 + 0x70);
        if (*(int *)(**(int **)(_UNK_018a26dc + 0x18a1718) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        iVar11 = 0;
        iVar3 = func_0x026f7930(uVar15,0,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x6c);
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          iVar3 = func_0x02527c24(iVar3,**(undefined4 **)(_UNK_018a26e0 + 0x18a1768));
          iVar11 = func_0x026f7c90(param_1,0);
          if (iVar11 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f7a00(&uStack_80,iVar11,0);
          uStack_70 = CONCAT44(uStack_7c,uStack_80);
          uStack_68 = uStack_78;
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          puVar4 = *(undefined4 **)(_UNK_018a26e4 + 0x18a17d0);
          *(undefined4 *)(iVar1 + 0x10) = uStack_68;
          uVar15 = *puVar4;
          *(undefined8 *)(iVar1 + 8) = uStack_70;
          uVar15 = func_0x0165b6d4(uVar15);
          func_0x026f8960(uVar15,iVar1,**(undefined4 **)(_UNK_018a26e8 + 0x18a17f8),0);
          if (iVar3 == 0) {
            func_0x0165b6e0();
            func_0x02b0d060(0,uVar15,**(undefined4 **)(_UNK_018a26f0 + 0x18a183c));
            func_0x0165b6e0();
          }
          else {
            func_0x02b0d060(iVar3,uVar15,**(undefined4 **)(_UNK_018a26ec + 0x18a1818));
          }
          func_0x02b0bf88(&uStack_80,iVar3,**(undefined4 **)(_UNK_018a26f4 + 0x18a1858));
          fVar22 = _UNK_018a1824;
          uStack_58 = uStack_80;
          uStack_54 = uStack_7c;
          uStack_50 = uStack_78;
          iStack_4c = iStack_74;
          do {
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        do {
                          iVar11 = func_0x01710964(&uStack_58,
                                                   **(undefined4 **)(_UNK_018a26f8 + 0x18a1888));
                          iVar3 = iStack_4c;
                          if (iVar11 == 0) {
                            func_0x0172cd54(&uStack_58,**(undefined4 **)(_UNK_018a2760 + 0x18a21d0))
                            ;
                            return 0;
                          }
                          iVar11 = *(int *)(param_1 + 0x70);
                          if (iStack_4c == 0) {
                            func_0x0165b6e0();
                          }
                          iVar1 = *(int *)(iVar3 + 0x10);
                          if (iVar1 == 0) {
                            func_0x0165b6e0();
                          }
                          iVar1 = *(int *)(iVar1 + 0x34);
                          if (iVar1 == 0) {
                            func_0x0165b6e0();
                          }
                          uVar15 = *(undefined4 *)(iVar1 + 0x10);
                          uVar16 = *(undefined4 *)(iVar1 + 0x14);
                          if (iVar11 == 0) {
                            func_0x0165b6e0();
                          }
                          iVar11 = func_0x018f24e8(iVar11,uVar15,uVar16,0);
                          if (iVar11 == 0) {
                            func_0x0165b6e0();
                          }
                          iVar1 = *(int *)(iVar11 + 0x10);
                          if (iVar1 == 0) {
                            func_0x0165b6e0();
                          }
                          iVar1 = *(int *)(iVar1 + 0x34);
                          if (iVar1 == 0) {
                            func_0x0165b6e0();
                          }
                        } while (*(char *)(iVar1 + 8) != '\0');
                        iVar11 = *(int *)(iVar11 + 0x14);
                        if (*(int *)(**(int **)(_UNK_018a26fc + 0x18a193c) + 0x74) == 0) {
                          func_0x0165b5a4();
                        }
                        iVar1 = func_0x026f7930(iVar11,0,0);
                      } while (iVar1 != 0);
                      if (iVar11 == 0) {
                        func_0x0165b6e0();
                      }
                      iVar1 = func_0x026f7960(iVar11,0);
                      if (iVar1 == 0) {
                        func_0x0165b6e0();
                      }
                      iVar1 = func_0x026f7db4(iVar1,0);
                    } while (iVar1 == 0);
                    if (iVar11 == 0) {
                      func_0x0165b6e0();
                    }
                    piVar5 = (int *)(iVar11 + 0x68);
                  } while (*piVar5 == 0);
                  iVar1 = *(int *)(*piVar5 + 0x44);
                  if (iVar1 == 0) {
                    func_0x0165b6e0();
                  }
                  uVar16 = *(undefined4 *)(iVar1 + 0xc);
                  iVar2 = *(int *)(param_1 + 0x68);
                  uVar15 = *(undefined4 *)(iVar1 + 8);
                  if (iVar2 == 0) {
                    func_0x0165b6e0();
                  }
                  iVar1 = *(int *)(iVar2 + 0x44);
                  if (iVar1 == 0) {
                    func_0x0165b6e0();
                  }
                  uVar12 = *(undefined4 *)(iVar1 + 8);
                  uVar17 = *(undefined4 *)(iVar1 + 0xc);
                  if (*(int *)(**(int **)(_UNK_018a2700 + 0x18a1a08) + 0x74) == 0) {
                    func_0x0165b5a4();
                  }
                  iVar1 = func_0x01c56a80(uVar15,uVar16,uVar12,uVar17,0);
                } while (iVar1 != 0);
                iVar1 = *piVar5;
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
                iVar1 = *(int *)(iVar1 + 0x44);
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
              } while (*(char *)(iVar1 + 100) != '\0');
              iVar1 = *piVar5;
              if (iVar1 == 0) {
                func_0x0165b6e0();
              }
              piVar6 = *(int **)(iVar1 + 0x2c);
              if (piVar6 == (int *)0x0) {
LAB_018a1ac4:
                iVar1 = *(int *)(param_1 + 0x68);
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
                piVar6 = *(int **)(iVar1 + 0x2c);
                if (piVar6 != (int *)0x0) {
                  uVar7 = (uint)*(byte *)(**(int **)(_UNK_018a270c + 0x18a1aec) + 0xb8);
                  if ((uVar7 <= *(byte *)(*piVar6 + 0xb8)) &&
                     (*(int *)(*(int *)(*piVar6 + 100) + uVar7 * 4 + -4) ==
                      **(int **)(_UNK_018a270c + 0x18a1aec))) {
                    iVar1 = *piVar5;
                    if (iVar1 == 0) {
                      func_0x0165b6e0();
                    }
                    piVar14 = *(int **)(iVar1 + 0x2c);
                    if (piVar14 != (int *)0x0) {
                      uVar7 = (uint)*(byte *)(**(int **)(_UNK_018a2710 + 0x18a1de4) + 0xb8);
                      if ((uVar7 <= *(byte *)(*piVar14 + 0xb8)) &&
                         (*(int *)(*(int *)(*piVar14 + 100) + uVar7 * 4 + -4) ==
                          **(int **)(_UNK_018a2710 + 0x18a1de4))) {
                        iVar1 = *(int *)(param_1 + 0x68);
                        iVar2 = piVar14[0xb];
                        if (iVar1 == 0) {
                          func_0x0165b6e0();
                        }
                        iVar1 = *(int *)(iVar1 + 0x2c);
                        if (iVar1 == 0) {
                          func_0x0165b6e0();
                        }
                        if (iVar2 == *(int *)(iVar1 + 0x18)) {
                          iVar1 = func_0x0177d630(param_1,0);
                          if (iVar1 == 0x67 || param_2 != 1) {
                            if (iVar1 == 0x67) {
                              iVar11 = 0;
                            }
                          }
                          else {
                            iVar1 = *piVar5;
                            if (iVar1 == 0) {
                              func_0x0165b6e0();
                            }
                            iVar1 = *(int *)(iVar1 + 0x44);
                            if (iVar1 == 0) {
                              func_0x0165b6e0();
                            }
                            iVar2 = *piVar5;
                            iVar1 = *(int *)(iVar1 + 0x2c);
                            if (iVar2 == 0) {
                              func_0x0165b6e0();
                            }
                            iVar9 = *(int *)(iVar2 + 0x44);
                            iVar2 = func_0x018d642c(piVar6,0);
                            if (iVar2 == 0) {
                              func_0x0165b6e0();
                            }
                            iVar2 = *(int *)(iVar2 + 0xc);
                            if (iVar9 == 0) {
                              func_0x0165b6e0();
                            }
                            iVar13 = *piVar5;
                            *(int *)(iVar9 + 0x2c) = iVar2 + iVar1;
                            if (iVar13 == 0) {
                              func_0x0165b6e0();
                            }
                            iVar1 = *(int *)(iVar13 + 0x44);
                            if (iVar1 == 0) {
                              func_0x0165b6e0();
                            }
                            uVar7 = 1;
                            if (piVar14[0xc] <= *(int *)(iVar1 + 0x2c)) goto LAB_018a2108;
                            iVar1 = *(int *)(iVar11 + 0xb4);
                            if (iVar1 != 0) {
                              iVar2 = *piVar5;
                              if (iVar2 == 0) {
                                func_0x0165b6e0();
                              }
                              iVar2 = *(int *)(iVar2 + 0x44);
                              if (iVar2 == 0) {
                                func_0x0165b6e0();
                              }
                              func_0x018e1238(iVar1,*(undefined4 *)(iVar2 + 0x2c),piVar14[0xc],0);
                            }
                            iStack_5c = 0;
                            iStack_60 = param_1;
                            func_0x0165b3c0(&iStack_60,param_1);
                            iStack_5c = iVar11;
                            func_0x0165b3c0((uint)&iStack_60 | 4,iVar11);
                            iVar2 = iStack_5c;
                            iVar1 = iStack_60;
                            if (*(int *)(**(int **)(_UNK_018a2714 + 0x18a2270) + 0x74) == 0) {
                              func_0x0165b5a4();
                            }
                            func_0x026f92e0(iVar1,iVar2,**(undefined4 **)(_UNK_018a2718 + 0x18a2294)
                                           );
                            func_0x018a2764(param_1,*(undefined4 *)(iVar3 + 0x10),iVar11);
                            if (*(int *)(**(int **)(_UNK_018a271c + 0x18a22bc) + 0x74) == 0) {
                              func_0x0165b5a4();
                            }
                            func_0x026f92e4(0,**(undefined4 **)(_UNK_018a2720 + 0x18a22d8));
                          }
                          goto LAB_018a21ac;
                        }
                      }
                    }
                  }
                }
                iVar1 = *(int *)(param_1 + 0x68);
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
                piVar6 = *(int **)(iVar1 + 0x2c);
                if (piVar6 != (int *)0x0) {
                  uVar7 = (uint)*(byte *)(**(int **)(_UNK_018a2724 + 0x18a1b3c) + 0xb8);
                  if ((uVar7 <= *(byte *)(*piVar6 + 0xb8)) &&
                     (*(int *)(*(int *)(*piVar6 + 100) + uVar7 * 4 + -4) ==
                      **(int **)(_UNK_018a2724 + 0x18a1b3c))) {
                    iVar1 = *piVar5;
                    if (iVar1 == 0) {
                      func_0x0165b6e0();
                    }
                    piVar14 = *(int **)(iVar1 + 0x2c);
                    if (piVar14 != (int *)0x0) {
                      uVar7 = (uint)*(byte *)(**(int **)(_UNK_018a2728 + 0x18a1f44) + 0xb8);
                      if ((uVar7 <= *(byte *)(*piVar14 + 0xb8)) &&
                         (*(int *)(*(int *)(*piVar14 + 100) + uVar7 * 4 + -4) ==
                          **(int **)(_UNK_018a2728 + 0x18a1f44))) {
                        iVar1 = *(int *)(param_1 + 0x68);
                        iVar2 = piVar14[0xd];
                        if (iVar1 == 0) {
                          func_0x0165b6e0();
                        }
                        iVar1 = *(int *)(iVar1 + 0x2c);
                        if (iVar1 == 0) {
                          func_0x0165b6e0();
                        }
                        if (iVar2 == *(int *)(iVar1 + 0x18)) {
                          iVar1 = func_0x0177d630(param_1,0);
                          if (iVar1 == 0x67) {
                            iVar11 = 0;
                          }
                          else {
                            iVar1 = *piVar5;
                            if (iVar1 == 0) {
                              func_0x0165b6e0();
                            }
                            iVar1 = *(int *)(iVar1 + 0x44);
                            if (iVar1 == 0) {
                              func_0x0165b6e0();
                            }
                            fVar23 = *(float *)(iVar1 + 0x28);
                            iVar1 = func_0x018da050(piVar14,0);
                            if (iVar1 == 0) {
                              func_0x0165b6e0();
                            }
                            uVar15 = *(undefined4 *)(iVar1 + 0x18);
                            if (*(char *)(_UNK_018a272c + 0x18a2004) == '\0') {
                              func_0x0165b424(*(undefined4 *)(_UNK_018a2730 + 0x18a2018));
                              *(undefined1 *)(_UNK_018a2734 + 0x18a2028) = 1;
                            }
                            fVar19 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3)
                            ;
                            fVar20 = ABS(fVar23);
                            fVar21 = ABS(fVar19);
                            if (ABS(fVar19) < fVar20) {
                              fVar21 = fVar20;
                            }
                            fVar20 = **(float **)(**(int **)(_UNK_018a2738 + 0x18a203c) + 0x5c) *
                                     8.0;
                            if (fVar20 < fVar21 * fVar22) {
                              fVar20 = fVar21 * fVar22;
                            }
                            in_fpscr = in_fpscr & 0xfffffff |
                                       (uint)(ABS(fVar19 - fVar23) < fVar20) << 0x1f;
                            if (SUB41(in_fpscr >> 0x1f,0)) {
                              uVar7 = 0;
                              if (param_2 != 0) {
                                func_0x018998d0(param_1,6);
                              }
                              goto LAB_018a2108;
                            }
                            if (param_2 != 0) {
                              iVar1 = *piVar5;
                              if (iVar1 == 0) {
                                func_0x0165b6e0();
                              }
                              iVar1 = *(int *)(iVar1 + 0x44);
                              if (iVar1 == 0) {
                                func_0x0165b6e0();
                              }
                              fVar22 = *(float *)(iVar1 + 0x28);
                              iVar2 = func_0x018d642c(piVar6,0);
                              if (iVar2 == 0) {
                                func_0x0165b6e0();
                              }
                              fVar23 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),
                                                                  (byte)(in_fpscr >> 0x16) & 3);
                              iVar2 = *piVar5;
                              *(float *)(iVar1 + 0x28) = fVar22 + fVar23;
                              if (iVar2 == 0) {
                                func_0x0165b6e0();
                              }
                              iVar1 = *(int *)(iVar2 + 0x44);
                              if (iVar1 == 0) {
                                func_0x0165b6e0();
                              }
                              fVar22 = *(float *)(iVar1 + 0x28);
                              iVar1 = func_0x018da050(piVar14,0);
                              if (iVar1 == 0) {
                                func_0x0165b6e0();
                              }
                              fVar23 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x18),
                                                                  (byte)(in_fpscr >> 0x16) & 3);
                              uVar7 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar23) << 0x1f |
                                      (uint)(fVar22 == fVar23) << 0x1e;
                              uVar18 = uVar7 | (uint)(NAN(fVar22) || NAN(fVar23)) << 0x1c;
                              bVar8 = (byte)(uVar7 >> 0x18);
                              if (!(bool)(bVar8 >> 6 & 1) &&
                                  bVar8 >> 7 == ((byte)(uVar18 >> 0x1c) & 1)) {
                                iVar1 = *piVar5;
                                if (iVar1 == 0) {
                                  func_0x0165b6e0();
                                }
                                iVar2 = *(int *)(iVar1 + 0x44);
                                iVar1 = func_0x018da050(piVar14,0);
                                if (iVar1 == 0) {
                                  func_0x0165b6e0();
                                }
                                uVar15 = *(undefined4 *)(iVar1 + 0x18);
                                if (iVar2 == 0) {
                                  func_0x0165b6e0();
                                }
                                uVar15 = VectorSignedToFloat(uVar15,(byte)(uVar18 >> 0x16) & 3);
                                *(undefined4 *)(iVar2 + 0x28) = uVar15;
                              }
                              iVar1 = *piVar5;
                              if (iVar1 == 0) {
                                func_0x0165b6e0();
                              }
                              iVar1 = *(int *)(iVar1 + 0x44);
                              if (iVar1 == 0) {
                                func_0x0165b6e0();
                              }
                              if (*(int *)(iVar11 + 0x98) != 0) {
                                fVar22 = *(float *)(iVar1 + 0x28);
                                iVar1 = (int)fVar22;
                                if (fVar22 == _UNK_018a26d8) {
                                  iVar1 = -0x80000000;
                                }
                                func_0x018e10e0(*(int *)(iVar11 + 0x98),iVar1,0);
                              }
                              func_0x018a2764(param_1,*(undefined4 *)(iVar3 + 0x10),iVar11);
                              if (*(int *)(**(int **)(_UNK_018a273c + 0x18a245c) + 0x74) == 0) {
                                func_0x0165b5a4();
                              }
                              func_0x026f92e4(0,**(undefined4 **)(_UNK_018a2740 + 0x18a2478));
                            }
                          }
                          goto LAB_018a21ac;
                        }
                      }
                    }
                  }
                }
                iVar1 = *piVar5;
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
                piVar6 = *(int **)(iVar1 + 0x2c);
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  iVar2 = **(int **)(_UNK_018a2744 + 0x18a1b90);
                  if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(iVar1 + 0xb8)) &&
                     (*(int *)(*(int *)(iVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) ==
                      iVar2)) {
                    iVar1 = *(int *)(param_1 + 0x68);
                    if (iVar1 == 0) {
                      func_0x0165b6e0();
                      iVar2 = **(int **)(_UNK_018a2748 + 0x18a20b8);
                    }
                    piVar6 = *(int **)(iVar1 + 0x2c);
                    if (piVar6 != (int *)0x0) {
                      iVar1 = *piVar6;
                      if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(iVar1 + 0xb8)) &&
                         (*(int *)(*(int *)(iVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4)
                          == iVar2)) {
                        uVar7 = (**(code **)(iVar1 + 0x100))
                                          (piVar6,*(undefined4 *)(param_1 + 0x68),*piVar5,
                                           *(undefined4 *)(iVar1 + 0x104));
                        goto LAB_018a2108;
                      }
                    }
                  }
                }
                iVar1 = *piVar5;
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
                piVar6 = *(int **)(iVar1 + 0x2c);
                if (piVar6 == (int *)0x0) {
LAB_018a1c0c:
                  iVar1 = *piVar5;
                  if (iVar1 == 0) {
                    func_0x0165b6e0();
                  }
                  piVar6 = *(int **)(iVar1 + 0x2c);
                  if (piVar6 != (int *)0x0) {
                    iVar1 = *piVar6;
                    uVar7 = (uint)*(byte *)(**(int **)(_UNK_018a2750 + 0x18a1c38) + 0xb8);
                    if ((uVar7 <= *(byte *)(iVar1 + 0xb8)) &&
                       (*(int *)(*(int *)(iVar1 + 100) + uVar7 * 4 + -4) ==
                        **(int **)(_UNK_018a2750 + 0x18a1c38))) goto LAB_018a1cec;
                  }
                  iVar1 = *piVar5;
                  if (iVar1 == 0) {
                    func_0x0165b6e0();
                  }
                  iVar2 = *(int *)(param_1 + 0x68);
                  iVar1 = *(int *)(iVar1 + 0x44);
                  if (iVar2 == 0) {
                    func_0x0165b6e0();
                  }
                  uVar15 = *(undefined4 *)(iVar2 + 0x44);
                  if (iVar1 == 0) {
                    func_0x0165b6e0();
                  }
                  iVar1 = func_0x018940c0(iVar1,uVar15,0);
                  bVar8 = 0;
                  if (iVar1 != 0) {
                    iVar1 = *piVar5;
                    if (iVar1 == 0) {
                      func_0x0165b6e0();
                    }
                    iVar1 = *(int *)(iVar1 + 0x44);
                    if (iVar1 == 0) {
                      func_0x0165b6e0();
                    }
                    bVar8 = *(byte *)(iVar1 + 0x19) ^ 1;
                  }
                  uVar7 = (uint)(bVar8 != 0);
                }
                else {
                  iVar1 = *piVar6;
                  uVar7 = (uint)*(byte *)(**(int **)(_UNK_018a274c + 0x18a1be4) + 0xb8);
                  if ((*(byte *)(iVar1 + 0xb8) < uVar7) ||
                     (*(int *)(*(int *)(iVar1 + 100) + uVar7 * 4 + -4) !=
                      **(int **)(_UNK_018a274c + 0x18a1be4))) goto LAB_018a1c0c;
LAB_018a1cec:
                  uVar7 = 0;
                }
              }
              else {
                iVar1 = *piVar6;
                uVar7 = (uint)*(byte *)(**(int **)(_UNK_018a2704 + 0x18a1a9c) + 0xb8);
                if ((*(byte *)(iVar1 + 0xb8) < uVar7) ||
                   (*(int *)(*(int *)(iVar1 + 100) + uVar7 * 4 + -4) !=
                    **(int **)(_UNK_018a2704 + 0x18a1a9c))) goto LAB_018a1ac4;
                iVar1 = *piVar5;
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
                iVar1 = *(int *)(iVar1 + 0x80);
                if (iVar1 == 0) {
                  func_0x0165b6e0();
                }
                iVar2 = *(int *)(param_1 + 0x68);
                iVar9 = *(int *)(iVar1 + 0xc);
                if (iVar2 == 0) {
                  func_0x0165b6e0();
                }
                iVar2 = *(int *)(iVar2 + 0x2c);
                if (iVar2 == 0) {
                  func_0x0165b6e0();
                }
                iVar2 = func_0x0191869c(*(undefined4 *)(iVar2 + 0x18),0);
                uVar7 = 0;
                if (iVar9 == iVar2) {
                  iVar2 = *(int *)(param_1 + 0x68);
                  iVar1 = *(int *)(iVar1 + 0x10);
                  if (iVar2 == 0) {
                    func_0x0165b6e0();
                  }
                  iVar2 = *(int *)(iVar2 + 0x2c);
                  if (iVar2 == 0) {
                    func_0x0165b6e0();
                  }
                  if (iVar1 == *(int *)(iVar2 + 0x1c)) {
                    iVar1 = *piVar5;
                    if (iVar1 == 0) {
                      func_0x0165b6e0();
                    }
                    iVar1 = *(int *)(iVar1 + 0x44);
                    if (iVar1 == 0) {
                      func_0x0165b6e0();
                    }
                    uVar7 = (uint)(*(char *)(iVar1 + 0x19) == '\0');
                  }
                }
              }
LAB_018a2108:
              iVar1 = *(int *)(param_1 + 0x70);
              if (iVar1 == 0) {
                func_0x0165b6e0();
              }
              uVar15 = func_0x019086c0(iVar1,iVar11,0);
              iVar1 = ItemController_PreventMerge_18914D4(iVar11);
              iVar2 = 1;
              if (iVar1 == 0) {
                iVar2 = ItemController_PreventMerge_18914D4(param_1);
              }
            } while (uVar7 == 0);
            if (*(int *)(**(int **)(_UNK_018a2708 + 0x18a2160) + 0x74) == 0) {
              func_0x0165b5a4();
            }
            iVar1 = func_0x026f7720(uVar15,0,0);
          } while (iVar2 != 0 || iVar1 != 1);
          if (param_2 != 0) {
            func_0x018a2af4(param_1,iVar11,*(undefined4 *)(iVar3 + 0x10),uVar15);
          }
LAB_018a21ac:
          func_0x0172cd54(&uStack_58,**(undefined4 **)(_UNK_018a2758 + 0x18a21b8));
        }
      }
    }
  }
  return iVar11;
}


/* ItemController.MergeIt VA=0x1892AF4 | private void MergeIt(ItemController targetItem, CellController nearestCollidingCell, BoardItemData mergedItemData) { } */

void ItemController_MergeIt_1892AF4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *extraout_r2;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_4c [4];
  int iStack_48;
  int iStack_44;
  int aiStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(iRam018a3058 + 0x18a2b14);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(iRam018a305c + 0x18a2b2c));
    func_0x0165b424(*(undefined4 *)(iRam018a3060 + 0x18a2b38));
    func_0x0165b424(*(undefined4 *)(iRam018a3064 + 0x18a2b44));
    func_0x0165b424(*(undefined4 *)(iRam018a3068 + 0x18a2b50));
    func_0x0165b424(*(undefined4 *)(iRam018a306c + 0x18a2b5c));
    func_0x0165b424(*(undefined4 *)(iRam018a3070 + 0x18a2b68));
    func_0x0165b424(*(undefined4 *)(iRam018a3074 + 0x18a2b74));
    func_0x0165b424(*(undefined4 *)(iRam018a3078 + 0x18a2b80));
    func_0x0165b424(*(undefined4 *)(iRam018a307c + 0x18a2b8c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iStack_44 = 0;
  iStack_48 = 0;
  aiStack_40[0] = 0;
  auStack_4c[0] = 0;
  if (*(int *)(**(int **)(iRam018a3080 + 0x18a2bb0) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f92ec(3,**(undefined4 **)(iRam018a3084 + 0x18a2be4));
  pcVar6 = (char *)(iRam018a3088 + 0x18a2bf8);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(iRam018a308c + 0x18a2c0c));
    *pcVar6 = '\x01';
  }
  iVar7 = **(int **)(**(int **)(iRam018a3090 + 0x18a2c20) + 0x5c);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = *(int *)(param_1 + 0x70);
  iVar7 = *(int *)(iVar7 + 0x3c);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  uVar10 = *(undefined4 *)(iVar9 + 0x6c);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = func_0x01a64224(iVar7,uVar10,0);
  if (iVar7 == 0) {
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar7 = *(int *)(param_1 + 0x68);
    uStack_38 = 0;
    uStack_28 = 0;
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(iVar7 + 0x44);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(**(int **)(iRam018a3094 + 0x18a2cb4) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uStack_34 = func_0x01c56d84(iVar7 + 8,0);
    func_0x0165b3c0((uint)&uStack_38 | 4,uStack_34);
    if (param_2 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(param_2 + 0x68);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(iVar7 + 0x44);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    uStack_30 = func_0x01c56d84(iVar7 + 8,0);
    func_0x0165b3c0(&uStack_30,uStack_30);
    iVar7 = *(int *)(param_1 + 0x68);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    uStack_2c = *(undefined4 *)(iVar7 + 0x2c);
    func_0x0165b3c0(&uStack_2c);
    uVar4 = uStack_28;
    uVar3 = uStack_2c;
    uVar2 = uStack_30;
    uVar1 = uStack_34;
    uVar10 = uStack_38;
    if (*(int *)(**(int **)(iRam018a3098 + 0x18a2d5c) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x026f92f0(uVar10,uVar1,uVar2,uVar3,uVar4,**(undefined4 **)(iRam018a309c + 0x18a2d88));
  }
  aiStack_40[0] = 0;
  iStack_44 = 0;
  iStack_48 = param_1;
  func_0x0165b3c0(&iStack_48,param_1);
  iStack_44 = param_2;
  func_0x0165b3c0((uint)&iStack_48 | 4,param_2);
  aiStack_40[0] = param_4;
  func_0x0165b3c0(aiStack_40,param_4);
  iVar11 = aiStack_40[0];
  iVar9 = iStack_44;
  iVar7 = iStack_48;
  if (*(int *)(**(int **)(iRam018a30a0 + 0x18a2dec) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f92f4(iVar7,iVar9,iVar11,**(undefined4 **)(iRam018a30a4 + 0x18a2e14));
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(param_2 + 0x68);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  piVar8 = *(int **)(iVar7 + 0x2c);
  if (piVar8 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(iRam018a30a8 + 0x18a2e50) + 0xb8);
    if ((uVar5 <= *(byte *)(*piVar8 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar8 + 100) + uVar5 * 4 + -4) == **(int **)(iRam018a30a8 + 0x18a2e50)))
    {
      iVar7 = *(int *)(param_2 + 0x68);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = *(int *)(iVar7 + 0x44);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar11 = *(int *)(iVar7 + 0x60);
      iVar7 = func_0x018dbb0c(piVar8,0);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = func_0x0243ff4c(*(undefined4 *)(iVar7 + 0xc),
                              **(undefined4 **)(iRam018a30ac + 0x18a2ec4));
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      if (iVar11 < *(int *)(iVar7 + 8)) {
        iVar7 = iVar11 + 1;
      }
      else {
        iVar7 = func_0x018dbb0c(piVar8,0);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = *(int *)(iVar7 + 0x10);
      }
      iVar9 = *(int *)(param_2 + 0x68);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar9 = *(int *)(iVar9 + 0x44);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      *(int *)(iVar9 + 0x60) = iVar7;
    }
  }
  iVar7 = *(int *)(param_1 + 0x68);
  if (iVar7 == 0) {
    func_0x0165b6e0();
    iVar7 = *(int *)(param_1 + 0x68);
    uRam00000097 = 1;
    bVar12 = iVar7 == 0;
    if (bVar12) {
      iVar7 = func_0x0165b6e0();
      if (bVar12) {
        *extraout_r2 = (char)iVar11;
        extraout_r2[-0xffd] = (char)uRam018a281c;
      }
      if (*(int *)(iVar7 + 0x30) != 0) {
        func_0x01ae20b4();
      }
      return;
    }
  }
  else {
    *(undefined1 *)(iVar7 + 0x97) = 1;
  }
  iVar9 = *(int *)(param_2 + 0x68);
  *(undefined1 *)(iVar7 + 0x98) = 1;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined1 *)(iVar9 + 0x98) = 1;
  if (iVar7 != 0) {
    func_0x01ae20b4(iVar7,0,0,0,0,0);
  }
  iVar7 = *(int *)(param_1 + 0x70);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(iVar7 + 0x78);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  func_0x018e6448(iVar7,param_2,param_1,0);
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x01ae20b4(*(int *)(param_2 + 0x30),0,0,0,0,0);
  }
  iVar7 = *(int *)(param_1 + 0x60);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f8c90(iVar7,0xffffffff,0);
  auStack_4c[0] = func_0x018a30dc(param_1,param_2,param_4,param_3);
  func_0x026f8a20(auStack_4c,0);
  return;
}


/* ItemController.MergeTweenAction VA=0x18930DC | private UniTaskVoid MergeTweenAction(ItemController targetItem, BoardItemData mergedItemData, CellController nearestCollidingCell) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
ItemController_MergeTweenAction_18930DC
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar1 = (char *)(_UNK_018a31b4 + 0x18a30fc);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a31b8 + 0x18a3114));
    *pcVar1 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  func_0x0165b3c0((uint)&uStack_48 | 4,0);
  uStack_40 = param_1;
  func_0x0165b3c0(&uStack_40,param_1);
  uStack_3c = param_2;
  func_0x0165b3c0(&uStack_3c,param_2);
  uStack_38 = param_3;
  func_0x0165b3c0(&uStack_38,param_3);
  uStack_34 = param_4;
  func_0x0165b3c0(&uStack_34,param_4);
  uStack_48 = 0xffffffff;
  func_0x023d6a6c((uint)&uStack_48 | 4,&uStack_48,**(undefined4 **)(_UNK_018a31bc + 0x18a3198));
  return 0;
}


/* ItemController.UpdateSpawners VA=0x188B748 | private void UpdateSpawners(float elapsedTime) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_UpdateSpawners_188B748(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  pcVar8 = (char *)(_UNK_0189bbac + 0x189b760);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0189bbb0 + 0x189b774));
    func_0x0165b424(*(undefined4 *)(_UNK_0189bbb4 + 0x189b780));
    func_0x0165b424(*(undefined4 *)(_UNK_0189bbb8 + 0x189b78c));
    func_0x0165b424(*(undefined4 *)(_UNK_0189bbbc + 0x189b798));
    func_0x0165b424(*(undefined4 *)(_UNK_0189bbc0 + 0x189b7a4));
    func_0x0165b424(*(undefined4 *)(_UNK_0189bbc4 + 0x189b7b0));
    func_0x0165b424(*(undefined4 *)(_UNK_0189bbc8 + 0x189b7bc));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0189bbcc + 0x189b7d0) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uVar17 = func_0x018b98a8(0);
  iVar5 = (int)((ulonglong)uVar17 >> 0x20);
  uVar12 = (uint)uVar17;
  iVar9 = *(int *)(param_1 + 0x68);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  piVar10 = *(int **)(iVar9 + 0x2c);
  if (piVar10 == (int *)0x0) {
    return;
  }
  iVar9 = *piVar10;
  uVar7 = (uint)*(byte *)(**(int **)(_UNK_0189bbd0 + 0x189b818) + 0xb8);
  uVar4 = (uint)*(byte *)(iVar9 + 0xb8);
  if ((uVar4 < uVar7) ||
     (*(int *)(*(int *)(iVar9 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_0189bbd0 + 0x189b818))) {
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_0189bbd4 + 0x189b84c) + 0xb8);
    if ((uVar4 < uVar7) ||
       (*(int *)(*(int *)(iVar9 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_0189bbd4 + 0x189b84c)))
    {
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_0189bbd8 + 0x189b878) + 0xb8);
      if (uVar4 < uVar7) {
        return;
      }
      if (*(int *)(*(int *)(iVar9 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_0189bbd8 + 0x189b878))
      {
        return;
      }
      iVar9 = *(int *)(param_1 + 0x68);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar9 = *(int *)(iVar9 + 0x44);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar9 + 0x38) != 1) {
        return;
      }
      func_0x018a5f9c(param_1,piVar10);
      iVar9 = *(int *)(param_1 + 0x68);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar9 = *(int *)(iVar9 + 0x44);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      uVar4 = *(uint *)(iVar9 + 0x30);
      iVar5 = *(int *)(iVar9 + 0x34) - (iVar5 + (uint)(uVar4 < uVar12));
      if ((int)-(iVar5 + (uint)(uVar4 != uVar12)) < 0 !=
          (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(uVar4 != uVar12)))) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      iVar5 = *(int *)(iVar5 + 0x44);
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      func_0x0189312c(iVar5,param_1,2,piVar10,0,0,0);
      if (*(int *)(**(int **)(_UNK_0189bbdc + 0x189b95c) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar5 = **(int **)(_UNK_0189bbe0 + 0x189b978);
      pcVar8 = (char *)(_UNK_0429216c + 0x4291cdc);
      if (*pcVar8 == '\0') {
        func_0x027026c8(*(undefined4 *)(_UNK_04292170 + 0x4291cf0));
        func_0x027026c8(*(undefined4 *)(_UNK_04292174 + 0x4291cfc));
        func_0x027026c8(*(undefined4 *)(_UNK_04292178 + 0x4291d08));
        func_0x027026c8(*(undefined4 *)(_UNK_0429217c + 0x4291d14));
        func_0x027026c8(*(undefined4 *)(_UNK_04292180 + 0x4291d20));
        *pcVar8 = '\x01';
      }
      iVar9 = *(int *)(iVar5 + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x027026cc();
      }
      iVar9 = *(int *)(iVar5 + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      if (*(int *)(*(int *)(iVar9 + 0x5c) + 4) != 0) {
        if (*(int *)(**(int **)(_UNK_04292184 + 0x4291dac) + 0x74) == 0) {
          func_0x027026cc();
        }
        uVar12 = 0;
        iVar9 = func_0x02702a50(0);
        if (iVar9 != 0) {
          piVar10 = *(int **)(_UNK_04292188 + 0x4291ddc);
          iVar9 = **(int **)(*piVar10 + 0x5c);
          if (iVar9 == 0) {
            func_0x027026bc();
          }
          iVar1 = *(int *)(iVar5 + 0x10);
          iVar9 = *(int *)(iVar9 + 0x14);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x027026e4();
          }
          piVar13 = *(int **)(_UNK_0429218c + 0x4291e14);
          iVar6 = *piVar13;
          uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x38);
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x027026cc(iVar6);
          }
          piVar2 = (int *)func_0x048c2f0c(uVar11,0);
          if (piVar2 == (int *)0x0) {
            func_0x027026bc();
          }
          uVar11 = (**(code **)(*piVar2 + 0x1a0))(piVar2,*(undefined4 *)(*piVar2 + 0x1a4));
          if (iVar9 == 0) {
            func_0x027026bc();
          }
          iVar9 = func_0x02b0b63c(iVar9,uVar11,**(undefined4 **)(_UNK_04292190 + 0x4291e80));
          if (iVar9 == 0) {
            iVar9 = **(int **)(*piVar10 + 0x5c);
            if (iVar9 == 0) {
              func_0x027026bc();
            }
            iVar1 = *(int *)(iVar5 + 0x10);
            iVar9 = *(int *)(iVar9 + 0x10);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x027026e4();
            }
            iVar6 = *piVar13;
            uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x38);
            if (*(int *)(iVar6 + 0x74) == 0) {
              func_0x027026cc(iVar6);
            }
            piVar10 = (int *)func_0x048c2f0c(uVar11,0);
            if (piVar10 == (int *)0x0) {
              func_0x027026bc();
            }
            uVar11 = (**(code **)(*piVar10 + 0x1a0))(piVar10,*(undefined4 *)(*piVar10 + 0x1a4));
            if (iVar9 == 0) {
              func_0x027026bc();
            }
            iVar1 = *(int *)(iVar9 + 8);
            uVar4 = *(uint *)(iVar9 + 0xc);
            piVar10 = *(int **)(_UNK_04292194 + 0x4291f40);
            *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
            iVar6 = *piVar10;
            if (iVar1 == 0) {
              func_0x027026bc();
            }
            if (uVar4 < *(uint *)(iVar1 + 0xc)) {
              *(uint *)(iVar9 + 0xc) = uVar4 + 1;
              puVar3 = (undefined4 *)(iVar1 + uVar4 * 4 + 0x10);
              *puVar3 = uVar11;
              func_0x027026d4(puVar3,uVar11);
            }
            else {
              func_0x02b0b274(iVar9,uVar11,
                              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        while( true ) {
          iVar9 = *(int *)(iVar5 + 0x10);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x027026cc();
          }
          iVar9 = *(int *)(iVar5 + 0x10);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
          if (iVar9 == 0) {
            func_0x027026bc();
          }
          if ((*(ushort *)(*(int *)(iVar5 + 0x10) + 0xbd) & 1) == 0) {
            func_0x027026e4();
          }
          if (*(int *)(iVar9 + 0x10) <= (int)uVar12) break;
          iVar9 = *(int *)(iVar5 + 0x10);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x027026cc();
          }
          iVar9 = *(int *)(iVar5 + 0x10);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x027026e4();
          }
          iVar9 = **(int **)(iVar9 + 0x5c);
          if (iVar9 == 0) {
            func_0x027026bc();
          }
          if (*(uint *)(iVar9 + 0xc) <= uVar12) {
            func_0x027026d8();
          }
          piVar10 = *(int **)(iVar9 + uVar12 * 4 + 0x10);
          if (piVar10 != (int *)0x0) {
            iVar9 = *(int *)(iVar5 + 0x10);
            if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
              iVar9 = func_0x027026e4();
            }
            iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0x1c);
            if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
              iVar9 = func_0x027026e4(iVar9);
            }
            iVar1 = *piVar10;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar13[-1] == iVar9) {
                  puVar3 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                  goto LAB_04292148;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)func_0x027026e8(piVar10,iVar9,0);
LAB_04292148:
            (*(code *)*puVar3)(piVar10,0,puVar3[1]);
          }
          uVar12 = uVar12 + 1;
        }
      }
      return;
    }
    iVar9 = *(int *)(param_1 + 0x68);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar9 + 0x10) != 0 || *(int *)(iVar9 + 0x14) != 0) {
      iVar9 = *(int *)(param_1 + 0x70);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      if (*(char *)(iVar9 + 0x85) != '\0') {
        return;
      }
      func_0x018a5f9c(param_1,piVar10);
      iVar9 = func_0x023f7c6c(param_1,**(undefined4 **)(_UNK_0189bbe4 + 0x189ba68));
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar9 + 0x10) == 1) {
        return;
      }
      iVar9 = func_0x01bbac8c(0);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar9 = func_0x01bba670(iVar9,0);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      if (*(char *)(iVar9 + 10) == '\0') {
        iVar9 = func_0x018d6030(piVar10,param_1,*(undefined4 *)(param_1 + 0x70),0);
        iVar1 = *(int *)(param_1 + 0x68);
        if (iVar9 != 0) {
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          uVar4 = *(uint *)(iVar1 + 0x18);
          *(uint *)(iVar1 + 0x10) = uVar12 + uVar4;
          *(uint *)(iVar1 + 0x14) = iVar5 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar12,uVar4);
          return;
        }
      }
      else {
        do {
          iVar9 = func_0x018d6030(piVar10,param_1,*(undefined4 *)(param_1 + 0x70),0);
        } while (iVar9 != 0);
        iVar1 = *(int *)(param_1 + 0x68);
      }
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      iVar9 = *(int *)(iVar1 + 0x14);
      bVar14 = uVar12 < *(uint *)(iVar1 + 0x10);
      if ((int)(iVar5 - (iVar9 + (uint)bVar14)) < 0 !=
          (SBORROW4(iVar5,iVar9) != SBORROW4(iVar5 - iVar9,(uint)bVar14))) {
        return;
      }
      iVar9 = *(int *)(param_1 + 0x68);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      uVar4 = *(uint *)(iVar9 + 0x18);
      *(uint *)(iVar9 + 0x10) = uVar12 + uVar4;
      *(uint *)(iVar9 + 0x14) = iVar5 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar12,uVar4);
      iVar5 = func_0x018976a4(param_1,0);
      if (iVar5 != 0) {
        return;
      }
      goto LAB_0189ba04;
    }
  }
  else {
    iVar9 = func_0x018976a4(param_1,0);
    if (iVar9 != 0) {
      return;
    }
    iVar9 = *(int *)(param_1 + 0x68);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar9 + 0x10) != 0 || *(int *)(iVar9 + 0x14) != 0) {
      func_0x018a5f9c(param_1,piVar10);
      iVar9 = *(int *)(param_1 + 0x68);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar1 = *(int *)(iVar9 + 0x14);
      bVar14 = uVar12 < *(uint *)(iVar9 + 0x10);
      if ((int)(iVar5 - (iVar1 + (uint)bVar14)) < 0 !=
          (SBORROW4(iVar5,iVar1) != SBORROW4(iVar5 - iVar1,(uint)bVar14))) {
        return;
      }
      iVar9 = *(int *)(param_1 + 0x68);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      uVar4 = *(uint *)(iVar9 + 0x18);
      *(uint *)(iVar9 + 0x10) = uVar12 + uVar4;
      *(uint *)(iVar9 + 0x14) = iVar5 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar12,uVar4);
LAB_0189ba04:
      pcVar8 = (char *)(_UNK_018a683c + 0x18a6760);
      if (*pcVar8 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_018a6840 + 0x18a6774));
        *pcVar8 = '\x01';
      }
      iVar5 = *(int *)(param_1 + 0x68);
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      iVar5 = *(int *)(iVar5 + 0x44);
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      fVar16 = *(float *)(iVar5 + 0x28);
      if (piVar10 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar5 = func_0x018d6300(piVar10,0);
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      uVar11 = func_0x018d0924(iVar5,0);
      fVar15 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      if (fVar15 <= fVar16) {
        func_0x01896f94(param_1,piVar10,0,0);
      }
      else {
        ItemController_ChangeCurrentCapacity_1886B5C
                  (param_1,piVar10,0x3f800000,0,0,**(undefined4 **)(_UNK_018a6844 + 0x18a6804),1);
      }
      return;
    }
  }
  iVar9 = *(int *)(param_1 + 0x68);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = *(uint *)(iVar9 + 0x18);
  *(uint *)(iVar9 + 0x10) = uVar12 + uVar4;
  *(uint *)(iVar9 + 0x14) = iVar5 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar12,uVar4);
  return;
}


/* ItemController.SpawnerCharge VA=0x1896740 | private void SpawnerCharge(BoardItemSpawnerData spawnerData) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_SpawnerCharge_1896740(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  pcVar2 = (char *)(_UNK_018a683c + 0x18a6760);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a6840 + 0x18a6774));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  fVar5 = *(float *)(iVar3 + 0x28);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x018d6300(param_2,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  uVar1 = func_0x018d0924(iVar3,0);
  fVar4 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (fVar4 <= fVar5) {
    func_0x01896f94(param_1,param_2,0,0);
  }
  else {
    ItemController_ChangeCurrentCapacity_1886B5C
              (param_1,param_2,0x3f800000,0,0,**(undefined4 **)(_UNK_018a6844 + 0x18a6804),1);
  }
  return;
}


/* ItemController.DragCollisionEnter VA=0x18986A8 | public void DragCollisionEnter(GameObject other) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_DragCollisionEnter_18986A8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_018a87b8 + 0x18a86c4);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a87bc + 0x18a86d8));
    func_0x0165b424(*(undefined4 *)(_UNK_018a87c0 + 0x18a86e4));
    func_0x0165b424(*(undefined4 *)(_UNK_018a87c4 + 0x18a86f0));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018a87c8 + 0x18a8704) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar2 = func_0x018bb808(param_2,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 100) != 0) {
      func_0x01cc4d78(*(int *)(param_1 + 100),0);
    }
  }
  else {
    uStack_14 = 0;
    iStack_18 = param_1;
    func_0x0165b3c0(&iStack_18,param_1);
    iVar2 = *(int *)(param_1 + 0x68);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    uStack_14 = *(undefined4 *)(iVar2 + 0x2c);
    func_0x0165b3c0((uint)&iStack_18 | 4);
    uVar1 = uStack_14;
    iVar2 = iStack_18;
    if (*(int *)(**(int **)(_UNK_018a87cc + 0x18a876c) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x026f930c(iVar2,uVar1,**(undefined4 **)(_UNK_018a87d0 + 0x18a8790));
  }
  return;
}


/* ItemController.DragCollisionExit VA=0x18987D4 | public void DragCollisionExit(GameObject other) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_DragCollisionExit_18987D4(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_018a88c0 + 0x18a87f0);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a88c4 + 0x18a8804));
    func_0x0165b424(*(undefined4 *)(_UNK_018a88c8 + 0x18a8810));
    func_0x0165b424(*(undefined4 *)(_UNK_018a88cc + 0x18a881c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018a88d0 + 0x18a8830) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar1 = func_0x018bb808(param_2,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    func_0x01cc4d78(iVar1,0);
  }
  else {
    iStack_14 = param_1;
    func_0x0165b3c0(&iStack_14,param_1);
    iVar1 = iStack_14;
    if (*(int *)(**(int **)(_UNK_018a88d4 + 0x18a8870) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x026f9310(iVar1,**(undefined4 **)(_UNK_018a88d8 + 0x18a8890));
  }
  return;
}


/* ItemController.DragStarted VA=0x18988DC | public void DragStarted() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_DragStarted_18988DC(int param_1)

{
  undefined4 *puVar1;
  undefined1 extraout_r1;
  uint uVar2;
  undefined1 *extraout_r2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 unaff_r11;
  undefined4 *puVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 auStack_f90 [3912];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar10 = &uStack_48;
  pcVar3 = (char *)(iRam018a8b98 + 0x18a88f4);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(iRam018a8b9c + 0x18a8908));
    func_0x0165b424(*(undefined4 *)(iRam018a8ba0 + 0x18a8914));
    func_0x0165b424(*(undefined4 *)(iRam018a8ba4 + 0x18a8920));
    *pcVar3 = '\x01';
  }
  iStack_24 = param_1;
  func_0x0165b3c0(&iStack_24,param_1);
  iVar4 = iStack_24;
  if (*(int *)(**(int **)(iRam018a8ba8 + 0x18a8944) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f9314(iVar4,**(undefined4 **)(iRam018a8bac + 0x18a8964));
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 == 0) {
    func_0x0165b6e0();
    iVar4 = *(int *)(param_1 + 0x68);
    uRam00000099 = 1;
    bVar12 = iVar4 == 0;
    if (bVar12) {
      puVar11 = (undefined *)0x18a8b98;
      iVar4 = func_0x0165b6e0();
      if (bVar12) {
        *extraout_r2 = extraout_r1;
        iVar4 = _UNK_018a5bbc;
        puVar11 = &UNK_018a5528;
        extraout_r2[-0x240] = (char)_UNK_018a5bbc;
        puVar10 = (undefined4 *)auStack_f90;
      }
      *(undefined **)((int)puVar10 + -4) = puVar11;
      *(undefined4 *)((int)puVar10 + -8) = unaff_r11;
      *(undefined4 *)((int)puVar10 + -0xc) = 0;
      *(int *)((int)puVar10 + -0x10) = param_1;
      pcVar3 = (char *)(_UNK_018a8cc4 + 0x18a8bd8);
      if (*pcVar3 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_018a8cc8 + 0x18a8bec));
        func_0x0165b424(*(undefined4 *)(_UNK_018a8ccc + 0x18a8bf8));
        func_0x0165b424(*(undefined4 *)(_UNK_018a8cd0 + 0x18a8c04));
        *pcVar3 = '\x01';
      }
      *(int *)((int)puVar10 + -0x14) = iVar4;
      func_0x0165b3c0((undefined1 *)((int)puVar10 + -0x14),iVar4);
      uVar6 = *(undefined4 *)((int)puVar10 + -0x14);
      if (*(int *)(**(int **)(_UNK_018a8cd4 + 0x18a8c28) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      func_0x026f9318(uVar6,**(undefined4 **)(_UNK_018a8cd8 + 0x18a8c48));
      iVar5 = *(int *)(iVar4 + 100);
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      iVar5 = func_0x01cc4d78(iVar5,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar4 + 0x6c);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        uVar6 = func_0x025274ac(iVar5,**(undefined4 **)(_UNK_018a8cdc + 0x18a8c90));
        iVar4 = *(int *)(iVar4 + 100);
        if (iVar4 == 0) {
          func_0x0165b6e0();
        }
        func_0x01cc4fc0(iVar4,uVar6,0);
      }
      return;
    }
  }
  else {
    *(undefined1 *)(iVar4 + 0x99) = 1;
  }
  iVar5 = *(int *)(iVar4 + 0x44);
  iVar4 = *(int *)(param_1 + 0x70);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = *(undefined4 *)(iVar5 + 8);
  uVar9 = *(undefined4 *)(iVar5 + 0xc);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x018f24e8(iVar4,uVar6,uVar9,0);
  func_0x0189df38(param_1,1);
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  if ((*(int *)(iVar5 + 100) == 0) && (piVar8 = *(int **)(param_1 + 0x54), piVar8 != (int *)0x0)) {
    uVar2 = (uint)*(byte *)(**(int **)(iRam018a8bb0 + 0x18a8b04) + 0xb8);
    if ((uVar2 <= *(byte *)(*piVar8 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar8 + 100) + uVar2 * 4 + -4) == **(int **)(iRam018a8bb0 + 0x18a8b04)))
    {
      uVar6 = func_0x026f7c90(param_1,0);
      pcVar3 = (char *)(iRam018a8bb4 + 0x18a8b4c);
      if (*pcVar3 == '\0') {
        func_0x0165b424(*(undefined4 *)(iRam018a8bb8 + 0x18a8b60));
        *pcVar3 = '\x01';
      }
      puVar1 = *(undefined4 **)(**(int **)(iRam018a8bbc + 0x18a8b78) + 0x5c);
      uStack_48 = puVar1[2];
      uStack_44 = 0;
      func_0x018b2198(piVar8,uVar6,*puVar1,puVar1[1]);
    }
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(iVar4 + 0x10);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = func_0x026f7c90(iVar7,0);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7a00(&uStack_40,iVar7,0);
  uStack_28 = uStack_38;
  uStack_30 = uStack_40;
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar5 + 0x38) = uStack_28;
  *(undefined8 *)(iVar5 + 0x30) = uStack_30;
  iVar5 = *(int *)(param_1 + 0x68);
  uVar6 = *(undefined4 *)(iVar4 + 8);
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar5 + 0x3c) = uVar6;
  *(undefined4 *)(iVar5 + 0x40) = uVar9;
  iVar5 = *(int *)(iVar4 + 0x10);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  func_0x0189130c(iVar5,0);
  iVar5 = *(int *)(param_1 + 0x70);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  uStack_48 = 0;
  func_0x018f4e24(iVar5,iVar4,0,0);
  return;
}


/* ItemController.DragContinues VA=0x1898BC0 | public void DragContinues() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_DragContinues_1898BC0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_018a8cc4 + 0x18a8bd8);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a8cc8 + 0x18a8bec));
    func_0x0165b424(*(undefined4 *)(_UNK_018a8ccc + 0x18a8bf8));
    func_0x0165b424(*(undefined4 *)(_UNK_018a8cd0 + 0x18a8c04));
    *pcVar2 = '\x01';
  }
  iStack_14 = param_1;
  func_0x0165b3c0(&iStack_14,param_1);
  iVar3 = iStack_14;
  if (*(int *)(**(int **)(_UNK_018a8cd4 + 0x18a8c28) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f9318(iVar3,**(undefined4 **)(_UNK_018a8cd8 + 0x18a8c48));
  iVar3 = *(int *)(param_1 + 100);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x01cc4d78(iVar3,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    uVar1 = func_0x025274ac(iVar3,**(undefined4 **)(_UNK_018a8cdc + 0x18a8c90));
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x01cc4fc0(iVar3,uVar1,0);
  }
  return;
}


/* ItemController.DragStopped VA=0x1898CE0 | public void DragStopped() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_DragStopped_1898CE0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  int *piVar20;
  int unaff_r8;
  int *piVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  pcVar15 = (char *)(_UNK_018a9be8 + 0x18a8d00);
  if (*pcVar15 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018a9bec + 0x18a8d14));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9bf0 + 0x18a8d20));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9bf4 + 0x18a8d2c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9bf8 + 0x18a8d38));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9bfc + 0x18a8d44));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c00 + 0x18a8d50));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c04 + 0x18a8d5c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c08 + 0x18a8d68));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c0c + 0x18a8d74));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c10 + 0x18a8d80));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c14 + 0x18a8d8c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c18 + 0x18a8d98));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c1c + 0x18a8da4));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c20 + 0x18a8db0));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c24 + 0x18a8dbc));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c28 + 0x18a8dc8));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c2c + 0x18a8dd4));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c30 + 0x18a8de0));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c34 + 0x18a8dec));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c38 + 0x18a8df8));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c3c + 0x18a8e04));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c40 + 0x18a8e10));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c44 + 0x18a8e1c));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c48 + 0x18a8e28));
    func_0x0165b424(*(undefined4 *)(_UNK_018a9c4c + 0x18a8e34));
    *pcVar15 = '\x01';
  }
  iStack_64 = 0;
  iStack_68 = 0;
  iStack_6c = 0;
  iStack_70 = 0;
  iVar10 = func_0x0165b6d4(**(undefined4 **)(_UNK_018a9c50 + 0x18a8e4c));
  func_0x018dd980(iVar10,0);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  *(int *)(iVar10 + 8) = param_1;
  func_0x0165b3c0((int *)(iVar10 + 8),param_1);
  if (*(int *)(**(int **)(_UNK_018a9c54 + 0x18a8e94) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f931c(0,**(undefined4 **)(_UNK_018a9c58 + 0x18a8eb4));
  func_0x018a7e24(param_1);
  iVar16 = *(int *)(param_1 + 0x68);
  if (iVar16 == 0) {
    func_0x0165b6e0();
  }
  *(undefined1 *)(iVar16 + 0x99) = 0;
  iVar16 = func_0x0177da70(param_1,0);
  if (iVar16 != 0) {
    iVar16 = func_0x0177d630(param_1,0);
    if ((iVar16 - 0x57U < 0xf) && ((1 << (iVar16 - 0x57U & 0xff) & 0x5edbU) != 0))
    goto LAB_018a9250;
  }
  iVar16 = *(int *)(param_1 + 0x6c);
  if (iVar16 == 0) {
    func_0x0165b6e0();
  }
  uVar11 = func_0x025274ac(iVar16,**(undefined4 **)(_UNK_018a9c5c + 0x18a8f30));
  piVar21 = *(int **)(_UNK_018a9c60 + 0x18a8f48);
  if (*(int *)(*piVar21 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar16 = func_0x026f7720(uVar11,0,0);
  if (((iVar16 != 0) && (iVar16 = func_0x0189d438(iVar16,uVar11), iVar16 != 0)) &&
     (iVar16 = func_0x0177d860(param_1,0), iVar16 == 3)) goto LAB_018a9250;
  iVar16 = func_0x018a9cd8(param_1,uVar11);
  if (iVar16 != 0) {
    return;
  }
  iVar16 = *(int *)(param_1 + 0x6c);
  if (iVar16 == 0) {
    func_0x0165b6e0();
  }
  iVar16 = func_0x025281d0(iVar16,**(undefined4 **)(_UNK_018a9c64 + 0x18a8fc4));
  if (iVar16 == 0) goto LAB_018a9250;
  iVar16 = *(int *)(param_1 + 0x70);
  uVar11 = func_0x026f7c90(param_1,0);
  if (iVar16 == 0) {
    func_0x0165b6e0();
  }
  iVar16 = func_0x01901df0(iVar16,uVar11,0);
  if (iVar16 == 0) {
    func_0x0165b6e0();
  }
  if (0 < *(int *)(iVar16 + 0xc)) {
    iVar12 = func_0x02b0af9c(iVar16,0,**(undefined4 **)(_UNK_018a9c68 + 0x18a9030));
    if (iVar12 == 0) {
      func_0x0165b6e0();
    }
    iVar12 = *(int *)(iVar12 + 0x34);
    if (iVar12 == 0) {
      func_0x0165b6e0();
    }
    if (*(char *)(iVar12 + 8) != '\0') goto LAB_018a9064;
  }
  iVar12 = func_0x026f7c90(param_1,0);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7a00(&uStack_90,iVar12,0);
  *(undefined4 *)(iVar10 + 0x14) = uStack_88;
  *(undefined8 *)(iVar10 + 0xc) = uStack_90;
  iVar12 = *(int *)(param_1 + 0x6c);
  uStack_78 = uStack_88;
  uStack_80 = uStack_90;
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  iVar12 = func_0x02527c24(iVar12,**(undefined4 **)(_UNK_018a9c6c + 0x18a90d4));
  uVar11 = func_0x0165b6d4(**(undefined4 **)(_UNK_018a9c70 + 0x18a90ec));
  func_0x02e51fac(uVar11,iVar10,**(undefined4 **)(_UNK_018a9c74 + 0x18a9108),0);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  iVar12 = func_0x02b0ba68(iVar12,uVar11,**(undefined4 **)(_UNK_018a9c78 + 0x18a912c));
  uVar11 = func_0x0165b6d4(**(undefined4 **)(_UNK_018a9c7c + 0x18a9144));
  func_0x026f8960(uVar11,iVar10,**(undefined4 **)(_UNK_018a9c80 + 0x18a9160),0);
  if (iVar12 == 0) {
    func_0x0165b6e0();
    func_0x02b0d060(0,uVar11,**(undefined4 **)(_UNK_018a9c88 + 0x18a91a0));
    func_0x0165b6e0();
  }
  else {
    func_0x02b0d060(iVar12,uVar11,**(undefined4 **)(_UNK_018a9c84 + 0x18a9180));
  }
  if (*(int *)(iVar12 + 0xc) == 0) goto LAB_018a9250;
  iVar10 = func_0x02b0af9c(iVar12,0,**(undefined4 **)(_UNK_018a9c8c + 0x18a91c8));
  uVar11 = ItemController_IsMergeAvailable_189153C(param_1,1);
  if (*(int *)(*piVar21 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar12 = func_0x026f7720(uVar11,0,0);
  if (iVar12 != 0) {
    return;
  }
  iVar12 = func_0x0177da70(param_1,0);
  if (iVar12 != 0) {
    iVar12 = func_0x0177d630(param_1,0);
    if ((iVar12 - 0x59U < 0x1b) && ((1 << (iVar12 - 0x59U & 0xff) & 0x400c849U) != 0))
    goto LAB_018a9250;
  }
  iVar12 = *(int *)(param_1 + 0x70);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iVar17 = *(int *)(iVar10 + 0x34);
  if (iVar17 == 0) {
    func_0x0165b6e0();
  }
  uVar11 = *(undefined4 *)(iVar17 + 0x10);
  uVar18 = *(undefined4 *)(iVar17 + 0x14);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  iVar12 = func_0x018f24e8(iVar12,uVar11,uVar18,0);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  iVar12 = *(int *)(iVar12 + 0x14);
  if (*(int *)(*piVar21 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar17 = func_0x026f7930(iVar12,0,0);
  if (iVar17 == 0) {
    if (iVar12 == 0) {
      func_0x0165b6e0();
    }
    iVar17 = *(int *)(iVar12 + 0x68);
    if (iVar17 != 0) {
      unaff_r8 = *(int *)(iVar17 + 0x44);
    }
    if (iVar17 != 0 && unaff_r8 != 0) {
      puVar19 = *(undefined4 **)(_UNK_018a9cac + 0x18a94d0);
      iVar10 = func_0x023f7c6c(iVar12,*puVar19);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar10 + 0x14) == 2) goto LAB_018a9250;
      iVar10 = func_0x023f7c6c(iVar12,*puVar19);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar10 + 0x14) == 4) goto LAB_018a9250;
      iVar10 = *(int *)(param_1 + 0x68);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      uVar23 = func_0x018940c0(unaff_r8,*(undefined4 *)(iVar10 + 0x44),0);
      if ((int)uVar23 != 0) {
        iVar17 = *(int *)(param_1 + 0x68);
        iVar10 = iVar17;
        if (iVar17 == 0) {
          uVar23 = func_0x0165b6e0();
          iVar10 = *(int *)(param_1 + 0x68);
        }
        piVar20 = *(int **)(iVar17 + 0x2c);
        uVar11 = *(undefined4 *)(iVar12 + 0x68);
        if (piVar20 == (int *)0x0) {
          func_0x0165b6e0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar11);
        }
        uVar14 = (**(code **)(*piVar20 + 0x100))
                           (piVar20,iVar10,uVar11,*(undefined4 *)(*piVar20 + 0x104));
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 == 0) {
          func_0x0165b6e0();
        }
        iVar10 = *(int *)(iVar10 + 0x44);
        if (iVar10 == 0) {
          func_0x0165b6e0();
        }
        uVar11 = 0;
        uVar13 = 0;
        if (*(char *)(iVar10 + 0x19) == '\0') {
          uVar13 = *(byte *)(unaff_r8 + 0x19) ^ 1;
        }
        if ((uVar13 & uVar14) != 0) {
          iVar10 = *(int *)(param_1 + 0x70);
          if (iVar10 == 0) {
            func_0x0165b6e0();
          }
          uVar11 = func_0x019086c0(iVar10,iVar12,0);
        }
        if (*(int *)(*piVar21 + 0x74) == 0) {
          func_0x0165b5a4();
        }
        iVar10 = func_0x026f7930(uVar11,0,0);
        if ((iVar10 != 0) && (iVar10 = func_0x01893b78(unaff_r8,0), iVar10 == 0)) {
          if (uVar14 == 0) {
            iVar10 = *(int *)(param_1 + 0x68);
            if (iVar10 == 0) {
              func_0x0165b6e0();
            }
            piVar21 = *(int **)(iVar10 + 0x2c);
            if (piVar21 != (int *)0x0) {
              piVar20 = *(int **)(_UNK_018a9cd4 + 0x18a9664);
              iVar16 = *piVar21;
              iVar10 = *piVar20;
              if (((uint)*(byte *)(iVar10 + 0xb8) <= (uint)*(byte *)(iVar16 + 0xb8)) &&
                 (*(int *)(*(int *)(iVar16 + 100) + (uint)*(byte *)(iVar10 + 0xb8) * 4 + -4) ==
                  iVar10)) {
                iVar16 = *(int *)(iVar12 + 0x68);
                if (iVar16 == 0) {
                  func_0x0165b6e0();
                  iVar10 = *piVar20;
                }
                piVar21 = *(int **)(iVar16 + 0x2c);
                if (piVar21 != (int *)0x0) {
                  iVar16 = *piVar21;
                  if (((uint)*(byte *)(iVar10 + 0xb8) <= (uint)*(byte *)(iVar16 + 0xb8)) &&
                     (*(int *)(*(int *)(iVar16 + 100) + (uint)*(byte *)(iVar10 + 0xb8) * 4 + -4) ==
                      iVar10)) {
                    iVar10 = *(int *)(param_1 + 0x70);
                    if (iVar10 == 0) {
                      func_0x0165b6e0();
                    }
                    iVar16 = *(int *)(param_1 + 0x68);
                    iVar10 = *(int *)(iVar10 + 0xb0);
                    if (iVar16 == 0) {
                      func_0x0165b6e0();
                    }
                    iVar16 = *(int *)(iVar16 + 0x44);
                    if (iVar16 == 0) {
                      func_0x0165b6e0();
                    }
                    iVar17 = *(int *)(param_1 + 0x68);
                    uVar11 = *(undefined4 *)(iVar16 + 0x14);
                    if (iVar17 == 0) {
                      func_0x0165b6e0();
                    }
                    iVar16 = *(int *)(iVar17 + 0x44);
                    if (iVar16 == 0) {
                      func_0x0165b6e0();
                    }
                    uVar18 = *(undefined4 *)(iVar16 + 0x10);
                    if (iVar10 == 0) {
                      func_0x0165b6e0();
                    }
                    iVar10 = func_0x01925414(iVar10,uVar11,uVar18,0);
                    if (iVar10 == 0) {
                      func_0x018998d0(param_1,7);
                    }
                  }
                }
              }
            }
          }
          goto LAB_018a9aa8;
        }
        goto LAB_018a9064;
      }
      iVar10 = func_0x01893bb8(unaff_r8,0);
      if (iVar10 == 0) goto LAB_018a9064;
      iVar17 = *(int *)(param_1 + 0x68);
      iVar10 = *(int *)(param_1 + 0x70);
      if (iVar17 == 0) {
        func_0x0165b6e0();
      }
      iVar17 = *(int *)(iVar17 + 0x44);
      if (iVar17 == 0) {
        func_0x0165b6e0();
      }
      uVar18 = *(undefined4 *)(iVar17 + 8);
      uVar11 = *(undefined4 *)(iVar17 + 0xc);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      iVar10 = func_0x018f24e8(iVar10,uVar18,uVar11,0);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      iVar17 = *(int *)(iVar12 + 0x68);
      iVar22 = *(int *)(param_1 + 0x70);
      iVar10 = *(int *)(iVar10 + 0x10);
      if (iVar17 == 0) {
        func_0x0165b6e0();
      }
      iVar17 = *(int *)(iVar17 + 0x44);
      if (iVar17 == 0) {
        func_0x0165b6e0();
      }
      uVar11 = *(undefined4 *)(iVar17 + 8);
      uVar18 = *(undefined4 *)(iVar17 + 0xc);
      if (iVar22 == 0) {
        func_0x0165b6e0();
      }
      iVar17 = func_0x018f24e8(iVar22,uVar11,uVar18,0);
      if (iVar17 == 0) {
        func_0x0165b6e0();
      }
      iVar17 = *(int *)(iVar17 + 0x10);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      iVar10 = func_0x026f7c90(iVar10,0);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      func_0x026f7a00(&uStack_80,iVar10,0);
      fVar2 = (float)uStack_80;
      fVar6 = uStack_80._4_4_;
      iVar10 = func_0x026f7c90(param_1,0);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      func_0x026f7a00(&uStack_80,iVar10,0);
      fVar3 = (float)uStack_80;
      pcVar15 = (char *)(_UNK_018a9cb0 + 0x18a97e4);
      fVar7 = uStack_80._4_4_;
      if (*pcVar15 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_018a9cb4 + 0x18a97fc));
        *pcVar15 = '\x01';
      }
      piVar21 = *(int **)(_UNK_018a9cb8 + 0x18a9810);
      if (*(int *)(*piVar21 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      if (iVar17 == 0) {
        func_0x0165b6e0();
      }
      iVar10 = func_0x026f7c90(iVar17,0);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      func_0x026f7a00(&uStack_80,iVar10,0);
      fVar4 = (float)uStack_80;
      fVar8 = uStack_80._4_4_;
      iVar10 = func_0x026f7c90(param_1,0);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      func_0x026f7a00(&uStack_80,iVar10,0);
      fVar5 = (float)uStack_80;
      fVar9 = uStack_80._4_4_;
      if (*pcVar15 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_018a9cbc + 0x18a98b0));
        *pcVar15 = '\x01';
      }
      if (*(int *)(*piVar21 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar10 = *(int *)(param_1 + 0x68);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      piVar21 = *(int **)(iVar10 + 0x2c);
      if (piVar21 == (int *)0x0) {
LAB_018a9940:
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 == 0) {
          func_0x0165b6e0();
        }
        piVar21 = *(int **)(iVar10 + 0x2c);
        if (piVar21 != (int *)0x0) {
          iVar10 = *piVar21;
          uVar14 = (uint)*(byte *)(**(int **)(_UNK_018a9cc4 + 0x18a9968) + 0xb8);
          if ((uVar14 <= *(byte *)(iVar10 + 0xb8)) &&
             (*(int *)(*(int *)(iVar10 + 100) + uVar14 * 4 + -4) ==
              **(int **)(_UNK_018a9cc4 + 0x18a9968))) goto LAB_018a99ec;
        }
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 == 0) {
          func_0x0165b6e0();
        }
        piVar21 = *(int **)(iVar10 + 0x2c);
        bVar1 = false;
        if (piVar21 != (int *)0x0) {
          iVar10 = *piVar21;
          uVar14 = (uint)*(byte *)(**(int **)(_UNK_018a9cc8 + 0x18a99bc) + 0xb8);
          if (uVar14 <= *(byte *)(iVar10 + 0xb8)) {
            bVar1 = *(int *)(*(int *)(iVar10 + 100) + uVar14 * 4 + -4) ==
                    **(int **)(_UNK_018a9cc8 + 0x18a99bc);
          }
        }
      }
      else {
        iVar10 = *piVar21;
        uVar14 = (uint)*(byte *)(**(int **)(_UNK_018a9cc0 + 0x18a9918) + 0xb8);
        if ((*(byte *)(iVar10 + 0xb8) < uVar14) ||
           (*(int *)(*(int *)(iVar10 + 100) + uVar14 * 4 + -4) !=
            **(int **)(_UNK_018a9cc0 + 0x18a9918))) goto LAB_018a9940;
LAB_018a99ec:
        bVar1 = true;
      }
      if (!(bool)(bVar1 & SQRT((fVar6 - fVar7) * (fVar6 - fVar7) + (fVar2 - fVar3) * (fVar2 - fVar3)
                              ) < SQRT((fVar8 - fVar9) * (fVar8 - fVar9) +
                                       (fVar4 - fVar5) * (fVar4 - fVar5)))) {
        iVar10 = func_0x0177da70(param_1,0);
        if (iVar10 != 0) {
          iVar10 = func_0x0177d630(param_1,0);
          if ((iVar10 - 0x59U < 0x10) && ((1 << (iVar10 - 0x59U & 0xff) & 0x8849U) != 0))
          goto LAB_018a9250;
        }
        iVar10 = func_0x0177da70(param_1,0);
        if ((iVar10 != 0) &&
           ((iVar10 = func_0x0177d630(param_1,0), iVar10 == 0xb || iVar10 == 7 &&
            (*(int *)(iVar12 + 0x68) != 0)))) {
          iVar10 = *(int *)(*(int *)(iVar12 + 0x68) + 0x44);
          if (iVar10 == 0) {
            func_0x0165b6e0();
          }
          iVar10 = func_0x01893c94(iVar10,0);
          if (iVar10 != 0) {
LAB_018a9250:
            func_0x01c59048(param_1,0,0);
            return;
          }
        }
LAB_018a9aa8:
        iStack_6c = 0;
        iStack_70 = param_1;
        func_0x0165b3c0(&iStack_70,param_1);
        iStack_6c = iVar12;
        func_0x0165b3c0((uint)&iStack_70 | 4,iVar12);
        iVar16 = iStack_6c;
        iVar10 = iStack_70;
        if (*(int *)(**(int **)(_UNK_018a9ccc + 0x18a9ad8) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        func_0x026f9324(iVar10,iVar16,**(undefined4 **)(_UNK_018a9cd0 + 0x18a9b00));
        return;
      }
      goto LAB_018a9064;
    }
  }
  iVar12 = *(int *)(param_1 + 0x68);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  piVar21 = *(int **)(iVar12 + 0x2c);
  if (piVar21 != (int *)0x0) {
    iVar12 = *piVar21;
    uVar14 = (uint)*(byte *)(**(int **)(_UNK_018a9c90 + 0x18a9340) + 0xb8);
    if ((uVar14 <= *(byte *)(iVar12 + 0xb8)) &&
       (*(int *)(*(int *)(iVar12 + 100) + uVar14 * 4 + -4) == **(int **)(_UNK_018a9c90 + 0x18a9340))
       ) goto LAB_018a9064;
  }
  iVar12 = *(int *)(param_1 + 0x68);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  piVar21 = *(int **)(iVar12 + 0x2c);
  if (piVar21 != (int *)0x0) {
    iVar12 = *piVar21;
    uVar14 = (uint)*(byte *)(**(int **)(_UNK_018a9c94 + 0x18a9390) + 0xb8);
    if ((uVar14 <= *(byte *)(iVar12 + 0xb8)) &&
       (*(int *)(*(int *)(iVar12 + 100) + uVar14 * 4 + -4) == **(int **)(_UNK_018a9c94 + 0x18a9390))
       ) goto LAB_018a9064;
  }
  iVar12 = *(int *)(param_1 + 0x68);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  piVar21 = *(int **)(iVar12 + 0x2c);
  if (piVar21 != (int *)0x0) {
    iVar12 = *piVar21;
    uVar14 = (uint)*(byte *)(**(int **)(_UNK_018a9c98 + 0x18a93e0) + 0xb8);
    if ((uVar14 <= *(byte *)(iVar12 + 0xb8)) &&
       (*(int *)(*(int *)(iVar12 + 100) + uVar14 * 4 + -4) == **(int **)(_UNK_018a9c98 + 0x18a93e0))
       ) goto LAB_018a9064;
  }
  iVar12 = *(int *)(iVar10 + 0x34);
  if (iVar12 == 0) {
    func_0x0165b6e0();
  }
  if (*(char *)(iVar12 + 8) == '\0') {
    if (*(int *)(**(int **)(_UNK_018a9c9c + 0x18a9430) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x026f92ec(2,**(undefined4 **)(_UNK_018a9ca0 + 0x18a944c));
    iStack_68 = 0;
    iStack_64 = iVar10;
    func_0x0165b3c0((uint)&iStack_68 | 4,iVar10);
    iStack_68 = param_1;
    func_0x0165b3c0(&iStack_68,param_1);
    iVar16 = iStack_64;
    iVar10 = iStack_68;
    if (*(int *)(**(int **)(_UNK_018a9ca4 + 0x18a948c) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x026f9320(iVar10,iVar16,**(undefined4 **)(_UNK_018a9ca8 + 0x18a94b4));
    return;
  }
LAB_018a9064:
  func_0x018aa6bc(param_1,iVar16);
  return;
}


/* ItemController.ProcessItemClick VA=0x189AA4C | public void ProcessItemClick() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemController_ProcessItemClick_189AA4C(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_018aabc0 + 0x18aaa64);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018aabc4 + 0x18aaa78));
    *pcVar1 = '\x01';
  }
  func_0x018aabcc(param_1);
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar2 + 100);
  iVar2 = func_0x018aaca4(param_1,iVar3);
  if (iVar2 != 0) {
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar3 + 0x14);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x68);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x44);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    uVar5 = *(undefined4 *)(iVar2 + 8);
    iVar3 = *(int *)(param_1 + 0x68);
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar3 + 0x44);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    uVar7 = *(undefined4 *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    if (*(int *)(**(int **)(_UNK_018aabc8 + 0x18aab20) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uStack_20 = 0;
    iVar2 = func_0x01c56a80(uVar5,uVar4,uVar7,uVar6);
    if (iVar2 != 0) {
      func_0x018aad5c(param_1);
      iVar2 = *(int *)(param_1 + 0x68);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar2 = *(int *)(iVar2 + 0x44);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      if ((*(char *)(iVar2 + 0x19) != '\0') && (iVar2 = func_0x0177d864(param_1,0), iVar2 == 1)) {
        if (*(int *)(param_1 + 0x68) != 0) {
          iVar2 = *(int *)(param_1 + 0x70);
          if (iVar2 == 0) {
            func_0x0165b6e0();
          }
          iVar2 = func_0x018e9364(iVar2,0);
          iVar3 = func_0x026f7c90(param_1,0);
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f7a00(&uStack_2c,iVar3,0);
          if (iVar2 == 0) {
            func_0x0165b6e0();
          }
          func_0x01ba4edc(iVar2,3,uStack_2c,uStack_28,uStack_24,0);
        }
        return;
      }
    }
  }
  return;
}


/* ItemController.ProcessItemClickValidCheck VA=0x189ACA4 | private bool ProcessItemClickValidCheck(BoardPosition selectedPosition) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ItemController_ProcessItemClickValidCheck_189ACA4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_018aad50 + 0x18aacbc);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018aad54 + 0x18aacd0));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    bVar5 = false;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    if (*(int *)(**(int **)(_UNK_018aad58 + 0x18aacec) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    bVar5 = false;
    iVar1 = func_0x026f7720(uVar4,0,0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x68);
    }
    if (iVar1 != 0 && iVar2 != 0) {
      iVar2 = *(int *)(param_2 + 0x14);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      bVar5 = *(int *)(iVar2 + 0x68) != 0;
    }
  }
  return bVar5;
}


/* BoardData.GetMergedItemData VA=0x1915890 | public BoardItemData GetMergedItemData(int setID, int level) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetMergedItemData_1915890(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_01925a84 + 0x19258b0);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925a88 + 0x19258c4));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a8c + 0x19258d0));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a90 + 0x19258dc));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a94 + 0x19258e8));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a98 + 0x19258f4));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x01923230(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01923230(param_1);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = func_0x01923588(iVar1,param_2,&iStack_1c);
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01925aa8 + 0x1925950) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar2 = func_0x026f7720(iVar1,0,0);
      iVar1 = iStack_1c;
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          func_0x0165b6e0();
        }
        iVar2 = iStack_1c;
        if (*(int *)(iVar1 + 0x14) != 0) {
          if (iStack_1c == 0) {
            func_0x0165b6e0();
          }
          iVar1 = *(int *)(iVar2 + 0x14);
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          if (param_3 < *(int *)(iVar1 + 0xc)) {
            uVar3 = func_0x019232c0(param_1,param_2,param_3 + 1,0,0);
            return uVar3;
          }
        }
      }
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x0165b6e0();
      }
      return *(undefined4 *)(iVar1 + 0x18);
    }
  }
  puVar5 = *(undefined4 **)(_UNK_01925a9c + 0x19259f8);
  uStack_20 = param_2;
  uVar3 = func_0x0165b5ac(*puVar5,&uStack_20);
  iStack_24 = param_3;
  uVar4 = func_0x0165b5ac(*puVar5,&iStack_24);
  uVar3 = func_0x017282d4(**(undefined4 **)(_UNK_01925aa0 + 0x1925a30),uVar3,uVar4,0);
  if (*(int *)(**(int **)(_UNK_01925aa4 + 0x1925a44) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018b45f0(uVar3,0);
  return 0;
}


/* BoardData.IsMergeable VA=0x1915AAC | public bool IsMergeable(int setID, int level) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardData_IsMergeable_1915AAC(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01925b28 + 0x1925ac8);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925b2c + 0x1925adc));
    *pcVar2 = '\x01';
  }
  uVar1 = BoardData_GetMergedItemData_1915890(param_1,param_2,param_3);
  if (*(int *)(**(int **)(_UNK_01925b30 + 0x1925b04) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  (*(code *)&UNK_0571ebe0)(uVar1,0,0);
  return;
}


/* BoardController.SaveSpawnerSetIDsOnInitialize VA=0x18DB7E8 | public void SaveSpawnerSetIDsOnInitialize() { } */

/* WARNING: Removing unreachable block (ram,0x018ebaf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_SaveSpawnerSetIDsOnInitialize_18DB7E8(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar6 = (char *)(_UNK_018ebc24 + 0x18eb800);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc28 + 0x18eb814));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc2c + 0x18eb820));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc30 + 0x18eb82c));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc34 + 0x18eb838));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc38 + 0x18eb844));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc3c + 0x18eb850));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc40 + 0x18eb85c));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc44 + 0x18eb868));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc48 + 0x18eb874));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc4c + 0x18eb880));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc50 + 0x18eb88c));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc54 + 0x18eb898));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc58 + 0x18eb8a4));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebc5c + 0x18eb8b0));
    *pcVar6 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  piStack_2c = piStack_3c;
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x0192322c(iVar4,0);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x01924408(iVar4,0);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_58,iVar4,**(undefined4 **)(_UNK_018ebc60 + 0x18eb928));
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  piStack_2c = piStack_4c;
  puVar11 = *(undefined4 **)(_UNK_018ebc64 + 0x18eb948);
  piVar9 = *(int **)(_UNK_018ebc68 + 0x18eb950);
  piVar8 = *(int **)(_UNK_018ebc6c + 0x18eb958);
  piVar10 = *(int **)(_UNK_018ebc70 + 0x18eb960);
  piVar5 = *(int **)(_UNK_018ebc74 + 0x18eb968);
  do {
    iVar4 = func_0x01710964(&uStack_38,**(undefined4 **)(_UNK_018ebc8c + 0x18eb970));
    piVar1 = piStack_2c;
    if (iVar4 == 0) {
      func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_018ebc90 + 0x18ebb3c));
      return;
    }
    if (piStack_2c == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar7 = piVar1[5];
    iVar4 = piVar1[3];
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0bf88(&uStack_58,iVar7,**(undefined4 **)(_UNK_018ebc78 + 0x18eb9b4));
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    piStack_3c = piStack_4c;
    do {
      do {
        iVar7 = func_0x01710964(&uStack_48,*puVar11);
        if (iVar7 == 0) goto LAB_018ebadc;
      } while (piStack_3c == (int *)0x0);
      iVar7 = *piStack_3c;
      uVar3 = (uint)*(byte *)(*piVar9 + 0xb8);
      uVar2 = (uint)*(byte *)(iVar7 + 0xb8);
      if ((uVar3 <= uVar2) && (*(int *)(*(int *)(iVar7 + 100) + uVar3 * 4 + -4) == *piVar9)) break;
      uVar3 = (uint)*(byte *)(*piVar8 + 0xb8);
      if ((uVar3 <= uVar2) && (*(int *)(*(int *)(iVar7 + 100) + uVar3 * 4 + -4) == *piVar8)) break;
      uVar3 = (uint)*(byte *)(*piVar10 + 0xb8);
      if ((uVar3 <= uVar2) && (*(int *)(*(int *)(iVar7 + 100) + uVar3 * 4 + -4) == *piVar10)) break;
      uVar3 = (uint)*(byte *)(*piVar5 + 0xb8);
    } while ((uVar2 < uVar3) || (*(int *)(*(int *)(iVar7 + 100) + uVar3 * 4 + -4) != *piVar5));
    iVar7 = **(int **)(_UNK_018ebc7c + 0x18eba94);
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar7 = **(int **)(_UNK_018ebc80 + 0x18ebab0);
    }
    iVar7 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    func_0x0280da84(iVar7,iVar4,**(undefined4 **)(_UNK_018ebc84 + 0x18ebad0));
LAB_018ebadc:
    func_0x0172cd54(&uStack_48,**(undefined4 **)(_UNK_018ebc88 + 0x18ebae8));
  } while( true );
}


/* BoardController.LoadBoard VA=0x18DBCA0 | private UniTask<bool> LoadBoard(BoardData boardData, bool isEventBoard) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_LoadBoard_18DBCA0
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_018ebdb8 + 0x18ebcc0);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018ebdbc + 0x18ebcd8));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebdc0 + 0x18ebce4));
    func_0x0165b424(*(undefined4 *)(_UNK_018ebdc4 + 0x18ebcf0));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_34 = 0;
  func_0x0165b3c0((uint)&uStack_40 | 4,0);
  uStack_30 = param_2;
  func_0x0165b3c0(&uStack_30,param_2);
  uStack_2c = param_3;
  func_0x0165b3c0(&uStack_2c,param_3);
  uStack_28 = CONCAT31(uStack_28._1_3_,param_4);
  iVar3 = **(int **)(_UNK_018ebdc8 + 0x18ebd60);
  uStack_40 = 0xffffffff;
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    func_0x016cc90c(iVar3);
    iVar1 = *(int *)(iVar3 + 0x1c);
  }
  func_0x0192f254(&uStack_40,*(undefined4 *)(iVar1 + 8));
  func_0x01803bd8(&uStack_48,(uint)&uStack_40 | 4,**(undefined4 **)(_UNK_018ebdcc + 0x18ebda0));
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return;
}


/* BoardController.CreateOfflineAutoItems VA=0x18E03D0 | private void CreateOfflineAutoItems() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_CreateOfflineAutoItems_18E03D0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_018f07ec + 0x18f03e8);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f07f0 + 0x18f03fc));
    func_0x0165b424(*(undefined4 *)(_UNK_018f07f4 + 0x18f0408));
    func_0x0165b424(*(undefined4 *)(_UNK_018f07f8 + 0x18f0414));
    func_0x0165b424(*(undefined4 *)(_UNK_018f07fc + 0x18f0420));
    func_0x0165b424(*(undefined4 *)(_UNK_018f0800 + 0x18f042c));
    func_0x0165b424(*(undefined4 *)(_UNK_018f0804 + 0x18f0438));
    func_0x0165b424(*(undefined4 *)(_UNK_018f0808 + 0x18f0444));
    func_0x0165b424(*(undefined4 *)(_UNK_018f080c + 0x18f0450));
    *pcVar8 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_40 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar9 = *(int *)(param_1 + 0x88);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = uStack_44;
  piStack_30 = piStack_40;
  iStack_2c = uStack_3c;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_58,iVar9,**(undefined4 **)(_UNK_018f0810 + 0x18f0494));
  puVar2 = (undefined4 *)((uint)&uStack_48 | 4);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  piStack_30 = (int *)uStack_50;
  iStack_2c = iStack_4c;
  while (iVar3 = func_0x01710964(&uStack_38,**(undefined4 **)(_UNK_018f0814 + 0x18f04c4)),
        iVar9 = iStack_2c, iVar3 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    iVar3 = *(int *)(iVar9 + 0x14);
    if (*(int *)(**(int **)(_UNK_018f0818 + 0x18f04f0) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar4 = func_0x026f7930(iVar3,0,0);
    if (iVar4 == 0) {
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      iVar4 = *(int *)(iVar3 + 0x68);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      piVar6 = *(int **)(iVar4 + 0x2c);
      if (piVar6 != (int *)0x0) {
        iVar4 = *piVar6;
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_018f081c + 0x18f0550) + 0xb8);
        if ((uVar7 <= *(byte *)(iVar4 + 0xb8)) &&
           (*(int *)(*(int *)(iVar4 + 100) + uVar7 * 4 + -4) ==
            **(int **)(_UNK_018f081c + 0x18f0550))) {
          iVar4 = 0;
          while( true ) {
            iVar10 = *(int *)(iVar3 + 0x68);
            if (iVar10 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(iVar10 + 0x20) <= iVar4) break;
            uStack_48 = *(undefined4 *)(iVar9 + 0x14);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            func_0x0165b3c0(&uStack_48);
            iVar10 = *(int *)(iVar3 + 0x68);
            iVar12 = *(int *)(param_1 + 0xb0);
            if (iVar10 == 0) {
              func_0x0165b6e0();
            }
            iVar10 = *(int *)(iVar10 + 0x44);
            if (iVar10 == 0) {
              func_0x0165b6e0();
            }
            iVar13 = *(int *)(iVar3 + 0x68);
            uVar11 = *(undefined4 *)(iVar10 + 0x14);
            if (iVar13 == 0) {
              func_0x0165b6e0();
            }
            iVar10 = *(int *)(iVar13 + 0x44);
            if (iVar10 == 0) {
              func_0x0165b6e0();
            }
            uVar14 = *(undefined4 *)(iVar10 + 0x10);
            if (iVar12 == 0) {
              func_0x0165b6e0();
            }
            piVar6 = (int *)func_0x019232c0(iVar12,uVar11,uVar14,0,0,0);
            if (piVar6 == (int *)0x0) {
              piStack_40 = (int *)0x0;
              piVar5 = (int *)0x0;
            }
            else {
              iVar10 = **(int **)(_UNK_018f0820 + 0x18f0644);
              uVar7 = (uint)*(byte *)(iVar10 + 0xb8);
              piStack_40 = (int *)0x0;
              if ((uVar7 <= *(byte *)(*piVar6 + 0xb8)) &&
                 (piStack_40 = (int *)0x0,
                 *(int *)(*(int *)(*piVar6 + 100) + uVar7 * 4 + -4) == iVar10)) {
                piStack_40 = piVar6;
              }
              piVar5 = (int *)0x0;
              if ((uVar7 <= *(byte *)(*piVar6 + 0xb8)) &&
                 (piVar5 = piVar6, *(int *)(*(int *)(*piVar6 + 100) + uVar7 * 4 + -4) != iVar10)) {
                piVar5 = (int *)0x0;
              }
            }
            func_0x0165b3c0(&piStack_40,piVar5);
            piVar6 = piStack_40;
            uVar14 = uStack_44;
            uVar11 = uStack_48;
            uStack_3c = CONCAT31(uStack_3c._1_3_,1);
            uVar1 = uStack_3c;
            if (*(int *)(**(int **)(_UNK_018f0824 + 0x18f06d0) + 0x74) == 0) {
              func_0x0165b5a4();
            }
            func_0x026f997c(uVar11,uVar14,piVar6,uVar1,**(undefined4 **)(_UNK_018f0828 + 0x18f06f4))
            ;
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_018f0830 + 0x18f0724));
  return;
}


/* BoardController.SpawnItemAsyncOnSplit VA=0x18E0838 | private UniTask<ItemController> SpawnItemAsyncOnSplit(BoardItemData boardItemData, ItemEntity itemEntity, Coordinate spawnerCoordinate, ItemCreationHandler itemCreationHandler) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_SpawnItemAsyncOnSplit_18E0838
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_018f0994 + 0x18f0858);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f0998 + 0x18f0874));
    func_0x0165b424(*(undefined4 *)(_UNK_018f099c + 0x18f0880));
    func_0x0165b424(*(undefined4 *)(_UNK_018f09a0 + 0x18f088c));
    *pcVar3 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_28 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  func_0x0165b3c0((uint)&uStack_58 | 4,0);
  uStack_48 = param_2;
  func_0x0165b3c0(&uStack_48,param_2);
  uStack_44 = param_3;
  func_0x0165b3c0(&uStack_44,param_3);
  uStack_40 = param_4;
  func_0x0165b3c0(&uStack_40,param_4);
  uStack_38 = param_6;
  uStack_3c = param_5;
  uStack_34 = param_7;
  func_0x0165b3c0(&uStack_34,param_7);
  uStack_58 = 0xffffffff;
  iVar2 = **(int **)(_UNK_018f09a4 + 0x18f093c);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) {
    func_0x016cc90c(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  func_0x01935f80(&uStack_58,*(undefined4 *)(iVar1 + 8));
  func_0x01912fa8(&uStack_68,(uint)&uStack_58 | 4,**(undefined4 **)(_UNK_018f09a8 + 0x18f0974));
  *(undefined4 *)(param_1 + 1) = uStack_60;
  *param_1 = uStack_68;
  return;
}


/* BoardController.SpawnItemAsync VA=0x18E09AC | private UniTask<ItemController> SpawnItemAsync(BoardItemData boardItemData, ItemEntity itemEntity, Coordinate spawnerCoordinate, bool onInitialize, bool merged = False, bool isNewlyCreated = True, ItemCreationHandler itemCreationHandler) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_SpawnItemAsync_18E09AC
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
               undefined1 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_018f0b20 + 0x18f09cc);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f0b24 + 0x18f09e8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f0b28 + 0x18f09f4));
    func_0x0165b424(*(undefined4 *)(_UNK_018f0b2c + 0x18f0a00));
    *pcVar3 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_28 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  func_0x0165b3c0((uint)&uStack_58 | 4,0);
  uStack_48 = param_2;
  func_0x0165b3c0(&uStack_48,param_2);
  uStack_44 = param_3;
  func_0x0165b3c0(&uStack_44,param_3);
  uStack_40 = param_4;
  func_0x0165b3c0(&uStack_40,param_4);
  uStack_34 = CONCAT31(CONCAT21(CONCAT11(uStack_34._3_1_,param_9),param_8),param_7);
  uStack_38 = param_6;
  uStack_3c = param_5;
  uStack_30 = param_10;
  func_0x0165b3c0(&uStack_30,param_10);
  uStack_58 = 0xffffffff;
  iVar2 = **(int **)(_UNK_018f0b30 + 0x18f0ac8);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) {
    func_0x016cc90c(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  func_0x01935b30(&uStack_58,*(undefined4 *)(iVar1 + 8));
  func_0x01912fa8(&uStack_68,(uint)&uStack_58 | 4,**(undefined4 **)(_UNK_018f0b34 + 0x18f0b00));
  *(undefined4 *)(param_1 + 1) = uStack_60;
  *param_1 = uStack_68;
  return;
}


/* BoardController.SpawnItem VA=0x18E0B38 | private ItemController SpawnItem(BoardItemData boardItemData, ItemEntity itemEntity, Coordinate spawnerCoordinate, bool onBoardInitialize, bool merged = False, bool isNewlyCreated = True, int capacity = 0, bool isCapacityUpdated = True, bool isBubbleDestroy = False, ItemCreationHandler itemCreationHandler) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardController_SpawnItem_18E0B38
              (int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
              int param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10,
              undefined4 param_11,int param_12)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  code *pcVar7;
  char *pcVar8;
  int iVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar8 = (char *)(_UNK_018f139c + 0x18f0b64);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f13a0 + 0x18f0b78));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13a4 + 0x18f0b84));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13a8 + 0x18f0b90));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13ac + 0x18f0b9c));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13b0 + 0x18f0ba8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13b4 + 0x18f0bb4));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13b8 + 0x18f0bc0));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13bc + 0x18f0bcc));
    func_0x0165b424(*(undefined4 *)(_UNK_018f13c0 + 0x18f0bd8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018f13c4 + 0x18f0bf4));
  func_0x019286b8(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  piVar2 = (int *)(iVar1 + 0x10);
  *piVar2 = param_12;
  *(undefined4 *)(iVar1 + 0xc) = param_9;
  func_0x0165b3c0(piVar2,param_12);
  *(int *)(iVar1 + 0x14) = param_1;
  func_0x0165b3c0((int *)(iVar1 + 0x14),param_1);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar13 = *(int *)(param_1 + 0x4c);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = func_0x026f7960(iVar9,0);
  iVar9 = *(int *)(param_1 + 0x24);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7a00(&uStack_4c,iVar9,0);
  uVar15 = uStack_44;
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = func_0x0253a88c(iVar13,uVar3,uStack_4c,uStack_48,uVar15,
                          **(undefined4 **)(_UNK_018f13c8 + 0x18f0cb0));
  piVar17 = *(int **)(_UNK_018f13cc + 0x18f0cd0);
  if (*(int *)(*piVar17 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar8 = (char *)(_UNK_018f13d0 + 0x18f0cf0);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f13d4 + 0x18f0d04));
    *pcVar8 = '\x01';
  }
  iVar13 = *piVar17;
  if (*(int *)(iVar13 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar13 = *piVar17;
  }
  iVar13 = func_0x01c56b14(param_4,param_5,*(undefined4 *)(*(int *)(iVar13 + 0x5c) + 0x30),
                           *(undefined4 *)(*(int *)(iVar13 + 0x5c) + 0x34),0);
  fVar19 = *(float *)(param_1 + 0x98);
  if (iVar13 == 0) {
    if (param_3 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(*piVar17 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    param_4 = *(undefined4 *)(param_3 + 8);
    fVar20 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0xc),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar21 = *(float *)(param_1 + 0x9c);
  }
  else {
    if (*(int *)(*piVar17 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    fVar21 = *(float *)(param_1 + 0x9c);
    fVar20 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  }
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar13 = func_0x026f7cc0(iVar9,0);
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  func_0x026f7d40(iVar13,fVar19 + fVar18,fVar21 - fVar20,0,0);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = func_0x024bf154(iVar9,**(undefined4 **)(_UNK_018f13d8 + 0x18f0e24));
  piVar17 = (int *)(iVar1 + 8);
  *piVar17 = iVar9;
  func_0x0165b3c0(piVar17,iVar9);
  cVar10 = *(char *)(param_1 + 0xb4);
  *(undefined1 *)(iVar1 + 0x18) = 0;
  if (cVar10 == '\0') {
LAB_018f0e7c:
    iVar9 = *(int *)(param_1 + 0xe0);
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar13 = param_2[6];
    iVar14 = param_2[7];
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    cVar10 = '\0';
    iVar9 = func_0x01bb060c(iVar9,iVar13,iVar14,0);
    *(char *)(iVar1 + 0x18) = (char)iVar9;
    if (iVar9 != 0) {
      func_0x018f1400(param_1,param_2);
      cVar10 = *(char *)(iVar1 + 0x18);
    }
  }
  else {
    if (param_3 == 0) {
      func_0x0165b6e0();
    }
    if (*(char *)(param_3 + 100) == '\0') goto LAB_018f0e7c;
    cVar10 = '\0';
    *(undefined1 *)(iVar1 + 0x18) = 0;
  }
  func_0x018f154c(param_1,cVar10 != '\0',param_2,*piVar2,param_6);
  if (param_6 == 0) {
    if ((*piVar2 == 0) ||
       (iVar9 = func_0x02510b90(*piVar2,**(undefined4 **)(_UNK_018f13dc + 0x18f0f1c)), iVar9 == 0))
    {
      iVar9 = func_0x018f1784(param_1);
    }
    else {
      iVar9 = func_0x018f1660(param_1,*piVar2);
    }
    if (iVar9 != 0) {
      func_0x018f1748(param_1);
    }
  }
  iVar9 = *piVar17;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = func_0x026f7c90(iVar9,0);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f8a74(&uStack_4c,iVar9,0);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f8230(iVar9,0,0,uStack_44,0);
  iVar9 = *piVar17;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  if (param_7 == 0) {
    uVar3 = 0;
    func_0x0189e390(iVar9,param_1,param_2,param_3,param_8,param_6,0);
    uVar15 = 0;
    if (param_10 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x90);
      uVar15 = *(undefined4 *)(param_1 + 0x94);
    }
    iVar1 = *piVar17;
    uVar11 = *(undefined4 *)(param_1 + 0x6c);
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    pcVar7 = *(code **)(*param_2 + 0xe0);
    (*pcVar7)(param_2,uVar11,iVar1,pcVar7,uVar3,uVar15,param_8,*(undefined4 *)(*param_2 + 0xe4));
    iVar1 = *piVar17;
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar1 + 0x68);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar9 + 0x44);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    func_0x018a3cf8(iVar1,*(undefined4 *)(iVar9 + 0x3c),0,0);
    goto LAB_018f1348;
  }
  uVar3 = 0;
  func_0x0189e390(iVar9,param_1,param_2,param_3,param_8,0,0);
  uVar15 = 0;
  if (param_10 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x90);
    uVar15 = *(undefined4 *)(param_1 + 0x94);
  }
  if (param_2 == (int *)0x0) {
    iVar9 = *piVar17;
    uVar11 = *(undefined4 *)(param_1 + 0x6c);
    func_0x0165b6e0();
LAB_018f1118:
    pcVar7 = *(code **)(*param_2 + 0xe0);
    uVar4 = *(undefined4 *)(*param_2 + 0xe4);
  }
  else {
    iVar13 = *param_2;
    uVar6 = (uint)*(byte *)(**(int **)(_UNK_018f13e0 + 0x18f1020) + 0xb8);
    if ((*(byte *)(iVar13 + 0xb8) < uVar6) ||
       (*(int *)(*(int *)(iVar13 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_018f13e0 + 0x18f1020)))
    {
      iVar9 = *piVar17;
      uVar11 = *(undefined4 *)(param_1 + 0x6c);
      goto LAB_018f1118;
    }
    iVar9 = *piVar17;
    uVar11 = *(undefined4 *)(param_1 + 0x6c);
    if (*(char *)((int)param_2 + 0x3d) == '\0') goto LAB_018f1118;
    pcVar7 = *(code **)(iVar13 + 0xe8);
    uVar4 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  }
  (*pcVar7)(param_2,uVar11,iVar9,pcVar7,uVar3,uVar15,1,uVar4);
  iVar9 = *piVar17;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar13 = *(int *)(iVar9 + 0x68);
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  iVar13 = *(int *)(iVar13 + 0x44);
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  func_0x018a3cf8(iVar9,*(undefined4 *)(iVar13 + 0x3c),0,0);
  iVar9 = *piVar17;
  pcVar8 = (char *)(_UNK_018f13e4 + 0x18f1198);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f13e8 + 0x18f11ac));
    *pcVar8 = '\x01';
  }
  piVar2 = *(int **)(_UNK_018f13ec + 0x18f11c4);
  puVar5 = *(undefined4 **)(*piVar2 + 0x5c);
  uVar15 = *puVar5;
  uVar3 = puVar5[1];
  uVar11 = puVar5[2];
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  func_0x0189ab78(iVar9,uVar15,uVar3,uVar11,0);
  iVar9 = *piVar17;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  func_0x0189d1cc(iVar9,1,0);
  iVar9 = *piVar17;
  if (iVar9 == 0) {
    func_0x0165b6e0();
    iVar13 = iRam00000030;
    iVar9 = *piVar17;
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    if (iVar9 == 0) {
      func_0x0165b6e0();
      iVar9 = 0;
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    iVar13 = *(int *)(iVar9 + 0x30);
  }
  uVar15 = func_0x026f7c90(iVar9,0);
  iVar9 = *piVar17;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = *(int *)(iVar9 + 0x2c);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  uVar11 = *(undefined4 *)(iVar9 + 0x34);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f13f0 + 0x18f12a0));
    *pcVar8 = '\x01';
  }
  puVar5 = *(undefined4 **)(*piVar2 + 0x5c);
  uVar16 = *puVar5;
  uVar12 = puVar5[1];
  uVar4 = puVar5[2];
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = func_0x01ae12cc(iVar13,uVar3,uVar15,uVar11,0,uVar16,uVar12,uVar4,uVar16,uVar12,uVar4,0);
  uVar15 = func_0x0165b6d4(**(undefined4 **)(_UNK_018f13f4 + 0x18f130c));
  func_0x020767e4(uVar15,iVar1,**(undefined4 **)(_UNK_018f13f8 + 0x18f1324),0);
  func_0x025dfd3c(uVar3,uVar15,**(undefined4 **)(_UNK_018f13fc + 0x18f1340));
LAB_018f1348:
  return *piVar17;
}


/* BoardController.SpawnCell VA=0x18E2364 | private CellController SpawnCell(CellEntity cellEntity, Vector2 position) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardController_SpawnCell_18E2364
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_018f24cc + 0x18f2384);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f24d0 + 0x18f239c));
    func_0x0165b424(*(undefined4 *)(_UNK_018f24d4 + 0x18f23a8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f24d8 + 0x18f23b4));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  uVar1 = func_0x026f7960(iVar5,0);
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = func_0x026f7c90(iVar5,0);
  if (*(int *)(**(int **)(_UNK_018f24dc + 0x18f2408) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar5 = func_0x02538ad8(uVar1,uVar2,1,**(undefined4 **)(_UNK_018f24e0 + 0x18f242c));
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x026f7cc0(iVar5,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7d40(iVar3,param_3,param_4,0,0);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = func_0x024bf154(iVar5,**(undefined4 **)(_UNK_018f24e4 + 0x18f2494));
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  func_0x01890458(iVar5,param_1,param_2,0);
  return iVar5;
}


/* BoardController.SwapItemsOnBoard VA=0x18E2A70 | private void SwapItemsOnBoard(ItemController source, ItemController target, BoardPosition selectedBoardPosition, bool saveBoard = True) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_SwapItemsOnBoard_18E2A70
               (int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar2 = (char *)(_UNK_018f2f00 + 0x18f2a9c);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f2f04 + 0x18f2ab0));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2f08 + 0x18f2abc));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2f0c + 0x18f2ac8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2f10 + 0x18f2ad4));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0xd8);
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  iStack_60 = 0;
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x01cc1ffc(iVar3,1,0);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(param_2 + 0x68);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  uVar4 = *(undefined4 *)(iVar3 + 8);
  uStack_50 = uVar4;
  uStack_4c = uVar8;
  if (param_3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(param_3 + 0x68);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = *(undefined4 *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(param_2 + 0x68);
  uStack_58 = uVar6;
  uStack_54 = uVar7;
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar3 + 8) = uVar6;
  *(undefined4 *)(iVar3 + 0xc) = uVar7;
  func_0x018f2f34(param_1,uVar4,uVar8,0);
  iVar3 = func_0x018f3064(param_1,uVar6,uVar7);
  if (*(int *)(**(int **)(_UNK_018f2f14 + 0x18f2be4) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  fVar10 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
  pcVar2 = (char *)(_UNK_018f2f18 + 0x18f2c08);
  fVar9 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f2f1c + 0x18f2c34));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018f2f20 + 0x18f2c50) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar5 = *(int *)(param_3 + 0x68);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar5 + 0x44);
  if (1.0 < SQRT((fVar12 - fVar10) * (fVar12 - fVar10) + (fVar11 - fVar9) * (fVar11 - fVar9))) {
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x02aa64ec(&uStack_68,iVar3,0,**(undefined4 **)(_UNK_018f2f24 + 0x18f2cb8));
    uVar8 = uStack_64;
    uVar4 = uStack_68;
  }
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  piVar1 = *(int **)(_UNK_018f2f28 + 0x18f2ce0);
  *(undefined4 *)(iVar5 + 8) = uVar4;
  *(undefined4 *)(iVar5 + 0xc) = uVar8;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uVar8 = func_0x01c56d84(&uStack_50,0);
  uVar4 = func_0x01c56d84(&uStack_58,0);
  iVar3 = *(int *)(param_2 + 0x68);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x018f3328(param_1,3,uVar8,uVar4,*(undefined4 *)(iVar3 + 0x2c),0);
  uVar8 = func_0x01c56d84(&uStack_58,0);
  iVar3 = *(int *)(param_3 + 0x68);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = func_0x01c56d84(iVar3 + 8,0);
  iVar3 = *(int *)(param_3 + 0x68);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x018f3328(param_1,4,uVar8,uVar4,*(undefined4 *)(iVar3 + 0x2c),0);
  func_0x018f2f34(param_1,uStack_58,uStack_54,0);
  iVar3 = *(int *)(param_3 + 0x68);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x018f6fb0(param_1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),param_3,0,0,0,1,0,
                  0,0,param_4,0,0,0,0,0);
  func_0x018f6fb0(param_1,uStack_58,uStack_54,param_2,0,1,0,1,0,0,0,0,0,0,0,0,0);
  uStack_5c = 0;
  iStack_60 = param_2;
  func_0x0165b3c0(&iStack_60,param_2);
  iVar3 = iStack_60;
  uStack_5c = 3;
  if (*(int *)(**(int **)(_UNK_018f2f2c + 0x18f2eb0) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f99d4(iVar3,3,**(undefined4 **)(_UNK_018f2f30 + 0x18f2ed8));
  return;
}


/* BoardController.MergeItemsOnBoard VA=0x18E355C | private void MergeItemsOnBoard(ItemController source, ItemController target, BoardItemData itemData, BoardPosition boardPosition) { } */

/* WARNING: Possible PIC construction at 0x018f39a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x018f39ac) */
/* WARNING: Removing unreachable block (ram,0x018f39e0) */
/* WARNING: Removing unreachable block (ram,0x018f39e4) */
/* WARNING: Removing unreachable block (ram,0x018f3a00) */
/* WARNING: Removing unreachable block (ram,0x018f3a04) */
/* WARNING: Removing unreachable block (ram,0x018f3a10) */
/* WARNING: Removing unreachable block (ram,0x018f3a14) */
/* WARNING: Removing unreachable block (ram,0x018f3a7c) */
/* WARNING: Removing unreachable block (ram,0x018f3a50) */
/* WARNING: Removing unreachable block (ram,0x018f3a9c) */
/* WARNING: Removing unreachable block (ram,0x018f3ab8) */
/* WARNING: Removing unreachable block (ram,0x018f3abc) */
/* WARNING: Removing unreachable block (ram,0x018f3ad0) */
/* WARNING: Removing unreachable block (ram,0x018f3ae4) */
/* WARNING: Removing unreachable block (ram,0x018f3af4) */
/* WARNING: Removing unreachable block (ram,0x018f3afc) */
/* WARNING: Removing unreachable block (ram,0x018f3b78) */
/* WARNING: Removing unreachable block (ram,0x018f3b7c) */
/* WARNING: Removing unreachable block (ram,0x018f3b88) */
/* WARNING: Removing unreachable block (ram,0x018f3b8c) */
/* WARNING: Removing unreachable block (ram,0x018f3b9c) */
/* WARNING: Removing unreachable block (ram,0x018f3ba0) */
/* WARNING: Removing unreachable block (ram,0x018f3bbc) */
/* WARNING: Removing unreachable block (ram,0x018f3be0) */
/* WARNING: Removing unreachable block (ram,0x018f3bf8) */
/* WARNING: Removing unreachable block (ram,0x018f3c08) */
/* WARNING: Removing unreachable block (ram,0x018f3c18) */
/* WARNING: Removing unreachable block (ram,0x018f3c88) */
/* WARNING: Removing unreachable block (ram,0x018f3c94) */
/* WARNING: Removing unreachable block (ram,0x018f3c98) */
/* WARNING: Removing unreachable block (ram,0x018f3ca8) */
/* WARNING: Removing unreachable block (ram,0x018f3cb0) */
/* WARNING: Removing unreachable block (ram,0x018f3cb4) */
/* WARNING: Removing unreachable block (ram,0x018f3cc0) */
/* WARNING: Removing unreachable block (ram,0x018f3cc4) */
/* WARNING: Removing unreachable block (ram,0x018f3cdc) */
/* WARNING: Removing unreachable block (ram,0x018f3ce0) */
/* WARNING: Removing unreachable block (ram,0x018f3cf4) */
/* WARNING: Removing unreachable block (ram,0x018f3d0c) */
/* WARNING: Removing unreachable block (ram,0x018f3d10) */
/* WARNING: Removing unreachable block (ram,0x018f3d24) */
/* WARNING: Removing unreachable block (ram,0x018f3d38) */
/* WARNING: Removing unreachable block (ram,0x018f3d48) */
/* WARNING: Removing unreachable block (ram,0x018f3d50) */
/* WARNING: Removing unreachable block (ram,0x018f3d64) */
/* WARNING: Removing unreachable block (ram,0x018f3d68) */
/* WARNING: Removing unreachable block (ram,0x018f3d74) */
/* WARNING: Removing unreachable block (ram,0x018f3d78) */
/* WARNING: Removing unreachable block (ram,0x018f3da8) */
/* WARNING: Removing unreachable block (ram,0x018f3db0) */
/* WARNING: Removing unreachable block (ram,0x018f3dc0) */
/* WARNING: Removing unreachable block (ram,0x018f3dd0) */
/* WARNING: Removing unreachable block (ram,0x018f3dd8) */
/* WARNING: Removing unreachable block (ram,0x018f3e28) */
/* WARNING: Removing unreachable block (ram,0x018f3e30) */
/* WARNING: Removing unreachable block (ram,0x018f3e34) */
/* WARNING: Removing unreachable block (ram,0x018f3e4c) */
/* WARNING: Removing unreachable block (ram,0x018f3e68) */
/* WARNING: Removing unreachable block (ram,0x018f3e6c) */
/* WARNING: Removing unreachable block (ram,0x018f3e98) */
/* WARNING: Removing unreachable block (ram,0x018f3ed0) */
/* WARNING: Removing unreachable block (ram,0x018f3eac) */
/* WARNING: Removing unreachable block (ram,0x018f3eb8) */
/* WARNING: Removing unreachable block (ram,0x018f3ebc) */
/* WARNING: Removing unreachable block (ram,0x018f41dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_MergeItemsOnBoard_18E355C(int param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r2;
  int extraout_r3;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 unaff_r11;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined1 auStack_1a1c [1542];
  byte bStack_1416;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar4 = &uStack_c0;
  pcVar8 = (char *)(iRam018f41f0 + 0x18f3580);
  piStack_5c = param_4;
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(iRam018f41f4 + 0x18f3594));
    func_0x0165b424(*(undefined4 *)(iRam018f41f8 + 0x18f35a0));
    func_0x0165b424(*(undefined4 *)(iRam018f41fc + 0x18f35ac));
    func_0x0165b424(*(undefined4 *)(iRam018f4200 + 0x18f35b8));
    func_0x0165b424(*(undefined4 *)(iRam018f4204 + 0x18f35c4));
    func_0x0165b424(*(undefined4 *)(iRam018f4208 + 0x18f35d0));
    func_0x0165b424(*(undefined4 *)(iRam018f420c + 0x18f35dc));
    func_0x0165b424(*(undefined4 *)(iRam018f4210 + 0x18f35e8));
    func_0x0165b424(*(undefined4 *)(iRam018f4214 + 0x18f35f4));
    func_0x0165b424(*(undefined4 *)(iRam018f4218 + 0x18f3600));
    func_0x0165b424(*(undefined4 *)(iRam018f421c + 0x18f360c));
    func_0x0165b424(*(undefined4 *)(iRam018f4220 + 0x18f3618));
    func_0x0165b424(*(undefined4 *)(iRam018f4224 + 0x18f3624));
    func_0x0165b424(*(undefined4 *)(iRam018f4228 + 0x18f3630));
    func_0x0165b424(*(undefined4 *)(iRam018f422c + 0x18f363c));
    func_0x0165b424(*(undefined4 *)(iRam018f4230 + 0x18f3648));
    func_0x0165b424(*(undefined4 *)(iRam018f4234 + 0x18f3654));
    *pcVar8 = '\x01';
  }
  iVar10 = *(int *)(param_1 + 0x6c);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  bVar1 = *(byte *)(param_1 + 0xb4);
  uStack_38 = 0;
  uStack_3c = 0;
  piStack_40 = (int *)0x0;
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_b8 = (uint)bVar1;
  func_0x01a65c90(iVar10,1,0,0);
  iVar10 = *(int *)(param_1 + 0xd8);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  func_0x01cc1ffc(iVar10,1,0);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar10 = *(int *)(param_2 + 0x68);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iStack_6c = *(int *)(iVar10 + 0x44);
  if (param_3 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar9 = param_3[0x1a];
  iVar10 = iVar9;
  if (iVar9 == 0) {
    func_0x0165b6e0();
    iVar10 = param_3[0x1a];
    if (iVar10 == 0) {
      uVar21 = func_0x0165b6e0();
      uVar7 = (uint)uVar21;
      if ((int)((ulonglong)uVar21 >> 0x20) == 1) {
        piVar5 = (int *)func_0x017010e8(uVar7);
        iVar10 = *piVar5;
        func_0x0171ece4();
        func_0x0172cd54(&uStack_38,**(undefined4 **)(iRam018f4280 + 0x18f4198));
        if (iVar10 != 0) {
          func_0x0165b6dc(iVar10);
        }
        iVar10 = iStack_54;
        if (param_2 == 0) {
          if (iStack_6c == 0) goto LAB_018f3f84;
          iVar9 = func_0x0194473c(0);
          uVar11 = *(undefined4 *)(iVar10 + 0xb0);
          if (iVar9 == 0) {
            func_0x0165b6e0();
          }
          iVar10 = func_0x01944ab0(iVar9,uVar11,0);
          if (iVar10 == 0) {
            return;
          }
          if (param_3 == (int *)0x0) {
            func_0x0165b6e0();
          }
          iVar9 = param_3[0x1a];
          if (iVar9 == 0) {
            func_0x0165b6e0();
          }
          iVar9 = *(int *)(iVar9 + 0x44);
          if (iVar9 == 0) {
            func_0x0165b6e0();
          }
          iVar2 = iStack_6c;
          uStack_c0 = *(undefined4 *)(iVar9 + 0xc);
          uStack_bc = 0;
          uStack_a4 = uStack_60;
          uStack_b8 = 0;
          uStack_b4 = 1;
          uStack_b0 = 0;
          uStack_ac = 1;
          uStack_a8 = 0;
          uVar11 = BoardController_SpawnItem_18E0B38
                             (iStack_54,iVar10,iStack_6c,*(undefined4 *)(iVar9 + 8));
          uVar13 = *(undefined4 *)(iVar2 + 8);
          uVar18 = *(undefined4 *)(iVar2 + 0xc);
          iVar10 = iStack_54;
        }
        else {
          uStack_c0 = uStack_68;
          uStack_bc = 0;
          uStack_a4 = uStack_60;
          uStack_b8 = 0;
          uStack_b4 = 1;
          uStack_b0 = 0;
          uStack_ac = 1;
          uStack_a8 = 0;
          uVar11 = BoardController_SpawnItem_18E0B38(iStack_54,piStack_5c,param_2,uStack_64);
          uVar13 = *(undefined4 *)(param_2 + 8);
          uVar18 = *(undefined4 *)(param_2 + 0xc);
        }
        uStack_90 = 0;
        uStack_94 = 0;
        uStack_98 = 0;
        uStack_9c = 0;
        uStack_a0 = 0;
        uStack_a4 = 0;
        uStack_a8 = 0;
        uStack_ac = 0;
        uStack_b0 = 0;
        uStack_b4 = 0;
        uStack_b8 = 1;
        uStack_bc = 1;
        uStack_c0 = 0;
        func_0x018f6fb0(iVar10,uVar13,uVar18,uVar11);
LAB_018f3f84:
        uStack_3c = 0;
        piStack_40 = param_3;
        func_0x0165b3c0(&piStack_40,param_3);
        piVar5 = piStack_40;
        uStack_3c = 6;
        if (*(int *)(**(int **)(iRam018f4288 + 0x18f3fac) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        func_0x026f99d4(piVar5,6,**(undefined4 **)(iRam018f428c + 0x18f3fd4));
        func_0x018f568c(iVar10);
        return;
      }
      uVar13 = 0;
      func_0x0172cd54(&uStack_38,**(undefined4 **)(iRam018f4284 + 0x18f41cc));
      uVar19 = 1;
      func_0x016ff924(uVar7);
      uVar18 = 0x18f41f0;
      uVar21 = func_0x01178c80();
      uVar11 = 0;
      uVar12 = extraout_r2;
      iVar10 = extraout_r3;
      if ((bool)uVar19) {
        iVar9 = *(int *)**(undefined4 **)
                          (*(int *)**(undefined4 **)
                                     **(undefined4 **)**(undefined4 **)(*param_3 + -0x3350) + -0xb0)
        ;
        uVar13 = *(undefined4 *)(iVar9 + -0xc00);
        puVar4 = (undefined4 *)auStack_1a1c;
        uVar7 = (uint)bStack_1416;
        uVar11 = *(undefined4 *)(iVar9 + -0x31cc);
        param_3 = (int *)(*(int *)**(undefined4 **)**(undefined4 **)(iVar9 + -0x3b7c) + -0x5ec4);
        param_2 = *(int *)(*(int *)**(undefined4 **)**(undefined4 **)(iVar9 + -0x3b7c) + -0x4f94);
      }
      goto SUB_018f4290;
    }
  }
  iVar10 = *(int *)(iVar10 + 0x44);
  uStack_7c = *(undefined4 *)(iVar9 + 0x44);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = param_3[0x1a];
  uStack_58 = *(undefined4 *)(iVar10 + 8);
  uStack_70 = *(undefined4 *)(iVar10 + 0xc);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar10 = *(int *)(iVar9 + 0x44);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = param_3[0x1a];
  uStack_74 = *(undefined4 *)(iVar10 + 0x10);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar10 = *(int *)(iVar9 + 0x44);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = param_3[0x1a];
  uStack_78 = *(undefined4 *)(iVar10 + 0x14);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar10 = *(int *)(iVar9 + 0x44);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  if (*(char *)(iVar10 + 0x18) != '\0') {
    iVar9 = *(int *)(param_1 + 0xd8);
    iVar10 = func_0x026f7c90(param_3,0);
    if (iVar10 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f7a00(&uStack_50,iVar10,0);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    uStack_c0 = 0;
    func_0x01cc2520(iVar9,uStack_50,uStack_4c,uStack_48);
  }
  iVar10 = param_3[0x1a];
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  piVar5 = *(int **)(iVar10 + 0x2c);
  uVar11 = 0;
  iStack_54 = param_1;
  if (piVar5 != (int *)0x0) {
    iVar10 = *piVar5;
    uVar7 = (uint)*(byte *)(**(int **)(iRam018f4238 + 0x18f386c) + 0xb8);
    if ((uVar7 <= *(byte *)(iVar10 + 0xb8)) &&
       (*(int *)(*(int *)(iVar10 + 100) + uVar7 * 4 + -4) == **(int **)(iRam018f4238 + 0x18f386c)))
    {
      iVar10 = *(int *)(param_2 + 0x68);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      piVar5 = *(int **)(iVar10 + 0x2c);
      if (piVar5 != (int *)0x0) {
        uVar7 = (uint)*(byte *)(**(int **)(iRam018f423c + 0x18f4120) + 0xb8);
        if ((uVar7 <= *(byte *)(*piVar5 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar5 + 100) + uVar7 * 4 + -4) ==
            **(int **)(iRam018f423c + 0x18f4120))) {
          iVar10 = func_0x018d642c(piVar5,0);
          if (iVar10 == 0) {
            func_0x0165b6e0();
          }
          uVar11 = *(undefined4 *)(iVar10 + 0xc);
        }
      }
    }
  }
  iVar10 = param_3[0x1a];
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  piVar5 = *(int **)(iVar10 + 0x2c);
  uStack_88 = 0;
  if (piVar5 != (int *)0x0) {
    iVar10 = *piVar5;
    uVar7 = (uint)*(byte *)(**(int **)(iRam018f4240 + 0x18f38c0) + 0xb8);
    if ((uVar7 <= *(byte *)(iVar10 + 0xb8)) &&
       (*(int *)(*(int *)(iVar10 + 100) + uVar7 * 4 + -4) == **(int **)(iRam018f4240 + 0x18f38c0)))
    {
      iVar10 = param_3[0x1a];
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      iVar10 = *(int *)(iVar10 + 0x44);
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      uStack_88 = *(undefined4 *)(iVar10 + 0x60);
    }
  }
  iVar10 = param_3[0x1a];
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iVar10 = *(int *)(iVar10 + 0x44);
  uStack_84 = uVar11;
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = *(int *)(param_2 + 0x68);
  uVar7 = (uint)*(byte *)(iVar10 + 0x18);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar10 = *(int *)(iVar9 + 0x44);
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = param_3[0x1a];
  uVar11 = *(undefined4 *)(iVar10 + 8);
  uVar12 = *(uint *)(iVar10 + 0xc);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  param_3 = piStack_5c;
  iVar10 = *(int *)(iVar9 + 0x44);
  uStack_80 = uVar7;
  if (iVar10 == 0) {
    func_0x0165b6e0();
  }
  uVar21 = CONCAT44(uVar11,iStack_54);
  unaff_r11 = *(undefined4 *)(iVar10 + 8);
  param_2 = *(int *)(iVar10 + 0xc);
  uVar13 = 0;
  iVar10 = 0;
  uStack_c0 = 0;
  uVar18 = 0x18f39ac;
  uVar7 = uVar12;
  param_1 = iStack_54;
  puVar4 = &uStack_c0;
SUB_018f4290:
  uVar14 = (undefined4)((ulonglong)uVar21 >> 0x20);
  puVar4[-1] = uVar18;
  puVar4[-2] = unaff_r11;
  puVar4[-3] = param_3;
  puVar4[-4] = param_2;
  puVar4[-5] = param_1;
  puVar4[-6] = uVar13;
  puVar4[-7] = uVar7;
  puVar20 = puVar4 + -8;
  *puVar20 = uVar11;
  uVar11 = *puVar4;
  pcVar8 = (char *)(_UNK_018f4354 + 0x18f42b0);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f4358 + 0x18f42cc));
    func_0x0165b424(*(undefined4 *)(_UNK_018f435c + 0x18f42d8));
    *pcVar8 = '\x01';
  }
  puVar4[-10] = iVar10;
  func_0x018fb724((int)uVar21,uVar14,uVar12,uVar11);
  func_0x018fb920((int)uVar21,uVar14,uVar12);
  if (iVar10 != 0) {
    func_0x01c5865c(0,0);
  }
  if (*(int *)(**(int **)(_UNK_018f4360 + 0x18f4328) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar10 = **(int **)(_UNK_018f4364 + 0x18f4344);
  uVar11 = *puVar20;
  uVar13 = puVar4[-7];
  uVar18 = puVar4[-6];
  uVar14 = puVar4[-5];
  uVar15 = puVar4[-4];
  uVar16 = puVar4[-3];
  puVar4[-1] = puVar4[-1];
  puVar4[-2] = puVar4[-2];
  puVar4[-3] = &uStack_38;
  puVar4[-4] = uVar16;
  puVar4[-5] = uVar15;
  puVar4[-6] = uVar14;
  puVar4[-7] = uVar18;
  *puVar20 = uVar13;
  puVar4[-9] = uVar11;
  pcVar8 = (char *)(_UNK_042888a0 + 0x4288410);
  if (*pcVar8 == '\0') {
    func_0x027026c8(*(undefined4 *)(_UNK_042888a4 + 0x4288424));
    func_0x027026c8(*(undefined4 *)(_UNK_042888a8 + 0x4288430));
    func_0x027026c8(*(undefined4 *)(_UNK_042888ac + 0x428843c));
    func_0x027026c8(*(undefined4 *)(_UNK_042888b0 + 0x4288448));
    func_0x027026c8(*(undefined4 *)(_UNK_042888b4 + 0x4288454));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(iVar10 + 0x10);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x027026e4();
  }
  iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x027026e4();
  }
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x027026cc();
  }
  iVar9 = *(int *)(iVar10 + 0x10);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x027026e4();
  }
  iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x027026e4();
  }
  if (*(int *)(*(int *)(iVar9 + 0x5c) + 4) != 0) {
    if (*(int *)(**(int **)(_UNK_042888b8 + 0x42884e0) + 0x74) == 0) {
      func_0x027026cc();
    }
    uVar7 = 0;
    iVar9 = func_0x02702a50(0);
    if (iVar9 != 0) {
      piVar5 = *(int **)(_UNK_042888bc + 0x4288510);
      iVar9 = **(int **)(*piVar5 + 0x5c);
      if (iVar9 == 0) {
        func_0x027026bc();
      }
      iVar2 = *(int *)(iVar10 + 0x10);
      iVar9 = *(int *)(iVar9 + 0x14);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x027026e4();
      }
      piVar17 = *(int **)(_UNK_042888c0 + 0x4288548);
      iVar6 = *piVar17;
      uVar11 = *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x38);
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x027026cc(iVar6);
      }
      piVar3 = (int *)func_0x048c2f0c(uVar11,0);
      if (piVar3 == (int *)0x0) {
        func_0x027026bc();
      }
      uVar11 = (**(code **)(*piVar3 + 0x1a0))(piVar3,*(undefined4 *)(*piVar3 + 0x1a4));
      if (iVar9 == 0) {
        func_0x027026bc();
      }
      iVar9 = func_0x02b0b63c(iVar9,uVar11,**(undefined4 **)(_UNK_042888c4 + 0x42885b4));
      if (iVar9 == 0) {
        iVar9 = **(int **)(*piVar5 + 0x5c);
        if (iVar9 == 0) {
          func_0x027026bc();
        }
        iVar2 = *(int *)(iVar10 + 0x10);
        iVar9 = *(int *)(iVar9 + 0x10);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x027026e4();
        }
        iVar6 = *piVar17;
        uVar11 = *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x38);
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x027026cc(iVar6);
        }
        piVar5 = (int *)func_0x048c2f0c(uVar11,0);
        if (piVar5 == (int *)0x0) {
          func_0x027026bc();
        }
        uVar11 = (**(code **)(*piVar5 + 0x1a0))(piVar5,*(undefined4 *)(*piVar5 + 0x1a4));
        if (iVar9 == 0) {
          func_0x027026bc();
        }
        iVar2 = *(int *)(iVar9 + 8);
        uVar12 = *(uint *)(iVar9 + 0xc);
        piVar5 = *(int **)(_UNK_042888c8 + 0x4288674);
        *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
        iVar6 = *piVar5;
        if (iVar2 == 0) {
          func_0x027026bc();
        }
        if (uVar12 < *(uint *)(iVar2 + 0xc)) {
          *(uint *)(iVar9 + 0xc) = uVar12 + 1;
          puVar4 = (undefined4 *)(iVar2 + uVar12 * 4 + 0x10);
          *puVar4 = uVar11;
          func_0x027026d4(puVar4,uVar11);
        }
        else {
          func_0x02b0b274(iVar9,uVar11,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    while( true ) {
      iVar9 = *(int *)(iVar10 + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x027026cc();
      }
      iVar9 = *(int *)(iVar10 + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
      if (iVar9 == 0) {
        func_0x027026bc();
      }
      if ((*(ushort *)(*(int *)(iVar10 + 0x10) + 0xbd) & 1) == 0) {
        func_0x027026e4();
      }
      if (*(int *)(iVar9 + 0x10) <= (int)uVar7) break;
      iVar9 = *(int *)(iVar10 + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x027026cc();
      }
      iVar9 = *(int *)(iVar10 + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0xc);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x027026e4();
      }
      iVar9 = **(int **)(iVar9 + 0x5c);
      if (iVar9 == 0) {
        func_0x027026bc();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar7) {
        func_0x027026d8();
      }
      piVar5 = *(int **)(iVar9 + uVar7 * 4 + 0x10);
      if (piVar5 != (int *)0x0) {
        iVar9 = *(int *)(iVar10 + 0x10);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = func_0x027026e4();
        }
        iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0x1c);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = func_0x027026e4(iVar9);
        }
        iVar2 = *piVar5;
        uVar12 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar12 != 0) {
          piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar17[-1] == iVar9) {
              puVar4 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
              goto LAB_0428887c;
            }
            uVar12 = uVar12 - 1;
            piVar17 = piVar17 + 2;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined4 *)func_0x027026e8(piVar5,iVar9,0);
LAB_0428887c:
        (*(code *)*puVar4)(piVar5,0,puVar4[1]);
      }
      uVar7 = uVar7 + 1;
    }
  }
  return;
}


/* BoardController.MoveItemOnBoard VA=0x18E6D0C | private void MoveItemOnBoard(ItemController item, CellController boardCell, BoardPosition boardPosition, bool saveBoard = True) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_MoveItemOnBoard_18E6D0C(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int aiStack_38 [5];
  
  pcVar1 = (char *)(_UNK_018f6f94 + 0x18f6d30);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f6f98 + 0x18f6d44));
    func_0x0165b424(*(undefined4 *)(_UNK_018f6f9c + 0x18f6d50));
    func_0x0165b424(*(undefined4 *)(_UNK_018f6fa0 + 0x18f6d5c));
    *pcVar1 = '\x01';
  }
  aiStack_38[3] = 0;
  aiStack_38[2] = 0;
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(param_1 + 0xd8);
  *(undefined1 *)(iVar2 + 0x96) = 1;
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x01cc1ffc(iVar3,1,0);
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = *(undefined4 *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x68);
  aiStack_38[2] = uVar4;
  aiStack_38[3] = uVar6;
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  if (param_3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(param_3 + 0x34);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  uVar7 = *(undefined4 *)(iVar3 + 0x10);
  uVar5 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar2 + 8) = uVar7;
  *(undefined4 *)(iVar2 + 0xc) = uVar5;
  func_0x018f2f34(param_1,uVar4,uVar6,1);
  iVar2 = *(int *)(param_3 + 0x34);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x018f6fb0(param_1,*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),param_2,0,0,0,
                  0,0,0,1,param_4,0,0,0,0,0);
  aiStack_38[1] = 0;
  aiStack_38[0] = param_2;
  func_0x0165b3c0(aiStack_38,param_2);
  iVar2 = aiStack_38[0];
  aiStack_38[1] = 0;
  if (*(int *)(**(int **)(_UNK_018f6fa4 + 0x18f6ed0) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f99d4(iVar2,0,**(undefined4 **)(_UNK_018f6fa8 + 0x18f6ef8));
  if (*(int *)(**(int **)(_UNK_018f6fac + 0x18f6f0c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uVar4 = func_0x01c56d84(aiStack_38 + 2,0);
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = func_0x01c56d84(iVar2 + 8,0);
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x018f3328(param_1,2,uVar4,uVar6,*(undefined4 *)(iVar2 + 0x2c),0);
  return;
}


/* BoardController.SetItemOnBoard VA=0x18E34E4 | private bool SetItemOnBoard(Coordinate boardIndex, ItemController item, bool saveBoard = True, bool spawnAnimated = True, bool swapAnimated = False, bool panelAnimated = False, BoardPosition selectedBoardPosition, bool merged = False, bool move = False, ItemCreationHandler itemCreationHandler, bool isBubbleTimeFinish = False, bool nonAnimated = False, bool boosterSplit = False) { } */

void BoardController_SetItemOnBoard_18E34E4(void)

{
  func_0x018f6fb0();
  return;
}


/* BoardController.SetItemOnBoard VA=0x18E6FB0 | private bool SetItemOnBoard(Coordinate boardIndex, ItemController item, bool skipCellCheck, bool saveBoard, bool spawnAnimated, bool swapAnimated, bool panelAnimated, bool merged, bool move, BoardPosition selectedBoardPosition, bool onInitialize = False, ItemCreationHandler itemCreationHandler, bool isBubbleTimeFinish = False, bool nonAnimated = False, bool boosterSplit = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BoardController_SetItemOnBoard_18E6FB0
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
          int param_7,undefined4 param_8,int param_9,int param_10,undefined4 param_11,
          undefined4 param_12,int param_13,int param_14,undefined4 param_15,undefined4 param_16,
          undefined4 param_17)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_018f7a34 + 0x18f6fd0);
  if (*pcVar9 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a38 + 0x18f6fec));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a3c + 0x18f6ff8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a40 + 0x18f7004));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a44 + 0x18f7010));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a48 + 0x18f701c));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a4c + 0x18f7028));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a50 + 0x18f7034));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a54 + 0x18f7040));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a58 + 0x18f704c));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a5c + 0x18f7058));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a60 + 0x18f7064));
    func_0x0165b424(*(undefined4 *)(_UNK_018f7a64 + 0x18f7070));
    *pcVar9 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  if (param_9 != 0) {
    *(undefined1 *)(param_1 + 0x85) = 1;
  }
  iVar1 = func_0x018f24e8(param_1,param_2,param_3);
  if (iVar1 == 0) {
    uStack_30 = param_2;
    uStack_2c = param_3;
    if (*(int *)(**(int **)(_UNK_018f7a68 + 0x18f7134) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar3 = func_0x01c56d84(&uStack_30,0);
    puVar4 = *(undefined4 **)(_UNK_018f7a6c + 0x18f716c);
  }
  else {
    piVar10 = *(int **)(_UNK_018f7a74 + 0x18f70b8);
    iVar11 = *(int *)(iVar1 + 0x10);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar2 = func_0x026f7930(iVar11,0,0);
    if (iVar2 == 0) {
      if (param_5 == 0) {
        if (iVar11 == 0) {
          func_0x0165b6e0();
        }
        iVar2 = *(int *)(iVar11 + 0x34);
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        if (*(char *)(iVar2 + 8) != '\0') {
          uStack_30 = param_2;
          uStack_2c = param_3;
          if (*(int *)(**(int **)(_UNK_018f7a80 + 0x18f72c8) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          uVar3 = func_0x01c56d84(&uStack_30,0);
          puVar4 = *(undefined4 **)(_UNK_018f7a84 + 0x18f7300);
          goto LAB_018f7518;
        }
        uVar3 = *(undefined4 *)(iVar1 + 0x14);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x0165b5a4();
        }
        iVar2 = func_0x026f7720(uVar3,0,0);
        if (iVar2 != 0) {
          uStack_30 = param_2;
          uStack_2c = param_3;
          if (*(int *)(**(int **)(_UNK_018f7a88 + 0x18f74e4) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          uVar3 = func_0x01c56d84(&uStack_30,0);
          puVar4 = *(undefined4 **)(_UNK_018f7a8c + 0x18f751c);
          goto LAB_018f7518;
        }
      }
      iVar2 = func_0x018f24e8(param_1,param_2,param_3);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      *(int *)(iVar2 + 0x14) = param_4;
      func_0x0165b3c0((int *)(iVar2 + 0x14),param_4);
      iVar2 = *(int *)(param_1 + 0xb0);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      uVar3 = func_0x01924028(iVar2,param_2,param_3,0);
      if (*(char *)(param_1 + 0xb4) == '\0') {
        iVar2 = *(int *)(param_1 + 0x6c);
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        iVar2 = func_0x02b0af9c(iVar2,uVar3,**(undefined4 **)(_UNK_018f7a90 + 0x18f7330));
        piVar10 = *(int **)(_UNK_018f7a94 + 0x18f7348);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x0165b5a4();
        }
        uVar3 = 0;
        iVar5 = func_0x026f7720(param_4,0,0);
        if (iVar5 != 0) {
          if (param_4 == 0) {
            func_0x0165b6e0();
          }
          if (*(int *)(param_4 + 0x68) != 0) {
            uVar3 = *(undefined4 *)(*(int *)(param_4 + 0x68) + 0x44);
          }
        }
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        func_0x01922d2c(iVar2,uVar3,0);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x70);
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        iVar2 = func_0x02b0af9c(iVar2,uVar3,**(undefined4 **)(_UNK_018f7a98 + 0x18f7210));
        if (*(int *)(**(int **)(_UNK_018f7a9c + 0x18f7228) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        uVar3 = 0;
        iVar5 = func_0x026f7720(param_4,0,0);
        if (iVar5 != 0) {
          if (param_4 == 0) {
            func_0x0165b6e0();
          }
          if (*(int *)(param_4 + 0x68) != 0) {
            uVar3 = *(undefined4 *)(*(int *)(param_4 + 0x68) + 0x44);
          }
        }
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        func_0x01922d2c(iVar2,uVar3,0);
        piVar10 = *(int **)(_UNK_018f7aa0 + 0x18f7294);
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar2 = func_0x026f7720(param_4,0,0);
      if (iVar2 != 0) {
        if (param_4 == 0) {
          func_0x0165b6e0();
        }
        if (*(int *)(param_4 + 0x68) != 0) {
          func_0x018db8a4(&uStack_3c,*(undefined4 *)(*(int *)(param_4 + 0x68) + 0x2c),0);
          iVar2 = *(int *)(param_4 + 0x68);
          if (iVar2 == 0) {
            func_0x0165b6e0();
          }
          iVar2 = *(int *)(iVar2 + 0x44);
          if (iVar2 == 0) {
            func_0x0165b6e0();
          }
          iVar2 = func_0x01893b24(iVar2,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0xe0);
            if (iVar2 == 0) {
              func_0x0165b6e0();
            }
            uVar6 = func_0x01bb03e0(iVar2,uStack_3c,uStack_38,0);
            iVar2 = *(int *)(param_1 + 0xe0);
            if (iVar2 == 0) {
              func_0x0165b6e0();
            }
            uVar7 = func_0x01bb0494(iVar2,uStack_3c,uStack_38,0);
            if ((uVar6 & uVar7) == 1) {
              if ((param_14 == 0) && (param_14 = func_0x01cc5938(0), param_14 == 0)) {
                func_0x0165b6e0();
                param_14 = 0;
              }
              *(int *)(param_14 + 0x14) = param_4;
              *(undefined1 *)(param_14 + 0xc) = 1;
              func_0x0165b3c0((int *)(param_14 + 0x14),param_4);
            }
          }
          else {
            iVar2 = *(int *)(param_4 + 0x68);
            if (iVar2 == 0) {
              func_0x0165b6e0();
            }
            iVar2 = *(int *)(iVar2 + 0x44);
            if (iVar2 == 0) {
              func_0x0165b6e0();
            }
            iVar2 = func_0x01893b9c(iVar2,0);
            if (iVar2 == 0) goto LAB_018f7600;
            piVar10 = *(int **)(param_1 + 0xe0);
            if (piVar10 == (int *)0x0) {
              func_0x0165b6e0();
            }
            (**(code **)(*piVar10 + 0x148))
                      (piVar10,uStack_3c,uStack_38,*(undefined4 *)(*piVar10 + 0x14c));
          }
          piVar10 = *(int **)(_UNK_018f7aa4 + 0x18f7604);
        }
      }
LAB_018f7600:
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar2 = func_0x026f7720(param_4,0,0);
      if (iVar2 != 0) {
        if (param_4 == 0) {
          func_0x0165b6e0();
          func_0x0189bbe8(0,0);
          func_0x0165b6e0();
        }
        else {
          func_0x0189bbe8(param_4,0);
        }
        iVar5 = func_0x026f7c90(param_4,0);
        iVar2 = param_7;
        if (param_7 == 0) {
          iVar2 = param_10;
        }
        if (param_7 == 0 && iVar2 == 0) {
          if (iVar5 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f8a74(&uStack_3c,iVar5,0);
          if (iVar5 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f8230(iVar5,0x3f800000,0x3f800000,uStack_34,0);
        }
      }
      piVar10 = *(int **)(_UNK_018f7aa8 + 0x18f76d0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar2 = func_0x026f7720(param_4,0,0);
      if (iVar2 != 0) {
        if (param_4 == 0) {
          func_0x0165b6e0();
        }
        if ((*(int *)(param_4 + 0x68) != 0) && (param_10 == 0)) {
          *(undefined1 *)(*(int *)(param_4 + 0x68) + 0x97) = 1;
          func_0x0189df38(param_4,1,0);
          iVar2 = func_0x023f7c6c(param_4,**(undefined4 **)(_UNK_018f7aac + 0x18f7744));
          if (iVar2 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f7da4(iVar2,0,0);
          uVar3 = func_0x018f7ad8(param_1,param_4,param_7,param_8,param_9,param_12,iVar11,param_14,
                                  param_16,param_17);
          func_0x01701178(param_1,uVar3,0);
          piVar10 = *(int **)(_UNK_018f7ab0 + 0x18f77c0);
        }
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar11 = func_0x026f7720(param_4,0,0);
      if ((iVar11 != 0) &&
         (func_0x018f7bd8(param_1,param_2,param_3,param_4,param_10,param_11,0), param_13 == 0)) {
        if (param_4 == 0) {
          func_0x0165b6e0();
        }
        func_0x0189bef4(param_4,0);
      }
      if (param_14 != 0) {
        iVar11 = func_0x02510b90(param_14,**(undefined4 **)(_UNK_018f7ab4 + 0x18f784c));
        if (iVar11 != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0xe8);
          if (*(int *)(**(int **)(_UNK_018f7ab8 + 0x18f786c) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          uVar8 = func_0x01c56d84(iVar1 + 8,0);
          if (param_4 == 0) {
            func_0x0165b6e0();
          }
          iVar11 = *(int *)(param_4 + 0x68);
          if (iVar11 == 0) {
            func_0x0165b6e0();
          }
          func_0x018f3328(param_1,2,uVar3,uVar8,*(undefined4 *)(iVar11 + 0x2c),0);
          iVar11 = *(int *)(param_1 + 0xdc);
          uVar3 = *(undefined4 *)(iVar1 + 0x14);
          if (iVar11 == 0) {
            func_0x0165b6e0();
          }
          func_0x01cc316c(iVar11,uVar3,0);
        }
        iVar11 = func_0x02510b90(param_14,**(undefined4 **)(_UNK_018f7abc + 0x18f7904));
        if (iVar11 != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0xe4);
          if (*(int *)(**(int **)(_UNK_018f7ac0 + 0x18f7924) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          uVar8 = func_0x01c56d84(iVar1 + 8,0);
          if (param_4 == 0) {
            func_0x0165b6e0();
          }
          iVar11 = *(int *)(param_4 + 0x68);
          if (iVar11 == 0) {
            func_0x0165b6e0();
          }
          func_0x018f3328(param_1,2,uVar3,uVar8,*(undefined4 *)(iVar11 + 0x2c),0);
        }
        iVar11 = func_0x02510b90(param_14,**(undefined4 **)(_UNK_018f7ac4 + 0x18f7998));
        if (iVar11 != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0xec);
          if (*(int *)(**(int **)(_UNK_018f7ac8 + 0x18f79b8) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          uVar8 = func_0x01c56d84(iVar1 + 8,0);
          if (param_4 == 0) {
            func_0x0165b6e0();
          }
          iVar1 = *(int *)(param_4 + 0x68);
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          func_0x018f3328(param_1,2,uVar3,uVar8,*(undefined4 *)(iVar1 + 0x2c),0);
        }
      }
      if (param_6 == 0) {
        return 1;
      }
      func_0x01c5865c(0,0);
      return 1;
    }
    uStack_30 = param_2;
    uStack_2c = param_3;
    if (*(int *)(**(int **)(_UNK_018f7a78 + 0x18f70f0) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar3 = func_0x01c56d84(&uStack_30,0);
    puVar4 = *(undefined4 **)(_UNK_018f7a7c + 0x18f7128);
  }
LAB_018f7518:
  uVar3 = func_0x01701158(*puVar4,uVar3,0);
  if (*(int *)(**(int **)(_UNK_018f7a70 + 0x18f7534) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018b45f0(uVar3,0);
  return 0;
}


/* BoardController.SpawnAtRandomPosition VA=0x18F0770 | private ItemController SpawnAtRandomPosition(ItemEntity itemEntity, BoardItemData boardItemData, bool isNewlyCreated, Transform sourceTransform, bool disableItemSelection = False, bool isCapacityUpdated = True, ItemCreationHandler itemCreationHandler) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardController_SpawnAtRandomPosition_18F0770
              (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
              int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_019009f4 + 0x1900790);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019009f8 + 0x19007a8));
    func_0x0165b424(*(undefined4 *)(_UNK_019009fc + 0x19007b4));
    func_0x0165b424(*(undefined4 *)(_UNK_01900a00 + 0x19007c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x018f1ea4(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = func_0x026f83f4(0,*(int *)(iVar1 + 0xc),0);
    iVar1 = func_0x02b0af9c(iVar1,uVar2,**(undefined4 **)(_UNK_01900a04 + 0x1900808));
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    uVar7 = *(undefined4 *)(iVar1 + 0x14);
    if (param_2 == 0) {
      func_0x0165b6e0();
    }
    piVar5 = *(int **)(_UNK_01900a08 + 0x1900840);
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar4 = (char *)(_UNK_01900a0c + 0x1900868);
    if (*pcVar4 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_01900a10 + 0x190087c));
      *pcVar4 = '\x01';
    }
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar5;
    }
    uVar6 = 0;
    iVar1 = BoardController_SpawnItem_18E0B38
                      (param_1,param_3,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x30),
                       *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x34),0,0,param_4,0,param_7,0,
                       param_8);
    if (param_6 == 0) {
      uVar6 = func_0x018f24e8(param_1,uVar2,uVar7);
    }
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar3 = func_0x026f7c90(iVar1,0);
    if (param_5 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f7a00(&uStack_30,param_5,0);
    if (param_5 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f7a00(&uStack_30,param_5,0);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f81b0(iVar3,uStack_30,uStack_2c,0,0);
    BoardController_SetItemOnBoard_18E6FB0
              (param_1,uVar2,uVar7,iVar1,0,1,0,0,1,0,0,uVar6,0,param_8,0,0,0);
  }
  return iVar1;
}


/* BoardController.SpawnBubbleAtRandomPosition VA=0x18F0A14 | private void SpawnBubbleAtRandomPosition(ItemEntity itemEntity, BoardItemData boardItemData, bool isNewlyCreated, Transform sourceTransform, bool disableItemSelection = False, bool isCapacityUpdated = True, ItemCreationHandler itemCreationHandler) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_SpawnBubbleAtRandomPosition_18F0A14
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01900c84 + 0x1900a34);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01900c88 + 0x1900a4c));
    func_0x0165b424(*(undefined4 *)(_UNK_01900c8c + 0x1900a58));
    func_0x0165b424(*(undefined4 *)(_UNK_01900c90 + 0x1900a64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x018f1ea4(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    uVar2 = func_0x026f83f4(0,*(int *)(iVar1 + 0xc),0);
    iVar1 = func_0x02b0af9c(iVar1,uVar2,**(undefined4 **)(_UNK_01900c94 + 0x1900aac));
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    if (param_2 == 0) {
      func_0x0165b6e0();
    }
    piVar5 = *(int **)(_UNK_01900c98 + 0x1900ae4);
    *(undefined4 *)(param_2 + 8) = uVar7;
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar4 = (char *)(_UNK_01900c9c + 0x1900b0c);
    if (*pcVar4 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_01900ca0 + 0x1900b20));
      *pcVar4 = '\x01';
    }
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar5;
    }
    uVar6 = 0;
    iVar1 = BoardController_SpawnItem_18E0B38
                      (param_1,param_3,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x30),
                       *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x34),0,0,param_4,0,param_7,0,0);
    if (param_6 == 0) {
      uVar6 = func_0x018f24e8(param_1,uVar7,uVar2);
    }
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar3 = func_0x026f7c90(iVar1,0);
    if (param_5 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f7a00(&uStack_30,param_5,0);
    if (param_5 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f7a00(&uStack_30,param_5,0);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f81b0(iVar3,uStack_30,uStack_2c,0,0);
    BoardController_SetItemOnBoard_18E6FB0
              (param_1,uVar7,uVar2,iVar1,0,1,1,0,0,0,0,uVar6,0,param_8,0,0,0);
  }
  return;
}


/* BoardController.Save VA=0x18DD100 | private void Save(bool close = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_Save_18DD100(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  
  pcVar7 = (char *)(_UNK_01c586d0 + 0x1c58670);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01c586d4 + 0x1c58684),0);
    func_0x0165b424(*(undefined4 *)(_UNK_01c586d8 + 0x1c58690));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01c586dc + 0x1c586a4) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar6 = **(int **)(_UNK_01c586e0 + 0x1c586c4);
  pcVar7 = (char *)(_UNK_0434f9f0 + 0x434f558);
  if (*pcVar7 == '\0') {
    func_0x027026c8(*(undefined4 *)(_UNK_0434f9f4 + 0x434f56c));
    func_0x027026c8(*(undefined4 *)(_UNK_0434f9f8 + 0x434f578));
    func_0x027026c8(*(undefined4 *)(_UNK_0434f9fc + 0x434f584));
    func_0x027026c8(*(undefined4 *)(_UNK_0434fa00 + 0x434f590));
    func_0x027026c8(*(undefined4 *)(_UNK_0434fa04 + 0x434f59c));
    *pcVar7 = '\x01';
  }
  iVar1 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x027026e4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x027026e4();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x027026cc();
  }
  iVar1 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x027026e4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x027026e4();
  }
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 4) != 0) {
    if (*(int *)(**(int **)(_UNK_0434fa08 + 0x434f628) + 0x74) == 0) {
      func_0x027026cc();
    }
    uVar8 = 0;
    iVar1 = func_0x02702a50(0);
    if (iVar1 != 0) {
      piVar9 = *(int **)(_UNK_0434fa0c + 0x434f658);
      iVar1 = **(int **)(*piVar9 + 0x5c);
      if (iVar1 == 0) {
        func_0x027026bc();
      }
      iVar2 = *(int *)(iVar6 + 0x10);
      iVar1 = *(int *)(iVar1 + 0x14);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x027026e4();
      }
      piVar11 = *(int **)(_UNK_0434fa10 + 0x434f690);
      iVar5 = *piVar11;
      uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x38);
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x027026cc(iVar5);
      }
      piVar3 = (int *)func_0x048c2f0c(uVar10,0);
      if (piVar3 == (int *)0x0) {
        func_0x027026bc();
      }
      uVar10 = (**(code **)(*piVar3 + 0x1a0))(piVar3,*(undefined4 *)(*piVar3 + 0x1a4));
      if (iVar1 == 0) {
        func_0x027026bc();
      }
      iVar1 = func_0x02b0b63c(iVar1,uVar10,**(undefined4 **)(_UNK_0434fa14 + 0x434f6fc));
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar9 + 0x5c);
        if (iVar1 == 0) {
          func_0x027026bc();
        }
        iVar2 = *(int *)(iVar6 + 0x10);
        iVar1 = *(int *)(iVar1 + 0x10);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x027026e4();
        }
        iVar5 = *piVar11;
        uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x38);
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x027026cc(iVar5);
        }
        piVar9 = (int *)func_0x048c2f0c(uVar10,0);
        if (piVar9 == (int *)0x0) {
          func_0x027026bc();
        }
        uVar10 = (**(code **)(*piVar9 + 0x1a0))(piVar9,*(undefined4 *)(*piVar9 + 0x1a4));
        if (iVar1 == 0) {
          func_0x027026bc();
        }
        iVar5 = *(int *)(iVar1 + 8);
        uVar12 = *(uint *)(iVar1 + 0xc);
        piVar9 = *(int **)(_UNK_0434fa18 + 0x434f7bc);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar2 = *piVar9;
        if (iVar5 == 0) {
          func_0x027026bc();
        }
        if (uVar12 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar12 + 1;
          puVar4 = (undefined4 *)(iVar5 + uVar12 * 4 + 0x10);
          *puVar4 = uVar10;
          func_0x027026d4(puVar4,uVar10);
        }
        else {
          func_0x02b0b274(iVar1,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    while( true ) {
      iVar1 = *(int *)(iVar6 + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x027026cc();
      }
      iVar1 = *(int *)(iVar6 + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar1 == 0) {
        func_0x027026bc();
      }
      if ((*(ushort *)(*(int *)(iVar6 + 0x10) + 0xbd) & 1) == 0) {
        func_0x027026e4();
      }
      if (*(int *)(iVar1 + 0x10) <= (int)uVar8) break;
      iVar1 = *(int *)(iVar6 + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x027026cc();
      }
      iVar1 = *(int *)(iVar6 + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x027026e4();
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x027026bc();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x027026d8();
      }
      piVar9 = *(int **)(iVar1 + uVar8 * 4 + 0x10);
      if (piVar9 != (int *)0x0) {
        iVar1 = *(int *)(iVar6 + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x027026e4();
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x1c);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x027026e4(iVar1);
        }
        iVar2 = *piVar9;
        uVar12 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar12 != 0) {
          piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
              goto LAB_0434f930;
            }
            uVar12 = uVar12 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined4 *)func_0x027026e8(piVar9,iVar1,0);
LAB_0434f930:
        (*(code *)*puVar4)(piVar9,0,0,puVar4[1]);
      }
      uVar8 = uVar8 + 1;
    }
  }
  return;
}


/* BoardController.Load VA=0x18F0CA4 | private BoardEntity Load() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardController_Load_18F0CA4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 unaff_r4;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar4 = (char *)(_UNK_01900d48 + 0x1900cb4);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01900d4c + 0x1900cc8));
    func_0x0165b424(*(undefined4 *)(_UNK_01900d50 + 0x1900cd4));
    func_0x0165b424(*(undefined4 *)(_UNK_01900d54 + 0x1900ce0));
    *pcVar4 = '\x01';
    in_r3 = extraout_r3;
  }
  piVar5 = *(int **)(_UNK_01900d58 + 0x1900cf4);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar5;
    in_r3 = extraout_r3_00;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c);
  if (*(int *)(**(int **)(_UNK_01900d5c + 0x1900d14) + 0x74) == 0) {
    func_0x0165b5a4(**(int **)(_UNK_01900d5c + 0x1900d14));
    in_r3 = extraout_r3_01;
  }
  iVar1 = **(int **)(_UNK_01900d60 + 0x1900d3c);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(_UNK_024f7468 + 0x24f7104));
    func_0x0165b424(*(undefined4 *)(_UNK_024f746c + 0x24f7110));
    func_0x0165b424(*(undefined4 *)(_UNK_024f7470 + 0x24f711c));
    func_0x0165b424(*(undefined4 *)(_UNK_024f7474 + 0x24f7128));
    in_r3 = extraout_r3_02;
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x016cc90c(iVar1);
      in_r3 = extraout_r3_03;
    }
  }
  piVar5 = *(int **)(_UNK_024f7478 + 0x24f7148);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar2 = *piVar5;
    in_r3 = extraout_r3_04;
  }
  uVar3 = func_0x01701158(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24),uVar6,0,in_r3,unaff_r4);
  piVar7 = *(int **)(_UNK_024f747c + 0x24f7180);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar2 = func_0x018b7900(uVar3,0);
  if (iVar2 == 0) {
    piVar7 = *(int **)(_UNK_024f748c + 0x24f72b0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar3 = 0;
    iVar2 = func_0x018b7900(uVar6,0);
    if (iVar2 != 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      uVar6 = func_0x018b7db8(uVar6,**(undefined4 **)(_UNK_024f7490 + 0x24f72f8),0);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x0165b5a4();
        iVar2 = *piVar5;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x34);
      if (*(int *)(**(int **)(_UNK_024f7494 + 0x24f732c) + 0x74) == 0) {
        func_0x0165b5a4(**(int **)(_UNK_024f7494 + 0x24f732c));
      }
      uVar3 = func_0x024f0b8c(uVar6,uVar3,**(undefined4 **)(iVar1 + 0x1c));
    }
  }
  else {
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar2 = *piVar5;
    }
    uVar6 = func_0x01701158(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24),uVar6,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar6 = func_0x018b7db8(uVar6,**(undefined4 **)(_UNK_024f7480 + 0x24f71f4),0);
    uVar6 = func_0x018c5710(uVar6,0);
    uVar3 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x34);
    if (*(int *)(**(int **)(_UNK_024f7484 + 0x24f721c) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar3 = func_0x024f0b8c(uVar6,uVar3,**(undefined4 **)(iVar1 + 0x1c));
  }
  return uVar3;
}


/* BoardController.GetAvailableCells VA=0x18E1EA4 | public List<CellEntity> GetAvailableCells() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardController_GetAvailableCells_18E1EA4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_018f2170 + 0x18f1ebc);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f2174 + 0x18f1ed0));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2178 + 0x18f1edc));
    func_0x0165b424(*(undefined4 *)(_UNK_018f217c + 0x18f1ee8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2180 + 0x18f1ef4));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2184 + 0x18f1f00));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2188 + 0x18f1f0c));
    func_0x0165b424(*(undefined4 *)(_UNK_018f218c + 0x18f1f18));
    func_0x0165b424(*(undefined4 *)(_UNK_018f2190 + 0x18f1f24));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018f2194 + 0x18f1f40));
  func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_018f2198 + 0x18f1f58));
  iVar6 = *(int *)(param_1 + 0x88);
  if (iVar6 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_48,iVar6,**(undefined4 **)(_UNK_018f219c + 0x18f1f84));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  puVar10 = *(undefined4 **)(_UNK_018f21a0 + 0x18f1fa0);
  piVar9 = *(int **)(_UNK_018f21a4 + 0x18f1fa8);
  while (iVar2 = func_0x01710964(&uStack_38,*puVar10), iVar6 = iStack_2c, iVar2 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    uVar7 = *(undefined4 *)(iVar6 + 0x14);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar2 = func_0x026f7930(uVar7,0,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar6 + 0x10);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar2 = *(int *)(iVar2 + 0x34);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      if (*(char *)(iVar2 + 8) == '\0') {
        iVar6 = *(int *)(iVar6 + 0x10);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        uVar7 = *(undefined4 *)(iVar6 + 0x34);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = *(int *)(iVar1 + 8);
        uVar8 = *(uint *)(iVar1 + 0xc);
        piVar4 = *(int **)(_UNK_018f21a8 + 0x18f2064);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar2 = *piVar4;
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        if (uVar8 < *(uint *)(iVar6 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar8 + 1;
          puVar3 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
          *puVar3 = uVar7;
          func_0x0165b3c0(puVar3,uVar7);
        }
        else {
          func_0x02b0b274(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
        }
      }
    }
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_018f21ac + 0x18f20c0));
  return iVar1;
}


/* BoardController.GetAvailableCellCoordinates VA=0x18E3064 | public List<Coordinate> GetAvailableCellCoordinates(Coordinate targetIndex) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardController_GetAvailableCellCoordinates_18E3064
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar4 = (char *)(_UNK_018f32c8 + 0x18f3080);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018f32cc + 0x18f3094));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32d0 + 0x18f30a0));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32d4 + 0x18f30ac));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32d8 + 0x18f30b8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32dc + 0x18f30c4));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32e0 + 0x18f30d0));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32e4 + 0x18f30dc));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32e8 + 0x18f30e8));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32ec + 0x18f30f4));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32f0 + 0x18f3100));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32f4 + 0x18f310c));
    func_0x0165b424(*(undefined4 *)(_UNK_018f32f8 + 0x18f3118));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018f32fc + 0x18f312c));
  func_0x01929648(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  iVar2 = BoardController_GetAvailableCells_18E1EA4(param_1);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar2 + 0xc);
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_018f3300 + 0x18f3174));
  func_0x02aa5f40(iVar3,**(undefined4 **)(_UNK_018f3304 + 0x18f318c));
  if (iVar5 != 0) {
    piVar8 = *(int **)(_UNK_018f3308 + 0x18f31a8);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar5 = *piVar8;
    }
    iVar6 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x24);
    if (iVar6 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x0165b5a4();
        iVar5 = *piVar8;
      }
      uVar7 = **(undefined4 **)(iVar5 + 0x5c);
      iVar6 = func_0x0165b6d4(**(undefined4 **)(_UNK_018f330c + 0x18f31f0));
      func_0x026f8ca0(iVar6,uVar7,**(undefined4 **)(_UNK_018f3310 + 0x18f3210),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x24);
      *piVar8 = iVar6;
      func_0x0165b3c0(piVar8,iVar6);
    }
    uVar7 = func_0x02452e38(iVar2,iVar6,**(undefined4 **)(_UNK_018f3314 + 0x18f323c));
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x02aa6a54(iVar3,uVar7,**(undefined4 **)(_UNK_018f3318 + 0x18f3264));
    uVar7 = func_0x0165b6d4(**(undefined4 **)(_UNK_018f331c + 0x18f3278));
    func_0x026f8ca4(uVar7,iVar1,**(undefined4 **)(_UNK_018f3320 + 0x18f3294),0);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x02aa8700(iVar3,uVar7,**(undefined4 **)(_UNK_018f3324 + 0x18f32b8));
  }
  return iVar3;
}


/* BoardController.SetCloudItems VA=0x18F22B4 | private void SetCloudItems(int level) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_SetCloudItems_18F22B4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_01902994 + 0x19022d0);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01902998 + 0x19022e4));
    func_0x0165b424(*(undefined4 *)(_UNK_0190299c + 0x19022f0));
    func_0x0165b424(*(undefined4 *)(_UNK_019029a0 + 0x19022fc));
    func_0x0165b424(*(undefined4 *)(_UNK_019029a4 + 0x1902308));
    func_0x0165b424(*(undefined4 *)(_UNK_019029a8 + 0x1902314));
    func_0x0165b424(*(undefined4 *)(_UNK_019029ac + 0x1902320));
    func_0x0165b424(*(undefined4 *)(_UNK_019029b0 + 0x190232c));
    func_0x0165b424(*(undefined4 *)(_UNK_019029b4 + 0x1902338));
    func_0x0165b424(*(undefined4 *)(_UNK_019029b8 + 0x1902344));
    func_0x0165b424(*(undefined4 *)(_UNK_019029bc + 0x1902350));
    func_0x0165b424(*(undefined4 *)(_UNK_019029c0 + 0x190235c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  iVar3 = func_0x01bbac8c(0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x28);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar6 = *(int *)(param_1 + 0x88);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_58,iVar6,**(undefined4 **)(_UNK_019029c4 + 0x19023d8));
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  iStack_2c = iStack_4c;
  do {
    do {
      do {
        iVar4 = func_0x01710964(&uStack_38,**(undefined4 **)(_UNK_019029fc + 0x19023fc));
        iVar6 = iStack_2c;
        if (iVar4 == 0) {
          func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_01902a00 + 0x190287c));
          return;
        }
        iVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_019029c8 + 0x190241c));
        func_0x01929754(iVar4,0);
        if (iVar4 == 0) {
          func_0x0165b6e0();
        }
        *(int *)(iVar4 + 0x18) = param_1;
        func_0x0165b3c0();
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = *(int *)(iVar6 + 0x10);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        piVar8 = (int *)(iVar4 + 8);
        *piVar8 = *(int *)(iVar6 + 0x34);
        func_0x0165b3c0(piVar8);
        iVar6 = *piVar8;
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
      } while (*(char *)(iVar6 + 8) == '\0');
      iVar6 = *piVar8;
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
    } while (*(int *)(iVar6 + 0xc) != param_2);
    iVar6 = *piVar8;
    if (iVar6 == 0) {
      func_0x0165b6e0();
      iVar6 = *piVar8;
      uRam0000000c = 1;
      if (iVar6 != 0) goto LAB_019024e4;
      func_0x0165b6e0();
      iVar6 = *piVar8;
      uRam00000008 = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
        func_0x0165b6e0();
      }
    }
    else {
      *(undefined4 *)(iVar6 + 0xc) = 1;
LAB_019024e4:
      *(undefined1 *)(iVar6 + 8) = 0;
    }
    if (*(int *)(**(int **)(_UNK_019029cc + 0x19024f4) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar11 = *(int *)(iVar6 + 0x10);
    iVar6 = *(int *)(param_1 + 0xb0);
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *piVar8;
    iVar6 = *(int *)(iVar6 + 0x20);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar9 + 0x14);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar6 = func_0x02b0af9c(iVar3,iVar6 * iVar11 + iVar9,
                            **(undefined4 **)(_UNK_019029d0 + 0x1902554));
    iVar11 = *piVar8;
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    uVar1 = *(undefined1 *)(iVar6 + 0x10);
    if (iVar11 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *piVar8;
    uVar2 = *(undefined1 *)(iVar6 + 0x18);
    *(undefined1 *)(iVar11 + 0x20) = uVar1;
    if (iVar9 == 0) {
      func_0x0165b6e0();
      iVar9 = *piVar8;
      uVar10 = *(undefined4 *)(iVar6 + 0x20);
      uRam00000021 = uVar2;
      if (iVar9 != 0) goto LAB_019025bc;
      func_0x0165b6e0();
      iVar9 = *piVar8;
      uVar7 = *(undefined4 *)(iVar6 + 0x1c);
      uRam00000018 = uVar10;
      if (iVar9 != 0) goto LAB_019025c8;
      func_0x0165b6e0();
      iVar9 = *piVar8;
      uRam0000001c = uVar7;
      if (iVar9 == 0) {
        iVar9 = 0;
        func_0x0165b6e0();
      }
    }
    else {
      uVar10 = *(undefined4 *)(iVar6 + 0x20);
      *(undefined1 *)(iVar9 + 0x21) = uVar2;
LAB_019025bc:
      uVar7 = *(undefined4 *)(iVar6 + 0x1c);
      *(undefined4 *)(iVar9 + 0x18) = uVar10;
LAB_019025c8:
      *(undefined4 *)(iVar9 + 0x1c) = uVar7;
    }
    if (0 < *(int *)(iVar9 + 0x18)) {
      iVar6 = *piVar8;
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      if (0 < *(int *)(iVar6 + 0x1c)) {
        iVar11 = *piVar8;
        iVar6 = *(int *)(param_1 + 0xb0);
        if (iVar11 == 0) {
          func_0x0165b6e0();
          uVar10 = uRam0000001c;
          iVar11 = *piVar8;
          if (iVar11 == 0) {
            iVar11 = 0;
            func_0x0165b6e0();
          }
        }
        else {
          uVar10 = *(undefined4 *)(iVar11 + 0x1c);
        }
        uVar7 = *(undefined4 *)(iVar11 + 0x18);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        uVar10 = func_0x019232c0(iVar6,uVar10,uVar7,0,0,0);
        func_0x018db8a4(&uStack_58,uVar10,0);
        uVar7 = func_0x01895000(uStack_58,uStack_54,*piVar8,0);
        if (*(int *)(**(int **)(_UNK_019029d4 + 0x1902690) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        if (*(char *)(_UNK_019029d8 + 0x19026ac) == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_019029dc + 0x19026c0));
          *(undefined1 *)(_UNK_019029e0 + 0x19026d0) = 1;
        }
        iVar6 = **(int **)(_UNK_019029e4 + 0x19026dc);
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x0165b5a4();
          iVar6 = **(int **)(_UNK_019029e8 + 0x19026f8);
        }
        BoardController_SpawnItemAsync_18E09AC
                  (&uStack_58,param_1,uVar10,uVar7,*(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x30),
                   *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x34),0,0,1,0);
        uStack_48 = CONCAT44(uStack_54,uStack_58);
        uStack_40 = uStack_50;
        uStack_68 = 0;
        uStack_60 = 0;
        if ((*(byte *)(*(int *)(**(int **)(_UNK_019029ec + 0x1902750) + 0x10) + 0xbd) & 1) == 0) {
          func_0x016cc8b0();
        }
        uStack_60 = uStack_40;
        uStack_68 = uStack_48;
        func_0x0165b3c0(&uStack_68,0);
        uStack_50 = uStack_60;
        uStack_58 = (undefined4)uStack_68;
        uStack_54 = uStack_68._4_4_;
        *(undefined4 *)(iVar4 + 0x14) = uStack_60;
        *(undefined4 *)(iVar4 + 0xc) = (undefined4)uStack_68;
        *(undefined4 *)(iVar4 + 0x10) = uStack_68._4_4_;
        func_0x0165b3c0(iVar4 + 0xc,0);
        uVar10 = func_0x0165b6d4(**(undefined4 **)(_UNK_019029f0 + 0x19027c8));
        func_0x026f81f0(uVar10,iVar4,**(undefined4 **)(_UNK_019029f4 + 0x19027dc),0);
        func_0x01913140(iVar4 + 0xc,uVar10,**(undefined4 **)(_UNK_019029f8 + 0x19027f8));
      }
    }
  } while( true );
}


/* BoardController.SetCloudItemsAsync VA=0x18F2A0C | private UniTask<bool> SetCloudItemsAsync(int level) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_SetCloudItemsAsync_18F2A0C
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01902b10 + 0x1902a2c);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01902b14 + 0x1902a40));
    func_0x0165b424(*(undefined4 *)(_UNK_01902b18 + 0x1902a4c));
    func_0x0165b424(*(undefined4 *)(_UNK_01902b1c + 0x1902a58));
    *pcVar3 = '\x01';
  }
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  func_0x0165b3c0((uint)&uStack_38 | 4,0);
  uStack_28 = param_2;
  func_0x0165b3c0(&uStack_28,param_2);
  iVar2 = **(int **)(_UNK_01902b20 + 0x1902ab8);
  uStack_38 = 0xffffffff;
  iVar1 = *(int *)(iVar2 + 0x1c);
  uStack_24 = param_3;
  if (iVar1 == 0) {
    func_0x016cc90c(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  func_0x01934d6c(&uStack_38,*(undefined4 *)(iVar1 + 8));
  func_0x01803bd8(&uStack_40,(uint)&uStack_38 | 4,**(undefined4 **)(_UNK_01902b24 + 0x1902af8));
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  return;
}


/* BoardController.UnboxCellsAfterLevelupDismiss VA=0x18F7448 | private UniTask<bool> UnboxCellsAfterLevelupDismiss(bool isInit) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardController_UnboxCellsAfterLevelupDismiss_18F7448
               (undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_0190755c + 0x1907468);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01907560 + 0x190747c));
    func_0x0165b424(*(undefined4 *)(_UNK_01907564 + 0x1907488));
    func_0x0165b424(*(undefined4 *)(_UNK_01907568 + 0x1907494));
    *pcVar2 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_44;
  uStack_24 = uStack_40;
  uStack_20 = uStack_3c;
  func_0x0165b3c0((uint)&uStack_58 | 4,0);
  uStack_48 = param_2;
  func_0x0165b3c0(&uStack_48,param_2);
  uStack_44 = CONCAT31(uStack_44._1_3_,param_3);
  iVar3 = **(int **)(_UNK_0190756c + 0x1907504);
  uStack_58 = 0xffffffff;
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    func_0x016cc90c(iVar3);
    iVar1 = *(int *)(iVar3 + 0x1c);
  }
  func_0x01936780(&uStack_58,*(undefined4 *)(iVar1 + 8));
  func_0x01803bd8(&uStack_60,(uint)&uStack_58 | 4,**(undefined4 **)(_UNK_01907570 + 0x1907544));
  *param_1 = uStack_60;
  param_1[1] = uStack_5c;
  return;
}


/* BoardController.IsMergeAvailable VA=0x18F7F28 | public bool IsMergeAvailable(ItemController itemController1, ItemController itemController2) { } */

/* WARNING: Possible PIC construction at 0x019085b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01925970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019085bc) */
/* WARNING: Removing unreachable block (ram,0x019085d0) */
/* WARNING: Removing unreachable block (ram,0x019085d4) */
/* WARNING: Removing unreachable block (ram,0x01925974) */
/* WARNING: Removing unreachable block (ram,0x0192597c) */
/* WARNING: Removing unreachable block (ram,0x01925988) */
/* WARNING: Removing unreachable block (ram,0x0192598c) */
/* WARNING: Removing unreachable block (ram,0x01925998) */
/* WARNING: Removing unreachable block (ram,0x019259a4) */
/* WARNING: Removing unreachable block (ram,0x019259a8) */
/* WARNING: Removing unreachable block (ram,0x019259b4) */
/* WARNING: Removing unreachable block (ram,0x019259b8) */
/* WARNING: Removing unreachable block (ram,0x01925a64) */
/* WARNING: Removing unreachable block (ram,0x01925a70) */
/* WARNING: Removing unreachable block (ram,0x01925a74) */
/* WARNING: Removing unreachable block (ram,0x019259c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint BoardController_IsMergeAvailable_18F7F28(undefined4 param_1,code *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_r3;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int extraout_r12;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  code *pcStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  
  uVar23 = CONCAT44(param_3,param_1);
  pbVar6 = (byte *)(iRam01908664 + 0x1907f50);
  uVar2 = (uint)*pbVar6;
  if (uVar2 == 0) {
    func_0x0165b424(*(undefined4 *)(iRam01908668 + 0x1907f64));
    func_0x0165b424(*(undefined4 *)(iRam0190866c + 0x1907f70));
    func_0x0165b424(*(undefined4 *)(iRam01908670 + 0x1907f7c));
    func_0x0165b424(*(undefined4 *)(iRam01908674 + 0x1907f88));
    func_0x0165b424(*(undefined4 *)(iRam01908678 + 0x1907f94));
    func_0x0165b424(*(undefined4 *)(iRam0190867c + 0x1907fa0));
    func_0x0165b424(*(undefined4 *)(iRam01908680 + 0x1907fac));
    uVar2 = 1;
    *pbVar6 = 1;
  }
  if (param_2 == (code *)0x0) {
    uVar2 = func_0x0165b6e0();
  }
  iVar13 = *(int *)(param_2 + 0x68);
  if (iVar13 != 0) {
    uVar2 = *(uint *)(iVar13 + 0x44);
  }
  if (iVar13 == 0 || uVar2 == 0) {
    return 0;
  }
  piVar9 = *(int **)(iVar13 + 0x2c);
  iVar3 = func_0x01893b24(uVar2,0);
  if (iVar3 != 0) {
    return 0;
  }
  if (*(int *)(**(int **)(iRam01908684 + 0x1908010) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar3 = func_0x026f7930(param_3,0,0);
  if (iVar3 != 0) {
    return 0;
  }
  piStack_3c = piVar9;
  if (param_3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x026f7960(param_3,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x026f7db4(iVar3,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(param_3 + 0x68);
  if (iVar3 == 0) {
    return 0;
  }
  iVar7 = *(int *)(iVar3 + 0x44);
  if (iVar7 == 0) {
    iVar3 = func_0x0165b6e0();
  }
  uVar15 = *(undefined4 *)(iVar7 + 8);
  uVar4 = *(undefined4 *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar13 + 0x44);
  if (iVar7 == 0) {
    func_0x0165b6e0(iVar3,uVar4);
  }
  iVar3 = *(int *)(iVar7 + 8);
  uVar10 = *(undefined4 *)(iVar7 + 0xc);
  if (*(int *)(**(int **)(iRam01908688 + 0x19080d4) + 0x74) == 0) {
    func_0x0165b5a4(**(int **)(iRam01908688 + 0x19080d4),uVar4);
  }
  uStack_40 = 0;
  iVar7 = func_0x01c56a80(uVar15,uVar4,iVar3,uVar10);
  if (iVar7 != 0) {
    return 0;
  }
  iVar7 = *(int *)(param_3 + 0x68);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(iVar7 + 0x44);
  uVar4 = *(undefined4 *)(iRam0190868c + 0x1908138);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  if (*(char *)(iVar7 + 100) != '\0') {
    return 0;
  }
  iVar7 = ItemController_PreventMerge_18914D4(param_2,0);
  if (iVar7 != 0) {
    return 0;
  }
  uVar2 = 0;
  iVar7 = ItemController_PreventMerge_18914D4(param_3,0);
  if (iVar7 != 0) {
    return 0;
  }
  iVar11 = *(int *)(param_3 + 0x68);
  iVar7 = iVar11;
  if (iVar11 == 0) {
    func_0x0165b6e0();
    iVar7 = *(int *)(param_3 + 0x68);
    bVar18 = iVar7 == 0;
    bVar17 = true;
    if (bVar18) {
      uVar15 = 0x1908660;
      uVar23 = func_0x0165b6e0();
      if (!bVar17) {
        *(undefined4 *)(iVar13 + 0x7bd) = extraout_r3;
      }
      iVar7 = 0;
      if (bVar18) {
        uVar2 = *(uint *)(iVar3 + -0x32a0);
        param_2 = param_2 + -0x5b00;
        uVar23 = CONCAT44(*(undefined4 *)(iVar3 + -0x4b2c),(uint)*(byte *)(extraout_r12 + -0xea5));
      }
      goto SUB_019086c0;
    }
  }
  piVar9 = *(int **)(iRam01908690 + 0x19081a4);
  param_2 = *(code **)(iVar11 + 0x2c);
  if (*(int **)(iVar7 + 0x2c) == (int *)0x0) {
LAB_019081dc:
    if (piStack_3c != (int *)0x0) {
      piVar12 = *(int **)(iRam01908698 + 0x19081f8);
      iVar7 = *piStack_3c;
      iVar3 = *piVar12;
      uVar5 = (uint)*(byte *)(iVar7 + 0xb8);
      uVar2 = (uint)*(byte *)(iVar3 + 0xb8);
      if ((uVar2 <= uVar5) && (*(int *)(*(int *)(iVar7 + 100) + uVar2 * 4 + -4) == iVar3)) {
        if (param_2 != (code *)0x0) {
          uVar16 = (uint)*(byte *)(**(int **)(iRam019086b0 + 0x1908234) + 0xb8);
          if (uVar16 <= *(byte *)(*(int *)param_2 + 0xb8)) {
            uVar4 = *(undefined4 *)(iRam019086b4 + 0x1908308);
            if (*(int *)(*(int *)(*(int *)param_2 + 100) + uVar16 * 4 + -4) !=
                **(int **)(iRam019086b0 + 0x1908234)) goto LAB_01908308;
            iVar7 = *(int *)(iVar13 + 0x2c);
            iVar3 = *(int *)(param_2 + 0x2c);
            if (iVar7 == 0) {
              func_0x0165b6e0();
            }
            if (iVar3 == *(int *)(iVar7 + 0x18)) {
              iVar13 = func_0x0177da70(param_1,0);
              if (iVar13 == 0) {
                return 1;
              }
              iVar13 = func_0x0177d630(param_1,0);
              return (uint)(iVar13 != 0x67);
            }
            iVar3 = *piVar12;
            iVar7 = *piStack_3c;
            uVar2 = (uint)*(byte *)(iVar3 + 0xb8);
            uVar5 = (uint)*(byte *)(iVar7 + 0xb8);
          }
        }
        uVar4 = *(undefined4 *)(iRam0190869c + 0x1908254);
      }
LAB_01908308:
      if ((uVar5 < uVar2) || (*(int *)(*(int *)(iVar7 + 100) + uVar2 * 4 + -4) != iVar3))
      goto LAB_01908328;
      if (param_2 != (code *)0x0) {
        uVar2 = (uint)*(byte *)(**(int **)(iRam019086a0 + 0x1908420) + 0xb8);
        if (((uVar2 <= *(byte *)(*(int *)param_2 + 0xb8)) &&
            (*(int *)(*(int *)(*(int *)param_2 + 100) + uVar2 * 4 + -4) ==
             **(int **)(iRam019086a0 + 0x1908420))) && (*(int *)(param_2 + 0x34) == piStack_3c[6]))
        {
          iVar13 = func_0x0177d630(param_1,0);
          if (iVar13 == 0x67) {
            return 0;
          }
          iVar13 = *(int *)(param_3 + 0x68);
          if (iVar13 == 0) {
            func_0x0165b6e0();
          }
          iVar13 = *(int *)(iVar13 + 0x44);
          if (iVar13 == 0) {
            func_0x0165b6e0();
          }
          fVar21 = *(float *)(iVar13 + 0x28);
          iVar13 = func_0x018da050(param_2,0);
          if (iVar13 == 0) {
            func_0x0165b6e0();
          }
          fVar22 = (float)VectorSignedToFloat(*(undefined4 *)(iVar13 + 0x18),
                                              (byte)(in_fpscr >> 0x16) & 3);
          pcVar8 = (char *)(iRam019086a4 + 0x19084c4);
          if (*pcVar8 == '\0') {
            func_0x0165b424(*(undefined4 *)(iRam019086a8 + 0x19084d8));
            *pcVar8 = '\x01';
          }
          fVar19 = ABS(fVar21);
          fVar20 = ABS(fVar22);
          if (ABS(fVar22) < fVar19) {
            fVar20 = fVar19;
          }
          fVar19 = **(float **)(**(int **)(iRam019086ac + 0x1908500) + 0x5c) * 8.0;
          if (fVar19 < fVar20 * fRam01908660) {
            fVar19 = fVar20 * fRam01908660;
          }
          return (uint)(fVar19 <= ABS(fVar22 - fVar21));
        }
        goto LAB_01908330;
      }
LAB_01908540:
      iVar3 = *(int *)(param_3 + 0x68);
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = *(int *)(iVar3 + 0x44);
      uVar15 = *(undefined4 *)(iVar13 + 0x44);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar3 = func_0x018940c0(iVar7,uVar15,0);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = *(int *)(param_3 + 0x68);
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      uVar2 = *(uint *)(iVar3 + 0x44);
      if (uVar2 == 0) {
        func_0x0165b6e0();
      }
      cVar1 = *(char *)(uVar2 + 0x19);
      goto joined_r0x019085a4;
    }
LAB_01908328:
    if (param_2 == (code *)0x0) goto LAB_01908540;
LAB_01908330:
    iVar11 = **(int **)(iRam019086b8 + 0x190833c);
    iVar3 = *(int *)param_2;
    uVar16 = (uint)*(byte *)(iVar11 + 0xb8);
    uVar5 = (uint)*(byte *)(iVar3 + 0xb8);
    if (((uVar5 < uVar16) || (param_2 = (code *)0x0, piStack_3c == (int *)0x0)) ||
       (param_2 = (code *)(uVar16 - 1), *(int *)(*(int *)(iVar3 + 100) + (int)param_2 * 4) != iVar11
       )) {
LAB_01908350:
      iVar7 = *piVar9;
      uVar2 = (uint)*(byte *)(iVar7 + 0xb8);
      if ((uVar2 <= uVar5) &&
         (param_2 = *(code **)(iVar3 + 100), *(int *)(param_2 + uVar2 * 4 + -4) == iVar7)) {
        return 0;
      }
      uVar2 = (uint)*(byte *)(**(int **)(iRam019086bc + 0x1908380) + 0xb8);
      if ((uVar2 <= uVar5) &&
         (*(int *)(*(int *)(iVar3 + 100) + uVar2 * 4 + -4) == **(int **)(iRam019086bc + 0x1908380)))
      {
        return 0;
      }
      goto LAB_01908540;
    }
    iVar7 = *piStack_3c;
    uVar2 = (uint)*(byte *)(iVar7 + 0xb8);
    if ((uVar2 < uVar16) || (*(int *)(*(int *)(iVar7 + 100) + (int)param_2 * 4) != iVar11))
    goto LAB_01908350;
    param_2 = *(code **)(iVar7 + 0x100);
    iVar3 = (*param_2)(piStack_3c,iVar13,*(undefined4 *)(param_3 + 0x68),
                       *(undefined4 *)(iVar7 + 0x104));
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = *piVar9;
    iVar7 = **(int **)(iVar7 + 0x2c);
    uVar2 = (uint)*(byte *)(iVar3 + 0xb8);
    if ((*(byte *)(iVar7 + 0xb8) < uVar2) ||
       (*(int *)(*(int *)(iVar7 + 100) + uVar2 * 4 + -4) != iVar3)) goto LAB_019081dc;
    iVar3 = *(int *)(param_3 + 0x68);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar3 = *(int *)(iVar3 + 0x80);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    param_2 = *(code **)(iVar13 + 0x2c);
    iVar7 = *(int *)(iVar3 + 0xc);
    if (param_2 == (code *)0x0) {
      func_0x0165b6e0();
    }
    if (iVar7 != *(int *)(param_2 + 0x18)) {
      return 0;
    }
    iVar7 = *(int *)(iVar13 + 0x2c);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    if (iVar3 != *(int *)(iVar7 + 0x1c)) {
      return 0;
    }
    iVar3 = *(int *)(param_3 + 0x68);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = *(uint *)(iVar3 + 0x44);
    if (uVar2 == 0) {
      func_0x0165b6e0();
    }
    cVar1 = *(char *)(uVar2 + 0x19);
    uVar4 = *(undefined4 *)(iRam01908694 + 0x19082e8);
joined_r0x019085a4:
    if (cVar1 != '\0') {
      return 0;
    }
  }
  uVar15 = 0x19085bc;
SUB_019086c0:
  iVar3 = (int)((ulonglong)uVar23 >> 0x20);
  uStack_50 = uVar2;
  pcStack_4c = (code *)iVar7;
  iStack_48 = iVar13;
  uStack_44 = uVar15;
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar13 = *(int *)(iVar3 + 0x68);
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar13 + 0x2c);
  iVar13 = *(int *)((int)uVar23 + 0xb0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  uVar15 = *(undefined4 *)(iVar3 + 0x18);
  uVar10 = *(undefined4 *)(iVar3 + 0x1c);
  if (iVar13 == 0) {
    func_0x0165b6e0();
  }
  uStack_58 = uStack_50;
  uStack_50 = iStack_48;
  iStack_54 = (int)pcStack_4c;
  pcVar8 = (char *)(_UNK_01925a84 + 0x19258b0);
  pcStack_4c = param_2;
  iStack_48 = uVar4;
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925a88 + 0x19258c4),uVar15,uVar10,0);
    func_0x0165b424(*(undefined4 *)(_UNK_01925a8c + 0x19258d0));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a90 + 0x19258dc));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a94 + 0x19258e8));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a98 + 0x19258f4));
    *pcVar8 = '\x01';
  }
  uStack_5c = 0;
  iVar3 = func_0x01923230(iVar13);
  if (iVar3 != 0) {
    iVar13 = func_0x01923230(iVar13);
    if (iVar13 == 0) {
      func_0x0165b6e0();
    }
    iVar13 = func_0x01923588(iVar13,uVar15,&uStack_5c);
    uVar4 = uStack_5c;
    if (iVar13 != 0) {
      if (*(int *)(**(int **)(_UNK_01925aa8 + 0x1925950) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      uVar2 = (*(code *)&UNK_0571ebe0)(uVar4,0,0);
      return uVar2;
    }
  }
  puVar14 = *(undefined4 **)(_UNK_01925a9c + 0x19259f8);
  uStack_60 = uVar15;
  uVar4 = func_0x0165b5ac(*puVar14,&uStack_60);
  uStack_64 = uVar10;
  uVar15 = func_0x0165b5ac(*puVar14,&uStack_64);
  uVar4 = func_0x017282d4(**(undefined4 **)(_UNK_01925aa0 + 0x1925a30),uVar4,uVar15,0);
  if (*(int *)(**(int **)(_UNK_01925aa4 + 0x1925a44) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018b45f0(uVar4,0);
  return 0;
}


/* BoardController.GetMergedItemData VA=0x18F86C0 | public BoardItemData GetMergedItemData(ItemController candidateItem) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardController_GetMergedItemData_18F86C0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iStack_24;
  undefined4 uStack_20;
  int aiStack_1c [3];
  
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(param_2 + 0x68);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar6 = *(int *)(iVar4 + 0x2c);
  iVar4 = *(int *)(param_1 + 0xb0);
  if (iVar6 == 0) {
    func_0x0165b6e0();
  }
  uVar5 = *(undefined4 *)(iVar6 + 0x18);
  iVar6 = *(int *)(iVar6 + 0x1c);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  pcVar8 = (char *)(_UNK_01925a84 + 0x19258b0);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925a88 + 0x19258c4),uVar5,iVar6,0);
    func_0x0165b424(*(undefined4 *)(_UNK_01925a8c + 0x19258d0));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a90 + 0x19258dc));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a94 + 0x19258e8));
    func_0x0165b424(*(undefined4 *)(_UNK_01925a98 + 0x19258f4));
    *pcVar8 = '\x01';
  }
  aiStack_1c[0] = 0;
  iVar1 = func_0x01923230(iVar4);
  if (iVar1 != 0) {
    iVar1 = func_0x01923230(iVar4);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = func_0x01923588(iVar1,uVar5,aiStack_1c);
    iVar1 = aiStack_1c[0];
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01925aa8 + 0x1925950) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar2 = func_0x026f7720(iVar1,0,0);
      iVar1 = aiStack_1c[0];
      if (iVar2 != 0) {
        if (aiStack_1c[0] == 0) {
          func_0x0165b6e0();
        }
        iVar2 = aiStack_1c[0];
        if (*(int *)(iVar1 + 0x14) != 0) {
          if (aiStack_1c[0] == 0) {
            func_0x0165b6e0();
          }
          iVar1 = *(int *)(iVar2 + 0x14);
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          if (iVar6 < *(int *)(iVar1 + 0xc)) {
            uVar5 = func_0x019232c0(iVar4,uVar5,iVar6 + 1,0,0);
            return uVar5;
          }
        }
      }
      iVar4 = aiStack_1c[0];
      if (aiStack_1c[0] == 0) {
        func_0x0165b6e0();
      }
      return *(undefined4 *)(iVar4 + 0x18);
    }
  }
  puVar7 = *(undefined4 **)(_UNK_01925a9c + 0x19259f8);
  uStack_20 = uVar5;
  uVar5 = func_0x0165b5ac(*puVar7,&uStack_20);
  iStack_24 = iVar6;
  uVar3 = func_0x0165b5ac(*puVar7,&iStack_24);
  uVar5 = func_0x017282d4(**(undefined4 **)(_UNK_01925aa0 + 0x1925a30),uVar5,uVar3,0);
  if (*(int *)(**(int **)(_UNK_01925aa4 + 0x1925a44) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018b45f0(uVar5,0);
  return 0;
}


