/* Ghidra 12.1.2 native pseudocode; RVA 0x6741994; Merger.Game.Views.Board.BoardQueueView.Start; status ok */


/* WARNING: Possible PIC construction at 0x07247724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07247850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072478dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07247968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072479f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07248060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x07247728) */
/* WARNING: Removing unreachable block (ram,0x07247738) */
/* WARNING: Removing unreachable block (ram,0x07248064) */

undefined1  [16] Merger_Game_Views_Board_BoardQueueView__Start(undefined8 param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar21;
  undefined8 extraout_x1_01;
  long extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  long unaff_x22;
  long *plVar32;
  undefined8 uVar33;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined *puVar34;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  
  puVar30 = PTR_DAT_07772cf0;
  if ((bRam0000000007e28a5f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772cf0);
    bRam0000000007e28a5f = 1;
  }
  lVar17 = func_0x0684127c(param_1);
  if (*(int *)(*(long *)puVar30 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar30);
  }
  puVar30 = PTR_DAT_07772cf0;
  plVar28 = (long *)0x7e33000;
  if ((bRam0000000007e3393a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772cf0,0);
    func_0x03280a18(PTR_DAT_0785cbd8);
    func_0x03280a18(PTR_DAT_0785cbe0);
    bRam0000000007e3393a = 1;
  }
  lVar18 = *(long *)puVar30;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar18 = *(long *)puVar30;
  }
  if ((**(long **)(lVar18 + 0xb8) == 0) ||
     (plVar19 = (long *)func_0x0442218c(**(long **)(lVar18 + 0xb8),*(undefined8 *)PTR_DAT_0785cbd8),
     plVar19 == (long *)0x0)) {
    uVar35 = 0x7247758;
    auVar37 = func_0x03280cac();
  }
  else {
    func_0x07247284(plVar19,lVar17);
    auVar37._8_8_ = 1;
    auVar37._0_8_ = plVar19;
    uVar35 = 0x7247728;
    plVar28 = plVar19;
  }
  puVar20 = auVar37._0_8_;
  iVar11 = auVar37._8_4_;
  if ((bRam0000000007e3393b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785cbe8);
    func_0x03280a18(PTR_DAT_0785cbf0);
    func_0x03280a18(PTR_DAT_0785cbf8);
    func_0x03280a18(PTR_DAT_0785cc00);
    func_0x03280a18(PTR_DAT_0785cb80);
    auVar37 = func_0x03280a18(PTR_DAT_0785cc08);
    bRam0000000007e3393b = 1;
  }
  puVar34 = PTR_DAT_0785cb80;
  if (iVar11 != 1) {
    return auVar37;
  }
  uVar29 = *(undefined8 *)(puVar20 + 0x10);
  lVar18 = *(long *)PTR_DAT_0785cb80;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar18 = *(long *)puVar34;
  }
  lVar26 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
  if (lVar26 == 0) {
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar18 = *(long *)puVar34;
    }
    uVar35 = **(undefined8 **)(lVar18 + 0xb8);
    unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
    func_0x0479b274(unaff_x22,uVar35,*(undefined8 *)PTR_DAT_0785cbe8,0);
    plVar28 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x10);
    *plVar28 = unaff_x22;
  }
  else {
    func_0x07247a24(puVar20,uVar29,lVar26);
    lVar18 = *(long *)puVar34;
    uVar29 = *(undefined8 *)(puVar20 + 0x10);
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar18 = *(long *)puVar34;
    }
    lVar26 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x18);
    if (lVar26 == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar18 = *(long *)puVar34;
      }
      uVar35 = **(undefined8 **)(lVar18 + 0xb8);
      unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
      func_0x0479b274(unaff_x22,uVar35,*(undefined8 *)PTR_DAT_0785cbf0,0);
      plVar28 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x18);
      *plVar28 = unaff_x22;
    }
    else {
      func_0x07247cf4(puVar20,uVar29,lVar26);
      lVar18 = *(long *)puVar34;
      uVar29 = *(undefined8 *)(puVar20 + 0x10);
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar18 = *(long *)puVar34;
      }
      lVar26 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x20);
      if (lVar26 == 0) {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar18 = *(long *)puVar34;
        }
        uVar35 = **(undefined8 **)(lVar18 + 0xb8);
        unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
        func_0x0479b274(unaff_x22,uVar35,*(undefined8 *)PTR_DAT_0785cbf8,0);
        plVar28 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x20);
        *plVar28 = unaff_x22;
      }
      else {
        func_0x07247a24(puVar20,uVar29,lVar26);
        lVar18 = *(long *)puVar34;
        plVar19 = *(long **)(puVar20 + 0x10);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar18 = *(long *)puVar34;
        }
        lVar26 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x28);
        if (lVar26 != 0) {
          puVar9 = &stack0xffffffffffffffe0;
          do {
            plVar32 = plVar19;
            puVar34 = PTR_DAT_0774e4e0;
            *(undefined **)(puVar9 + -0x60) = unaff_x29;
            *(undefined8 *)(puVar9 + -0x58) = uVar35;
            *(undefined **)(puVar9 + -0x50) = unaff_x28;
            *(undefined **)(puVar9 + -0x48) = unaff_x27;
            *(undefined **)(puVar9 + -0x40) = unaff_x26;
            *(undefined **)(puVar9 + -0x38) = unaff_x25;
            *(long **)(puVar9 + -0x30) = unaff_x24;
            *(undefined8 *)(puVar9 + -0x28) = unaff_x23;
            *(long *)(puVar9 + -0x20) = unaff_x22;
            *(undefined **)(puVar9 + -0x18) = puVar30;
            *(long **)(puVar9 + -0x10) = plVar28;
            *(long *)(puVar9 + -8) = lVar17;
            if ((bRam0000000007e3393c & 1) == 0) {
              func_0x03280a18(PTR_DAT_0777a030);
              func_0x03280a18(PTR_DAT_0777a038);
              func_0x03280a18(PTR_DAT_0777a040);
              func_0x03280a18(PTR_DAT_0785cc10);
              func_0x03280a18(PTR_DAT_0785cc18);
              func_0x03280a18(PTR_DAT_07772cf0);
              func_0x03280a18(PTR_DAT_0777a060);
              func_0x03280a18(PTR_DAT_0777a068);
              func_0x03280a18(PTR_DAT_0774e4e0);
              func_0x03280a18(PTR_DAT_077502a0);
              func_0x03280a18(PTR_DAT_0784bb60);
              func_0x03280a18(PTR_DAT_0774e558);
              bRam0000000007e3393c = 1;
            }
            if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            auVar37 = func_0x06fe04ec(plVar32,0,0);
            unaff_x26 = PTR_DAT_0777a040;
            if ((auVar37._0_8_ & 1) != 0) {
              return auVar37;
            }
            if (*(int *)(*(long *)PTR_DAT_0777a040 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            unaff_x22 = func_0x04d7c8fc(*(undefined8 *)PTR_DAT_0777a030);
            uVar25 = *(ulong *)PTR_DAT_0785cc10;
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            uVar35 = func_0x057a51c4(uVar25,0);
            if (plVar32 == (long *)0x0) {
LAB_072480b8:
              auVar37 = func_0x03280cac();
              puVar30 = PTR_DAT_0774e4e0;
              lVar18 = auVar37._8_8_;
              lVar17 = auVar37._0_8_;
              *(undefined8 *)(puVar9 + -0xa0) = 0x72480bc;
              *(long **)(puVar9 + -0x90) = unaff_x24;
              *(ulong *)(puVar9 + -0x88) = uVar25;
              *(long *)(puVar9 + -0x80) = unaff_x22;
              *(undefined **)(puVar9 + -0x78) = puVar20;
              *(long **)(puVar9 + -0x70) = plVar32;
              *(long *)(puVar9 + -0x68) = lVar26;
              uVar35 = 0x7e33000;
              if ((bRam0000000007e3393f & 1) == 0) {
                func_0x03280a18(PTR_DAT_077501b0);
                func_0x03280a18(PTR_DAT_0785cc10);
                func_0x03280a18(PTR_DAT_0777a060);
                func_0x03280a18(PTR_DAT_0777a068);
                func_0x03280a18(PTR_DAT_0774e4e0);
                func_0x03280a18(PTR_DAT_0774e558);
                bRam0000000007e3393f = 1;
              }
              if (*(int *)(*(long *)puVar30 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              auVar42 = func_0x06fe04ec(lVar17,0,0);
              uVar29 = auVar42._8_8_;
              if ((auVar42._0_8_ & 1) != 0) goto LAB_0724828c;
              if (lVar17 != 0) {
                uVar35 = func_0x06fdbed0(lVar17,0);
                if (*(int *)(*(long *)puVar30 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)puVar30);
                }
                auVar42 = func_0x06fe04ec(uVar35,0,0);
                uVar29 = auVar42._8_8_;
                if ((auVar42._0_8_ & 1) != 0) goto LAB_0724828c;
                uVar35 = *(undefined8 *)PTR_DAT_0785cc10;
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar29 = func_0x057a51c4(uVar35,0);
                func_0x06fdc650(lVar17,uVar29,lVar18,0);
                puVar8 = PTR_DAT_0777a068;
                puVar20 = PTR_DAT_077501b0;
                if (lVar18 != 0) {
                  uVar29 = extraout_x1_03;
                  if (*(int *)(lVar18 + 0x18) < 1) goto LAB_0724828c;
                  iVar11 = 0;
                  goto LAB_07248200;
                }
              }
              uVar29 = func_0x03280cac();
              puVar20 = PTR_DAT_0774e4e0;
              *(undefined8 *)(puVar9 + -0xc0) = 0x72482b0;
              *(undefined8 *)(puVar9 + -0xb8) = uVar35;
              *(undefined1 (*) [16])(puVar9 + -0xb0) = auVar37;
              if ((bRam0000000007e33940 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0780cee0);
                func_0x03280a18(PTR_DAT_07772cf0);
                func_0x03280a18(PTR_DAT_0785cbd8);
                func_0x03280a18(PTR_DAT_0785cbe0);
                func_0x03280a18(PTR_DAT_0774e4e0);
                bRam0000000007e33940 = 1;
              }
              if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              auVar37 = func_0x06fe04ec(uVar29,0,0);
              puVar20 = PTR_DAT_07772cf0;
              if ((auVar37._0_8_ & 1) != 0) {
                return auVar37;
              }
              lVar17 = *(long *)PTR_DAT_07772cf0;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar17 = *(long *)puVar20;
              }
              lVar18 = 0x7e33000;
              if ((**(long **)(lVar17 + 0xb8) != 0) &&
                 (unaff_x22 = func_0x0442218c(**(long **)(lVar17 + 0xb8),
                                              *(undefined8 *)PTR_DAT_0785cbd8), unaff_x22 != 0)) {
                func_0x07247284(unaff_x22,uVar29);
                if (*(int *)(*(long *)PTR_DAT_0780cee0 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                auVar37 = func_0x070d7e10(unaff_x22,0);
                if ((auVar37._0_8_ & 1) != 0) {
                  return auVar37;
                }
                lVar17 = *(long *)puVar20;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  func_0x03280b8c();
                  lVar17 = *(long *)puVar20;
                }
                lVar17 = **(long **)(lVar17 + 0xb8);
                lVar18 = unaff_x22;
                if (lVar17 != 0) {
                  uVar35 = *(undefined8 *)(puVar9 + -0xb0);
                  uVar31 = *(undefined8 *)(puVar9 + -0xa8);
                  lVar18 = *(long *)PTR_DAT_0785cbe0;
                  puVar10 = puVar9 + -0xa0;
                  uVar29 = *(undefined8 *)(puVar9 + -0xc0);
                  uVar33 = *(undefined8 *)(puVar9 + -0xb8);
                  goto LAB_044222c4;
                }
              }
              unaff_x22 = func_0x03280cac();
              puVar8 = PTR_DAT_07772cf0;
              *(undefined8 *)(puVar9 + -0xe0) = 0x72483f4;
              *(undefined **)(puVar9 + -0xd8) = puVar20;
              *(long *)(puVar9 + -0xd0) = lVar18;
              *(undefined8 *)(puVar9 + -200) = uVar29;
              if ((bRam0000000007e33941 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07772cf0);
                func_0x03280a18(PTR_DAT_0785cbe0);
                bRam0000000007e33941 = 1;
              }
              lVar17 = *(long *)puVar8;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar17 = *(long *)puVar8;
              }
              lVar17 = **(long **)(lVar17 + 0xb8);
              if (lVar17 == 0) {
                auVar37 = func_0x03280cac();
                return auVar37;
              }
              uVar35 = *(undefined8 *)(puVar9 + -0xd0);
              uVar31 = *(undefined8 *)(puVar9 + -200);
              lVar18 = *(long *)PTR_DAT_0785cbe0;
              puVar10 = puVar9 + -0xc0;
              uVar29 = *(undefined8 *)(puVar9 + -0xe0);
              uVar33 = *(undefined8 *)(puVar9 + -0xd8);
              goto LAB_044222c4;
            }
            func_0x06fdc650(plVar32,uVar35,unaff_x22,0);
            if (*(int *)(*(long *)PTR_DAT_07772cf0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x07247590(unaff_x22);
            unaff_x28 = PTR_DAT_0785cc18;
            unaff_x27 = PTR_DAT_0777a068;
            if (unaff_x22 == 0) goto LAB_072480b8;
            if (*(int *)(unaff_x22 + 0x18) < 1) goto LAB_0724807c;
            uVar25 = 0;
            do {
              uVar35 = func_0x0414419c(unaff_x22,uVar25,*(undefined8 *)unaff_x27);
              lVar17 = func_0x03280b90(uVar35,*(undefined8 *)unaff_x28);
              if (lVar17 != 0) {
                uVar35 = func_0x0414419c(unaff_x22,uVar25,*(undefined8 *)unaff_x27);
                if (lVar26 == 0) goto LAB_072480b8;
                (**(code **)(lVar26 + 0x18))
                          (*(undefined8 *)(lVar26 + 0x40),uVar35,*(undefined8 *)(lVar26 + 0x28));
              }
              puVar30 = PTR_DAT_0784bb60;
              uVar4 = (int)uVar25 + 1;
              uVar25 = (ulong)uVar4;
            } while ((int)uVar4 < *(int *)(unaff_x22 + 0x18));
            if (0 < *(int *)(unaff_x22 + 0x18)) {
              uVar25 = 0;
              do {
                uVar35 = func_0x0414419c(unaff_x22,uVar25,*(undefined8 *)unaff_x27);
                lVar17 = func_0x03280b90(uVar35,*(undefined8 *)unaff_x28);
                if (lVar17 == 0) {
                  unaff_x24 = (long *)func_0x0414419c(unaff_x22,uVar25,*(undefined8 *)unaff_x27);
                  if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                    func_0x03280b8c(*(long *)puVar34);
                  }
                  uVar13 = func_0x06fe351c(unaff_x24,0);
                  if (((uVar13 & 1) != 0) && (unaff_x24 != (long *)0x0)) {
                    lVar17 = *(long *)puVar30;
                    bVar1 = *(byte *)(lVar17 + 0x130);
                    if ((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
                       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) == lVar17)) {
                      unaff_x24 = (long *)unaff_x24[4];
                      if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                        func_0x03280b8c();
                      }
                      uVar13 = func_0x06fdeb74(unaff_x24,plVar32,0);
                      if ((uVar13 & 1) == 0) goto LAB_07247ffc;
                    }
                  }
                  uVar35 = func_0x0414419c(unaff_x22,uVar25,*(undefined8 *)unaff_x27);
                  if (lVar26 == 0) goto LAB_072480b8;
                  (**(code **)(lVar26 + 0x18))
                            (*(undefined8 *)(lVar26 + 0x40),uVar35,*(undefined8 *)(lVar26 + 0x28));
                }
LAB_07247ffc:
                uVar4 = (int)uVar25 + 1;
                uVar25 = (ulong)uVar4;
                unaff_x29 = puVar30;
              } while ((int)uVar4 < *(int *)(unaff_x22 + 0x18));
            }
            iVar11 = func_0x06fed540(plVar32,0);
            unaff_x24 = (long *)PTR_DAT_077502a0;
            if (iVar11 < 1) goto LAB_0724807c;
            unaff_x23 = 0;
            plVar19 = (long *)func_0x06fedba8(plVar32,0,0);
            if (plVar19 == (long *)0x0) {
              plVar19 = (long *)0x0;
            }
            else if (*plVar19 != *unaff_x24) {
              plVar19 = (long *)0x0;
            }
            uVar35 = 0x7248064;
            puVar9 = puVar9 + -0x60;
            lVar17 = lVar26;
            plVar28 = plVar32;
            puVar30 = puVar20;
            unaff_x25 = puVar34;
          } while( true );
        }
        if (*(int *)(lVar18 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar18 = *(long *)puVar34;
        }
        uVar35 = **(undefined8 **)(lVar18 + 0xb8);
        unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
        func_0x0479b274(unaff_x22,uVar35,*(undefined8 *)PTR_DAT_0785cc00,0);
        plVar28 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x28);
        *plVar28 = unaff_x22;
      }
    }
  }
  goto SUB_032809c4;
