/* Ghidra 12.1.2 native pseudocode; RVA 0x6696B2C; Merger.Game.Views.BoardView.MoveItemToTopContainer; status ok */


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

long * Merger_Game_Views_BoardView__MoveItemToTopContainer
                 (ulong param_1,undefined8 param_2,long *param_3,int **param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  code **ppcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  code *UNRECOVERED_JUMPTABLE;
  int **ppiVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  undefined *puVar30;
  undefined *puVar31;
  ulong uVar32;
  undefined *puVar33;
  undefined8 unaff_x26;
  int iVar34;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long alStack_2f0 [18];
  undefined1 auStack_260 [8];
  int *piStack_258;
  long alStack_250 [2];
  undefined1 auStack_240 [8];
  long alStack_238 [9];
  int *piStack_1f0;
  long lStack_1e8;
  uint uStack_1dc;
  long lStack_1d8;
  undefined1 auStack_1d0 [8];
  ulong auStack_1c8 [11];
  int *piStack_170;
  long lStack_168;
  int iStack_15c;
  long lStack_158;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  long *plStack_c8;
  code *apcStack_70 [2];
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long *plStack_48;
  
  uVar32 = (ulong)param_4 & 0xffffffff;
  plVar17 = param_3;
  ppiVar18 = param_4;
  if ((bRam0000000007e282d0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077a3ab0);
    func_0x03280a18(PTR_DAT_077a3ab8);
    func_0x03280a18(PTR_DAT_0777e9d8);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e282d0 = 1;
  }
  plVar12 = (long *)Merger_Game_Views_BoardView__GetItemView(param_1,param_2);
  puVar33 = PTR_DAT_077c0858;
  if (plVar12 == (long *)0x0) {
    uVar6 = 0;
    goto LAB_06796db8;
  }
  lVar23 = *plVar12;
  uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar26 != 0) {
    piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar13 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
        goto LAB_06796c0c;
      }
      uVar26 = uVar26 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar26 != 0);
  }
  plVar17 = (long *)0x0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06796c0c:
  plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  plVar9 = (long *)0x7e28000;
  if (plVar14 != (long *)0x0) {
    plVar17 = (long *)0x1;
    ppiVar18 = (int **)0x0;
    func_0x06feb6b4(plVar14,*(undefined8 *)(param_1 + 0x70));
    plVar9 = plVar14;
    if (((ulong)param_4 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_06796dd0;
      uVar6 = func_0x06fed540(*(long *)(param_1 + 0x70),0);
      uVar32 = (ulong)uVar6;
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
      }
      uVar7 = func_0x05797438(0,uVar6 - 2,0);
      plVar17 = (long *)0x0;
      func_0x06fed630(plVar14,uVar7);
    }
    if (((ulong)param_3 & 1) == 0) {
      uVar6 = 1;
LAB_06796db8:
      return (long *)(ulong)uVar6;
    }
    lVar23 = *plVar12;
    uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar26 != 0) {
      piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == *(long *)puVar33) {
          puVar13 = (undefined8 *)(lVar23 + (long)(*piVar28 + 8) * 0x10 + 0x138);
          goto LAB_06796ce0;
        }
        uVar26 = uVar26 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar26 != 0);
    }
    plVar17 = (long *)0x8;
    puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06796ce0:
    lVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if (lVar23 != 0) {
      func_0x03dc9430(lVar23,*(undefined8 *)PTR_DAT_077a3ab0);
      lVar23 = *plVar12;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 != 0) {
        piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)puVar33) {
            puVar13 = (undefined8 *)(lVar23 + (long)(*piVar28 + 8) * 0x10 + 0x138);
            goto LAB_06796d50;
          }
          uVar26 = uVar26 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar26 != 0);
      }
      plVar17 = (long *)0x8;
      puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06796d50:
      lVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (((lVar23 != 0) &&
          (plVar14 = (long *)func_0x03dc9518(lVar23,*(undefined8 *)PTR_DAT_0777e9d8),
          plVar14 != (long *)0x0)) &&
         (lVar23 = func_0x06fdbed0(plVar14,0), plVar12 = plVar14, lVar23 != 0)) {
        func_0x03dc9430(lVar23,*(undefined8 *)PTR_DAT_077a3ab8);
        uVar6 = 1;
        func_0x072378f8(plVar14,1,0);
        func_0x07237978(plVar14,200,0);
        goto LAB_06796db8;
      }
    }
  }
