/* Ghidra 12.1.2 native pseudocode; RVA 0x6696DD4; Merger.Game.Views.BoardView.MoveItemBackToOwnContainer; status ok */


/* WARNING: Possible PIC construction at 0x0679708c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067971a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06797648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067971a8) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x06797090) */
/* WARNING: Removing unreachable block (ram,0x067970a0) */
/* WARNING: Removing unreachable block (ram,0x067970a8) */
/* WARNING: Removing unreachable block (ram,0x067970d0) */
/* WARNING: Removing unreachable block (ram,0x067970b4) */
/* WARNING: Removing unreachable block (ram,0x067970c0) */
/* WARNING: Removing unreachable block (ram,0x067970e0) */
/* WARNING: Removing unreachable block (ram,0x0679764c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Merger_Game_Views_BoardView__MoveItemBackToOwnContainer
                 (long param_1,undefined8 param_2,long *param_3,int **param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code *UNRECOVERED_JUMPTABLE;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  undefined *puVar29;
  undefined *puVar30;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x26;
  int iVar31;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long alStack_2b0 [18];
  undefined1 auStack_220 [8];
  int *piStack_218;
  long alStack_210 [2];
  undefined1 auStack_200 [8];
  long alStack_1f8 [9];
  int *piStack_1b0;
  long lStack_1a8;
  uint uStack_19c;
  long lStack_198;
  undefined1 auStack_190 [8];
  ulong auStack_188 [11];
  int *piStack_130;
  long lStack_128;
  int iStack_11c;
  long lStack_118;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  long *plStack_88;
  
  if ((bRam0000000007e282d1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    func_0x03280a18(PTR_DAT_078094e8);
    bRam0000000007e282d1 = 1;
  }
  plVar13 = (long *)Merger_Game_Views_BoardView__GetItemView(param_1,param_2);
  if (*(long *)(param_1 + 0x128) != 0) {
    param_3 = *(long **)PTR_DAT_078094e8;
    uVar14 = func_0x047544b8(*(long *)(param_1 + 0x128),param_2);
    puVar30 = PTR_DAT_077c0858;
    if (plVar13 != (long *)0x0) {
      lVar21 = *plVar13;
      uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar25 != 0) {
        piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_077c0858) {
            puVar15 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_06796eb8;
          }
          uVar25 = uVar25 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar25 != 0);
      }
      param_3 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06796eb8:
      lVar21 = (*(code *)*puVar15)(plVar13,puVar15[1]);
      if (lVar21 != 0) {
        param_3 = (long *)0x0;
        param_4 = (int **)0x0;
        func_0x06feb6b4(lVar21,uVar14);
        lVar21 = *plVar13;
        uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar25 != 0) {
          piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)puVar30) {
              puVar15 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_06796f24;
            }
            uVar25 = uVar25 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar25 != 0);
        }
        param_3 = (long *)0x0;
        puVar15 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06796f24:
        lVar21 = (*(code *)*puVar15)(plVar13,puVar15[1]);
        unaff_x22 = 0x7e13000;
        if (cRam0000000007e136dc == '\0') {
          func_0x03280a18(PTR_DAT_077500e8);
          cRam0000000007e136dc = '\x01';
        }
        if (lVar21 != 0) {
          func_0x06fe97f4(**(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8))[1],lVar21,0);
          lVar21 = *plVar13;
          uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar30) {
                puVar15 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_06796fc4;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          param_3 = (long *)0x0;
          puVar15 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06796fc4:
          lVar21 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          unaff_x22 = 0x7e16000;
          if (cRam0000000007e16029 == '\0') {
            func_0x03280a18(PTR_DAT_0774fd60);
            cRam0000000007e16029 = '\x01';
          }
          puVar2 = PTR_DAT_07809140;
          if (lVar21 != 0) {
            lVar22 = *(long *)(*(long *)PTR_DAT_0774fd60 + 0xb8);
            func_0x06feb448(*(undefined4 *)(lVar22 + 0xc),*(undefined4 *)(lVar22 + 0x10),
                            *(undefined4 *)(lVar22 + 0x14),lVar21,0);
            lVar21 = *plVar13;
            uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar30) {
                  puVar15 = (undefined8 *)(lVar21 + (long)(*piVar27 + 8) * 0x10 + 0x138);
                  goto SUB_03e90108;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            param_3 = (long *)0x8;
            puVar15 = (undefined8 *)func_0x03256b10(plVar13);
SUB_03e90108:
            puVar29 = PTR_DAT_07809138;
            lVar21 = (*(code *)*puVar15)(plVar13,puVar15[1]);
            lVar22 = *(long *)puVar2;
            if ((*(long *)(lVar22 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar22 + 0x38) == 0)) {
              func_0x03256878(lVar22);
            }
            if (lVar21 != 0) {
              puVar9 = (undefined *)func_0x03dc9518(lVar21,**(undefined8 **)(lVar22 + 0x38));
              puVar2 = PTR_DAT_0774e4e0;
              if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
                func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
              }
              plVar10 = (long *)func_0x06fdeb74(puVar9,0,0);
              if (((ulong)plVar10 & 1) == 0) {
                return plVar10;
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              puVar4 = &stack0xffffffffffffffd0;
              uVar14 = 0x6797090;
SUB_06fe41c8:
              puVar2 = PTR_DAT_0774e4e0;
              *(undefined8 *)(puVar4 + -0x20) = uVar14;
              *(undefined **)(puVar4 + -0x18) = puVar30;
              *(undefined **)(puVar4 + -0x10) = puVar29;
              *(long **)(puVar4 + -8) = plVar13;
              if ((bRam0000000007e2fdd8 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0774e4e0,0);
                bRam0000000007e2fdd8 = 1;
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              if (pcRam0000000007e2fdd0 == (code *)0x0) {
                pcRam0000000007e2fdd0 = (code *)func_0x032809dc(&UNK_017a679f);
              }
                    /* WARNING: Could not recover jumptable at 0x06fe423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar13 = (long *)(*pcRam0000000007e2fdd0)(0,puVar9);
              return plVar13;
            }
            auVar32 = func_0x03280cac();
            lVar21 = auVar32._8_8_;
            plVar13 = auVar32._0_8_;
            puVar4 = &stack0xffffffffffffff80;
            if ((*(long *)(lVar21 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar21 + 0x38) == 0)) {
              func_0x03256878(lVar21);
            }
            plStack_88 = plVar13;
            if ((plVar13 != (long *)0x0) &&
               (plVar13 = (long *)func_0x03dc9f70(plVar13,**(undefined8 **)(lVar21 + 0x38)),
               plVar13 != (long *)0x0)) {
              if ((int)plVar13[3] < 1) {
                return plVar13;
              }
              puVar30 = (undefined *)0x0;
              if ((plVar13[3] & 0xffffffffU) != 0) {
                puVar9 = (undefined *)plVar13[4];
                if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar14 = 0x3e90254;
                puVar29 = puVar9;
                goto SUB_06fe41c8;
              }
              func_0x03280cb4();
              plStack_88 = plVar13;
            }
            auVar32 = func_0x03280cac();
            lVar22 = auVar32._8_8_;
            plVar13 = auVar32._0_8_;
            lStack_a0 = 0x3e9027c;
            puStack_98 = puVar30;
            pcStack_90 = (code *)lVar21;
            if (*(long *)(lVar22 + 0x38) == 0) {
              func_0x03256878(lVar22);
            }
            if (plVar13 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar21 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = func_0x0325681c(lVar21);
              }
              lVar17 = *plVar13;
              uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar25 != 0) {
                piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar21) {
                    puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_03e90304;
                  }
                  uVar25 = uVar25 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar25 != 0);
              }
              param_3 = (long *)0x0;
              puVar15 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03e90304:
              iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
              if (iVar5 != 0) {
                lVar21 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar17 = *plVar13;
                uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar25 != 0) {
                  piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar21) {
                      puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e90378;
                    }
                    uVar25 = uVar25 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar21,0);
LAB_03e90378:
                iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
                lVar21 = **(long **)(lVar22 + 0x38);
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar17 = *plVar13;
                uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar25 != 0) {
                  piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar21) {
                      puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e903f0;
                    }
                    uVar25 = uVar25 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar21,0);
LAB_03e903f0:
                uVar25 = (*(code *)*puVar15)(plVar13,iVar5 + -1,puVar15[1]);
                lVar21 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar17 = *plVar13;
                uVar23 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar23 != 0) {
                  piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar21) {
                      puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e90468;
                    }
                    uVar23 = uVar23 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar23 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar21,0);
LAB_03e90468:
                iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
                lVar21 = **(long **)(lVar22 + 0x38);
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar22 = *plVar13;
                uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar23 != 0) {
                  piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar21) {
                      puVar15 = (undefined8 *)(lVar22 + (long)(*piVar27 + 4) * 0x10 + 0x138);
                      goto LAB_03e904e0;
                    }
                    uVar23 = uVar23 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar23 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar21,4);
LAB_03e904e0:
                (*(code *)*puVar15)(plVar13,iVar5 + -1,puVar15[1]);
                return (long *)(uVar25 & 0xffffffff);
              }
            }
            func_0x03280a2c(PTR_DAT_0774efe0);
            uVar14 = func_0x03280ca0();
            func_0x05796364(uVar14,0);
            auVar32 = func_0x03280b7c(uVar14,lVar22);
            lVar21 = auVar32._8_8_;
            plVar13 = auVar32._0_8_;
            uStack_b8 = puVar30;
            uStack_b0 = lVar22;
            uStack_a8 = uVar14;
            if (*(long *)(lVar21 + 0x38) == 0) {
              func_0x03256878(lVar21);
            }
            if (plVar13 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar22 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              lVar17 = *plVar13;
              uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar25 != 0) {
                piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar22) {
                    puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_03e905b4;
                  }
                  uVar25 = uVar25 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar25 != 0);
              }
              param_3 = (long *)0x0;
              puVar15 = (undefined8 *)func_0x03256b10(plVar13);
LAB_03e905b4:
              iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
              if (iVar5 != 0) {
                lVar22 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
                if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                  lVar22 = func_0x0325681c(lVar22);
                }
                lVar17 = *plVar13;
                uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar25 != 0) {
                  piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar22) {
                      puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e90628;
                    }
                    uVar25 = uVar25 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar22,0);
LAB_03e90628:
                iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
                lVar22 = **(long **)(lVar21 + 0x38);
                if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                  lVar22 = func_0x0325681c(lVar22);
                }
                lVar17 = *plVar13;
                uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar25 != 0) {
                  piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar22) {
                      puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e906a0;
                    }
                    uVar25 = uVar25 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar22,0);
LAB_03e906a0:
                plVar10 = (long *)(*(code *)*puVar15)(plVar13,iVar5 + -1,puVar15[1]);
                lVar22 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
                if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                  lVar22 = func_0x0325681c(lVar22);
                }
                lVar17 = *plVar13;
                uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar25 != 0) {
                  piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar22) {
                      puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e90718;
                    }
                    uVar25 = uVar25 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar22,0);
LAB_03e90718:
                iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
                lVar21 = **(long **)(lVar21 + 0x38);
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar22 = *plVar13;
                uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar25 != 0) {
                  piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar21) {
                      puVar15 = (undefined8 *)(lVar22 + (long)(*piVar27 + 4) * 0x10 + 0x138);
                      goto LAB_03e90790;
                    }
                    uVar25 = uVar25 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar21,4);
LAB_03e90790:
                (*(code *)*puVar15)(plVar13,iVar5 + -1,puVar15[1]);
                return plVar10;
              }
            }
            func_0x03280a2c(PTR_DAT_0774efe0);
            uVar14 = func_0x03280ca0();
            func_0x05796364(uVar14,0);
            auVar32 = func_0x03280b7c(uVar14,lVar21);
            uVar14 = auVar32._8_8_;
            plVar13 = auVar32._0_8_;
            lVar21 = tpidr_el0;
            lStack_118 = *(long *)(lVar21 + 0x28);
            lVar22 = param_3[7];
            if (lVar22 == 0) {
              func_0x03256878(param_3);
              lVar22 = param_3[7];
            }
            uVar25 = (ulong)*(uint *)(*(long *)(lVar22 + 0x20) + 0xfc);
            lVar17 = -(uVar25 + 0xf & 0x1fffffff0);
            lVar20 = (long)&piStack_130 + lVar17;
            if (plVar13 == (long *)0x0) {
              func_0x03280cac();
LAB_03e90ae0:
              func_0x03280a2c(PTR_DAT_0774efe0);
              uVar14 = func_0x03280ca0();
              func_0x05796364(uVar14,0);
              func_0x03280b7c(uVar14,param_3);
            }
            else {
              lVar22 = *(long *)(lVar22 + 8);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              lVar18 = *plVar13;
              uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar23 != 0) {
                piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar22) {
                    puVar15 = (undefined8 *)(lVar18 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_03e908a4;
                  }
                  uVar23 = uVar23 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar23 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar22,0);
LAB_03e908a4:
              iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
              if (iVar5 == 0) goto LAB_03e90ae0;
              lVar22 = *(long *)(param_3[7] + 8);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              lVar18 = *plVar13;
              uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar23 != 0) {
                piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar22) {
                    puVar15 = (undefined8 *)(lVar18 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_03e90918;
                  }
                  uVar23 = uVar23 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar23 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar22,0);
LAB_03e90918:
              uVar6 = (*(code *)*puVar15)(plVar13,puVar15[1]);
              unaff_x24 = (ulong)uVar6;
              lVar22 = *(long *)param_3[7];
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              iStack_11c = uVar6 - 1;
              lVar18 = *plVar13;
              uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar23 != 0) {
                piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar22) {
                    lVar22 = lVar18 + (long)*piVar27 * 0x10 + 0x138;
                    goto LAB_03e90994;
                  }
                  uVar23 = uVar23 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar23 != 0);
              }
              lVar22 = func_0x03256b10(plVar13,lVar22,0);
LAB_03e90994:
              piStack_130 = &iStack_11c;
              lVar22 = *(long *)(lVar22 + 8);
              param_4 = &piStack_130;
              lStack_128 = lVar20;
              (**(code **)(lVar22 + 0x10))
                        (*(undefined8 *)(lVar22 + 8),lVar22,plVar13,param_4,lVar20);
              lVar22 = *(long *)(param_3[7] + 8);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              lVar18 = *plVar13;
              uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar23 != 0) {
                piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar22) {
                    puVar15 = (undefined8 *)(lVar18 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_03e90a18;
                  }
                  uVar23 = uVar23 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar23 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar22,0);
LAB_03e90a18:
              uVar6 = (*(code *)*puVar15)(plVar13,puVar15[1]);
              plVar10 = param_3 + 7;
              param_3 = (long *)(ulong)uVar6;
              lVar22 = *(long *)*plVar10;
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              lVar18 = *plVar13;
              uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar23 != 0) {
                piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar22) {
                    puVar15 = (undefined8 *)(lVar18 + (long)(*piVar27 + 4) * 0x10 + 0x138);
                    goto LAB_03e90a90;
                  }
                  uVar23 = uVar23 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar23 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar22,4);
LAB_03e90a90:
              (*(code *)*puVar15)(plVar13,uVar6 - 1,puVar15[1]);
              plVar10 = (long *)func_0x072ce970(uVar14,lVar20,uVar25);
              if (*(long *)(lVar21 + 0x28) == lStack_118) {
                return plVar10;
              }
            }
            auVar32 = func_0x072ce990();
            lVar22 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            *(undefined8 *)((long)auStack_188 + lVar17 + 0x38) = 0x3e90b0c;
            *(long **)((long)auStack_188 + lVar17 + 0x48) = plVar13;
            *(undefined8 *)((long)auStack_188 + lVar17 + 0x50) = uVar14;
            if (*(long *)(lVar22 + 0x38) == 0) {
              func_0x03256878(lVar22);
            }
            if (plVar10 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar18 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = func_0x0325681c(lVar18);
              }
              lVar19 = *plVar10;
              uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar23 != 0) {
                piVar27 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar18) {
                    puVar15 = (undefined8 *)(lVar19 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_03e90b94;
                  }
                  uVar23 = uVar23 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar23 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar10,lVar18,0);
LAB_03e90b94:
              iVar5 = (*(code *)*puVar15)(plVar10,puVar15[1]);
              if (iVar5 != 0) {
                lVar21 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
                if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                  lVar21 = func_0x0325681c(lVar21);
                }
                lVar17 = *plVar10;
                uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar25 != 0) {
                  piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar21) {
                      puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e90c08;
                    }
                    uVar25 = uVar25 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar25 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar10,lVar21,0);
LAB_03e90c08:
                iVar5 = (*(code *)*puVar15)(plVar10,puVar15[1]);
                if (iVar5 == 1) {
                  lVar21 = **(long **)(lVar22 + 0x38);
                  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                    lVar21 = func_0x0325681c(lVar21);
                  }
                  lVar22 = *plVar10;
                  uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  if (uVar25 != 0) {
                    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar21) {
                        puVar15 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_03e90cd4;
                      }
                      uVar25 = uVar25 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x03256b10(plVar10,lVar21,0);
LAB_03e90cd4:
                  UNRECOVERED_JUMPTABLE = (code *)*puVar15;
                  uVar14 = puVar15[1];
                  uVar7 = 0;
                }
                else {
                  lVar21 = (*(long **)(lVar22 + 0x38))[1];
                  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                    lVar21 = func_0x0325681c(lVar21);
                  }
                  lVar17 = *plVar10;
                  uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar25 != 0) {
                    piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar21) {
                        puVar15 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_03e90cf0;
                      }
                      uVar25 = uVar25 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x03256b10(plVar10,lVar21,0);
LAB_03e90cf0:
                  uVar7 = (*(code *)*puVar15)(plVar10,puVar15[1]);
                  uVar7 = func_0x06fd9864(0,uVar7,0);
                  lVar21 = **(long **)(lVar22 + 0x38);
                  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                    lVar21 = func_0x0325681c(lVar21);
                  }
                  lVar22 = *plVar10;
                  uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  if (uVar25 != 0) {
                    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar21) {
                        puVar15 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_03e90d74;
                      }
                      uVar25 = uVar25 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x03256b10(plVar10,lVar21,0);
LAB_03e90d74:
                  UNRECOVERED_JUMPTABLE = (code *)*puVar15;
                  uVar14 = puVar15[1];
                }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar13 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar10,uVar7,uVar14);
                return plVar13;
              }
            }
            func_0x03280a2c(PTR_DAT_07756308);
            uVar14 = func_0x03280ca0();
            uVar11 = func_0x03280a2c(PTR_DAT_0777b3b8);
            uVar23 = 0;
            func_0x05791bcc(uVar14,uVar11);
            auVar32 = func_0x03280b7c(uVar14,lVar22);
            uVar11 = auVar32._8_8_;
            plVar13 = auVar32._0_8_;
            *(undefined1 **)(auStack_190 + lVar17) = &stack0xfffffffffffffef0;
            *(undefined8 *)((long)auStack_188 + lVar17) = 0x3e90dcc;
            *(ulong *)((long)auStack_188 + lVar17 + 8) = unaff_x24;
            *(long **)((long)auStack_188 + lVar17 + 0x10) = param_3;
            *(long *)((long)auStack_188 + lVar17 + 0x18) = lVar20;
            *(ulong *)((long)auStack_188 + lVar17 + 0x20) = uVar25;
            *(long *)((long)auStack_188 + lVar17 + 0x28) = lVar22;
            *(undefined8 *)((long)auStack_188 + lVar17 + 0x30) = uVar14;
            lVar22 = tpidr_el0;
            *(undefined8 *)((long)&lStack_198 + lVar17) = *(undefined8 *)(lVar22 + 0x28);
            lVar20 = *(long *)(uVar23 + 0x38);
            if (lVar20 == 0) {
              func_0x03256878(uVar23);
              lVar20 = *(long *)(uVar23 + 0x38);
            }
            uVar25 = (ulong)*(uint *)(*(long *)(lVar20 + 0x20) + 0xfc);
            lVar18 = (long)&piStack_1b0 + (lVar17 - (uVar25 + 0xf & 0x1fffffff0));
            if (plVar13 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar20 = *(long *)(lVar20 + 8);
              if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                lVar20 = func_0x0325681c(lVar20);
              }
              lVar19 = *plVar13;
              uVar24 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar24 != 0) {
                piVar27 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar20) {
                    puVar15 = (undefined8 *)(lVar19 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_03e90e90;
                  }
                  uVar24 = uVar24 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar24 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar20,0);
LAB_03e90e90:
              iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
              if (iVar5 != 0) {
                lVar20 = *(long *)(*(long *)(uVar23 + 0x38) + 8);
                if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                  lVar20 = func_0x0325681c(lVar20);
                }
                lVar19 = *plVar13;
                uVar24 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar24 != 0) {
                  piVar27 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar20) {
                      puVar15 = (undefined8 *)(lVar19 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_03e90f04;
                    }
                    uVar24 = uVar24 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar24 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar20,0);
LAB_03e90f04:
                iVar5 = (*(code *)*puVar15)(plVar13,puVar15[1]);
                if (iVar5 == 1) {
                  lVar20 = **(long **)(uVar23 + 0x38);
                  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                    lVar20 = func_0x0325681c(lVar20);
                  }
                  *(undefined4 *)((long)&uStack_19c + lVar17) = 0;
                  lVar19 = *plVar13;
                  uVar24 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar24 != 0) {
                    piVar27 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar20) goto LAB_03e91044;
                      uVar24 = uVar24 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar24 != 0);
                  }
                }
                else {
                  lVar20 = (*(long **)(uVar23 + 0x38))[1];
                  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                    lVar20 = func_0x0325681c(lVar20);
                  }
                  lVar19 = *plVar13;
                  uVar24 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar24 != 0) {
                    piVar27 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar20) {
                        puVar15 = (undefined8 *)(lVar19 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_03e90fc8;
                      }
                      uVar24 = uVar24 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar24 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar20,0);
LAB_03e90fc8:
                  uVar7 = (*(code *)*puVar15)(plVar13,puVar15[1]);
                  uVar6 = func_0x06fd9864(0,uVar7,0);
                  puVar15 = (undefined8 *)(uVar23 + 0x38);
                  uVar23 = (ulong)uVar6;
                  lVar20 = *(long *)*puVar15;
                  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                    lVar20 = func_0x0325681c(lVar20);
                  }
                  *(uint *)((long)&uStack_19c + lVar17) = uVar6;
                  lVar19 = *plVar13;
                  uVar24 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar24 != 0) {
                    piVar27 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar20) goto LAB_03e91044;
                      uVar24 = uVar24 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar24 != 0);
                  }
                }
                lVar20 = func_0x03256b10(plVar13,lVar20,0);
                goto LAB_03e91050;
              }
            }
            func_0x03280a2c(PTR_DAT_07756308);
            uVar11 = func_0x03280ca0();
            uVar14 = func_0x03280a2c(PTR_DAT_0777b3b8);
            uVar24 = 0;
            func_0x05791bcc(uVar11,uVar14);
            func_0x03280b7c(uVar11,uVar23);
            goto LAB_03e910e8;
          }
        }
      }
    }
  }
  auVar32 = func_0x03280cac();
  uVar14 = auVar32._8_8_;
  if ((bRam0000000007e282d3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078095b0);
    bRam0000000007e282d3 = 1;
  }
  lVar21 = *(long *)(auVar32._0_8_ + 0x108);
  if (lVar21 == 0) {
    auVar32 = func_0x03280cac();
    uVar14 = Merger_Game_Views_BoardView__GetItemAtPosition();
    func_0x067971c4(_UNK_017be88c,auVar32._0_8_,auVar32._8_8_,param_3,7);
    plVar13 = (long *)0x0;
    uVar11 = 0x67971a8;
    puVar3 = &stack0xffffffffffffff80;
    do {
      uVar16 = auVar32._8_8_;
      lVar21 = auVar32._0_8_;
      *(undefined8 *)(puVar3 + -0x30) = uVar11;
      *(undefined8 *)(puVar3 + -0x20) = uVar14;
      *(undefined1 (*) [16])(puVar3 + -0x18) = auVar32;
      *(long **)(puVar3 + -8) = param_3;
      param_3 = plVar13;
      if ((bRam0000000007e282d4 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c0858);
        func_0x03280a18(PTR_DAT_07809280);
        func_0x03280a18(PTR_DAT_07809530);
        bRam0000000007e282d4 = 1;
      }
      puVar30 = (undefined *)0x7e28000;
      if (*(long *)(lVar21 + 0x130) != 0) {
        param_3 = plVar13;
        func_0x0475450c(*(long *)(lVar21 + 0x130),uVar16,plVar13,*(undefined8 *)PTR_DAT_07809530);
        puVar2 = PTR_DAT_077c0858;
        if (*(long *)(lVar21 + 0x120) != 0) {
          param_3 = *(long **)PTR_DAT_07809280;
          lVar22 = func_0x047544b8(*(long *)(lVar21 + 0x120),uVar16);
          if (plVar13 == (long *)0x0) {
            uVar14 = 0;
          }
          else {
            lVar21 = *plVar13;
            uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar2) {
                  puVar15 = (undefined8 *)(lVar21 + (long)(*piVar27 + 3) * 0x10 + 0x138);
                  goto LAB_0679752c;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            param_3 = (long *)0x3;
            puVar15 = (undefined8 *)func_0x03256b10(plVar13);
LAB_0679752c:
            uVar14 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          }
          lVar21 = 0;
          puVar30 = puVar2;
          if (lVar22 != 0) goto code_r0x06797540;
        }
      }
      auVar32 = func_0x03280cac();
      uVar11 = auVar32._0_8_;
      *(ulong *)(puVar3 + -0x70) = CONCAT44(unaff_00005104,unaff_s8);
      *(undefined8 *)(puVar3 + -0x60) = 0x67975d0;
      *(long **)(puVar3 + -0x58) = unaff_x23;
      *(undefined **)(puVar3 + -0x50) = puVar30;
      *(long *)(puVar3 + -0x48) = lVar21;
      *(long **)(puVar3 + -0x40) = plVar13;
      *(undefined8 *)(puVar3 + -0x38) = uVar16;
      uVar14 = Merger_Game_Views_BoardView__GetItemAtPosition();
      plVar13 = (long *)Merger_Game_Views_BoardView__GetItemAtPosition(uVar11,param_3);
      unaff_s8 = _UNK_017be88c;
      unaff_00005104 = 0;
      func_0x067971c4(_UNK_017be88c,uVar11,auVar32._8_8_,param_3,7);
      func_0x067971c4(unaff_s8,uVar11,param_3,auVar32._8_8_,7);
      uVar11 = 0x679764c;
      puVar3 = puVar3 + -0x70;
      unaff_x23 = plVar13;
    } while( true );
  }
  lVar22 = *(long *)PTR_DAT_078095b0;
  pcStack_90 = Merger_Game_Views_BoardView__IsPlayingOutAnimation;
  if (*(long *)(lVar21 + 0x10) == 0) {
    return (long *)0x0;
  }
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0xb0);
  uVar6 = func_0x053b2c6c();
  iVar5 = (int)uVar11;
  lVar17 = *(long *)(lVar21 + 0x10);
  if (lVar17 != 0) {
    uVar8 = *(uint *)(lVar17 + 0x18);
    unaff_x22 = (ulong)uVar6;
    iVar31 = 0;
    if (uVar8 != 0) {
      iVar31 = (int)uVar6 / (int)uVar8;
    }
    uVar1 = uVar6 - iVar31 * uVar8;
    if (uVar1 < uVar8) {
      uVar8 = *(int *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) - 1;
      if ((int)uVar8 < 0) {
        return (long *)0x0;
      }
      lVar17 = *(long *)(lVar21 + 0x18);
      if (lVar17 == 0) goto LAB_053af034;
      uVar16 = *(undefined8 *)(lVar17 + 0x18);
      iVar31 = 0;
      while (iVar5 = (int)uVar11, uVar8 < (uint)uVar16) {
        if (*(uint *)(lVar17 + (ulong)uVar8 * 0x10 + 0x20) == uVar6) {
          plVar13 = *(long **)(lVar21 + 0x30);
          if (plVar13 == (long *)0x0) goto LAB_053af034;
          lVar20 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
          uVar16 = *(undefined8 *)(lVar17 + (ulong)uVar8 * 0x10 + 0x28);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = func_0x0325681c(lVar20);
          }
          lVar18 = *plVar13;
          uVar25 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar20) {
                puVar15 = (undefined8 *)(lVar18 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_053aef90;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar20,0);
LAB_053aef90:
          param_4 = (int **)puVar15[1];
          uVar11 = uVar14;
          uVar25 = (*(code *)*puVar15)(plVar13,uVar16);
          if ((uVar25 & 1) != 0) {
            return (long *)0x1;
          }
          uVar16 = *(undefined8 *)(lVar17 + 0x18);
        }
        if ((int)(uint)uVar16 <= iVar31) goto LAB_053aeff8;
        if ((uint)uVar16 <= uVar8) break;
        uVar8 = *(uint *)(lVar17 + (ulong)uVar8 * 0x10 + 0x24);
        iVar31 = iVar31 + 1;
        if ((int)uVar8 < 0) {
          return (long *)0x0;
        }
      }
    }
    func_0x03280cb4();
LAB_053aeff8:
    func_0x03280a2c(PTR_DAT_0774efe0);
    lVar21 = func_0x03280ca0();
    uVar11 = func_0x03280a2c(PTR_DAT_077825d8);
    iVar5 = 0;
    func_0x057963c0(lVar21,uVar11);
    func_0x03280b7c(lVar21,lVar22);
  }
LAB_053af034:
  auVar32 = func_0x03280cac();
  lVar17 = auVar32._8_8_;
  plVar13 = auVar32._0_8_;
  iVar31 = (int)plVar13[4];
  uVar11 = *(undefined8 *)(*(long *)(param_4[4] + 0x30) + 200);
  uStack_b0 = unaff_x22;
  uStack_a8 = uVar14;
  lStack_a0 = lVar21;
  puStack_98 = (undefined *)lVar22;
  if (lVar17 == 0) {
LAB_053b0f68:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar14 = func_0x03280ca0();
    uVar16 = func_0x03280a2c(PTR_DAT_077776b8);
    lVar21 = 0;
    func_0x056e7310(uVar14,uVar16);
  }
  else {
    if (iVar5 < 0) {
      uStack_b8 = (undefined *)CONCAT44(iVar5,(undefined4)uStack_b8);
      uVar14 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar21 = func_0x03280b94(uVar14,(long)&uStack_b8 + 4);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar14 = func_0x03280ca0();
      puVar30 = PTR_DAT_077776c0;
    }
    else {
      if (-1 < iVar31) {
        if ((iVar5 <= *(int *)(lVar17 + 0x18)) && (iVar31 <= *(int *)(lVar17 + 0x18) - iVar5)) {
          if ((0 < iVar31) && (iVar28 = *(int *)((long)plVar13 + 0x24), 0 < iVar28)) {
            lVar21 = 0;
            uVar25 = 0;
            iVar26 = 0;
            do {
              lVar22 = plVar13[3];
              if (lVar22 == 0) {
LAB_053b0f64:
                func_0x03280cac();
                goto LAB_053b0f68;
              }
              if (*(uint *)(lVar22 + 0x18) <= uVar25) {
LAB_053b0f60:
                func_0x03280cb4();
                goto LAB_053b0f64;
              }
              if (-1 < *(int *)(lVar22 + lVar21 + 0x20)) {
                uVar6 = iVar26 + iVar5;
                if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_053b0f60;
                iVar26 = iVar26 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20) =
                     *(undefined8 *)(lVar22 + lVar21 + 0x28);
                iVar28 = *(int *)((long)plVar13 + 0x24);
              }
              if (iVar31 <= iVar26) {
                return plVar13;
              }
              uVar25 = uVar25 + 1;
              lVar21 = lVar21 + 0x10;
            } while ((long)uVar25 < (long)iVar28);
          }
          return plVar13;
        }
        func_0x03280a2c(PTR_DAT_0774e6e8);
        uVar14 = func_0x03280ca0();
        uVar16 = func_0x03280a2c(PTR_DAT_0777b030);
        lVar21 = 0;
        func_0x056ede60(uVar14,uVar16);
        goto LAB_053b1088;
      }
      uStack_b8 = (undefined *)CONCAT44(uStack_b8._4_4_,iVar31);
      uVar14 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar21 = func_0x03280b94(uVar14,&uStack_b8);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar14 = func_0x03280ca0();
      puVar30 = PTR_DAT_077598c8;
    }
    uVar16 = func_0x03280a2c(puVar30);
    uVar12 = func_0x03280a2c(PTR_DAT_077825f0);
    func_0x056ebf98(uVar14,uVar16,lVar21,uVar12,0);
  }
LAB_053b1088:
  auVar32 = func_0x03280b7c(uVar14,uVar11);
  lVar17 = auVar32._8_8_;
  lVar22 = auVar32._0_8_;
  if (lVar17 == 0) {
LAB_053b1160:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar14 = func_0x03280ca0();
    uVar11 = func_0x03280a2c(PTR_DAT_07779588);
    func_0x056e7310(uVar14,uVar11,0);
    lVar21 = func_0x03280b7c(uVar14,lVar21);
    return *(long **)(lVar21 + 0x30);
  }
  if (*(int *)(lVar22 + 0x24) < 1) {
    uVar6 = 0;
  }
  else {
    lVar20 = 0;
    uVar25 = 0;
    uVar6 = 0;
    do {
      lVar18 = *(long *)(lVar22 + 0x18);
      if (lVar18 == 0) {
        func_0x03280cac();
LAB_053b115c:
        func_0x03280cb4();
        goto LAB_053b1160;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_053b115c;
      if (-1 < *(int *)(lVar18 + lVar20 + 0x20)) {
        uVar14 = *(undefined8 *)(lVar18 + lVar20 + 0x28);
        uVar23 = (**(code **)(lVar17 + 0x18))
                           (*(undefined8 *)(lVar17 + 0x40),uVar14,*(undefined8 *)(lVar17 + 0x28));
        if ((uVar23 & 1) != 0) {
          uVar8 = func_0x053af04c(lVar22,uVar14,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x148));
          uVar6 = uVar6 + (uVar8 & 1);
        }
      }
      uVar25 = uVar25 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((long)uVar25 < (long)*(int *)(lVar22 + 0x24));
  }
  return (long *)(ulong)uVar6;
code_r0x06797540:
  *(undefined8 *)(lVar22 + 0x28) = uVar14;
  plVar10 = (long *)func_0x032809c4((undefined8 *)(lVar22 + 0x28));
  if (plVar13 == (long *)0x0) {
    return plVar10;
  }
  lVar21 = *plVar13;
  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar25 != 0) {
    piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)puVar2) {
        puVar15 = (undefined8 *)(lVar21 + (long)(*piVar27 + 2) * 0x10 + 0x138);
        goto LAB_067975b0;
      }
      uVar25 = uVar25 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar25 != 0);
  }
  puVar15 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar2,2);
LAB_067975b0:
                    /* WARNING: Could not recover jumptable at 0x067975c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar13 = (long *)(*(code *)*puVar15)(plVar13,uVar16,puVar15[1]);
  return plVar13;
LAB_03e91044:
  lVar20 = lVar19 + (long)*piVar27 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_1b0 + lVar17) = (long)&uStack_19c + lVar17;
  *(long *)((long)&lStack_1a8 + lVar17) = lVar18;
  lVar20 = *(long *)(lVar20 + 8);
  param_4 = (int **)((long)&piStack_1b0 + lVar17);
  (**(code **)(lVar20 + 0x10))(*(undefined8 *)(lVar20 + 8),lVar20,plVar13,param_4,lVar18);
  uVar24 = uVar25;
  plVar10 = (long *)func_0x072ce970(uVar11,lVar18);
  if (*(long *)(lVar22 + 0x28) == *(long *)((long)&lStack_198 + lVar17)) {
    return plVar10;
  }
LAB_03e910e8:
  auVar32 = func_0x072ce990();
  plVar10 = auVar32._0_8_;
  *(undefined1 **)(lVar18 + -0x50) = auStack_190 + lVar17;
  *(undefined8 *)(lVar18 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar18 + -0x40) = unaff_x26;
  *(long *)(lVar18 + -0x38) = lVar21;
  *(long *)(lVar18 + -0x30) = lVar22;
  *(ulong *)(lVar18 + -0x28) = uVar23;
  *(long *)(lVar18 + -0x20) = lVar18;
  *(ulong *)(lVar18 + -0x18) = uVar25;
  *(long **)(lVar18 + -0x10) = plVar13;
  *(undefined8 *)(lVar18 + -8) = uVar11;
  lVar21 = tpidr_el0;
  *(undefined8 *)(lVar18 + -0x58) = *(undefined8 *)(lVar21 + 0x28);
  lVar22 = *(long *)(uVar24 + 0x38);
  if (lVar22 == 0) {
    func_0x03256878(uVar24);
    lVar22 = *(long *)(uVar24 + 0x38);
  }
  uVar23 = (ulong)*(uint *)(*(long *)(lVar22 + 0x18) + 0xfc);
  uVar25 = uVar23 + 0xf & 0x1fffffff0;
  lVar17 = (lVar18 + -0x70) - uVar25;
  lVar20 = lVar17 - uVar25;
  func_0x072ce9a0(lVar20,0,uVar23);
  if (plVar10 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar22 = *(long *)(lVar22 + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar19 = *plVar10;
    uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar19 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(plVar10,lVar22,0);
LAB_03e911d0:
    iVar5 = (*(code *)*puVar15)(plVar10,puVar15[1]);
    if (iVar5 == 0) {
      func_0x072ce9a0(lVar20,0,uVar23);
      func_0x072ce970(lVar17,lVar20,uVar23);
    }
    else {
      param_4 = (int **)(lVar18 + -0x68);
      puVar15 = *(undefined8 **)(*(long *)(uVar24 + 0x38) + 0x20);
      uVar14 = *puVar15;
      *(long **)(lVar18 + -0x68) = plVar10;
      *(long *)(lVar18 + -0x60) = lVar17;
      (*(code *)puVar15[2])(uVar14,puVar15,0,param_4,lVar17);
    }
    plVar13 = (long *)func_0x072ce970(auVar32._8_8_,lVar17,uVar23);
    if (*(long *)(lVar21 + 0x28) == *(long *)(lVar18 + -0x58)) {
      return plVar13;
    }
  }
  auVar33 = func_0x072ce990();
  lVar21 = auVar33._8_8_;
  *(undefined8 *)(lVar20 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar20 + -0x10) = uVar23;
  *(long *)(lVar20 + -8) = auVar32._8_8_;
  if ((*(long *)(lVar21 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar21 + 0x38) == 0)) {
    func_0x03256878(lVar21);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
  *(undefined8 *)(lVar20 + -0x30) = *(undefined8 *)(lVar20 + -0x20);
  *(ulong *)(lVar20 + -0x20) = uVar24;
  *(long *)(lVar20 + -0x18) = lVar17;
  *(undefined8 *)(lVar20 + -0x10) = *(undefined8 *)(lVar20 + -0x10);
  *(undefined8 *)(lVar20 + -8) = *(undefined8 *)(lVar20 + -8);
  if (*(long *)(lVar21 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (*(long *)(lVar21 + 0x38) == 0) {
      func_0x03256878(lVar21);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar33._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar22 = func_0x06fe3dd4(auVar33._0_8_,0);
  lVar17 = **(long **)(lVar21 + 0x38);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  if (lVar22 == 0) {
LAB_03e3cc18:
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)func_0x03280b90(lVar22,lVar17);
    if (plVar13 == (long *)0x0) {
      func_0x03281048(lVar22,lVar17);
      goto LAB_03e3cc18;
    }
  }
  uVar25 = func_0x06fe04ec(plVar13,0,0);
  if ((uVar25 & 1) == 0) {
    return plVar13;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar14 = func_0x03280ca0();
  uVar11 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar16 = 0;
  func_0x06fe0874(uVar14,uVar11,0);
  auVar32 = func_0x03280b7c(uVar14,lVar21);
  *(undefined8 *)(lVar20 + -0x60) = 0x3e3cc80;
  *(long **)(lVar20 + -0x50) = plVar13;
  *(long *)(lVar20 + -0x48) = lVar22;
  *(undefined8 *)(lVar20 + -0x40) = uVar14;
  *(long *)(lVar20 + -0x38) = lVar21;
  if (param_4[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (param_4[7] == (int *)0x0) {
      func_0x03256878(param_4);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar32._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar21 = func_0x06fe4bb8(auVar32._0_8_,auVar32._8_8_,uVar16,0);
  lVar22 = *(long *)param_4[7];
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c(lVar22);
  }
  if (lVar21 != 0) {
    plVar13 = (long *)func_0x03280b90(lVar21,lVar22);
    if (plVar13 != (long *)0x0) goto LAB_03e3cd58;
    func_0x03281048(lVar21,lVar22);
  }
  plVar13 = (long *)0x0;
LAB_03e3cd58:
  uVar25 = func_0x06fe04ec(plVar13,0,0);
  if ((uVar25 & 1) == 0) {
    return plVar13;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar14 = func_0x03280ca0();
  uVar11 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar22 = 0;
  func_0x06fe0874(uVar14,uVar11);
  auVar32 = func_0x03280b7c(uVar14,param_4);
  *(undefined8 *)(lVar20 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar20 + -0x78) = lVar21;
  *(undefined8 *)(lVar20 + -0x70) = uVar14;
  *(int ***)(lVar20 + -0x68) = param_4;
  if ((*(long *)(lVar22 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar22 + 0x38) == 0)) {
    func_0x03256878(lVar22);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar21 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
  *(undefined8 *)(lVar20 + -0x90) = *(undefined8 *)(lVar20 + -0x80);
  *(long **)(lVar20 + -0x80) = plVar13;
  *(undefined8 *)(lVar20 + -0x78) = *(undefined8 *)(lVar20 + -0x78);
  *(undefined8 *)(lVar20 + -0x70) = *(undefined8 *)(lVar20 + -0x70);
  *(undefined8 *)(lVar20 + -0x68) = *(undefined8 *)(lVar20 + -0x68);
  if ((*(long *)(lVar21 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar21 + 0x38) == 0)) {
    func_0x03256878(lVar21);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar22 = func_0x06fe3fe0(auVar32._0_8_,auVar32._8_8_,0,0);
  lVar21 = **(long **)(lVar21 + 0x38);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c(lVar21);
  }
  if (lVar22 != 0) {
    plVar13 = (long *)func_0x03280b90(lVar22,lVar21);
    if (plVar13 != (long *)0x0) {
      return plVar13;
    }
    func_0x03281048(lVar22,lVar21);
  }
  return (long *)0x0;
}