LAB_07248200:
  do {
    plVar28 = (long *)func_0x0414419c(lVar18,iVar11,*(undefined8 *)puVar8);
    if (*(int *)(*(long *)puVar30 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar30);
    }
    auVar37 = func_0x06fdeb74(plVar28,0,0);
    uVar29 = auVar37._8_8_;
    if (((auVar37._0_8_ & 1) != 0) && (plVar28 != (long *)0x0)) {
      bVar1 = *(byte *)(*(long *)puVar20 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar28 + 0x130)) &&
         (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar20)) {
        auVar37 = func_0x06fdb3e4(plVar28,0);
        uVar29 = auVar37._8_8_;
        if ((auVar37._0_8_ & 1) != 0) {
          uVar35 = 1;
          goto LAB_07248290;
        }
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < *(int *)(lVar18 + 0x18));
LAB_0724828c:
  uVar35 = 0;
LAB_07248290:
  auVar42._8_8_ = uVar29;
  auVar42._0_8_ = uVar35;
  return auVar42;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar27 = piVar27 + 4;
    if (uVar25 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar28 = (long *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar32);
LAB_04145ad4:
  (*(code *)*puVar12)(plVar32,puVar12[1]);
LAB_04145ae0:
  func_0x03365958(auVar43._0_8_);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  lVar17 = auVar37._0_8_;
  *(undefined8 *)(puVar10 + -0xc0) = 0x4145af8;
  *(long *)(puVar10 + -0xb0) = lVar26;
  *(long **)(puVar10 + -0xa8) = plVar19;
  auVar37 = func_0x03f898d4(*(undefined8 *)(lVar17 + 0x10),auVar37._8_8_,0,
                            *(undefined4 *)(lVar17 + 0x18),
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(*(long *)(plVar28[4] + 0xc0) + 0xd0) +
                                                 0x20) + 0xc0) + 0x158));
  uVar35 = auVar37._8_8_;
  if (-1 < (int)auVar37._0_4_) {
    func_0x04145da4(lVar17,auVar37._0_8_ & 0xffffffff);
    uVar35 = extraout_x1_01;
  }
  auVar39._4_4_ = 0;
  auVar39._0_4_ = ~auVar37._0_4_ >> 0x1f;
  auVar39._8_8_ = uVar35;
  return auVar39;