LAB_06796dd0:
  auVar36 = func_0x03280cac();
  apcStack_70[0] = Merger_Game_Views_BoardView__MoveItemBackToOwnContainer;
  uStack_60 = param_1;
  uStack_58 = uVar32;
  uStack_50 = (ulong)param_3 & 0xffffffff;
  plStack_48 = plVar12;
  if ((bRam0000000007e282d1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    func_0x03280a18(PTR_DAT_078094e8);
    bRam0000000007e282d1 = 1;
  }
  plVar12 = (long *)Merger_Game_Views_BoardView__GetItemView(auVar36._0_8_,auVar36._8_8_);
  lVar23 = *(long *)(auVar36._0_8_ + 0x128);
  if (lVar23 != 0) {
    plVar17 = *(long **)PTR_DAT_078094e8;
    uVar15 = func_0x047544b8(lVar23,auVar36._8_8_);
    puVar31 = PTR_DAT_077c0858;
    if (plVar12 != (long *)0x0) {
      lVar23 = *plVar12;
      uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar32 != 0) {
        piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_077c0858) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_06796eb8;
          }
          uVar32 = uVar32 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar32 != 0);
      }
      plVar17 = (long *)0x0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06796eb8:
      lVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (lVar23 != 0) {
        plVar17 = (long *)0x0;
        ppiVar18 = (int **)0x0;
        func_0x06feb6b4(lVar23,uVar15);
        lVar23 = *plVar12;
        uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar32 != 0) {
          piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
              puVar13 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_06796f24;
            }
            uVar32 = uVar32 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar32 != 0);
        }
        plVar17 = (long *)0x0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06796f24:
        lVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        param_1 = 0x7e13000;
        if (cRam0000000007e136dc == '\0') {
          func_0x03280a18(PTR_DAT_077500e8);
          cRam0000000007e136dc = '\x01';
        }
        if (lVar23 != 0) {
          func_0x06fe97f4(**(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8))[1],lVar23,0);
          lVar23 = *plVar12;
          uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar32 != 0) {
            piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
                puVar13 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_06796fc4;
              }
              uVar32 = uVar32 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar32 != 0);
          }
          plVar17 = (long *)0x0;
          puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06796fc4:
          lVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          param_1 = 0x7e16000;
          if (cRam0000000007e16029 == '\0') {
            func_0x03280a18(PTR_DAT_0774fd60);
            cRam0000000007e16029 = '\x01';
          }
          puVar8 = PTR_DAT_07809140;
          if (lVar23 != 0) {
            lVar24 = *(long *)(*(long *)PTR_DAT_0774fd60 + 0xb8);
            func_0x06feb448(*(undefined4 *)(lVar24 + 0xc),*(undefined4 *)(lVar24 + 0x10),
                            *(undefined4 *)(lVar24 + 0x14),lVar23,0);
            lVar23 = *plVar12;
            uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar32 != 0) {
              piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
                  puVar13 = (undefined8 *)(lVar23 + (long)(*piVar28 + 8) * 0x10 + 0x138);
                  goto SUB_03e90108;
                }
                uVar32 = uVar32 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar32 != 0);
            }
            plVar17 = (long *)0x8;
            puVar13 = (undefined8 *)func_0x03256b10(plVar12);
