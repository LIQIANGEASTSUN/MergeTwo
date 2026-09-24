/* Ghidra 12.1.2 native pseudocode; RVA 0x6743BA0; Merger.Game.Views.Board.BoardQueueView2.ActivateGameObject; status ok */


/* WARNING: Possible PIC construction at 0x06843c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07247724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07247850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072478dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07247968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072479f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07248060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06843e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x07248064) */
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x07247728) */
/* WARNING: Removing unreachable block (ram,0x07247738) */
/* WARNING: Removing unreachable block (ram,0x06843c30) */
/* WARNING: Removing unreachable block (ram,0x06843c38) */
/* WARNING: Removing unreachable block (ram,0x06843c4c) */
/* WARNING: Removing unreachable block (ram,0x06843c6c) */
/* WARNING: Removing unreachable block (ram,0x06843cb8) */
/* WARNING: Removing unreachable block (ram,0x06843cc4) */
/* WARNING: Removing unreachable block (ram,0x06843cd8) */
/* WARNING: Removing unreachable block (ram,0x06843c78) */
/* WARNING: Removing unreachable block (ram,0x06843c84) */
/* WARNING: Removing unreachable block (ram,0x06843c98) */
/* WARNING: Removing unreachable block (ram,0x06843cf0) */
/* WARNING: Removing unreachable block (ram,0x06843cf4) */
/* WARNING: Removing unreachable block (ram,0x06feb448) */
/* WARNING: Removing unreachable block (ram,0x06feb46c) */
/* WARNING: Removing unreachable block (ram,0x06feb480) */
/* WARNING: Removing unreachable block (ram,0x06843e34) */
/* WARNING: Removing unreachable block (ram,0x06843e4c) */
/* WARNING: Removing unreachable block (ram,0x06843e50) */
/* WARNING: Removing unreachable block (ram,0x06843e64) */
/* WARNING: Removing unreachable block (ram,0x06843e6c) */
/* WARNING: Removing unreachable block (ram,0x06843e88) */
/* WARNING: Removing unreachable block (ram,0x06843e90) */
/* WARNING: Removing unreachable block (ram,0x06f90108) */
/* WARNING: Removing unreachable block (ram,0x06f90120) */
/* WARNING: Removing unreachable block (ram,0x06f90134) */