LAB_0724807c:
  if (*(int *)(*(long *)unaff_x26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar30 = *(undefined **)(puVar9 + -0x20);
  lVar18 = *(long *)PTR_DAT_0777a038;
  unaff_x24 = *(long **)(puVar9 + -0x30);
  uVar25 = *(ulong *)(puVar9 + -0x28);
  puVar34 = *(undefined **)(puVar9 + -0x38);
  *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x58);
  *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
  *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
  *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
  lVar17 = *(long *)(lVar18 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar17 = *(long *)(lVar18 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = **(long **)(lVar17 + 0xb8);
  if (lVar17 == 0) {
    lVar17 = func_0x03280cac();
    *(undefined8 *)(puVar9 + -0x50) = 0x4d7cae4;
    *(ulong *)(puVar9 + -0x48) = uVar25;
    *(undefined **)(puVar9 + -0x40) = puVar30;
    *(undefined8 *)(puVar9 + -0x38) = 0;
    *(long *)(puVar9 + -0x30) = lVar18;
    *(long *)(puVar9 + -0x28) = unaff_x22;
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x50);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x50);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar26 = *(long *)(lVar17 + 0x20);
    uVar35 = **(undefined8 **)(lVar18 + 0xb8);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar29 = func_0x03280ca0();
    lVar26 = *(long *)(lVar17 + 0x20);
    uVar2 = *(ushort *)(lVar26 + 0x135);
    lVar18 = lVar26;
    if ((uVar2 & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
      uVar2 = *(ushort *)(*(long *)(lVar17 + 0x20) + 0x135);
      lVar18 = *(long *)(lVar17 + 0x20);
    }
    uVar31 = *(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x58);
    if ((uVar2 & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    func_0x05347354(uVar29,uVar35,uVar31,*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x68));
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x50);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar26 = *(long *)(lVar17 + 0x20);
    uVar35 = **(undefined8 **)(lVar18 + 0xb8);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x78) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar31 = func_0x03280ca0();
    lVar26 = *(long *)(lVar17 + 0x20);
    uVar2 = *(ushort *)(lVar26 + 0x135);
    lVar18 = lVar26;
    if ((uVar2 & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
      uVar2 = *(ushort *)(*(long *)(lVar17 + 0x20) + 0x135);
      lVar18 = *(long *)(lVar17 + 0x20);
    }
    uVar33 = *(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x70);
    if ((uVar2 & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    func_0x054221d4(uVar31,uVar35,uVar33,*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x80));
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0xc0) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x22 = func_0x03280ca0();
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    *(undefined8 *)(puVar9 + -0x60) = *(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x88);
    func_0x04421fc4(unaff_x22,uVar29,0,uVar31,0,1,10,10000);
    lVar18 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    **(long **)(lVar18 + 0xb8) = unaff_x22;
    lVar17 = *(long *)(lVar17 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    plVar28 = *(long **)(lVar17 + 0xb8);
    goto SUB_032809c4;
  }
  lVar18 = *(long *)(lVar18 + 0x20);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  uVar35 = *(undefined8 *)(puVar9 + -0x10);
  uVar31 = *(undefined8 *)(puVar9 + -8);
  lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x40);
  uVar29 = *(undefined8 *)(puVar9 + -0x20);
  uVar33 = *(undefined8 *)(puVar9 + -0x18);
  puVar10 = puVar9;
LAB_044222c4:
  *(undefined8 *)(puVar10 + -0x20) = uVar29;
  *(undefined8 *)(puVar10 + -0x18) = uVar33;
  *(undefined8 *)(puVar10 + -0x10) = uVar35;
  *(undefined8 *)(puVar10 + -8) = uVar31;
  lVar23 = *(long *)(lVar17 + 0x28);
  lVar26 = unaff_x22;
  if (lVar23 != 0) {
    (**(code **)(lVar23 + 0x18))
              (*(undefined8 *)(lVar23 + 0x40),unaff_x22,*(undefined8 *)(lVar23 + 0x28));
    lVar26 = extraout_x1_02;
  }
  auVar40._0_8_ = *(long *)(lVar17 + 0x10);
  if (auVar40._0_8_ == 0) {
LAB_044223b4:
    uVar35 = 0x44223b8;
    auVar41 = func_0x03280cac();
    puVar9 = puVar10 + -0x20;
LAB_044223b8:
    lVar26 = auVar41._8_8_;
    lVar23 = auVar41._0_8_;
    *(undefined8 *)(puVar9 + -0x30) = uVar35;
    *(undefined **)(puVar9 + -0x20) = puVar30;
    *(long *)(puVar9 + -0x18) = lVar18;
    *(long *)(puVar9 + -0x10) = lVar17;
    *(long *)(puVar9 + -8) = unaff_x22;
    *(undefined8 *)(puVar9 + -0x50) = 0;
    *(undefined8 *)(puVar9 + -0x48) = 0;
    *(undefined8 *)(puVar9 + -0x40) = 0;
    if (*(long *)(lVar23 + 0x30) == 0) goto LAB_04422470;
    if (*(long *)(lVar23 + 0x10) != 0) {
      func_0x04145068(puVar9 + -0x68,*(long *)(lVar23 + 0x10),
                      *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xa0));
      *(undefined8 *)(puVar9 + -0x48) = *(undefined8 *)(puVar9 + -0x60);
      *(undefined8 *)(puVar9 + -0x50) = *(undefined8 *)(puVar9 + -0x68);
      *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x58);
      while( true ) {
        uVar25 = func_0x051159b4(puVar9 + -0x50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xc0))
        ;
        if ((uVar25 & 1) == 0) {
          lVar18 = 0;
          iVar11 = 5;
          goto LAB_0442244c;
        }
        lVar17 = *(long *)(lVar23 + 0x30);
        if (lVar17 == 0) break;
        (**(code **)(lVar17 + 0x18))
                  (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(puVar9 + -0x40),
                   *(undefined8 *)(lVar17 + 0x28));
      }
      func_0x03280cac();
      lVar17 = lVar26;
    }
    do {
      func_0x03280cac();
      lVar26 = lVar17;
      do {
        auVar43 = func_0x03280ca4(lVar18);
        puVar30 = auVar43._0_8_;
        if (auVar43._8_4_ != 1) {
          lVar18 = 0;
          func_0x051159b0(puVar9 + -0x50,
                          *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 200));
          func_0x03365958(puVar30);
          func_0x03280ca4(0);
          uVar35 = 0x4422528;
          auVar37 = func_0x02f09514();
          auVar41._8_8_ = *(undefined8 *)(*(long *)(*(long *)(auVar37._8_8_ + 0x20) + 0xc0) + 0xd8);
          auVar41._0_8_ = auVar37._0_8_;
          puVar9 = puVar9 + -0x70;
          unaff_x22 = lVar23;
          lVar17 = lVar26;
          goto LAB_044223b8;
        }
        plVar28 = (long *)func_0x072ce910(puVar30);
        lVar18 = *plVar28;
        func_0x072ce920();
        iVar11 = 0;
LAB_0442244c:
        auVar41 = func_0x051159b0(puVar9 + -0x50,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 200))
        ;
      } while (lVar18 != 0);
      lVar17 = lVar26;
      if ((iVar11 != 5) && (iVar11 != 0)) {
        return auVar41;
      }