SUB_03e90108:
            puVar30 = PTR_DAT_07809138;
            lVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            lVar24 = *(long *)puVar8;
            if ((*(long *)(lVar24 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar24 + 0x38) == 0)) {
              func_0x03256878(lVar24);
            }
            if (lVar23 != 0) {
              puVar8 = (undefined *)func_0x03dc9518(lVar23,**(undefined8 **)(lVar24 + 0x38));
              puVar33 = PTR_DAT_0774e4e0;
              if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
                func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
              }
              plVar17 = (long *)func_0x06fdeb74(puVar8,0,0);
              if (((ulong)plVar17 & 1) == 0) {
                return plVar17;
              }
              if (*(int *)(*(long *)puVar33 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              ppcVar3 = apcStack_70;
              uVar15 = 0x6797090;
SUB_06fe41c8:
              puVar33 = PTR_DAT_0774e4e0;
              *(undefined8 *)((long)ppcVar3 + -0x20) = uVar15;
              *(undefined **)((long)ppcVar3 + -0x18) = puVar31;
              *(undefined **)((long)ppcVar3 + -0x10) = puVar30;
              *(long **)((long)ppcVar3 + -8) = plVar12;
              if ((bRam0000000007e2fdd8 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0774e4e0,0);
                bRam0000000007e2fdd8 = 1;
              }
              if (*(int *)(*(long *)puVar33 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              if (pcRam0000000007e2fdd0 == (code *)0x0) {
                pcRam0000000007e2fdd0 = (code *)func_0x032809dc(&UNK_017a679f);
              }
                    /* WARNING: Could not recover jumptable at 0x06fe423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar17 = (long *)(*pcRam0000000007e2fdd0)(0,puVar8);
              return plVar17;
            }
            auVar36 = func_0x03280cac();
            lVar23 = auVar36._8_8_;
            plVar12 = auVar36._0_8_;
            ppcVar3 = (code **)&stack0xffffffffffffff40;
            if ((*(long *)(lVar23 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar23 + 0x38) == 0)) {
              func_0x03256878(lVar23);
            }
            plStack_c8 = plVar12;
            if ((plVar12 != (long *)0x0) &&
               (plVar12 = (long *)func_0x03dc9f70(plVar12,**(undefined8 **)(lVar23 + 0x38)),
               plVar12 != (long *)0x0)) {
              if ((int)plVar12[3] < 1) {
                return plVar12;
              }
              puVar31 = (undefined *)0x0;
              if ((plVar12[3] & 0xffffffffU) != 0) {
                puVar8 = (undefined *)plVar12[4];
                if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar15 = 0x3e90254;
                puVar30 = puVar8;
                goto SUB_06fe41c8;
              }
              func_0x03280cb4();
              plStack_c8 = plVar12;
            }
            auVar36 = func_0x03280cac();
            lVar24 = auVar36._8_8_;
            plVar12 = auVar36._0_8_;
            lStack_e0 = 0x3e9027c;
            puStack_d8 = puVar31;
            pcStack_d0 = (code *)lVar23;
            if (*(long *)(lVar24 + 0x38) == 0) {
              func_0x03256878(lVar24);
            }
            if (plVar12 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar23 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = func_0x0325681c(lVar23);
              }
              lVar19 = *plVar12;
              uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar32 != 0) {
                piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar23) {
                    puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_03e90304;
                  }
                  uVar32 = uVar32 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar32 != 0);
              }
              plVar17 = (long *)0x0;
              puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_03e90304:
              iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if (iVar4 != 0) {
                lVar23 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
                if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                  lVar23 = func_0x0325681c(lVar23);
                }
                lVar19 = *plVar12;
                uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar32 != 0) {
                  piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar23) {
                      puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e90378;
                    }
                    uVar32 = uVar32 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar32 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar23,0);
LAB_03e90378:
                iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                lVar23 = **(long **)(lVar24 + 0x38);
                if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                  lVar23 = func_0x0325681c(lVar23);
                }
                lVar19 = *plVar12;
                uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar32 != 0) {
                  piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar23) {
                      puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e903f0;
                    }
                    uVar32 = uVar32 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar32 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar23,0);
LAB_03e903f0:
                uVar32 = (*(code *)*puVar13)(plVar12,iVar4 + -1,puVar13[1]);
                lVar23 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
                if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                  lVar23 = func_0x0325681c(lVar23);
                }
                lVar19 = *plVar12;
                uVar26 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar26 != 0) {
                  piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar23) {
                      puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e90468;
                    }
                    uVar26 = uVar26 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar26 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar23,0);
LAB_03e90468:
                iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                lVar23 = **(long **)(lVar24 + 0x38);
                if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                  lVar23 = func_0x0325681c(lVar23);
                }
                lVar24 = *plVar12;
                uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar26 != 0) {
                  piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar23) {
                      puVar13 = (undefined8 *)(lVar24 + (long)(*piVar28 + 4) * 0x10 + 0x138);
                      goto LAB_03e904e0;
                    }
                    uVar26 = uVar26 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar26 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar23,4);
LAB_03e904e0:
                (*(code *)*puVar13)(plVar12,iVar4 + -1,puVar13[1]);
                return (long *)(uVar32 & 0xffffffff);
              }
            }
            func_0x03280a2c(PTR_DAT_0774efe0);
            uVar15 = func_0x03280ca0();
            func_0x05796364(uVar15,0);
            auVar36 = func_0x03280b7c(uVar15,lVar24);
            lVar23 = auVar36._8_8_;
            plVar12 = auVar36._0_8_;
            uStack_f8 = puVar31;
            uStack_f0 = lVar24;
            uStack_e8 = uVar15;
            if (*(long *)(lVar23 + 0x38) == 0) {
              func_0x03256878(lVar23);
            }
            if (plVar12 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar24 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              lVar19 = *plVar12;
              uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar32 != 0) {
                piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar24) {
                    puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_03e905b4;
                  }
                  uVar32 = uVar32 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar32 != 0);
              }
              plVar17 = (long *)0x0;
              puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_03e905b4:
              iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if (iVar4 != 0) {
                lVar24 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
                if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                  lVar24 = func_0x0325681c(lVar24);
                }
                lVar19 = *plVar12;
                uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar32 != 0) {
                  piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar24) {
                      puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e90628;
                    }
                    uVar32 = uVar32 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar32 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar24,0);
LAB_03e90628:
                iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                lVar24 = **(long **)(lVar23 + 0x38);
                if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                  lVar24 = func_0x0325681c(lVar24);
                }
                lVar19 = *plVar12;
                uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar32 != 0) {
                  piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar24) {
                      puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e906a0;
                    }
                    uVar32 = uVar32 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar32 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar24,0);
LAB_03e906a0:
                plVar17 = (long *)(*(code *)*puVar13)(plVar12,iVar4 + -1,puVar13[1]);
                lVar24 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
                if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                  lVar24 = func_0x0325681c(lVar24);
                }
                lVar19 = *plVar12;
                uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar32 != 0) {
                  piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar24) {
                      puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e90718;
                    }
                    uVar32 = uVar32 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar32 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar24,0);
LAB_03e90718:
                iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                lVar23 = **(long **)(lVar23 + 0x38);
                if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                  lVar23 = func_0x0325681c(lVar23);
                }
                lVar24 = *plVar12;
                uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar32 != 0) {
                  piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar23) {
                      puVar13 = (undefined8 *)(lVar24 + (long)(*piVar28 + 4) * 0x10 + 0x138);
                      goto LAB_03e90790;
                    }
                    uVar32 = uVar32 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar32 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar23,4);
LAB_03e90790:
                (*(code *)*puVar13)(plVar12,iVar4 + -1,puVar13[1]);
                return plVar17;
              }
            }
            func_0x03280a2c(PTR_DAT_0774efe0);
            uVar15 = func_0x03280ca0();
            func_0x05796364(uVar15,0);
            auVar36 = func_0x03280b7c(uVar15,lVar23);
            uVar15 = auVar36._8_8_;
            plVar12 = auVar36._0_8_;
            lVar23 = tpidr_el0;
            lStack_158 = *(long *)(lVar23 + 0x28);
            lVar24 = plVar17[7];
            if (lVar24 == 0) {
              func_0x03256878(plVar17);
              lVar24 = plVar17[7];
            }
            uVar32 = (ulong)*(uint *)(*(long *)(lVar24 + 0x20) + 0xfc);
            lVar19 = -(uVar32 + 0xf & 0x1fffffff0);
            lVar22 = (long)&piStack_170 + lVar19;
            if (plVar12 == (long *)0x0) {
              func_0x03280cac();
LAB_03e90ae0:
              func_0x03280a2c(PTR_DAT_0774efe0);
              uVar15 = func_0x03280ca0();
              func_0x05796364(uVar15,0);
              func_0x03280b7c(uVar15,plVar17);
            }
            else {
              lVar24 = *(long *)(lVar24 + 8);
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              lVar20 = *plVar12;
              uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar26 != 0) {
                piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar24) {
                    puVar13 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_03e908a4;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar24,0);
LAB_03e908a4:
              iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if (iVar4 == 0) goto LAB_03e90ae0;
              lVar24 = *(long *)(plVar17[7] + 8);
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              lVar20 = *plVar12;
              uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar26 != 0) {
                piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar24) {
                    puVar13 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_03e90918;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar24,0);
LAB_03e90918:
              uVar6 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              puVar33 = (undefined *)(ulong)uVar6;
              lVar24 = *(long *)plVar17[7];
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              iStack_15c = uVar6 - 1;
              lVar20 = *plVar12;
              uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar26 != 0) {
                piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar24) {
                    lVar24 = lVar20 + (long)*piVar28 * 0x10 + 0x138;
                    goto LAB_03e90994;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              lVar24 = func_0x03256b10(plVar12,lVar24,0);
LAB_03e90994:
              piStack_170 = &iStack_15c;
              lVar24 = *(long *)(lVar24 + 8);
              ppiVar18 = &piStack_170;
              lStack_168 = lVar22;
              (**(code **)(lVar24 + 0x10))
                        (*(undefined8 *)(lVar24 + 8),lVar24,plVar12,ppiVar18,lVar22);
              lVar24 = *(long *)(plVar17[7] + 8);
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              lVar20 = *plVar12;
              uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar26 != 0) {
                piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar24) {
                    puVar13 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_03e90a18;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar24,0);
LAB_03e90a18:
              uVar6 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              plVar9 = plVar17 + 7;
              plVar17 = (long *)(ulong)uVar6;
              lVar24 = *(long *)*plVar9;
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = func_0x0325681c(lVar24);
              }
              lVar20 = *plVar12;
              uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar26 != 0) {
                piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar24) {
                    puVar13 = (undefined8 *)(lVar20 + (long)(*piVar28 + 4) * 0x10 + 0x138);
                    goto LAB_03e90a90;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar24,4);
LAB_03e90a90:
              (*(code *)*puVar13)(plVar12,uVar6 - 1,puVar13[1]);
              plVar9 = (long *)func_0x072ce970(uVar15,lVar22,uVar32);
              if (*(long *)(lVar23 + 0x28) == lStack_158) {
                return plVar9;
              }
            }
            auVar36 = func_0x072ce990();
            lVar24 = auVar36._8_8_;
            plVar9 = auVar36._0_8_;
            *(undefined8 *)((long)auStack_1c8 + lVar19 + 0x38) = 0x3e90b0c;
            *(long **)((long)auStack_1c8 + lVar19 + 0x48) = plVar12;
            *(undefined8 *)((long)auStack_1c8 + lVar19 + 0x50) = uVar15;
            if (*(long *)(lVar24 + 0x38) == 0) {
              func_0x03256878(lVar24);
            }
            if (plVar9 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar20 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
              if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                lVar20 = func_0x0325681c(lVar20);
              }
              lVar21 = *plVar9;
              uVar26 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar26 != 0) {
                piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar20) {
                    puVar13 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_03e90b94;
                  }
                  uVar26 = uVar26 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar26 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar9,lVar20,0);
LAB_03e90b94:
              iVar4 = (*(code *)*puVar13)(plVar9,puVar13[1]);
              if (iVar4 != 0) {
                lVar23 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
                if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                  lVar23 = func_0x0325681c(lVar23);
                }
                lVar19 = *plVar9;
                uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar32 != 0) {
                  piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar23) {
                      puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e90c08;
                    }
                    uVar32 = uVar32 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar32 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar9,lVar23,0);
LAB_03e90c08:
                iVar4 = (*(code *)*puVar13)(plVar9,puVar13[1]);
                if (iVar4 == 1) {
                  lVar23 = **(long **)(lVar24 + 0x38);
                  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                    lVar23 = func_0x0325681c(lVar23);
                  }
                  lVar24 = *plVar9;
                  uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar32 != 0) {
                    piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar23) {
                        puVar13 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_03e90cd4;
                      }
                      uVar32 = uVar32 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar32 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(plVar9,lVar23,0);
LAB_03e90cd4:
                  UNRECOVERED_JUMPTABLE = (code *)*puVar13;
                  uVar15 = puVar13[1];
                  uVar7 = 0;
                }
                else {
                  lVar23 = (*(long **)(lVar24 + 0x38))[1];
                  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                    lVar23 = func_0x0325681c(lVar23);
                  }
                  lVar19 = *plVar9;
                  uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar32 != 0) {
                    piVar28 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar23) {
                        puVar13 = (undefined8 *)(lVar19 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_03e90cf0;
                      }
                      uVar32 = uVar32 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar32 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(plVar9,lVar23,0);
LAB_03e90cf0:
                  uVar7 = (*(code *)*puVar13)(plVar9,puVar13[1]);
                  uVar7 = func_0x06fd9864(0,uVar7,0);
                  lVar23 = **(long **)(lVar24 + 0x38);
                  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                    lVar23 = func_0x0325681c(lVar23);
                  }
                  lVar24 = *plVar9;
                  uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar32 != 0) {
                    piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar23) {
                        puVar13 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_03e90d74;
                      }
                      uVar32 = uVar32 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar32 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(plVar9,lVar23,0);
LAB_03e90d74:
                  UNRECOVERED_JUMPTABLE = (code *)*puVar13;
                  uVar15 = puVar13[1];
                }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar17 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar9,uVar7,uVar15);
                return plVar17;
              }
            }
            func_0x03280a2c(PTR_DAT_07756308);
            uVar15 = func_0x03280ca0();
            uVar10 = func_0x03280a2c(PTR_DAT_0777b3b8);
            uVar26 = 0;
            func_0x05791bcc(uVar15,uVar10);
            auVar36 = func_0x03280b7c(uVar15,lVar24);
            uVar10 = auVar36._8_8_;
            plVar12 = auVar36._0_8_;
            *(undefined1 **)(auStack_1d0 + lVar19) = &stack0xfffffffffffffeb0;
            *(undefined8 *)((long)auStack_1c8 + lVar19) = 0x3e90dcc;
            *(undefined **)((long)auStack_1c8 + lVar19 + 8) = puVar33;
            *(long **)((long)auStack_1c8 + lVar19 + 0x10) = plVar17;
            *(long *)((long)auStack_1c8 + lVar19 + 0x18) = lVar22;
            *(ulong *)((long)auStack_1c8 + lVar19 + 0x20) = uVar32;
            *(long *)((long)auStack_1c8 + lVar19 + 0x28) = lVar24;
            *(undefined8 *)((long)auStack_1c8 + lVar19 + 0x30) = uVar15;
            lVar24 = tpidr_el0;
            *(undefined8 *)((long)&lStack_1d8 + lVar19) = *(undefined8 *)(lVar24 + 0x28);
            lVar22 = *(long *)(uVar26 + 0x38);
            if (lVar22 == 0) {
              func_0x03256878(uVar26);
              lVar22 = *(long *)(uVar26 + 0x38);
            }
            uVar32 = (ulong)*(uint *)(*(long *)(lVar22 + 0x20) + 0xfc);
            lVar20 = (long)&piStack_1f0 + (lVar19 - (uVar32 + 0xf & 0x1fffffff0));
            if (plVar12 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar22 = *(long *)(lVar22 + 8);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              lVar21 = *plVar12;
              uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar25 != 0) {
                piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar22) {
                    puVar13 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_03e90e90;
                  }
                  uVar25 = uVar25 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar25 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar22,0);
LAB_03e90e90:
              iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if (iVar4 != 0) {
                lVar22 = *(long *)(*(long *)(uVar26 + 0x38) + 8);
                if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                  lVar22 = func_0x0325681c(lVar22);
                }
                lVar21 = *plVar12;
                uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                if (uVar25 != 0) {
                  piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar22) {
                      puVar13 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_03e90f04;
                    }
                    uVar25 = uVar25 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar25 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar22,0);
LAB_03e90f04:
                iVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                if (iVar4 == 1) {
                  lVar22 = **(long **)(uVar26 + 0x38);
                  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                    lVar22 = func_0x0325681c(lVar22);
                  }
                  *(undefined4 *)((long)&uStack_1dc + lVar19) = 0;
                  lVar21 = *plVar12;
                  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar25 != 0) {
                    piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar22) goto LAB_03e91044;
                      uVar25 = uVar25 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar25 != 0);
                  }
                }
                else {
                  lVar22 = (*(long **)(uVar26 + 0x38))[1];
                  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                    lVar22 = func_0x0325681c(lVar22);
                  }
                  lVar21 = *plVar12;
                  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar25 != 0) {
                    piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar22) {
                        puVar13 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_03e90fc8;
                      }
                      uVar25 = uVar25 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(plVar12,lVar22,0);
LAB_03e90fc8:
                  uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                  uVar6 = func_0x06fd9864(0,uVar7,0);
                  puVar13 = (undefined8 *)(uVar26 + 0x38);
                  uVar26 = (ulong)uVar6;
                  lVar22 = *(long *)*puVar13;
                  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                    lVar22 = func_0x0325681c(lVar22);
                  }
                  *(uint *)((long)&uStack_1dc + lVar19) = uVar6;
                  lVar21 = *plVar12;
                  uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar25 != 0) {
                    piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar22) goto LAB_03e91044;
                      uVar25 = uVar25 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar25 != 0);
                  }
                }
                lVar22 = func_0x03256b10(plVar12,lVar22,0);
                goto LAB_03e91050;
              }
            }
            func_0x03280a2c(PTR_DAT_07756308);
            uVar10 = func_0x03280ca0();
            uVar15 = func_0x03280a2c(PTR_DAT_0777b3b8);
            uVar25 = 0;
            func_0x05791bcc(uVar10,uVar15);
            func_0x03280b7c(uVar10,uVar26);
            goto LAB_03e910e8;
          }
        }
      }
    }
  }
  auVar36 = func_0x03280cac();
  uVar15 = auVar36._8_8_;
  if ((bRam0000000007e282d3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078095b0);
    bRam0000000007e282d3 = 1;
  }
  lVar23 = *(long *)(auVar36._0_8_ + 0x108);
  if (lVar23 == 0) {
    auVar36 = func_0x03280cac();
    uVar15 = Merger_Game_Views_BoardView__GetItemAtPosition();
    func_0x067971c4(_UNK_017be88c,auVar36._0_8_,auVar36._8_8_,plVar17,7);
    plVar12 = (long *)0x0;
    uVar10 = 0x67971a8;
    puVar2 = &stack0xffffffffffffff40;
    do {
      uVar16 = auVar36._8_8_;
      lVar23 = auVar36._0_8_;
      *(undefined8 *)(puVar2 + -0x30) = uVar10;
      *(undefined8 *)(puVar2 + -0x20) = uVar15;
      *(undefined1 (*) [16])(puVar2 + -0x18) = auVar36;
      *(long **)(puVar2 + -8) = plVar17;
      plVar17 = plVar12;
      if ((bRam0000000007e282d4 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c0858);
        func_0x03280a18(PTR_DAT_07809280);
        func_0x03280a18(PTR_DAT_07809530);
        bRam0000000007e282d4 = 1;
      }
      puVar33 = (undefined *)0x7e28000;
      if (*(long *)(lVar23 + 0x130) != 0) {
        plVar17 = plVar12;
        func_0x0475450c(*(long *)(lVar23 + 0x130),uVar16,plVar12,*(undefined8 *)PTR_DAT_07809530);
        puVar31 = PTR_DAT_077c0858;
        if (*(long *)(lVar23 + 0x120) != 0) {
          plVar17 = *(long **)PTR_DAT_07809280;
          lVar24 = func_0x047544b8(*(long *)(lVar23 + 0x120),uVar16);
          if (plVar12 == (long *)0x0) {
            uVar15 = 0;
          }
          else {
            lVar23 = *plVar12;
            uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar32 != 0) {
              piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
                  puVar13 = (undefined8 *)(lVar23 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                  goto LAB_0679752c;
                }
                uVar32 = uVar32 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar32 != 0);
            }
            plVar17 = (long *)0x3;
            puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0679752c:
            uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          }
          lVar23 = 0;
          puVar33 = puVar31;
          if (lVar24 != 0) goto code_r0x06797540;
        }
      }
      auVar36 = func_0x03280cac();
      uVar10 = auVar36._0_8_;
      *(ulong *)(puVar2 + -0x70) = CONCAT44(unaff_00005104,unaff_s8);
      *(undefined8 *)(puVar2 + -0x60) = 0x67975d0;
      *(long **)(puVar2 + -0x58) = plVar9;
      *(undefined **)(puVar2 + -0x50) = puVar33;
      *(long *)(puVar2 + -0x48) = lVar23;
      *(long **)(puVar2 + -0x40) = plVar12;
      *(undefined8 *)(puVar2 + -0x38) = uVar16;
      uVar15 = Merger_Game_Views_BoardView__GetItemAtPosition();
      plVar12 = (long *)Merger_Game_Views_BoardView__GetItemAtPosition(uVar10,plVar17);
      unaff_s8 = _UNK_017be88c;
      unaff_00005104 = 0;
      func_0x067971c4(_UNK_017be88c,uVar10,auVar36._8_8_,plVar17,7);
      func_0x067971c4(unaff_s8,uVar10,plVar17,auVar36._8_8_,7);
      uVar10 = 0x679764c;
      puVar2 = puVar2 + -0x70;
      plVar9 = plVar12;
    } while( true );
  }
  lVar24 = *(long *)PTR_DAT_078095b0;
  pcStack_d0 = Merger_Game_Views_BoardView__IsPlayingOutAnimation;
  if (*(long *)(lVar23 + 0x10) == 0) {
    return (long *)0x0;
  }
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0xb0);
  uVar6 = func_0x053b2c6c();
  iVar4 = (int)uVar10;
  lVar19 = *(long *)(lVar23 + 0x10);
  if (lVar19 != 0) {
    uVar5 = *(uint *)(lVar19 + 0x18);
    param_1 = (ulong)uVar6;
    iVar34 = 0;
    if (uVar5 != 0) {
      iVar34 = (int)uVar6 / (int)uVar5;
    }
    uVar1 = uVar6 - iVar34 * uVar5;
    if (uVar1 < uVar5) {
      uVar5 = *(int *)(lVar19 + (long)(int)uVar1 * 4 + 0x20) - 1;
      if ((int)uVar5 < 0) {
        return (long *)0x0;
      }
      lVar19 = *(long *)(lVar23 + 0x18);
      if (lVar19 == 0) goto LAB_053af034;
      uVar16 = *(undefined8 *)(lVar19 + 0x18);
      iVar34 = 0;
      while (iVar4 = (int)uVar10, uVar5 < (uint)uVar16) {
        if (*(uint *)(lVar19 + (ulong)uVar5 * 0x10 + 0x20) == uVar6) {
          plVar17 = *(long **)(lVar23 + 0x30);
          if (plVar17 == (long *)0x0) goto LAB_053af034;
          lVar22 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x20);
          uVar16 = *(undefined8 *)(lVar19 + (ulong)uVar5 * 0x10 + 0x28);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c(lVar22);
          }
          lVar20 = *plVar17;
          uVar32 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar32 != 0) {
            piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar22) {
                puVar13 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_053aef90;
              }
              uVar32 = uVar32 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar32 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar17,lVar22,0);
LAB_053aef90:
          ppiVar18 = (int **)puVar13[1];
          uVar10 = uVar15;
          uVar32 = (*(code *)*puVar13)(plVar17,uVar16);
          if ((uVar32 & 1) != 0) {
            return (long *)0x1;
          }
          uVar16 = *(undefined8 *)(lVar19 + 0x18);
        }
        if ((int)(uint)uVar16 <= iVar34) goto LAB_053aeff8;
        if ((uint)uVar16 <= uVar5) break;
        uVar5 = *(uint *)(lVar19 + (ulong)uVar5 * 0x10 + 0x24);
        iVar34 = iVar34 + 1;
        if ((int)uVar5 < 0) {
          return (long *)0x0;
        }
      }
    }
    func_0x03280cb4();
LAB_053aeff8:
    func_0x03280a2c(PTR_DAT_0774efe0);
    lVar23 = func_0x03280ca0();
    uVar10 = func_0x03280a2c(PTR_DAT_077825d8);
    iVar4 = 0;
    func_0x057963c0(lVar23,uVar10);
    func_0x03280b7c(lVar23,lVar24);
  }
LAB_053af034:
  auVar36 = func_0x03280cac();
  lVar19 = auVar36._8_8_;
  plVar17 = auVar36._0_8_;
  iVar34 = (int)plVar17[4];
  uVar10 = *(undefined8 *)(*(long *)(ppiVar18[4] + 0x30) + 200);
  uStack_f0 = param_1;
  uStack_e8 = uVar15;
  lStack_e0 = lVar23;
  puStack_d8 = (undefined *)lVar24;
  if (lVar19 == 0) {
LAB_053b0f68:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar15 = func_0x03280ca0();
    uVar16 = func_0x03280a2c(PTR_DAT_077776b8);
    lVar23 = 0;
    func_0x056e7310(uVar15,uVar16);
  }
  else {
    if (iVar4 < 0) {
      uStack_f8 = (undefined *)CONCAT44(iVar4,(undefined4)uStack_f8);
      uVar15 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar23 = func_0x03280b94(uVar15,(long)&uStack_f8 + 4);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar15 = func_0x03280ca0();
      puVar33 = PTR_DAT_077776c0;
    }
    else {
      if (-1 < iVar34) {
        if ((iVar4 <= *(int *)(lVar19 + 0x18)) && (iVar34 <= *(int *)(lVar19 + 0x18) - iVar4)) {
          if ((0 < iVar34) && (iVar29 = *(int *)((long)plVar17 + 0x24), 0 < iVar29)) {
            lVar23 = 0;
            uVar32 = 0;
            iVar27 = 0;
            do {
              lVar24 = plVar17[3];
              if (lVar24 == 0) {
LAB_053b0f64:
                func_0x03280cac();
                goto LAB_053b0f68;
              }
              if (*(uint *)(lVar24 + 0x18) <= uVar32) {
LAB_053b0f60:
                func_0x03280cb4();
                goto LAB_053b0f64;
              }
              if (-1 < *(int *)(lVar24 + lVar23 + 0x20)) {
                uVar6 = iVar27 + iVar4;
                if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_053b0f60;
                iVar27 = iVar27 + 1;
                *(undefined8 *)(lVar19 + (long)(int)uVar6 * 8 + 0x20) =
                     *(undefined8 *)(lVar24 + lVar23 + 0x28);
                iVar29 = *(int *)((long)plVar17 + 0x24);
              }
              if (iVar34 <= iVar27) {
                return plVar17;
              }
              uVar32 = uVar32 + 1;
              lVar23 = lVar23 + 0x10;
            } while ((long)uVar32 < (long)iVar29);
          }
          return plVar17;
        }
        func_0x03280a2c(PTR_DAT_0774e6e8);
        uVar15 = func_0x03280ca0();
        uVar16 = func_0x03280a2c(PTR_DAT_0777b030);
        lVar23 = 0;
        func_0x056ede60(uVar15,uVar16);
        goto LAB_053b1088;
      }
      uStack_f8 = (undefined *)CONCAT44(uStack_f8._4_4_,iVar34);
      uVar15 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar23 = func_0x03280b94(uVar15,&uStack_f8);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar15 = func_0x03280ca0();
      puVar33 = PTR_DAT_077598c8;
    }
    uVar16 = func_0x03280a2c(puVar33);
    uVar11 = func_0x03280a2c(PTR_DAT_077825f0);
    func_0x056ebf98(uVar15,uVar16,lVar23,uVar11,0);
  }
LAB_053b1088:
  auVar36 = func_0x03280b7c(uVar15,uVar10);
  lVar19 = auVar36._8_8_;
  lVar24 = auVar36._0_8_;
  if (lVar19 == 0) {
LAB_053b1160:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar15 = func_0x03280ca0();
    uVar10 = func_0x03280a2c(PTR_DAT_07779588);
    func_0x056e7310(uVar15,uVar10,0);
    lVar23 = func_0x03280b7c(uVar15,lVar23);
    return *(long **)(lVar23 + 0x30);
  }
  if (*(int *)(lVar24 + 0x24) < 1) {
    uVar6 = 0;
  }
  else {
    lVar22 = 0;
    uVar32 = 0;
    uVar6 = 0;
    do {
      lVar20 = *(long *)(lVar24 + 0x18);
      if (lVar20 == 0) {
        func_0x03280cac();
LAB_053b115c:
        func_0x03280cb4();
        goto LAB_053b1160;
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar32) goto LAB_053b115c;
      if (-1 < *(int *)(lVar20 + lVar22 + 0x20)) {
        uVar15 = *(undefined8 *)(lVar20 + lVar22 + 0x28);
        uVar26 = (**(code **)(lVar19 + 0x18))
                           (*(undefined8 *)(lVar19 + 0x40),uVar15,*(undefined8 *)(lVar19 + 0x28));
        if ((uVar26 & 1) != 0) {
          uVar5 = func_0x053af04c(lVar24,uVar15,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x148));
          uVar6 = uVar6 + (uVar5 & 1);
        }
      }
      uVar32 = uVar32 + 1;
      lVar22 = lVar22 + 0x10;
    } while ((long)uVar32 < (long)*(int *)(lVar24 + 0x24));
  }
  return (long *)(ulong)uVar6;
code_r0x06797540:
  *(undefined8 *)(lVar24 + 0x28) = uVar15;
  plVar17 = (long *)func_0x032809c4((undefined8 *)(lVar24 + 0x28));
  if (plVar12 == (long *)0x0) {
    return plVar17;
  }
  lVar23 = *plVar12;
  uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar32 != 0) {
    piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == *(long *)puVar31) {
        puVar13 = (undefined8 *)(lVar23 + (long)(*piVar28 + 2) * 0x10 + 0x138);
        goto LAB_067975b0;
      }
      uVar32 = uVar32 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar32 != 0);
  }
  puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar31,2);
LAB_067975b0:
                    /* WARNING: Could not recover jumptable at 0x067975c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar17 = (long *)(*(code *)*puVar13)(plVar12,uVar16,puVar13[1]);
  return plVar17;
LAB_03e91044:
  lVar22 = lVar21 + (long)*piVar28 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_1f0 + lVar19) = (long)&uStack_1dc + lVar19;
  *(long *)((long)&lStack_1e8 + lVar19) = lVar20;
  lVar22 = *(long *)(lVar22 + 8);
  ppiVar18 = (int **)((long)&piStack_1f0 + lVar19);
  (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar12,ppiVar18,lVar20);
  uVar25 = uVar32;
  plVar17 = (long *)func_0x072ce970(uVar10,lVar20);
  if (*(long *)(lVar24 + 0x28) == *(long *)((long)&lStack_1d8 + lVar19)) {
    return plVar17;
  }
LAB_03e910e8:
  auVar36 = func_0x072ce990();
  plVar17 = auVar36._0_8_;
  *(undefined1 **)(lVar20 + -0x50) = auStack_1d0 + lVar19;
  *(undefined8 *)(lVar20 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar20 + -0x40) = unaff_x26;
  *(long *)(lVar20 + -0x38) = lVar23;
  *(long *)(lVar20 + -0x30) = lVar24;
  *(ulong *)(lVar20 + -0x28) = uVar26;
  *(long *)(lVar20 + -0x20) = lVar20;
  *(ulong *)(lVar20 + -0x18) = uVar32;
  *(long **)(lVar20 + -0x10) = plVar12;
  *(undefined8 *)(lVar20 + -8) = uVar10;
  lVar23 = tpidr_el0;
  *(undefined8 *)(lVar20 + -0x58) = *(undefined8 *)(lVar23 + 0x28);
  lVar24 = *(long *)(uVar25 + 0x38);
  if (lVar24 == 0) {
    func_0x03256878(uVar25);
    lVar24 = *(long *)(uVar25 + 0x38);
  }
  uVar26 = (ulong)*(uint *)(*(long *)(lVar24 + 0x18) + 0xfc);
  uVar32 = uVar26 + 0xf & 0x1fffffff0;
  lVar19 = (lVar20 + -0x70) - uVar32;
  lVar22 = lVar19 - uVar32;
  func_0x072ce9a0(lVar22,0,uVar26);
  if (plVar17 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar24 = *(long *)(lVar24 + 8);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar21 = *plVar17;
    uVar32 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar32 != 0) {
      piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar24) {
          puVar13 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar32 = uVar32 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar32 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar17,lVar24,0);
LAB_03e911d0:
    iVar4 = (*(code *)*puVar13)(plVar17,puVar13[1]);
    if (iVar4 == 0) {
      func_0x072ce9a0(lVar22,0,uVar26);
      func_0x072ce970(lVar19,lVar22,uVar26);
    }
    else {
      ppiVar18 = (int **)(lVar20 + -0x68);
      puVar13 = *(undefined8 **)(*(long *)(uVar25 + 0x38) + 0x20);
      uVar15 = *puVar13;
      *(long **)(lVar20 + -0x68) = plVar17;
      *(long *)(lVar20 + -0x60) = lVar19;
      (*(code *)puVar13[2])(uVar15,puVar13,0,ppiVar18,lVar19);
    }
    plVar17 = (long *)func_0x072ce970(auVar36._8_8_,lVar19,uVar26);
    if (*(long *)(lVar23 + 0x28) == *(long *)(lVar20 + -0x58)) {
      return plVar17;
    }
  }
  auVar35 = func_0x072ce990();
  lVar23 = auVar35._8_8_;
  *(undefined8 *)(lVar22 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar22 + -0x10) = uVar26;
  *(long *)(lVar22 + -8) = auVar36._8_8_;
  if ((*(long *)(lVar23 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar23 + 0x38) == 0)) {
    func_0x03256878(lVar23);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
  *(undefined8 *)(lVar22 + -0x30) = *(undefined8 *)(lVar22 + -0x20);
  *(ulong *)(lVar22 + -0x20) = uVar25;
  *(long *)(lVar22 + -0x18) = lVar19;
  *(undefined8 *)(lVar22 + -0x10) = *(undefined8 *)(lVar22 + -0x10);
  *(undefined8 *)(lVar22 + -8) = *(undefined8 *)(lVar22 + -8);
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (*(long *)(lVar23 + 0x38) == 0) {
      func_0x03256878(lVar23);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar35._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar24 = func_0x06fe3dd4(auVar35._0_8_,0);
  lVar19 = **(long **)(lVar23 + 0x38);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  if (lVar24 == 0) {
LAB_03e3cc18:
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = (long *)func_0x03280b90(lVar24,lVar19);
    if (plVar17 == (long *)0x0) {
      func_0x03281048(lVar24,lVar19);
      goto LAB_03e3cc18;
    }
  }
  uVar32 = func_0x06fe04ec(plVar17,0,0);
  if ((uVar32 & 1) == 0) {
    return plVar17;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar15 = func_0x03280ca0();
  uVar10 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar16 = 0;
  func_0x06fe0874(uVar15,uVar10,0);
  auVar36 = func_0x03280b7c(uVar15,lVar23);
  *(undefined8 *)(lVar22 + -0x60) = 0x3e3cc80;
  *(long **)(lVar22 + -0x50) = plVar17;
  *(long *)(lVar22 + -0x48) = lVar24;
  *(undefined8 *)(lVar22 + -0x40) = uVar15;
  *(long *)(lVar22 + -0x38) = lVar23;
  if (ppiVar18[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (ppiVar18[7] == (int *)0x0) {
      func_0x03256878(ppiVar18);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar36._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar23 = func_0x06fe4bb8(auVar36._0_8_,auVar36._8_8_,uVar16,0);
  lVar24 = *(long *)ppiVar18[7];
  if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
    lVar24 = func_0x0325681c(lVar24);
  }
  if (lVar23 != 0) {
    plVar17 = (long *)func_0x03280b90(lVar23,lVar24);
    if (plVar17 != (long *)0x0) goto LAB_03e3cd58;
    func_0x03281048(lVar23,lVar24);
  }
  plVar17 = (long *)0x0;
LAB_03e3cd58:
  uVar32 = func_0x06fe04ec(plVar17,0,0);
  if ((uVar32 & 1) == 0) {
    return plVar17;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar15 = func_0x03280ca0();
  uVar10 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar24 = 0;
  func_0x06fe0874(uVar15,uVar10);
  auVar36 = func_0x03280b7c(uVar15,ppiVar18);
  *(undefined8 *)(lVar22 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar22 + -0x78) = lVar23;
  *(undefined8 *)(lVar22 + -0x70) = uVar15;
  *(int ***)(lVar22 + -0x68) = ppiVar18;
  if ((*(long *)(lVar24 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar24 + 0x38) == 0)) {
    func_0x03256878(lVar24);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar23 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
  *(undefined8 *)(lVar22 + -0x90) = *(undefined8 *)(lVar22 + -0x80);
  *(long **)(lVar22 + -0x80) = plVar17;
  *(undefined8 *)(lVar22 + -0x78) = *(undefined8 *)(lVar22 + -0x78);
  *(undefined8 *)(lVar22 + -0x70) = *(undefined8 *)(lVar22 + -0x70);
  *(undefined8 *)(lVar22 + -0x68) = *(undefined8 *)(lVar22 + -0x68);
  if ((*(long *)(lVar23 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar23 + 0x38) == 0)) {
    func_0x03256878(lVar23);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar24 = func_0x06fe3fe0(auVar36._0_8_,auVar36._8_8_,0,0);
  lVar23 = **(long **)(lVar23 + 0x38);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c(lVar23);
  }
  if (lVar24 != 0) {
    plVar17 = (long *)func_0x03280b90(lVar24,lVar23);
    if (plVar17 != (long *)0x0) {
      return plVar17;
    }
    func_0x03281048(lVar24,lVar23);
  }
  return (long *)0x0;
}