long * Merger_Game_Views_Board_BoardQueueView2__ActivateGameObject(ulong param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int *piVar31;
  long lVar32;
  ulong uVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  plVar25 = (long *)PTR_DAT_0774e4e0;
  puVar9 = &stack0xffffffffffffffd0;
  puVar34 = (undefined *)0x7e28000;
  if ((bRam0000000007e28a86 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e28a86 = 1;
  }
  if (*(int *)(*plVar25 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar20 = (long *)func_0x06fe04ec(param_1,0,0);
  if (((ulong)plVar20 & 1) != 0) {
    return plVar20;
  }
  lVar21 = func_0x06fdbed0(param_1,0);
  if (lVar21 != 0) {
    uVar33 = (ulong)(param_2 & 1);
    uVar38 = 0x6843c30;
    uVar22 = uVar33;
    goto SUB_06fdf26c;
  }
  uVar22 = func_0x03280cac();
  puVar34 = PTR_DAT_0780df28;
  puVar9 = &stack0xffffffffffffffa0;
  uVar33 = 0x7e28000;
  if ((bRam0000000007e28a77 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780df28);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a77 = 1;
  }
  plVar20 = (long *)func_0x05369b3c(uVar22,*(undefined8 *)puVar34);
  if (((ulong)plVar20 & 1) == 0) {
    return plVar20;
  }
  if (*(long *)(uVar22 + 0x28) != 0) {
    uVar23 = func_0x0674b664(*(long *)(uVar22 + 0x28),0);
    if ((uVar23 & 1) == 0) {
      fVar40 = *(float *)(uVar22 + 0x90);
      fVar39 = (float)func_0x06fd6310(0);
      *(float *)(uVar22 + 0x90) = fVar40 + fVar39;
      if (*(long *)(uVar22 + 0x28) != 0) {
        iVar12 = func_0x0674b69c(*(long *)(uVar22 + 0x28),0);
        if ((*(int *)(uVar22 + 0x80) < iVar12) ||
           (*(float *)(uVar22 + 0x90) <= *(float *)(uVar22 + 0x84))) {
LAB_06843e10:
          uVar33 = 0;
        }
        else {
          if (*(long *)(uVar22 + 0x28) == 0) goto LAB_06843eb4;
          uVar33 = func_0x0674b6f0(*(long *)(uVar22 + 0x28),0);
          if ((uVar33 & 1) != 0) goto LAB_06843e10;
          uVar33 = (ulong)(*(char *)(uVar22 + 0x94) != '\0');
        }
        if ((*(long *)(uVar22 + 0x78) != 0) &&
           (lVar21 = func_0x06fdbed0(*(long *)(uVar22 + 0x78),0), lVar21 != 0)) {
          uVar38 = 0x6843e34;
          param_1 = uVar33;
SUB_06fdf26c:
          *(undefined8 *)(puVar9 + -0x20) = uVar38;
          *(undefined **)(puVar9 + -0x18) = puVar34;
          *(ulong *)(puVar9 + -0x10) = param_1;
          *(ulong *)(puVar9 + -8) = uVar22;
          if (pcRam0000000007e2fbf0 == (code *)0x0) {
            pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
          }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar25 = (long *)(*pcRam0000000007e2fbf0)(lVar21,uVar33);
          return plVar25;
        }
      }
    }
    else if ((*(long *)(uVar22 + 0x78) != 0) &&
            (lVar21 = func_0x06fdbed0(*(long *)(uVar22 + 0x78),0), lVar21 != 0)) {
      uVar38 = 0x6843d1c;
      puVar34 = (undefined *)0x7e28000;
      uVar33 = 0;
      puVar9 = &stack0xffffffffffffffd0;
      uVar22 = (ulong)param_2;
      goto SUB_06fdf26c;
    }
  }
LAB_06843eb4:
  plVar24 = (long *)func_0x03280cac();
  uStack_80 = 0x6843eb8;
  plVar20 = plVar24;
  uStack_70 = uVar33;
  uStack_68 = uVar22;
  if ((bRam0000000007e28a78 & 1) == 0) {
    plVar20 = (long *)func_0x03280a18(PTR_DAT_07772cf0);
    bRam0000000007e28a78 = 1;
  }
  puVar35 = PTR_DAT_07772cf0;
  if (*(char *)((long)plVar24 + 0x95) == '\0') {
    return plVar20;
  }
  lVar21 = func_0x06842f08(plVar24);
  if (*(int *)(*(long *)puVar35 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar35);
  }
  plVar20 = (long *)PTR_DAT_07772cf0;
  puStack_78 = puVar34;
  plVar24 = (long *)0x7e33000;
  if ((bRam0000000007e3393a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772cf0,0);
    func_0x03280a18(PTR_DAT_0785cbd8);
    func_0x03280a18(PTR_DAT_0785cbe0);
    bRam0000000007e3393a = 1;
  }
  lVar26 = *plVar20;
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar26 = *plVar20;
  }
  if ((**(long **)(lVar26 + 0xb8) == 0) ||
     (plVar27 = (long *)func_0x0442218c(**(long **)(lVar26 + 0xb8),*(undefined8 *)PTR_DAT_0785cbd8),
     plVar27 == (long *)0x0)) {
    uVar38 = 0x7247758;
    auVar43 = func_0x03280cac();
  }
  else {
    func_0x07247284(plVar27,lVar21);
    auVar43._8_4_ = 1;
    auVar43._0_8_ = plVar27;
    uVar38 = 0x7247728;
    plVar24 = plVar27;
  }
  plVar16 = auVar43._0_8_;
  plVar27 = plVar16;
  if ((bRam0000000007e3393b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785cbe8);
    func_0x03280a18(PTR_DAT_0785cbf0);
    func_0x03280a18(PTR_DAT_0785cbf8);
    func_0x03280a18(PTR_DAT_0785cc00);
    func_0x03280a18(PTR_DAT_0785cb80);
    plVar27 = (long *)func_0x03280a18(PTR_DAT_0785cc08);
    bRam0000000007e3393b = 1;
  }
  puVar34 = PTR_DAT_0785cb80;
  if (auVar43._8_4_ != 1) {
    return plVar27;
  }
  lVar29 = plVar16[2];
  lVar26 = *(long *)PTR_DAT_0785cb80;
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar26 = *(long *)puVar34;
  }
  lVar32 = *(long *)(*(long *)(lVar26 + 0xb8) + 0x10);
  if (lVar32 == 0) {
    if (*(int *)(lVar26 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar26 = *(long *)puVar34;
    }
    uVar38 = **(undefined8 **)(lVar26 + 0xb8);
    lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
    func_0x0479b274(lVar21,uVar38,*(undefined8 *)PTR_DAT_0785cbe8,0);
    plVar20 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x10);
    *plVar20 = lVar21;
  }
  else {
    func_0x07247a24(plVar16,lVar29,lVar32);
    lVar26 = *(long *)puVar34;
    lVar29 = plVar16[2];
    if (*(int *)(lVar26 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar26 = *(long *)puVar34;
    }
    lVar32 = *(long *)(*(long *)(lVar26 + 0xb8) + 0x18);
    if (lVar32 == 0) {
      if (*(int *)(lVar26 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar26 = *(long *)puVar34;
      }
      uVar38 = **(undefined8 **)(lVar26 + 0xb8);
      lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
      func_0x0479b274(lVar21,uVar38,*(undefined8 *)PTR_DAT_0785cbf0,0);
      plVar20 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x18);
      *plVar20 = lVar21;
    }
    else {
      func_0x07247cf4(plVar16,lVar29,lVar32);
      lVar26 = *(long *)puVar34;
      lVar29 = plVar16[2];
      if (*(int *)(lVar26 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar26 = *(long *)puVar34;
      }
      lVar32 = *(long *)(*(long *)(lVar26 + 0xb8) + 0x20);
      if (lVar32 == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar26 = *(long *)puVar34;
        }
        uVar38 = **(undefined8 **)(lVar26 + 0xb8);
        lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
        func_0x0479b274(lVar21,uVar38,*(undefined8 *)PTR_DAT_0785cbf8,0);
        plVar20 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x20);
        *plVar20 = lVar21;
      }
      else {
        func_0x07247a24(plVar16,lVar29,lVar32);
        lVar26 = *(long *)puVar34;
        plVar27 = (long *)plVar16[2];
        if (*(int *)(lVar26 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar26 = *(long *)puVar34;
        }
        lVar29 = *(long *)(*(long *)(lVar26 + 0xb8) + 0x28);
        if (lVar29 != 0) {
          puVar14 = &uStack_80;
          do {
            plVar17 = plVar27;
            puVar34 = PTR_DAT_0774e4e0;
            *(undefined **)((long)puVar14 + -0x60) = unaff_x29;
            *(undefined8 *)((long)puVar14 + -0x58) = uVar38;
            *(undefined **)((long)puVar14 + -0x50) = unaff_x28;
            *(undefined **)((long)puVar14 + -0x48) = unaff_x27;
            *(undefined **)((long)puVar14 + -0x40) = unaff_x26;
            *(undefined **)((long)puVar14 + -0x38) = unaff_x25;
            *(long **)((long)puVar14 + -0x30) = unaff_x24;
            *(undefined8 *)((long)puVar14 + -0x28) = unaff_x23;
            *(long **)((long)puVar14 + -0x20) = plVar25;
            *(long **)((long)puVar14 + -0x18) = plVar20;
            *(long **)((long)puVar14 + -0x10) = plVar24;
            *(long *)((long)puVar14 + -8) = lVar21;
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
            plVar25 = (long *)func_0x06fe04ec(plVar17,0,0);
            unaff_x26 = PTR_DAT_0777a040;
            if (((ulong)plVar25 & 1) != 0) {
              return plVar25;
            }
            if (*(int *)(*(long *)PTR_DAT_0777a040 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            plVar25 = (long *)func_0x04d7c8fc(*(undefined8 *)PTR_DAT_0777a030);
            uVar22 = *(ulong *)PTR_DAT_0785cc10;
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            uVar38 = func_0x057a51c4(uVar22,0);
            if (plVar17 == (long *)0x0) {
LAB_072480b8:
              auVar41 = func_0x03280cac();
              puVar35 = PTR_DAT_0774e4e0;
              lVar26 = auVar41._8_8_;
              lVar21 = auVar41._0_8_;
              *(undefined8 *)((long)puVar14 + -0xa0) = 0x72480bc;
              *(long **)((long)puVar14 + -0x90) = unaff_x24;
              *(ulong *)((long)puVar14 + -0x88) = uVar22;
              *(long **)((long)puVar14 + -0x80) = plVar25;
              *(long **)((long)puVar14 + -0x78) = plVar16;
              *(long **)((long)puVar14 + -0x70) = plVar17;
              *(long *)((long)puVar14 + -0x68) = lVar29;
              uVar38 = 0x7e33000;
              if ((bRam0000000007e3393f & 1) == 0) {
                func_0x03280a18(PTR_DAT_077501b0);
                func_0x03280a18(PTR_DAT_0785cc10);
                func_0x03280a18(PTR_DAT_0777a060);
                func_0x03280a18(PTR_DAT_0777a068);
                func_0x03280a18(PTR_DAT_0774e4e0);
                func_0x03280a18(PTR_DAT_0774e558);
                bRam0000000007e3393f = 1;
              }
              if (*(int *)(*(long *)puVar35 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar33 = func_0x06fe04ec(lVar21,0,0);
              if ((uVar33 & 1) != 0) {
                return (long *)0x0;
              }
              if (lVar21 != 0) {
                uVar38 = func_0x06fdbed0(lVar21,0);
                if (*(int *)(*(long *)puVar35 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)puVar35);
                }
                uVar33 = func_0x06fe04ec(uVar38,0,0);
                if ((uVar33 & 1) != 0) {
                  return (long *)0x0;
                }
                uVar38 = *(undefined8 *)PTR_DAT_0785cc10;
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar19 = func_0x057a51c4(uVar38,0);
                func_0x06fdc650(lVar21,uVar19,lVar26,0);
                puVar8 = PTR_DAT_0777a068;
                puVar7 = PTR_DAT_077501b0;
                if (lVar26 != 0) {
                  if (0 < *(int *)(lVar26 + 0x18)) {
                    iVar12 = 0;
                    do {
                      plVar25 = (long *)func_0x0414419c(lVar26,iVar12,*(undefined8 *)puVar8);
                      if (*(int *)(*(long *)puVar35 + 0xe0) == 0) {
                        func_0x03280b8c(*(long *)puVar35);
                      }
                      uVar22 = func_0x06fdeb74(plVar25,0,0);
                      if (((uVar22 & 1) != 0) && (plVar25 != (long *)0x0)) {
                        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
                        if ((bVar1 <= *(byte *)(*plVar25 + 0x130)) &&
                           ((*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar1 * 8 + -8) ==
                             *(long *)puVar7 &&
                            (uVar22 = func_0x06fdb3e4(plVar25,0), (uVar22 & 1) != 0)))) {
                          return (long *)0x1;
                        }
                      }
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < *(int *)(lVar26 + 0x18));
                  }
                  return (long *)0x0;
                }
              }
              uVar19 = func_0x03280cac();
              puVar7 = PTR_DAT_0774e4e0;
              *(undefined8 *)((long)puVar14 + -0xc0) = 0x72482b0;
              *(undefined8 *)((long)puVar14 + -0xb8) = uVar38;
              *(undefined1 (*) [16])((long)puVar14 + -0xb0) = auVar41;
              if ((bRam0000000007e33940 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0780cee0);
                func_0x03280a18(PTR_DAT_07772cf0);
                func_0x03280a18(PTR_DAT_0785cbd8);
                func_0x03280a18(PTR_DAT_0785cbe0);
                func_0x03280a18(PTR_DAT_0774e4e0);
                bRam0000000007e33940 = 1;
              }
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              plVar25 = (long *)func_0x06fe04ec(uVar19,0,0);
              puVar7 = PTR_DAT_07772cf0;
              if (((ulong)plVar25 & 1) != 0) {
                return plVar25;
              }
              lVar21 = *(long *)PTR_DAT_07772cf0;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar21 = *(long *)puVar7;
              }
              plVar20 = (long *)0x7e33000;
              if ((**(long **)(lVar21 + 0xb8) != 0) &&
                 (plVar25 = (long *)func_0x0442218c(**(long **)(lVar21 + 0xb8),
                                                    *(undefined8 *)PTR_DAT_0785cbd8),
                 plVar25 != (long *)0x0)) {
                func_0x07247284(plVar25,uVar19);
                if (*(int *)(*(long *)PTR_DAT_0780cee0 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                plVar20 = (long *)func_0x070d7e10(plVar25,0);
                if (((ulong)plVar20 & 1) != 0) {
                  return plVar20;
                }
                lVar21 = *(long *)puVar7;
                if (*(int *)(lVar21 + 0xe0) == 0) {
                  func_0x03280b8c();
                  lVar21 = *(long *)puVar7;
                }
                lVar21 = **(long **)(lVar21 + 0xb8);
                plVar20 = plVar25;
                if (lVar21 != 0) {
                  uVar38 = *(undefined8 *)((long)puVar14 + -0xb0);
                  uVar36 = *(undefined8 *)((long)puVar14 + -0xa8);
                  lVar26 = *(long *)PTR_DAT_0785cbe0;
                  puVar10 = (undefined1 *)((long)puVar14 + -0xa0);
                  uVar19 = *(undefined8 *)((long)puVar14 + -0xc0);
                  uVar37 = *(undefined8 *)((long)puVar14 + -0xb8);
                  goto LAB_044222c4;
                }
              }
              plVar25 = (long *)func_0x03280cac();
              puVar8 = PTR_DAT_07772cf0;
              *(undefined8 *)((long)puVar14 + -0xe0) = 0x72483f4;
              *(undefined **)((long)puVar14 + -0xd8) = puVar7;
              *(long **)((long)puVar14 + -0xd0) = plVar20;
              *(undefined8 *)((long)puVar14 + -200) = uVar19;
              if ((bRam0000000007e33941 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07772cf0);
                func_0x03280a18(PTR_DAT_0785cbe0);
                bRam0000000007e33941 = 1;
              }
              lVar21 = *(long *)puVar8;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar21 = *(long *)puVar8;
              }
              lVar21 = **(long **)(lVar21 + 0xb8);
              if (lVar21 == 0) {
                plVar25 = (long *)func_0x03280cac();
                return plVar25;
              }
              uVar38 = *(undefined8 *)((long)puVar14 + -0xd0);
              uVar36 = *(undefined8 *)((long)puVar14 + -200);
              lVar26 = *(long *)PTR_DAT_0785cbe0;
              puVar10 = (undefined1 *)((long)puVar14 + -0xc0);
              uVar19 = *(undefined8 *)((long)puVar14 + -0xe0);
              uVar37 = *(undefined8 *)((long)puVar14 + -0xd8);
              goto LAB_044222c4;
            }
            func_0x06fdc650(plVar17,uVar38,plVar25,0);
            if (*(int *)(*(long *)PTR_DAT_07772cf0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x07247590(plVar25);
            unaff_x28 = PTR_DAT_0785cc18;
            unaff_x27 = PTR_DAT_0777a068;
            if (plVar25 == (long *)0x0) goto LAB_072480b8;
            if ((int)plVar25[3] < 1) goto LAB_0724807c;
            uVar22 = 0;
            do {
              uVar38 = func_0x0414419c(plVar25,uVar22,*(undefined8 *)unaff_x27);
              lVar21 = func_0x03280b90(uVar38,*(undefined8 *)unaff_x28);
              if (lVar21 != 0) {
                uVar38 = func_0x0414419c(plVar25,uVar22,*(undefined8 *)unaff_x27);
                if (lVar29 == 0) goto LAB_072480b8;
                (**(code **)(lVar29 + 0x18))
                          (*(undefined8 *)(lVar29 + 0x40),uVar38,*(undefined8 *)(lVar29 + 0x28));
              }
              puVar35 = PTR_DAT_0784bb60;
              uVar11 = (int)uVar22 + 1;
              uVar22 = (ulong)uVar11;
            } while ((int)uVar11 < (int)plVar25[3]);
            if (0 < (int)plVar25[3]) {
              uVar22 = 0;
              do {
                uVar38 = func_0x0414419c(plVar25,uVar22,*(undefined8 *)unaff_x27);
                lVar21 = func_0x03280b90(uVar38,*(undefined8 *)unaff_x28);
                if (lVar21 == 0) {
                  unaff_x24 = (long *)func_0x0414419c(plVar25,uVar22,*(undefined8 *)unaff_x27);
                  if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                    func_0x03280b8c(*(long *)puVar34);
                  }
                  uVar33 = func_0x06fe351c(unaff_x24,0);
                  if (((uVar33 & 1) != 0) && (unaff_x24 != (long *)0x0)) {
                    lVar21 = *(long *)puVar35;
                    bVar1 = *(byte *)(lVar21 + 0x130);
                    if ((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
                       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) == lVar21)) {
                      unaff_x24 = (long *)unaff_x24[4];
                      if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                        func_0x03280b8c();
                      }
                      uVar33 = func_0x06fdeb74(unaff_x24,plVar17,0);
                      if ((uVar33 & 1) == 0) goto LAB_07247ffc;
                    }
                  }
                  uVar38 = func_0x0414419c(plVar25,uVar22,*(undefined8 *)unaff_x27);
                  if (lVar29 == 0) goto LAB_072480b8;
                  (**(code **)(lVar29 + 0x18))
                            (*(undefined8 *)(lVar29 + 0x40),uVar38,*(undefined8 *)(lVar29 + 0x28));
                }
LAB_07247ffc:
                uVar11 = (int)uVar22 + 1;
                uVar22 = (ulong)uVar11;
                unaff_x29 = puVar35;
              } while ((int)uVar11 < (int)plVar25[3]);
            }
            iVar12 = func_0x06fed540(plVar17,0);
            unaff_x24 = (long *)PTR_DAT_077502a0;
            if (iVar12 < 1) goto LAB_0724807c;
            unaff_x23 = 0;
            plVar27 = (long *)func_0x06fedba8(plVar17,0,0);
            if (plVar27 == (long *)0x0) {
              plVar27 = (long *)0x0;
            }
            else if (*plVar27 != *unaff_x24) {
              plVar27 = (long *)0x0;
            }
            uVar38 = 0x7248064;
            puVar14 = (undefined8 *)((long)puVar14 + -0x60);
            lVar21 = lVar29;
            plVar24 = plVar17;
            plVar20 = plVar16;
            unaff_x25 = puVar34;
          } while( true );
        }
        if (*(int *)(lVar26 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar26 = *(long *)puVar34;
        }
        uVar38 = **(undefined8 **)(lVar26 + 0xb8);
        lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0785cc08);
        func_0x0479b274(lVar21,uVar38,*(undefined8 *)PTR_DAT_0785cc00,0);
        plVar20 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x28);
        *plVar20 = lVar21;
      }
    }
  }
  goto SUB_032809c4;
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar31 = piVar31 + 4;
    if (uVar22 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar14 = (undefined8 *)(lVar21 + (long)*piVar31 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar25 = (long *)0x0;
  puVar14 = (undefined8 *)func_0x03256b10(plVar24);
LAB_04145ad4:
  (*(code *)*puVar14)(plVar24,puVar14[1]);
LAB_04145ae0:
  func_0x03365958(auVar43._0_8_);
  func_0x03280ca4(0);
  auVar41 = func_0x02f09514();
  lVar21 = auVar41._0_8_;
  *(undefined8 *)(puVar10 + -0xc0) = 0x4145af8;
  *(long *)(puVar10 + -0xb0) = lVar29;
  *(long **)(puVar10 + -0xa8) = plVar20;
  uVar11 = func_0x03f898d4(*(undefined8 *)(lVar21 + 0x10),auVar41._8_8_,0,
                           *(undefined4 *)(lVar21 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar25[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar11) {
    func_0x04145da4(lVar21,uVar11);
  }
  return (long *)(ulong)(~uVar11 >> 0x1f);
LAB_0724807c:
  if (*(int *)(*(long *)unaff_x26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar35 = *(undefined **)((long)puVar14 + -0x20);
  lVar26 = *(long *)PTR_DAT_0777a038;
  unaff_x24 = *(long **)((long)puVar14 + -0x30);
  uVar22 = *(ulong *)((long)puVar14 + -0x28);
  puVar34 = *(undefined **)((long)puVar14 + -0x38);
  *(undefined8 *)((long)puVar14 + -0x20) = *(undefined8 *)((long)puVar14 + -0x58);
  *(undefined8 *)((long)puVar14 + -0x18) = *(undefined8 *)((long)puVar14 + -0x18);
  *(undefined8 *)((long)puVar14 + -0x10) = *(undefined8 *)((long)puVar14 + -0x10);
  *(undefined8 *)((long)puVar14 + -8) = *(undefined8 *)((long)puVar14 + -8);
  lVar21 = *(long *)(lVar26 + 0x20);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c(lVar21);
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar21 = *(long *)(lVar26 + 0x20);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = **(long **)(lVar21 + 0xb8);
  if (lVar21 == 0) {
    lVar21 = func_0x03280cac();
    *(undefined8 *)((long)puVar14 + -0x50) = 0x4d7cae4;
    *(ulong *)((long)puVar14 + -0x48) = uVar22;
    *(undefined **)((long)puVar14 + -0x40) = puVar35;
    *(undefined8 *)((long)puVar14 + -0x38) = 0;
    *(long *)((long)puVar14 + -0x30) = lVar26;
    *(long **)((long)puVar14 + -0x28) = plVar25;
    lVar26 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x50);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    if (*(int *)(lVar26 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar26 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x50);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar29 = *(long *)(lVar21 + 0x20);
    uVar38 = **(undefined8 **)(lVar26 + 0xb8);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar29 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar19 = func_0x03280ca0();
    lVar29 = *(long *)(lVar21 + 0x20);
    uVar2 = *(ushort *)(lVar29 + 0x135);
    lVar26 = lVar29;
    if ((uVar2 & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
      uVar2 = *(ushort *)(*(long *)(lVar21 + 0x20) + 0x135);
      lVar26 = *(long *)(lVar21 + 0x20);
    }
    uVar36 = *(undefined8 *)(*(long *)(lVar29 + 0xc0) + 0x58);
    if ((uVar2 & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    func_0x05347354(uVar19,uVar38,uVar36,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x68));
    lVar26 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x50);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar29 = *(long *)(lVar21 + 0x20);
    uVar38 = **(undefined8 **)(lVar26 + 0xb8);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar29 + 0xc0) + 0x78) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar36 = func_0x03280ca0();
    lVar29 = *(long *)(lVar21 + 0x20);
    uVar2 = *(ushort *)(lVar29 + 0x135);
    lVar26 = lVar29;
    if ((uVar2 & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
      uVar2 = *(ushort *)(*(long *)(lVar21 + 0x20) + 0x135);
      lVar26 = *(long *)(lVar21 + 0x20);
    }
    uVar37 = *(undefined8 *)(*(long *)(lVar29 + 0xc0) + 0x70);
    if ((uVar2 & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    func_0x054221d4(uVar36,uVar38,uVar37,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x80));
    lVar26 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar38 = func_0x03280ca0();
    lVar26 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    *(undefined8 *)((long)puVar14 + -0x60) = *(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x88);
    func_0x04421fc4(uVar38,uVar19,0,uVar36,0,1,10,10000);
    lVar26 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    **(undefined8 **)(lVar26 + 0xb8) = uVar38;
    lVar21 = *(long *)(lVar21 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    plVar20 = *(long **)(lVar21 + 0xb8);
    goto SUB_032809c4;
  }
  lVar26 = *(long *)(lVar26 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  uVar38 = *(undefined8 *)((long)puVar14 + -0x10);
  uVar36 = *(undefined8 *)((long)puVar14 + -8);
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x40);
  uVar19 = *(undefined8 *)((long)puVar14 + -0x20);
  uVar37 = *(undefined8 *)((long)puVar14 + -0x18);
  puVar10 = (undefined1 *)puVar14;
LAB_044222c4:
  *(undefined8 *)(puVar10 + -0x20) = uVar19;
  *(undefined8 *)(puVar10 + -0x18) = uVar37;
  *(undefined8 *)(puVar10 + -0x10) = uVar38;
  *(undefined8 *)(puVar10 + -8) = uVar36;
  lVar29 = *(long *)(lVar21 + 0x28);
  if (lVar29 != 0) {
    (**(code **)(lVar29 + 0x18))
              (*(undefined8 *)(lVar29 + 0x40),plVar25,*(undefined8 *)(lVar29 + 0x28));
  }
  plVar20 = *(long **)(lVar21 + 0x10);
  if (plVar20 == (long *)0x0) {
LAB_044223b4:
    uVar38 = 0x44223b8;
    auVar41 = func_0x03280cac();
    puVar10 = puVar10 + -0x20;
LAB_044223b8:
    lVar29 = auVar41._8_8_;
    plVar20 = auVar41._0_8_;
    *(undefined8 *)(puVar10 + -0x30) = uVar38;
    *(undefined **)(puVar10 + -0x20) = puVar35;
    *(long *)(puVar10 + -0x18) = lVar26;
    *(long *)(puVar10 + -0x10) = lVar21;
    *(long **)(puVar10 + -8) = plVar25;
    *(undefined8 *)(puVar10 + -0x50) = 0;
    *(undefined8 *)(puVar10 + -0x48) = 0;
    *(undefined8 *)(puVar10 + -0x40) = 0;
    plVar25 = plVar20;
    if (plVar20[6] == 0) goto LAB_04422470;
    if (plVar20[2] != 0) {
      func_0x04145068(puVar10 + -0x68,plVar20[2],
                      *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0xa0));
      *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x60);
      *(undefined8 *)(puVar10 + -0x50) = *(undefined8 *)(puVar10 + -0x68);
      *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x58);
      while( true ) {
        uVar22 = func_0x051159b4(puVar10 + -0x50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0xc0))
        ;
        if ((uVar22 & 1) == 0) {
          lVar26 = 0;
          iVar12 = 5;
          goto LAB_0442244c;
        }
        lVar21 = plVar20[6];
        if (lVar21 == 0) break;
        (**(code **)(lVar21 + 0x18))
                  (*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(puVar10 + -0x40),
                   *(undefined8 *)(lVar21 + 0x28));
      }
      func_0x03280cac();
      lVar21 = lVar29;
    }
    do {
      func_0x03280cac();
      lVar29 = lVar21;
      do {
        auVar43 = func_0x03280ca4(lVar26);
        puVar35 = auVar43._0_8_;
        if (auVar43._8_4_ != 1) {
          lVar26 = 0;
          func_0x051159b0(puVar10 + -0x50,
                          *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 200));
          func_0x03365958(puVar35);
          func_0x03280ca4(0);
          uVar38 = 0x4422528;
          auVar42 = func_0x02f09514();
          auVar41._8_8_ = *(undefined8 *)(*(long *)(*(long *)(auVar42._8_8_ + 0x20) + 0xc0) + 0xd8);
          auVar41._0_8_ = auVar42._0_8_;
          puVar10 = puVar10 + -0x70;
          plVar25 = plVar20;
          lVar21 = lVar29;
          goto LAB_044223b8;
        }
        plVar25 = (long *)func_0x072ce910(puVar35);
        lVar26 = *plVar25;
        func_0x072ce920();
        iVar12 = 0;
LAB_0442244c:
        plVar25 = (long *)func_0x051159b0(puVar10 + -0x50,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 200));
      } while (lVar26 != 0);
      lVar21 = lVar29;
      if ((iVar12 != 5) && (iVar12 != 0)) {
        return plVar25;
      }
LAB_04422470:
      lVar29 = plVar20[2];
      if (lVar29 != 0) {
        iVar12 = *(int *)(lVar29 + 0x18);
        *(undefined4 *)(lVar29 + 0x18) = 0;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (0 < iVar12) {
          plVar25 = (long *)func_0x057b9c7c(*(undefined8 *)(lVar29 + 0x10),0,iVar12,0);
        }
        *(undefined4 *)(plVar20 + 8) = 0;
        return plVar25;
      }
    } while( true );
  }
  uVar11 = *(uint *)(plVar20 + 3);
  if (*(int *)(lVar21 + 0x38) <= (int)uVar11) {
    lVar26 = *(long *)(lVar21 + 0x30);
    *(int *)(lVar21 + 0x40) = *(int *)(lVar21 + 0x40) + -1;
    if (lVar26 == 0) {
      return plVar20;
    }
                    /* WARNING: Could not recover jumptable at 0x04422388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar25 = (long *)(**(code **)(lVar26 + 0x18))
                                (*(undefined8 *)(lVar26 + 0x40),plVar25,
                                 *(undefined8 *)(lVar26 + 0x28));
    return plVar25;
  }
  lVar29 = plVar20[2];
  lVar32 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x98);
  *(int *)((long)plVar20 + 0x1c) = *(int *)((long)plVar20 + 0x1c) + 1;
  if (lVar29 == 0) goto LAB_044223b4;
  if (uVar11 < *(uint *)(lVar29 + 0x18)) {
    *(uint *)(plVar20 + 3) = uVar11 + 1;
    plVar20 = (long *)(lVar29 + (long)(int)uVar11 * 8 + 0x20);
    *plVar20 = (long)plVar25;
    goto SUB_032809c4;
  }
  lVar21 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70);
  *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x20);
  *(undefined **)(puVar10 + -0x20) = puVar35;
  *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
  *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
  *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  uVar3 = *(uint *)(plVar20 + 3);
  uVar11 = uVar3 + 1;
  lVar21 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(plVar20,(ulong)uVar11);
  lVar26 = plVar20[2];
  *(uint *)(plVar20 + 3) = uVar11;
  if (lVar26 == 0) {
    func_0x03280cac();
  }
  else if (uVar3 < *(uint *)(lVar26 + 0x18)) {
    plVar20 = (long *)(lVar26 + (long)(int)uVar3 * 8 + 0x20);
    *plVar20 = (long)plVar25;
    goto SUB_032809c4;
  }
  auVar41 = func_0x03280cb4();
  lVar32 = auVar41._8_8_;
  lVar26 = auVar41._0_8_;
  *(undefined8 *)(puVar10 + -0x60) = 0x41444d8;
  *(long *)(puVar10 + -0x50) = (long)(int)uVar3;
  *(ulong *)(puVar10 + -0x48) = (ulong)uVar11;
  *(long **)(puVar10 + -0x40) = plVar20;
  *(long **)(puVar10 + -0x38) = plVar25;
  lVar28 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar32,0x14);
  lVar29 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  if (lVar32 == 0) {
LAB_0414454c:
    lVar13 = 0;
  }
  else {
    lVar13 = func_0x03280b90(lVar32,lVar29);
    if (lVar13 == 0) {
      func_0x03281048(lVar32,lVar29);
      goto LAB_0414454c;
    }
  }
  lVar29 = *(long *)(lVar26 + 0x10);
  lVar30 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
  if (lVar29 != 0) {
    uVar11 = *(uint *)(lVar26 + 0x18);
    if (uVar11 < *(uint *)(lVar29 + 0x18)) {
      *(uint *)(lVar26 + 0x18) = uVar11 + 1;
      plVar20 = (long *)(lVar29 + (long)(int)uVar11 * 8 + 0x20);
      *plVar20 = lVar13;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar18 = (ulong *)(((ulong)plVar20 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar5) {
            *puVar18 = *puVar18 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      return plVar20;
    }
    func_0x0414446c(lVar26,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70)
                   );
LAB_041445ac:
    return (long *)(ulong)(*(int *)(lVar26 + 0x18) - 1);
  }
  auVar43 = func_0x03280cac();
  uVar38 = auVar43._0_8_;
  if (auVar43._8_4_ == 1) {
    puVar14 = (undefined8 *)func_0x072ce910(uVar38);
    uVar38 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar33 = func_0x032810d8(uVar38,*(undefined8 *)*puVar14);
    if ((uVar33 & 1) != 0) {
      func_0x072ce920();
      uVar38 = *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x68);
      lVar21 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar38 = func_0x057a51c4(uVar38,0);
      func_0x057b7b18(lVar32,uVar38,0);
      goto LAB_041445ac;
    }
    puVar15 = (undefined8 *)func_0x072ce930(8);
    *puVar15 = *puVar14;
    lVar28 = 0;
    uVar38 = func_0x072ce940(puVar15,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar38);
  auVar41 = func_0x02f09514();
  plVar27 = auVar41._8_8_;
  plVar20 = auVar41._0_8_;
  uVar11 = *(uint *)(plVar20 + 3);
  lVar29 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x90);
  uVar33 = (ulong)uVar11;
  *(undefined8 *)(puVar10 + -0xa0) = 0x4144678;
  *(undefined **)(puVar10 + -0x98) = puVar34;
  *(long **)(puVar10 + -0x90) = unaff_x24;
  *(ulong *)(puVar10 + -0x88) = uVar22;
  *(undefined8 *)(puVar10 + -0x80) = uVar38;
  *(long *)(puVar10 + -0x78) = lVar21;
  *(long *)(puVar10 + -0x70) = lVar32;
  *(long *)(puVar10 + -0x68) = lVar26;
  plVar24 = (long *)0x7e18000;
  plVar25 = plVar27;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar27 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar20 + 3) < uVar11) {
    func_0x057b8434(0);
  }
  lVar21 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c(lVar21);
  }
  plVar16 = (long *)func_0x03280b90(plVar27,lVar21);
  if (plVar16 == (long *)0x0) {
    if ((int)uVar11 < (int)plVar20[3]) {
      if (plVar27 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar21 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        lVar26 = *plVar27;
        uVar22 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar22 != 0) {
          piVar31 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == lVar21) {
              puVar14 = (undefined8 *)(lVar26 + (long)*piVar31 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar22 = uVar22 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar22 != 0);
        }
        plVar25 = (long *)0x0;
        puVar14 = (undefined8 *)func_0x03256b10(plVar27);
LAB_04145868:
        plVar24 = (long *)(*(code *)*puVar14)(plVar27,puVar14[1]);
        puVar34 = PTR_DAT_0774e8e0;
        if (plVar24 != (long *)0x0) {
          do {
            lVar21 = *plVar24;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar22 != 0) {
              piVar31 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)puVar34) {
                  puVar14 = (undefined8 *)(lVar21 + (long)*piVar31 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar22 = uVar22 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar22 != 0);
            }
            plVar25 = (long *)0x0;
            puVar14 = (undefined8 *)func_0x03256b10(plVar24);
LAB_041458d0:
            plVar17 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
            if (((ulong)plVar17 & 1) == 0) {
              uVar33 = 0;
              iVar12 = 5;
              if (plVar24 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar21 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c(lVar21);
            }
            lVar26 = *plVar24;
            uVar22 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar22 != 0) {
              piVar31 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == lVar21) {
                  puVar14 = (undefined8 *)(lVar26 + (long)*piVar31 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar22 = uVar22 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar22 != 0);
            }
            puVar14 = (undefined8 *)func_0x03256b10(plVar24,lVar21,0);
LAB_04145948:
            plVar25 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
            func_0x04145380(plVar20,uVar33,plVar25,
                            *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x160));
            uVar33 = (ulong)((int)uVar33 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar43 = func_0x03280ca4(uVar33);
        if (auVar43._8_4_ != 1) {
          if (plVar24 == (long *)0x0) goto LAB_04145ae0;
          lVar21 = *plVar24;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar22 == 0) goto LAB_04145ab8;
          piVar31 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar18 = (ulong *)func_0x072ce910(auVar43._0_8_);
        uVar33 = *puVar18;
        plVar17 = (long *)func_0x072ce920();
        iVar12 = 0;
        if (plVar24 != (long *)0x0) {
LAB_04145988:
          lVar21 = *plVar24;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar22 != 0) {
            piVar31 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar14 = (undefined8 *)(lVar21 + (long)*piVar31 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar22 = uVar22 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar22 != 0);
          }
          plVar25 = (long *)0x0;
          puVar14 = (undefined8 *)func_0x03256b10(plVar24);
LAB_041459dc:
          plVar17 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
        }
LAB_041459e8:
      } while (uVar33 != 0);
      if (iVar12 == 5) goto LAB_04145a10;
      if (iVar12 != 0) {
        return plVar17;
      }
    }
    plVar17 = (long *)func_0x041462cc(plVar20,plVar27,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar21 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar26 = *plVar16;
    uVar22 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar22 != 0) {
      piVar31 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == lVar21) {
          puVar14 = (undefined8 *)(lVar26 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar22 = uVar22 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar22 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar16,lVar21,0);
LAB_04145728:
    plVar17 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
    iVar12 = (int)plVar17;
    if (0 < iVar12) {
      func_0x04144aa0(plVar20,(int)plVar20[3] + iVar12,
                      *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x78));
      iVar6 = (int)plVar20[3] - uVar11;
      if (iVar6 != 0 && (int)uVar11 <= (int)plVar20[3]) {
        func_0x057b9f30(plVar20[2],uVar11,plVar20[2],iVar12 + uVar11,iVar6,0);
      }
      if (plVar20 == plVar16) {
        func_0x057b9f30(plVar20[2],0,plVar20[2],uVar11,uVar11,0);
        plVar17 = (long *)func_0x057b9f30(plVar20[2],iVar12 + uVar11,plVar20[2],uVar11 << 1,
                                          (int)plVar20[3] - uVar11,0);
      }
      else {
        lVar26 = plVar20[2];
        lVar21 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        lVar29 = *plVar16;
        uVar22 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar22 != 0) {
          piVar31 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == lVar21) {
              puVar14 = (undefined8 *)(lVar29 + (long)(*piVar31 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar22 = uVar22 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar22 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar16,lVar21,5);
LAB_04145838:
        plVar17 = (long *)(*(code *)*puVar14)(plVar16,lVar26,uVar11,puVar14[1]);
      }
      *(int *)(plVar20 + 3) = (int)plVar20[3] + iVar12;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar20 + 0x1c) = *(int *)((long)plVar20 + 0x1c) + 1;
  return plVar17;
}