LAB_04422470:
      lVar26 = *(long *)(lVar23 + 0x10);
      if (lVar26 != 0) {
        iVar11 = *(int *)(lVar26 + 0x18);
        *(undefined4 *)(lVar26 + 0x18) = 0;
        *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
        if (0 < iVar11) {
          auVar41 = func_0x057b9c7c(*(undefined8 *)(lVar26 + 0x10),0,iVar11,0);
        }
        *(undefined4 *)(lVar23 + 0x40) = 0;
        return auVar41;
      }
    } while( true );
  }
  uVar4 = *(uint *)(auVar40._0_8_ + 0x18);
  if (*(int *)(lVar17 + 0x38) <= (int)uVar4) {
    lVar18 = *(long *)(lVar17 + 0x30);
    *(int *)(lVar17 + 0x40) = *(int *)(lVar17 + 0x40) + -1;
    if (lVar18 == 0) {
      auVar40._8_8_ = lVar26;
      return auVar40;
    }
                    /* WARNING: Could not recover jumptable at 0x04422388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar37 = (**(code **)(lVar18 + 0x18))
                        (*(undefined8 *)(lVar18 + 0x40),unaff_x22,*(undefined8 *)(lVar18 + 0x28));
    return auVar37;
  }
  lVar26 = *(long *)(auVar40._0_8_ + 0x10);
  lVar23 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x98);
  *(int *)(auVar40._0_8_ + 0x1c) = *(int *)(auVar40._0_8_ + 0x1c) + 1;
  if (lVar26 == 0) goto LAB_044223b4;
  if (uVar4 < *(uint *)(lVar26 + 0x18)) {
    *(uint *)(auVar40._0_8_ + 0x18) = uVar4 + 1;
    plVar28 = (long *)(lVar26 + (long)(int)uVar4 * 8 + 0x20);
    *plVar28 = unaff_x22;
    goto SUB_032809c4;
  }
  lVar17 = *(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
  *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x20);
  *(undefined **)(puVar10 + -0x20) = puVar30;
  *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
  *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
  *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  uVar3 = *(uint *)(auVar40._0_8_ + 0x18);
  uVar4 = uVar3 + 1;
  lVar17 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(auVar40._0_8_,(ulong)uVar4);
  lVar18 = *(long *)(auVar40._0_8_ + 0x10);
  *(uint *)(auVar40._0_8_ + 0x18) = uVar4;
  if (lVar18 == 0) {
    func_0x03280cac();
  }
  else if (uVar3 < *(uint *)(lVar18 + 0x18)) {
    plVar28 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
    *plVar28 = unaff_x22;
    goto SUB_032809c4;
  }
  auVar37 = func_0x03280cb4();
  lVar23 = auVar37._8_8_;
  lVar18 = auVar37._0_8_;
  *(undefined8 *)(puVar10 + -0x60) = 0x41444d8;
  *(long *)(puVar10 + -0x50) = (long)(int)uVar3;
  *(ulong *)(puVar10 + -0x48) = (ulong)uVar4;
  *(long *)(puVar10 + -0x40) = auVar40._0_8_;
  *(long *)(puVar10 + -0x38) = unaff_x22;
  lVar22 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar23,0x14);
  lVar26 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  if (lVar23 == 0) {
LAB_0414454c:
    unaff_x22 = 0;
  }
  else {
    unaff_x22 = func_0x03280b90(lVar23,lVar26);
    if (unaff_x22 == 0) {
      func_0x03281048(lVar23,lVar26);
      goto LAB_0414454c;
    }
  }
  lVar26 = *(long *)(lVar18 + 0x10);
  lVar24 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
  if (lVar26 != 0) {
    uVar4 = *(uint *)(lVar18 + 0x18);
    if (uVar4 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar18 + 0x18) = uVar4 + 1;
      plVar28 = (long *)(lVar26 + (long)(int)uVar4 * 8 + 0x20);
      *plVar28 = unaff_x22;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar16 = (ulong *)(((ulong)plVar28 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar6) {
            *puVar16 = *puVar16 | 1L << ((ulong)plVar28 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      auVar36._8_8_ = unaff_x22;
      auVar36._0_8_ = plVar28;
      return auVar36;
    }
    func_0x0414446c(lVar18,unaff_x22,
                    *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
    uVar35 = extraout_x1;
LAB_041445ac:
    auVar38._4_4_ = 0;
    auVar38._0_4_ = *(int *)(lVar18 + 0x18) - 1;
    auVar38._8_8_ = uVar35;
    return auVar38;
  }
  auVar43 = func_0x03280cac();
  uVar35 = auVar43._0_8_;
  if (auVar43._8_4_ == 1) {
    puVar12 = (undefined8 *)func_0x072ce910(uVar35);
    uVar35 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar13 = func_0x032810d8(uVar35,*(undefined8 *)*puVar12);
    if ((uVar13 & 1) != 0) {
      func_0x072ce920();
      uVar35 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x68);
      lVar17 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar17 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar35 = func_0x057a51c4(uVar35,0);
      func_0x057b7b18(lVar23,uVar35,0);
      uVar35 = extraout_x1_00;
      goto LAB_041445ac;
    }
    puVar14 = (undefined8 *)func_0x072ce930(8);
    *puVar14 = *puVar12;
    lVar22 = 0;
    uVar35 = func_0x072ce940(puVar14,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar35);
  auVar37 = func_0x02f09514();
  plVar21 = auVar37._8_8_;
  plVar19 = auVar37._0_8_;
  uVar4 = *(uint *)(plVar19 + 3);
  lVar26 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x90);
  uVar13 = (ulong)uVar4;
  *(undefined8 *)(puVar10 + -0xa0) = 0x4144678;
  *(undefined **)(puVar10 + -0x98) = puVar34;
  *(long **)(puVar10 + -0x90) = unaff_x24;
  *(ulong *)(puVar10 + -0x88) = uVar25;
  *(undefined8 *)(puVar10 + -0x80) = uVar35;
  *(long *)(puVar10 + -0x78) = lVar17;
  *(long *)(puVar10 + -0x70) = lVar23;
  *(long *)(puVar10 + -0x68) = lVar18;
  plVar32 = (long *)0x7e18000;
  plVar28 = plVar21;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar21 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar19 + 3) < uVar4) {
    func_0x057b8434(0);
  }
  lVar17 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  plVar15 = (long *)func_0x03280b90(plVar21,lVar17);
  if (plVar15 == (long *)0x0) {
    if ((int)uVar4 < (int)plVar19[3]) {
      if (plVar21 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar17 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
        }
        lVar18 = *plVar21;
        uVar25 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar25 != 0) {
          piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar25 = uVar25 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar25 != 0);
        }
        plVar28 = (long *)0x0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar21);
LAB_04145868:
        plVar32 = (long *)(*(code *)*puVar12)(plVar21,puVar12[1]);
        puVar30 = PTR_DAT_0774e8e0;
        if (plVar32 != (long *)0x0) {
          do {
            lVar17 = *plVar32;
            uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar30) {
                  puVar12 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            plVar28 = (long *)0x0;
            puVar12 = (undefined8 *)func_0x03256b10(plVar32);
LAB_041458d0:
            auVar37 = (*(code *)*puVar12)(plVar32,puVar12[1]);
            if ((auVar37._0_8_ & 1) == 0) {
              uVar13 = 0;
              iVar11 = 5;
              if (plVar32 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar17 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = func_0x0325681c(lVar17);
            }
            lVar18 = *plVar32;
            uVar25 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == lVar17) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(plVar32,lVar17,0);
LAB_04145948:
            plVar28 = (long *)(*(code *)*puVar12)(plVar32,puVar12[1]);
            func_0x04145380(plVar19,uVar13,plVar28,
                            *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x160));
            uVar13 = (ulong)((int)uVar13 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar43 = func_0x03280ca4(uVar13);
        if (auVar43._8_4_ != 1) {
          if (plVar32 == (long *)0x0) goto LAB_04145ae0;
          lVar17 = *plVar32;
          uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar25 == 0) goto LAB_04145ab8;
          piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar16 = (ulong *)func_0x072ce910(auVar43._0_8_);
        uVar13 = *puVar16;
        auVar37 = func_0x072ce920();
        iVar11 = 0;
        if (plVar32 != (long *)0x0) {
LAB_04145988:
          lVar17 = *plVar32;
          uVar25 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          plVar28 = (long *)0x0;
          puVar12 = (undefined8 *)func_0x03256b10(plVar32);
LAB_041459dc:
          auVar37 = (*(code *)*puVar12)(plVar32,puVar12[1]);
        }
LAB_041459e8:
      } while (uVar13 != 0);
      if (iVar11 == 5) goto LAB_04145a10;
      if (iVar11 != 0) {
        return auVar37;
      }
    }
    auVar37 = func_0x041462cc(plVar19,plVar21,
                              *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar17 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar18 = *plVar15;
    uVar25 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar17) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar15,lVar17,0);
LAB_04145728:
    auVar37 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    iVar11 = auVar37._0_4_;
    if (0 < iVar11) {
      func_0x04144aa0(plVar19,(int)plVar19[3] + iVar11,
                      *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x78));
      iVar7 = (int)plVar19[3] - uVar4;
      if (iVar7 != 0 && (int)uVar4 <= (int)plVar19[3]) {
        func_0x057b9f30(plVar19[2],uVar4,plVar19[2],iVar11 + uVar4,iVar7,0);
      }
      if (plVar19 == plVar15) {
        func_0x057b9f30(plVar19[2],0,plVar19[2],uVar4,uVar4,0);
        auVar37 = func_0x057b9f30(plVar19[2],iVar11 + uVar4,plVar19[2],uVar4 << 1,
                                  (int)plVar19[3] - uVar4,0);
      }
      else {
        lVar18 = plVar19[2];
        lVar17 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
        }
        lVar26 = *plVar15;
        uVar25 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar25 != 0) {
          piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar26 + (long)(*piVar27 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar25 = uVar25 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar25 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar15,lVar17,5);
LAB_04145838:
        auVar37 = (*(code *)*puVar12)(plVar15,lVar18,uVar4,puVar12[1]);
      }
      *(int *)(plVar19 + 3) = (int)plVar19[3] + iVar11;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar19 + 0x1c) = *(int *)((long)plVar19 + 0x1c) + 1;
  return auVar37;
}

