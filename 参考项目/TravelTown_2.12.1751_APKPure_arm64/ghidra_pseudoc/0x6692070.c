/* Ghidra 12.1.2 native pseudocode; RVA 0x6692070; Merger.Game.Views.BoardView.HideSelector; status ok */


/* WARNING: Possible PIC construction at 0x06792534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0679275c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069aa740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06792760) */
/* WARNING: Removing unreachable block (ram,0x06792764) */
/* WARNING: Removing unreachable block (ram,0x06792778) */
/* WARNING: Removing unreachable block (ram,0x06792780) */
/* WARNING: Removing unreachable block (ram,0x0679279c) */
/* WARNING: Removing unreachable block (ram,0x067927a4) */
/* WARNING: Removing unreachable block (ram,0x067927cc) */
/* WARNING: Removing unreachable block (ram,0x067927b0) */
/* WARNING: Removing unreachable block (ram,0x067927bc) */
/* WARNING: Removing unreachable block (ram,0x067927d8) */
/* WARNING: Removing unreachable block (ram,0x06792874) */
/* WARNING: Removing unreachable block (ram,0x067927e8) */
/* WARNING: Removing unreachable block (ram,0x06792864) */
/* WARNING: Removing unreachable block (ram,0x06792808) */
/* WARNING: Removing unreachable block (ram,0x06792848) */
/* WARNING: Removing unreachable block (ram,0x0679284c) */
/* WARNING: Removing unreachable block (ram,0x069aa69c) */
/* WARNING: Removing unreachable block (ram,0x069aa6bc) */
/* WARNING: Removing unreachable block (ram,0x069aa6d0) */
/* WARNING: Removing unreachable block (ram,0x069aa6dc) */
/* WARNING: Removing unreachable block (ram,0x069aa6e0) */
/* WARNING: Removing unreachable block (ram,0x069aa6f4) */
/* WARNING: Removing unreachable block (ram,0x069aa71c) */
/* WARNING: Removing unreachable block (ram,0x069aa730) */
/* WARNING: Removing unreachable block (ram,0x06792538) */
/* WARNING: Removing unreachable block (ram,0x0679253c) */
/* WARNING: Removing unreachable block (ram,0x067925e4) */
/* WARNING: Removing unreachable block (ram,0x06792568) */
/* WARNING: Removing unreachable block (ram,0x0679259c) */
/* WARNING: Removing unreachable block (ram,0x067925b4) */
/* WARNING: Removing unreachable block (ram,0x067925bc) */
/* WARNING: Removing unreachable block (ram,0x067925f4) */
/* WARNING: Removing unreachable block (ram,0x067925c8) */
/* WARNING: Removing unreachable block (ram,0x067925d4) */
/* WARNING: Removing unreachable block (ram,0x06792600) */
/* WARNING: Removing unreachable block (ram,0x06792610) */
/* WARNING: Removing unreachable block (ram,0x067926d0) */
/* WARNING: Removing unreachable block (ram,0x067926fc) */
/* WARNING: Removing unreachable block (ram,0x0679274c) */
/* WARNING: Removing unreachable block (ram,0x06792660) */
/* WARNING: Removing unreachable block (ram,0x06792678) */
/* WARNING: Removing unreachable block (ram,0x06792680) */
/* WARNING: Removing unreachable block (ram,0x067926a8) */
/* WARNING: Removing unreachable block (ram,0x0679268c) */
/* WARNING: Removing unreachable block (ram,0x06792698) */
/* WARNING: Removing unreachable block (ram,0x067926b4) */
/* WARNING: Removing unreachable block (ram,0x069aa744) */
/* WARNING: Removing unreachable block (ram,0x069aa748) */
/* WARNING: Removing unreachable block (ram,0x069aa7d8) */
/* WARNING: Removing unreachable block (ram,0x069aa7e0) */
/* WARNING: Removing unreachable block (ram,0x069aa76c) */
/* WARNING: Removing unreachable block (ram,0x069aa778) */
/* WARNING: Removing unreachable block (ram,0x069aa78c) */
/* WARNING: Removing unreachable block (ram,0x069aa7fc) */
/* WARNING: Removing unreachable block (ram,0x069aa7a4) */
/* WARNING: Removing unreachable block (ram,0x069aa80c) */
/* WARNING: Removing unreachable block (ram,0x069aa7bc) */
/* WARNING: Removing unreachable block (ram,0x06fe0ba0) */
/* WARNING: Removing unreachable block (ram,0x06fe0c14) */
/* WARNING: Removing unreachable block (ram,0x06fe0bac) */
/* WARNING: Removing unreachable block (ram,0x06fe0bc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bd4) */
/* WARNING: Removing unreachable block (ram,0x06fe0c48) */
/* WARNING: Removing unreachable block (ram,0x06fe0c78) */
/* WARNING: Removing unreachable block (ram,0x06fe0cac) */
/* WARNING: Removing unreachable block (ram,0x06fe0cc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0be0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bec) */
/* WARNING: Removing unreachable block (ram,0x06fe0c00) */

ulong Merger_Game_Views_BoardView__HideSelector(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong **ppuVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  int *piVar17;
  ulong *puVar18;
  undefined *puVar19;
  undefined *unaff_x22;
  long lVar20;
  undefined *unaff_x23;
  long lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x0681b500(*(long *)(param_1 + 0xa0),0,0);
    if ((*(long *)(param_1 + 0xa0) != 0) &&
       (lVar6 = func_0x06fdbe94(*(long *)(param_1 + 0xa0),0), lVar6 != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x70);
      if (pcRam0000000007e302d0 == (code *)0x0) {
        pcRam0000000007e302d0 = (code *)func_0x032809dc(&UNK_017ae4bb,uVar11,0);
      }
                    /* WARNING: Could not recover jumptable at 0x06feb6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*pcRam0000000007e302d0)(lVar6,uVar11,1);
      return uVar10;
    }
  }
  lVar6 = func_0x03280cac();
  puVar19 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e282b2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809308);
    func_0x03280a18(PTR_DAT_07809310);
    func_0x03280a18(PTR_DAT_07809318);
    func_0x03280a18(PTR_DAT_07756328);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e282b2 = 1;
  }
  uVar11 = *(undefined8 *)(lVar6 + 0xa8);
  if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar10 = func_0x06fe04ec(uVar11,0,0);
  if ((uVar10 & 1) == 0) {
LAB_06792224:
    uVar11 = *(undefined8 *)(lVar6 + 0xa8);
    if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x06fe04ec(uVar11,0,0);
    if ((uVar10 & 1) == 0) {
      return uVar10;
    }
    uVar11 = *(undefined8 *)(lVar6 + 0xb0);
    if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x06fdeb74(uVar11,0,0);
    if ((uVar10 & 1) == 0) {
      return uVar10;
    }
    lVar6 = *(long *)(lVar6 + 0xb0);
    if (lVar6 != 0) {
      if (pcRam0000000007e2d950 == (code *)0x0) {
        pcRam0000000007e2d950 = (code *)func_0x032809dc(&UNK_0178d148);
      }
                    /* WARNING: Could not recover jumptable at 0x06f97080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*pcRam0000000007e2d950)(lVar6,1);
      return uVar10;
    }
  }
  else {
    uVar11 = *(undefined8 *)(lVar6 + 0xb0);
    if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x06fe04ec(uVar11,0,0);
    if ((uVar10 & 1) == 0) goto LAB_06792224;
    plVar7 = (long *)func_0x057dadc4(lVar6,0);
    if (plVar7 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      uVar11 = func_0x055f7538(*(undefined8 *)PTR_DAT_07756328,uVar11,
                               *(undefined8 *)PTR_DAT_07809310,0);
      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
      }
      puVar19 = PTR_DAT_0776dcd8;
      uVar12 = *(undefined8 *)PTR_DAT_077503b8;
      uVar13 = *(undefined8 *)PTR_DAT_07809318;
      uVar14 = *(undefined8 *)PTR_DAT_07809308;
      uStack_60 = 0x67920b4;
      if ((bRam0000000007e1c84b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776dcd8);
        func_0x03280a18(PTR_DAT_07784e90);
        bRam0000000007e1c84b = 1;
      }
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if (cRam0000000007e1c87b == '\0') {
        func_0x03280a18(PTR_DAT_0776dcd8);
        cRam0000000007e1c87b = '\x01';
      }
      uVar10 = *(ulong *)puVar19;
      if (*(int *)(uVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        uVar10 = *(ulong *)puVar19;
      }
      pbVar15 = *(byte **)(uVar10 + 0xb8);
      if ((*pbVar15 & 1) != 0) {
        if (*(int *)(uVar10 + 0xe0) == 0) {
          uVar10 = func_0x03280b8c();
          pbVar15 = *(byte **)(*(long *)puVar19 + 0xb8);
        }
        plVar7 = *(long **)(pbVar15 + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07784e90) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_0556c570;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07784e90,4);
LAB_0556c570:
                    /* WARNING: Could not recover jumptable at 0x0556c5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (*(code *)*puVar5)(plVar7,uVar11,uVar12,0,uVar13,uVar14,0,puVar5[1]);
          return uVar10;
        }
      }
      return uVar10;
    }
  }
  lVar6 = func_0x03280cac();
  uStack_60 = 0x67922a0;
  puVar5 = (undefined8 *)0x7e28000;
  if ((bRam0000000007e282bc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07809320);
    func_0x03280a18(PTR_DAT_0777ab78);
    func_0x03280a18(PTR_DAT_07809328);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809168);
    bRam0000000007e282bc = 1;
  }
  if (*(long *)(lVar6 + 0x28) == 0) goto LAB_0679246c;
  uVar10 = func_0x06724224(*(long *)(lVar6 + 0x28),0);
  puVar19 = PTR_DAT_0774e4e0;
  if ((uVar10 & 1) != 0) {
    puVar5 = *(undefined8 **)(lVar6 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x06fe04ec(puVar5,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(long *)(lVar6 + 0x70) != 0) {
        uVar11 = func_0x03cec8b4(*(long *)(lVar6 + 0x70),*(undefined8 *)PTR_DAT_0777ab78);
        puVar5 = (undefined8 *)(lVar6 + 0x180);
        *(undefined8 *)(lVar6 + 0x180) = uVar11;
        func_0x032809c4(puVar5,uVar11);
        lVar8 = *(long *)puVar19;
        puVar19 = *(undefined **)(lVar6 + 0x180);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar10 = func_0x06fe04ec(puVar19,0,0);
        if ((uVar10 & 1) != 0) {
          if ((*(long *)(lVar6 + 0x70) == 0) ||
             (lVar8 = func_0x06fdbed0(*(long *)(lVar6 + 0x70),0), lVar8 == 0)) goto LAB_0679246c;
          uVar11 = func_0x03dc9430(lVar8,*(undefined8 *)PTR_DAT_07809328);
          *puVar5 = uVar11;
          func_0x032809c4(puVar5,uVar11);
        }
        unaff_x22 = PTR_DAT_0774e758;
        lVar8 = *(long *)(lVar6 + 0x180);
        puVar19 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
        unaff_x23 = PTR_DAT_07809320;
        func_0x056ed730(puVar19,lVar6,*(undefined8 *)PTR_DAT_07809320,0);
        puVar5 = (undefined8 *)0x0;
        if (lVar8 != 0) {
          func_0x069adca0(lVar8,puVar19,0);
          lVar8 = *(long *)(lVar6 + 0x180);
          puVar19 = (undefined *)func_0x03280ca0(*(undefined8 *)unaff_x22);
          func_0x056ed730(puVar19,lVar6,*(undefined8 *)unaff_x23,0);
          puVar5 = (undefined8 *)0x0;
          if (lVar8 != 0) {
            if ((bRam0000000007e29543 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758,puVar19,0);
              bRam0000000007e29543 = 1;
            }
            puVar2 = PTR_DAT_0774e758;
            puVar18 = (ulong *)(lVar8 + 0x38);
            uVar10 = *puVar18;
            while ((plVar7 = (long *)func_0x057ddb20(uVar10,puVar19,0), plVar7 == (long *)0x0 ||
                   (*plVar7 == *(long *)puVar2))) {
              uVar9 = func_0x032dd140(puVar18,plVar7,uVar10);
              bVar4 = uVar10 == uVar9;
              uVar10 = uVar9;
              if (bVar4) {
                return uVar9;
              }
            }
            lVar6 = func_0x03281048(plVar7);
            lVar8 = 0x7e29000;
            puStack_70 = puVar18;
            puStack_68 = puVar19;
            if ((bRam0000000007e29529 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              func_0x03280a18(PTR_DAT_07824020);
              bRam0000000007e29529 = 1;
            }
            uVar10 = func_0x0726f3a0(lVar6,0);
            puVar2 = PTR_DAT_07824020;
            puVar19 = PTR_DAT_0774e758;
            lVar20 = *(long *)(lVar6 + 0x40);
            if ((lVar20 != 0) && (uVar1 = *(uint *)(lVar20 + 0x18), 0 < (int)uVar1)) {
              lVar21 = 0;
              do {
                if (uVar1 <= (uint)lVar21) {
                  func_0x03280cb4();
LAB_069adeb8:
                  lVar6 = func_0x03280cac();
                  if (*(long *)(lVar6 + 0x48) != 0) {
                    func_0x06fe95bc(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                                    *(long *)(lVar6 + 0x48),0);
                    if (*(long *)(lVar6 + 0x48) != 0) {
                      func_0x06fe96d8(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                                      *(long *)(lVar6 + 0x48),0);
                      if (*(long *)(lVar6 + 0x48) != 0) {
                        uVar10 = func_0x06fe9a2c(*(undefined4 *)(lVar6 + 0x30),
                                                 *(undefined4 *)(lVar6 + 0x34),
                                                 *(long *)(lVar6 + 0x48),0);
                        if (*(char *)(lVar6 + 0x38) == '\0') {
                          return uVar10;
                        }
                        lVar8 = 0x7e13000;
                        lVar20 = *(long *)(lVar6 + 0x48);
                        if (cRam0000000007e136d6 == '\0') {
                          func_0x03280a18(PTR_DAT_0774fd60);
                          cRam0000000007e136d6 = '\x01';
                        }
                        lVar6 = 0;
                        if (lVar20 != 0) {
                          puVar16 = *(undefined4 **)(*(long *)PTR_DAT_0774fd60 + 0xb8);
                          uVar23 = puVar16[1];
                          uVar24 = puVar16[2];
                          func_0x06fe97f4(*puVar16,lVar20,0);
                          uVar22 = func_0x06fe9aec(lVar20);
                          uStack_e0 = CONCAT44(uVar23,uVar22);
                          lStack_d8 = CONCAT44(lStack_d8._4_4_,uVar24);
                          if (pcRam0000000007e30418 == (code *)0x0) {
                            pcRam0000000007e30418 = (code *)func_0x032809dc(&UNK_017990cf);
                          }
                          uVar10 = (*pcRam0000000007e30418)(lVar20,&uStack_e0);
                          return uVar10;
                        }
                      }
                    }
                  }
                  uVar10 = func_0x03280cac();
                  *(undefined1 *)(uVar10 + 0x38) = 1;
                  puVar19 = PTR_DAT_0774e4e0;
                  uStack_e0 = lVar8;
                  lStack_d8 = lVar6;
                  if ((bRam0000000007e2fb28 & 1) == 0) {
                    func_0x03280a18(PTR_DAT_0774e4e0,0);
                    bRam0000000007e2fb28 = 1;
                  }
                  if (*(int *)(*(long *)puVar19 + 0xe0) != 0) {
                    return uVar10;
                  }
                  func_0x03280b8c();
                  return uVar10;
                }
                lVar8 = *(long *)(lVar20 + 0x20 + lVar21 * 8);
                uVar11 = func_0x03280ca0(*(undefined8 *)puVar19);
                func_0x056ed730(uVar11,lVar6,*(undefined8 *)puVar2,0);
                if (lVar8 == 0) goto LAB_069adeb8;
                uVar10 = func_0x069adca0(lVar8,uVar11);
                uVar1 = *(uint *)(lVar20 + 0x18);
                lVar21 = lVar21 + 1;
              } while ((int)lVar21 < (int)uVar1);
            }
            return uVar10;
          }
        }
      }
LAB_0679246c:
      func_0x03280cac();
      ppuVar3 = &puStack_70;
      puStack_70 = (ulong *)0x6792470;
      if (extraout_x1 == 0) {
        uVar12 = 0x6792490;
        func_0x03280cac();
        uVar11 = extraout_x1_00;
      }
      else {
        uVar11 = *(undefined8 *)(extraout_x1 + 0x10);
        ppuVar3 = (ulong **)&uStack_60;
        uVar12 = 0x6792470;
      }
      puVar2 = PTR_DAT_07809330;
      *(undefined8 *)((long)ppuVar3 + -0x30) = uVar12;
      *(undefined **)((long)ppuVar3 + -0x28) = unaff_x23;
      *(undefined **)((long)ppuVar3 + -0x20) = unaff_x22;
      *(undefined **)((long)ppuVar3 + -0x18) = puVar19;
      *(undefined8 **)((long)ppuVar3 + -0x10) = puVar5;
      *(long *)((long)ppuVar3 + -8) = lVar6;
      if ((bRam0000000007e282ed & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776e340,uVar11);
        func_0x03280a18(PTR_DAT_07772358);
        func_0x03280a18(PTR_DAT_077c0858);
        func_0x03280a18(PTR_DAT_07772368);
        func_0x03280a18(PTR_DAT_07809338);
        func_0x03280a18(PTR_DAT_07809330);
        func_0x03280a18(PTR_DAT_07809168);
        func_0x03280a18(PTR_DAT_07809340);
        bRam0000000007e282ed = 1;
      }
      uVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
      return uVar10;
    }
  }
  return uVar10;
}

