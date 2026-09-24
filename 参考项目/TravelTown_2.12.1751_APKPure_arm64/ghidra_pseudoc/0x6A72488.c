/* Ghidra 12.1.2 native pseudocode; RVA 0x6A72488; Merger.MergeBoard.Systems.PendingItemsCombinationSystem.PendingSplitConfirmation; status ok */


/* WARNING: Possible PIC construction at 0x06b72534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b72588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b72840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b72704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe4874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe4900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe4248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04fe424c) */
/* WARNING: Removing unreachable block (ram,0x04fe3f94) */
/* WARNING: Removing unreachable block (ram,0x04fe3fa4) */
/* WARNING: Removing unreachable block (ram,0x04fe3e88) */
/* WARNING: Removing unreachable block (ram,0x04fe3fa8) */
/* WARNING: Removing unreachable block (ram,0x04fe3e8c) */
/* WARNING: Removing unreachable block (ram,0x04fe3ec0) */
/* WARNING: Removing unreachable block (ram,0x04fe3ec4) */
/* WARNING: Removing unreachable block (ram,0x04fe3ed4) */
/* WARNING: Removing unreachable block (ram,0x04fe3f08) */
/* WARNING: Removing unreachable block (ram,0x04fe3f14) */
/* WARNING: Removing unreachable block (ram,0x04fe3f18) */
/* WARNING: Removing unreachable block (ram,0x04fe3f28) */
/* WARNING: Removing unreachable block (ram,0x04fe3fb8) */
/* WARNING: Removing unreachable block (ram,0x04fe3fc8) */
/* WARNING: Removing unreachable block (ram,0x04fe3fcc) */
/* WARNING: Removing unreachable block (ram,0x04fe3fd8) */
/* WARNING: Removing unreachable block (ram,0x04fe3f38) */
/* WARNING: Removing unreachable block (ram,0x04fe3f40) */
/* WARNING: Removing unreachable block (ram,0x04fe3f4c) */
/* WARNING: Removing unreachable block (ram,0x04fe3f54) */
/* WARNING: Removing unreachable block (ram,0x04fe3f64) */
/* WARNING: Removing unreachable block (ram,0x04fe4008) */
/* WARNING: Removing unreachable block (ram,0x04fe3f6c) */
/* WARNING: Removing unreachable block (ram,0x04fe3bac) */
/* WARNING: Removing unreachable block (ram,0x04fe4904) */
/* WARNING: Removing unreachable block (ram,0x04fe4878) */
/* WARNING: Removing unreachable block (ram,0x06b72708) */
/* WARNING: Removing unreachable block (ram,0x06b72710) */
/* WARNING: Removing unreachable block (ram,0x06b72844) */
/* WARNING: Removing unreachable block (ram,0x06b72848) */
/* WARNING: Removing unreachable block (ram,0x06b7258c) */
/* WARNING: Removing unreachable block (ram,0x06b72590) */
/* WARNING: Removing unreachable block (ram,0x06b72538) */
/* WARNING: Removing unreachable block (ram,0x06b7254c) */
/* WARNING: Removing unreachable block (ram,0x06b7256c) */
/* WARNING: Removing unreachable block (ram,0x04fe3c58) */
/* WARNING: Removing unreachable block (ram,0x04fe3bc4) */
/* WARNING: Removing unreachable block (ram,0x04fe4170) */
/* WARNING: Removing unreachable block (ram,0x04fe4174) */
/* WARNING: Removing unreachable block (ram,0x04fe4180) */
/* WARNING: Removing unreachable block (ram,0x04fe4188) */
/* WARNING: Removing unreachable block (ram,0x04fe4190) */
/* WARNING: Removing unreachable block (ram,0x04fe4198) */
/* WARNING: Removing unreachable block (ram,0x04fe41b0) */
/* WARNING: Removing unreachable block (ram,0x04fe41b8) */

long * Merger_MergeBoard_Systems_PendingItemsCombinationSystem__PendingSplitConfirmation
                 (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 *extraout_x1;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  int *piVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  uint *puVar33;
  uint *puVar34;
  uint *puVar35;
  long *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  uint *puVar36;
  uint *unaff_x29;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  long *plStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined1 auStack_1e0 [64];
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_148;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  puVar34 = (uint *)PTR_DAT_07831348;
  plVar16 = param_3;
  plVar20 = param_4;
  if ((bRam0000000007e2a6f0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07831348);
    func_0x03280a18(PTR_DAT_07831350);
    bRam0000000007e2a6f0 = 1;
  }
  plVar32 = param_4;
  if ((int)param_3[2] != 4) {
    plVar32 = param_3;
    param_3 = param_4;
  }
  param_3 = (long *)*param_3;
  plVar32 = (long *)*plVar32;
  lVar15 = func_0x03280ca0(*(undefined8 *)puVar34);
  func_0x06b9aca0(lVar15,0);
  if (lVar15 != 0) {
    *(undefined4 *)(lVar15 + 0x10) = 1;
    plVar16 = (long *)(lVar15 + 0x18);
    *plVar16 = (long)param_3;
    goto SUB_032809c4;
  }
  func_0x03280cac();
  plVar30 = (long *)0x7e2a000;
  if ((bRam0000000007e2a6ed & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07831358);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07831360);
    func_0x03280a18(PTR_DAT_07831368);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07831370);
    bRam0000000007e2a6ed = 1;
  }
  puVar8 = PTR_DAT_0777a488;
  if ((plVar16 != (long *)0x0) && (plVar17 = (long *)plVar16[3], plVar17 != (long *)0x0)) {
    if ((char)plVar16[2] == '\0') {
      lVar15 = *(long *)PTR_DAT_07831358;
      uStack_200 = 0x6b72708;
      plStack_1e8 = (long *)PTR_DAT_07831358;
SUB_03d1c438:
      puVar19 = *(undefined8 **)(lVar15 + 0x38);
      plStack_1f0 = plVar16;
      if (puVar19 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_0774e558);
        puVar19 = *(undefined8 **)(lVar15 + 0x38);
        if (puVar19 == (undefined8 *)0x0) {
          func_0x03256878(lVar15);
          puVar19 = *(undefined8 **)(lVar15 + 0x38);
        }
      }
      uVar18 = *puVar19;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar18 = func_0x057a51c4(uVar18,0);
      puStack_1f8 = extraout_x1;
      if ((bRam0000000007e22c55 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c3a80,uVar18,0);
        bRam0000000007e22c55 = 1;
      }
      auVar37._8_8_ = uVar18;
      auVar37._0_8_ = plVar17[2];
      if (plVar17[2] == 0) {
        auVar37 = func_0x03280cac();
        uStack_230 = 0x6014fb4;
        uStack_218 = 0x7e22000;
        plStack_220 = plVar32;
        plStack_210 = plVar17;
        uStack_208 = uVar18;
        if ((bRam0000000007e22c56 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077c3a88);
          func_0x03280a18(PTR_DAT_077c3a50);
          func_0x03280a18(PTR_DAT_07779c58);
          func_0x03280a18(PTR_DAT_077c3a58);
          func_0x03280a18(PTR_DAT_077c3a60);
          func_0x03280a18(PTR_DAT_077c3a68);
          func_0x03280a18(PTR_DAT_077c3a70);
          func_0x03280a18(PTR_DAT_077c3a78);
          bRam0000000007e22c56 = 1;
        }
        uStack_240 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        lVar15 = *(long *)(auVar37._0_8_ + 0x10);
        if (((lVar15 != 0) &&
            (func_0x04fe2f04(lVar15,*(undefined8 *)PTR_DAT_077c3a88), puVar10 = PTR_DAT_077c3a60,
            puVar9 = PTR_DAT_077c3a58, puVar8 = PTR_DAT_07779c58, auVar37._8_8_ != 0)) &&
           (lVar15 = *(long *)(auVar37._8_8_ + 0x10), lVar15 != 0)) {
          func_0x04fe31ac(&uStack_260,lVar15,*(undefined8 *)PTR_DAT_077c3a50);
          while( true ) {
            uVar28 = func_0x0515fbd0(&uStack_260,*(undefined8 *)puVar10);
            if ((uVar28 & 1) == 0) {
              plVar20 = (long *)func_0x0515fcf0(&uStack_260,*(undefined8 *)puVar9);
              return plVar20;
            }
            lVar15 = *(long *)(auVar37._0_8_ + 0x10);
            if (lVar15 == 0) break;
            func_0x04fe2d68(lVar15,uStack_250,uStack_248,*(undefined8 *)puVar8);
          }
          func_0x03280cac();
        }
        auVar38 = func_0x03280cac();
        if (auVar38._8_4_ == 1) {
          plVar20 = (long *)func_0x072ce910(auVar38._0_8_);
          lVar15 = *plVar20;
          func_0x072ce920();
          plVar20 = (long *)func_0x0515fcf0(&uStack_260,*(undefined8 *)PTR_DAT_077c3a58);
          if (lVar15 == 0) {
            return plVar20;
          }
          func_0x03280ca4(lVar15);
        }
        func_0x0515fcf0(&uStack_260,*(undefined8 *)PTR_DAT_077c3a58);
        func_0x03365958(auVar38._0_8_);
        func_0x03280ca4(0);
        lVar15 = func_0x02f09514();
        return *(long **)(lVar15 + 0x10);
      }
      plVar16 = *(long **)PTR_DAT_077c3a80;
      puVar11 = auStack_1e0;
      plVar30 = plStack_1e8;
      plVar17 = plStack_1f0;
      puVar19 = puStack_1f8;
      uVar18 = uStack_200;
      do {
        plVar31 = auVar37._8_8_;
        lVar15 = auVar37._0_8_;
        *(uint **)(puVar11 + -0x60) = unaff_x29;
        *(undefined8 *)(puVar11 + -0x58) = uVar18;
        *(uint **)(puVar11 + -0x50) = unaff_x28;
        *(undefined **)(puVar11 + -0x48) = unaff_x27;
        *(undefined **)(puVar11 + -0x40) = unaff_x26;
        *(long **)(puVar11 + -0x38) = unaff_x25;
        *(uint **)(puVar11 + -0x30) = puVar34;
        *(long **)(puVar11 + -0x28) = param_3;
        *(long **)(puVar11 + -0x20) = plVar32;
        *(undefined8 **)(puVar11 + -0x18) = puVar19;
        *(long **)(puVar11 + -0x10) = plVar17;
        *(long **)(puVar11 + -8) = plVar30;
        *(long **)(puVar11 + -0x68) = plVar16;
        if (plVar31 == (long *)0x0) {
          func_0x057a867c(5);
        }
        if (*(long *)(lVar15 + 0x10) == 0) {
          return (long *)0x0;
        }
        plVar32 = *(long **)(lVar15 + 0x30);
        if (plVar32 == (long *)0x0) {
          if (plVar31 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar31 + 0x158))(plVar31,*(undefined8 *)(*plVar31 + 0x160));
            goto LAB_04fe4354;
          }
LAB_04fe4580:
          func_0x03280cac();
        }
        else {
          lVar21 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0x68) + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
          }
          lVar26 = *plVar32;
          uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == lVar21) {
                puVar19 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                goto LAB_04fe4344;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          puVar19 = (undefined8 *)func_0x03256b10(plVar32,lVar21,1);
LAB_04fe4344:
          plVar16 = (long *)puVar19[1];
          uVar12 = (*(code *)*puVar19)(plVar32,plVar31);
LAB_04fe4354:
          lVar21 = *(long *)(lVar15 + 0x10);
          if (lVar21 == 0) goto LAB_04fe4580;
          uVar24 = *(uint *)(lVar21 + 0x18);
          uVar12 = uVar12 & 0x7fffffff;
          unaff_x27 = (undefined *)(ulong)uVar12;
          iVar5 = 0;
          if (uVar24 != 0) {
            iVar5 = (int)uVar12 / (int)uVar24;
          }
          uVar23 = uVar12 - iVar5 * uVar24;
          if (uVar23 < uVar24) {
            uVar24 = *(int *)(lVar21 + (ulong)uVar23 * 4 + 0x20) - 1;
            if ((int)uVar24 < 0) {
              return (long *)0x0;
            }
            plVar30 = (long *)0x0;
            unaff_x25 = (long *)0xffffffff;
            plVar17 = (long *)0x18;
            *(ulong *)(puVar11 + -0x70) = (ulong)uVar23;
            while( true ) {
              puVar34 = (uint *)(ulong)uVar24;
              unaff_x26 = *(undefined **)(lVar15 + 0x18);
              param_3 = plVar30;
              if (unaff_x26 == (undefined *)0x0) break;
              if (*(uint *)(unaff_x26 + 0x18) <= uVar24) goto LAB_04fe4584;
              unaff_x29 = (uint *)(unaff_x26 + (ulong)uVar24 * 0x18 + 0x20);
              unaff_x28 = puVar34;
              if (*unaff_x29 == uVar12) {
                plVar32 = *(long **)(lVar15 + 0x30);
                if (plVar32 == (long *)0x0) {
                  plVar14 = (long *)func_0x039574b0(*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)(puVar11 + -0x68)
                                                                         + 0x20) + 0xc0) + 0x18));
                  plVar32 = plVar30;
                  if (plVar14 == (long *)0x0) break;
                  plVar20 = *(long **)(*plVar14 + 0x1c0);
                  plVar16 = plVar31;
                  uVar28 = (**(code **)(*plVar14 + 0x1b8))
                                     (plVar14,*(undefined8 *)
                                               (unaff_x26 + (long)puVar34 * 0x18 + 0x28));
                }
                else {
                  if (plVar32 == (long *)0x0) break;
                  lVar21 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0x68) + 0x20) + 0xc0)
                                    + 8);
                  param_3 = *(long **)(unaff_x26 + (long)puVar34 * 0x18 + 0x28);
                  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                    lVar21 = func_0x0325681c(lVar21);
                  }
                  lVar26 = *plVar32;
                  uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar28 != 0) {
                    piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar21) {
                        puVar19 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                        goto LAB_04fe4490;
                      }
                      uVar28 = uVar28 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar28 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x03256b10(plVar32,lVar21,0);
LAB_04fe4490:
                  plVar20 = (long *)puVar19[1];
                  plVar16 = plVar31;
                  uVar28 = (*(code *)*puVar19)(plVar32,param_3);
                  plVar30 = plVar32;
                }
                if ((uVar28 & 1) != 0) {
                  plVar32 = plVar30;
                  if ((int)(uint)unaff_x25 < 0) {
                    lVar21 = *(long *)(lVar15 + 0x10);
                    if (lVar21 == 0) break;
                    if (*(uint *)(lVar21 + 0x18) <= (uint)*(long *)(puVar11 + -0x70))
                    goto LAB_04fe4584;
                    *(int *)(lVar21 + *(long *)(puVar11 + -0x70) * 4 + 0x20) =
                         *(int *)(unaff_x26 + (long)puVar34 * 0x18 + 0x24) + 1;
                  }
                  else {
                    lVar21 = *(long *)(lVar15 + 0x18);
                    if (lVar21 == 0) break;
                    if (*(uint *)(lVar21 + 0x18) <= (uint)unaff_x25) goto LAB_04fe4584;
                    *(undefined4 *)(lVar21 + (long)unaff_x25 * 0x18 + 0x24) =
                         *(undefined4 *)(unaff_x26 + (long)puVar34 * 0x18 + 0x24);
                  }
                  *unaff_x29 = 0xffffffff;
                  uVar3 = *(undefined4 *)(lVar15 + 0x24);
                  *(undefined8 *)(unaff_x26 + (long)puVar34 * 0x18 + 0x28) = 0;
                  *(undefined8 *)(unaff_x26 + (long)puVar34 * 0x18 + 0x30) = 0;
                  *(undefined4 *)(unaff_x26 + (long)puVar34 * 0x18 + 0x24) = uVar3;
                  *(uint *)(lVar15 + 0x24) = uVar24;
                  *(ulong *)(lVar15 + 0x28) =
                       CONCAT44((int)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20) + 1,
                                (int)*(undefined8 *)(lVar15 + 0x28) + 1);
                  return (long *)0x1;
                }
              }
              unaff_x25 = (long *)(ulong)uVar24;
              plVar32 = plVar30;
              uVar24 = *(uint *)(unaff_x26 + (long)puVar34 * 0x18 + 0x24);
              if ((int)*(uint *)(unaff_x26 + (long)puVar34 * 0x18 + 0x24) < 0) {
                return (long *)0x0;
              }
            }
            goto LAB_04fe4580;
          }
        }
LAB_04fe4584:
        auVar37 = func_0x03280cb4();
        plVar30 = auVar37._8_8_;
        lVar21 = auVar37._0_8_;
        *(uint **)(puVar11 + -0xd0) = unaff_x29;
        *(undefined8 *)(puVar11 + -200) = 0x4fe4588;
        *(uint **)(puVar11 + -0xc0) = unaff_x28;
        *(undefined **)(puVar11 + -0xb8) = unaff_x27;
        *(undefined **)(puVar11 + -0xb0) = unaff_x26;
        *(long **)(puVar11 + -0xa8) = unaff_x25;
        *(uint **)(puVar11 + -0xa0) = puVar34;
        *(long **)(puVar11 + -0x98) = param_3;
        *(long **)(puVar11 + -0x90) = plVar32;
        *(long **)(puVar11 + -0x88) = plVar31;
        *(long **)(puVar11 + -0x80) = plVar17;
        *(long *)(puVar11 + -0x78) = lVar15;
        *(long **)(puVar11 + -0xe0) = plVar16;
        *(long **)(puVar11 + -0xd8) = plVar20;
        if (plVar30 == (long *)0x0) {
          func_0x057a867c(5);
        }
        if (*(long *)(lVar21 + 0x10) == 0) goto LAB_04fe47d0;
        puVar33 = *(uint **)(lVar21 + 0x30);
        puVar36 = unaff_x29;
        if (puVar33 == (uint *)0x0) {
          if (plVar30 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar30 + 0x158))(plVar30,*(undefined8 *)(*plVar30 + 0x160));
            goto LAB_04fe4664;
          }
LAB_04fe48a8:
          func_0x03280cac();
        }
        else {
          lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0xd8) + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
          }
          lVar26 = *(long *)puVar33;
          uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == lVar15) {
                puVar19 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                goto LAB_04fe4654;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          puVar19 = (undefined8 *)func_0x03256b10(puVar33,lVar15,1);
LAB_04fe4654:
          plVar16 = (long *)puVar19[1];
          uVar12 = (*(code *)*puVar19)(puVar33,plVar30);
LAB_04fe4664:
          lVar15 = *(long *)(lVar21 + 0x10);
          if (lVar15 == 0) goto LAB_04fe48a8;
          uVar24 = *(uint *)(lVar15 + 0x18);
          uVar12 = uVar12 & 0x7fffffff;
          puVar36 = (uint *)(ulong)uVar12;
          iVar5 = 0;
          if (uVar24 != 0) {
            iVar5 = (int)uVar12 / (int)uVar24;
          }
          uVar23 = uVar12 - iVar5 * uVar24;
          if (uVar23 < uVar24) {
            iVar5 = *(int *)(lVar15 + (ulong)uVar23 * 4 + 0x20);
            *(ulong *)(puVar11 + -0xe8) = (ulong)uVar23;
            uVar24 = iVar5 - 1;
            if ((int)uVar24 < 0) {
LAB_04fe47d0:
              **(undefined8 **)(puVar11 + -0xe0) = 0;
              return (long *)0x0;
            }
            puVar35 = (uint *)0x0;
            unaff_x26 = (undefined *)0xffffffff;
            plVar31 = (long *)0x18;
            while( true ) {
              unaff_x25 = (long *)(ulong)uVar24;
              unaff_x27 = *(undefined **)(lVar21 + 0x18);
              puVar34 = puVar35;
              if (unaff_x27 == (undefined *)0x0) break;
              if (*(uint *)(unaff_x27 + 0x18) <= uVar24) goto LAB_04fe48ac;
              unaff_x28 = (uint *)(unaff_x27 + (ulong)uVar24 * 0x18 + 0x20);
              plVar17 = unaff_x25;
              if (*unaff_x28 == uVar12) {
                puVar33 = *(uint **)(lVar21 + 0x30);
                if (puVar33 == (uint *)0x0) {
                  plVar32 = (long *)func_0x039574b0(*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)(puVar11 + -0xd8)
                                                                         + 0x20) + 0xc0) + 0x18));
                  puVar33 = puVar35;
                  if (plVar32 == (long *)0x0) break;
                  plVar20 = *(long **)(*plVar32 + 0x1c0);
                  plVar16 = plVar30;
                  uVar28 = (**(code **)(*plVar32 + 0x1b8))
                                     (plVar32,*(undefined8 *)
                                               (unaff_x27 + (long)unaff_x25 * 0x18 + 0x28));
                }
                else {
                  if (puVar33 == (uint *)0x0) break;
                  lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0xd8) + 0x20) + 0xc0)
                                    + 8);
                  puVar34 = *(uint **)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28);
                  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                    lVar15 = func_0x0325681c(lVar15);
                  }
                  lVar26 = *(long *)puVar33;
                  uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar28 != 0) {
                    piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar15) {
                        puVar19 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                        goto LAB_04fe47a0;
                      }
                      uVar28 = uVar28 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar28 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x03256b10(puVar33,lVar15,0);
LAB_04fe47a0:
                  plVar20 = (long *)puVar19[1];
                  plVar16 = plVar30;
                  uVar28 = (*(code *)*puVar19)(puVar33,puVar34);
                  puVar35 = puVar33;
                }
                if ((uVar28 & 1) != 0) {
                  puVar33 = puVar35;
                  if ((int)(uint)unaff_x26 < 0) {
                    lVar15 = *(long *)(lVar21 + 0x10);
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= (uint)*(long *)(puVar11 + -0xe8))
                    goto LAB_04fe48ac;
                    *(int *)(lVar15 + *(long *)(puVar11 + -0xe8) * 4 + 0x20) =
                         *(int *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) + 1;
                  }
                  else {
                    lVar15 = *(long *)(lVar21 + 0x18);
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= (uint)unaff_x26) goto LAB_04fe48ac;
                    *(undefined4 *)(lVar15 + (long)unaff_x26 * 0x18 + 0x24) =
                         *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
                  }
                  plVar16 = *(long **)(puVar11 + -0xe0);
                  *plVar16 = *(long *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x30);
                  goto SUB_032809c4;
                }
              }
              unaff_x26 = (undefined *)(ulong)uVar24;
              puVar33 = puVar35;
              uVar24 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
              if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) < 0) goto LAB_04fe47d0;
            }
            goto LAB_04fe48a8;
          }
        }
LAB_04fe48ac:
        lVar15 = func_0x03280cb4();
        *(undefined8 *)(puVar11 + -0x110) = 0x4fe48b0;
        *(long **)(puVar11 + -0x108) = plVar31;
        *(long **)(puVar11 + -0x100) = plVar17;
        *(long *)(puVar11 + -0xf8) = lVar21;
        unaff_x29 = *(uint **)(*(long *)(plVar20[4] + 0xc0) + 0x110);
        uVar12 = func_0x04fe343c();
        if ((int)uVar12 < 0) {
          *plVar16 = 0;
          return (long *)(ulong)(~uVar12 >> 0x1f);
        }
        lVar21 = *(long *)(lVar15 + 0x18);
        if (lVar21 == 0) {
          func_0x03280cac();
        }
        else if (uVar12 < *(uint *)(lVar21 + 0x18)) {
          *plVar16 = *(long *)(lVar21 + (ulong)uVar12 * 0x18 + 0x30);
          goto SUB_032809c4;
        }
        auVar37 = func_0x03280cb4();
        puVar35 = auVar37._8_8_;
        lVar21 = auVar37._0_8_;
        uVar22 = *(ulong *)(*(long *)(plVar20[4] + 0xc0) + 0x118);
        *(uint **)(puVar11 + -0x170) = puVar36;
        *(undefined8 *)(puVar11 + -0x168) = 0x4fe4928;
        *(uint **)(puVar11 + -0x160) = unaff_x28;
        *(undefined **)(puVar11 + -0x158) = unaff_x27;
        *(undefined **)(puVar11 + -0x150) = unaff_x26;
        *(long **)(puVar11 + -0x148) = unaff_x25;
        *(uint **)(puVar11 + -0x140) = puVar34;
        *(uint **)(puVar11 + -0x138) = puVar33;
        *(long **)(puVar11 + -0x130) = plVar30;
        *(long *)(puVar11 + -0x128) = lVar15;
        *(ulong *)(puVar11 + -0x120) = (ulong)uVar12;
        *(long **)(puVar11 + -0x118) = plVar16;
        uVar28 = 0;
        puVar34 = unaff_x29;
        if (puVar35 == (uint *)0x0) {
          func_0x057a867c(5);
        }
        *(int *)(lVar21 + 0x2c) = *(int *)(lVar21 + 0x2c) + 1;
        if (*(long *)(lVar21 + 0x10) == 0) {
          puVar34 = *(uint **)(*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 0x10);
          func_0x04fe3720(lVar21,0);
        }
        plVar20 = *(long **)(lVar21 + 0x30);
        lVar15 = *(long *)(lVar21 + 0x18);
        if (plVar20 == (long *)0x0) {
          if (puVar35 != (uint *)0x0) {
            uVar12 = (**(code **)(*(long *)puVar35 + 0x158))
                               (puVar35,*(undefined8 *)(*(long *)puVar35 + 0x160));
            goto LAB_04fe3908;
          }
        }
        else {
          lVar26 = *(long *)(*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
            lVar26 = func_0x0325681c(lVar26);
          }
          lVar25 = *plVar20;
          uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == lVar26) {
                puVar19 = (undefined8 *)(lVar25 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                goto LAB_04fe38f8;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar19 = (undefined8 *)func_0x03256b10(plVar20,lVar26,1);
LAB_04fe38f8:
          puVar34 = (uint *)puVar19[1];
          uVar12 = (*(code *)*puVar19)(plVar20,puVar35);
LAB_04fe3908:
          lVar26 = *(long *)(lVar21 + 0x10);
          if (lVar26 != 0) {
            uVar24 = *(uint *)(lVar26 + 0x18);
            uVar12 = uVar12 & 0x7fffffff;
            unaff_x27 = (undefined *)(ulong)uVar12;
            iVar5 = 0;
            if (uVar24 != 0) {
              iVar5 = (int)uVar12 / (int)uVar24;
            }
            uVar23 = uVar12 - iVar5 * uVar24;
            plVar32 = plVar20;
            if (uVar23 < uVar24) {
              unaff_x28 = (uint *)(lVar26 + (ulong)uVar23 * 4 + 0x20);
              uVar24 = *unaff_x28 - 1;
              plVar16 = (long *)(ulong)uVar24;
              if (plVar20 == (long *)0x0) {
                plVar32 = (long *)func_0x039574b0(*(undefined8 *)
                                                   (*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) +
                                                   0x18));
                if (lVar15 != 0) {
                  uVar18 = *(undefined8 *)(lVar15 + 0x18);
                  uVar23 = (uint)uVar18;
                  if (uVar24 < uVar23) {
                    *(undefined4 *)(puVar11 + -0x174) = 0;
                    uVar28 = 0;
                    unaff_x25 = (long *)0x18;
                    do {
                      uVar24 = (uint)uVar18;
                      uVar23 = (uint)plVar16;
                      plVar16 = (long *)(long)(int)uVar23;
                      plVar20 = plVar32;
                      if (*(uint *)(lVar15 + (long)(int)uVar23 * 0x18 + 0x20) == uVar12) {
                        if (plVar32 == (long *)0x0) goto LAB_04fe3c74;
                        puVar34 = puVar35;
                        uVar27 = (**(code **)(*plVar32 + 0x1b8))
                                           (plVar32,*(undefined8 *)
                                                     (lVar15 + (long)plVar16 * 0x18 + 0x28),puVar35,
                                            *(undefined8 *)(*plVar32 + 0x1c0));
                        if ((uVar27 & 1) != 0) {
                          if ((*(uint *)(puVar11 + -0x174) & 0xff) == 2) goto LAB_04fe3c5c;
                          if ((*(uint *)(puVar11 + -0x174) & 0xff) != 1) {
                            return (long *)0x0;
                          }
                          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_04fe3c70;
                          plVar16 = (long *)(lVar15 + (long)plVar16 * 0x18 + 0x30);
                          *plVar16 = (long)unaff_x29;
                          goto SUB_032809c4;
                        }
                        uVar24 = *(uint *)(lVar15 + 0x18);
                      }
                      if (uVar24 <= uVar23) goto LAB_04fe3c70;
                      uVar2 = *(uint *)(lVar15 + (long)plVar16 * 0x18 + 0x24);
                      plVar16 = (long *)(ulong)uVar2;
                      if ((int)uVar24 <= (int)uVar28) {
                        func_0x057b8684(0);
                      }
                      uVar18 = *(undefined8 *)(lVar15 + 0x18);
                      uVar28 = (ulong)((int)uVar28 + 1);
                      uVar23 = (uint)uVar18;
                    } while (uVar2 < uVar23);
                  }
                  goto LAB_04fe3ad4;
                }
              }
              else if (lVar15 != 0) {
                uVar18 = *(undefined8 *)(lVar15 + 0x18);
                uVar23 = (uint)uVar18;
                if (uVar24 < uVar23) {
                  *(undefined4 *)(puVar11 + -0x174) = 0;
                  *(uint **)(puVar11 + -0x180) = unaff_x29;
                  unaff_x29 = (uint *)0x0;
                  uVar28 = 0x18;
                  do {
                    uVar24 = (uint)uVar18;
                    uVar23 = (uint)plVar16;
                    plVar16 = (long *)(long)(int)uVar23;
                    if (*(uint *)(lVar15 + (long)(int)uVar23 * 0x18 + 0x20) == uVar12) {
                      lVar26 = *(long *)(*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 8);
                      unaff_x25 = *(long **)(lVar15 + (long)plVar16 * 0x18 + 0x28);
                      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                        lVar26 = func_0x0325681c(lVar26);
                      }
                      lVar25 = *plVar20;
                      uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
                      if (uVar27 != 0) {
                        piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar29 + -2) == lVar26) {
                            puVar19 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
                            goto LAB_04fe39e0;
                          }
                          uVar27 = uVar27 - 1;
                          piVar29 = piVar29 + 4;
                        } while (uVar27 != 0);
                      }
                      puVar19 = (undefined8 *)func_0x03256b10(plVar20,lVar26,0);
LAB_04fe39e0:
                      puVar34 = puVar35;
                      uVar27 = (*(code *)*puVar19)(plVar20,unaff_x25,puVar35,puVar19[1]);
                      if ((uVar27 & 1) != 0) {
                        if ((*(uint *)(puVar11 + -0x174) & 0xff) == 2) {
LAB_04fe3c5c:
                          func_0x057b8580(puVar35,0);
                          return (long *)0x0;
                        }
                        if ((*(uint *)(puVar11 + -0x174) & 0xff) != 1) {
                          return (long *)0x0;
                        }
                        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_04fe3c70;
                        plVar16 = (long *)(lVar15 + (long)plVar16 * 0x18 + 0x30);
                        *plVar16 = *(long *)(puVar11 + -0x180);
                        goto SUB_032809c4;
                      }
                      uVar24 = *(uint *)(lVar15 + 0x18);
                    }
                    if (uVar24 <= uVar23) goto LAB_04fe3c70;
                    uVar2 = *(uint *)(lVar15 + (long)plVar16 * 0x18 + 0x24);
                    plVar16 = (long *)(ulong)uVar2;
                    if ((int)uVar24 <= (int)unaff_x29) {
                      func_0x057b8684(0);
                    }
                    uVar18 = *(undefined8 *)(lVar15 + 0x18);
                    unaff_x29 = (uint *)(ulong)((int)unaff_x29 + 1);
                    uVar23 = (uint)uVar18;
                  } while (uVar2 < uVar23);
                  unaff_x29 = *(uint **)(puVar11 + -0x180);
                }
LAB_04fe3ad4:
                plVar32 = plVar20;
                if (*(int *)(lVar21 + 0x28) < 1) {
                  uVar24 = *(uint *)(lVar21 + 0x20);
                  plVar16 = (long *)(ulong)uVar24;
                  if (uVar24 == uVar23) {
                    func_0x04fe402c(lVar21,*(undefined8 *)
                                            (*(long *)(*(long *)(uVar22 + 0x20) + 0xc0) + 0x1b8));
                    lVar26 = *(long *)(lVar21 + 0x10);
                    *(uint *)(lVar21 + 0x20) = uVar24 + 1;
                    if (lVar26 == 0) goto LAB_04fe3c74;
                    uVar23 = *(uint *)(lVar26 + 0x18);
                    iVar5 = 0;
                    if (uVar23 != 0) {
                      iVar5 = (int)uVar12 / (int)uVar23;
                    }
                    uVar2 = uVar12 - iVar5 * uVar23;
                    if (uVar23 <= uVar2) goto LAB_04fe3c70;
                    lVar15 = *(long *)(lVar21 + 0x18);
                    unaff_x28 = (uint *)(lVar26 + (ulong)uVar2 * 4 + 0x20);
                  }
                  else {
                    lVar15 = *(long *)(lVar21 + 0x18);
                    *(uint *)(lVar21 + 0x20) = uVar24 + 1;
                  }
                  if (lVar15 == 0) goto LAB_04fe3c74;
                  if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_04fe3c70;
                  lVar26 = (long)(int)uVar24;
                }
                else {
                  *(int *)(lVar21 + 0x28) = *(int *)(lVar21 + 0x28) + -1;
                  uVar24 = *(uint *)(lVar21 + 0x24);
                  plVar16 = (long *)(ulong)uVar24;
                  if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_04fe3c70;
                  lVar26 = (long)(int)uVar24;
                  *(undefined4 *)(lVar21 + 0x24) = *(undefined4 *)(lVar15 + lVar26 * 0x18 + 0x24);
                }
                lVar15 = lVar15 + lVar26 * 0x18;
                *(uint *)(lVar15 + 0x20) = uVar12;
                *(uint *)(lVar15 + 0x24) = *unaff_x28 - 1;
                plVar16 = (long *)(lVar15 + 0x28);
                *plVar16 = (long)puVar35;
                goto SUB_032809c4;
              }
            }
            else {
LAB_04fe3c70:
              func_0x03280cb4();
              plVar20 = plVar32;
            }
          }
        }
LAB_04fe3c74:
        lVar21 = func_0x03280cac();
        unaff_x26 = PTR_DAT_07781380;
        *(undefined8 *)(puVar11 + -0x1d0) = 0x4fe3c78;
        *(undefined **)(puVar11 + -0x1c8) = unaff_x27;
        *(long *)(puVar11 + -0x1c0) = lVar15;
        *(long **)(puVar11 + -0x1b8) = unaff_x25;
        *(long **)(puVar11 + -0x1b0) = plVar20;
        *(ulong *)(puVar11 + -0x1a8) = uVar28;
        *(ulong *)(puVar11 + -0x1a0) = uVar22;
        *(undefined1 (*) [16])(puVar11 + -0x198) = auVar37;
        *(long **)(puVar11 + -0x188) = plVar16;
        uVar27 = 0x7e1b000;
        if ((bRam0000000007e1b902 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07781610);
          func_0x03280a18(PTR_DAT_07781618);
          func_0x03280a18(PTR_DAT_07781380);
          func_0x03280a18(PTR_DAT_0774e558);
          func_0x03280a18(PTR_DAT_07781600);
          func_0x03280a18(PTR_DAT_0777e440);
          func_0x03280a18(PTR_DAT_07781608);
          func_0x03280a18(PTR_DAT_0775b648);
          bRam0000000007e1b902 = 1;
        }
        lVar15 = *(long *)unaff_x26;
        *(undefined8 *)(puVar11 + -0x1d8) = 0;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar15 = func_0x057624fc(0);
        if (lVar15 != 0) {
          func_0x04e91150(lVar15,lVar21,puVar11 + -0x1d8,*(undefined8 *)PTR_DAT_07781618);
          if (*(long *)(puVar11 + -0x1d8) == 0) {
            return (long *)0x0;
          }
          uVar13 = func_0x056933d8(*(long *)(puVar11 + -0x1d8),*(undefined8 *)PTR_DAT_0775b648,0);
          puVar8 = PTR_DAT_0774e558;
          if (*(long *)(puVar11 + -0x1d8) != 0) {
            uVar27 = uVar13 & 0xffffffff;
            uVar22 = func_0x056933d8(*(long *)(puVar11 + -0x1d8),*(undefined8 *)PTR_DAT_07781600,0);
            lVar15 = *(long *)puVar8;
            lVar26 = *(long *)(puVar11 + -0x1d8);
            uVar22 = uVar22 & 0xffffffff;
            plVar20 = *(long **)(*(long *)(*(long *)(puVar34 + 8) + 0xc0) + 0x170);
            if (*(int *)(lVar15 + 0xe0) == 0) {
              func_0x03280b8c(lVar15);
            }
            uVar18 = func_0x057a51c4(plVar20,0);
            uVar28 = 0;
            unaff_x27 = puVar8;
            if (lVar26 != 0) {
              lVar15 = func_0x05690f88(lVar26,*(undefined8 *)PTR_DAT_0777e440,uVar18,0);
              lVar26 = *(long *)(*(long *)(*(long *)(puVar34 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                lVar26 = func_0x0325681c(lVar26);
              }
              if (lVar15 == 0) {
LAB_04fe3e2c:
                lVar25 = 0;
              }
              else {
                lVar25 = func_0x03280b90(lVar15,lVar26);
                if (lVar25 == 0) {
                  func_0x03281048(lVar15,lVar26);
                  goto LAB_04fe3e2c;
                }
              }
              plVar16 = (long *)(lVar21 + 0x30);
              *plVar16 = lVar25;
              lVar21 = *(long *)(*(long *)(*(long *)(puVar34 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = func_0x0325681c(lVar21);
              }
              if ((lVar15 != 0) && (lVar26 = func_0x03280b90(lVar15,lVar21), lVar26 == 0)) {
                func_0x03281048(lVar15,lVar21);
              }
              goto SUB_032809c4;
            }
          }
        }
        func_0x03280cac();
        func_0x057b819c(0x10,0);
        func_0x03280cac();
        auVar37 = func_0x03281048(plVar20,uVar28);
        puVar8 = PTR_DAT_07781380;
        plVar30 = auVar37._0_8_;
        *(undefined8 *)(puVar11 + -0x210) = 0x4fe402c;
        *(ulong *)(puVar11 + -0x200) = uVar22;
        *(ulong *)(puVar11 + -0x1f8) = uVar27;
        *(uint **)(puVar11 + -0x1f0) = puVar34;
        *(long *)(puVar11 + -0x1e8) = lVar21;
        if ((bRam0000000007e1b903 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07781380);
          bRam0000000007e1b903 = 1;
        }
        lVar15 = plVar30[4];
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar12 = func_0x05762478((int)lVar15,0);
        puVar8 = PTR_DAT_07754420;
        plVar17 = (long *)(ulong)uVar12;
        lVar15 = *(long *)(*(long *)(*(long *)(auVar37._8_8_ + 0x20) + 0xc0) + 0x1c8);
        *(undefined8 *)(puVar11 + -0x230) = *(undefined8 *)(puVar11 + -0x210);
        *(undefined **)(puVar11 + -0x220) = unaff_x26;
        *(long **)(puVar11 + -0x218) = unaff_x25;
        *(long **)(puVar11 + -0x210) = plVar20;
        *(ulong *)(puVar11 + -0x208) = uVar28;
        *(undefined8 *)(puVar11 + -0x200) = *(undefined8 *)(puVar11 + -0x200);
        *(undefined8 *)(puVar11 + -0x1f8) = *(undefined8 *)(puVar11 + -0x1f8);
        *(undefined8 *)(puVar11 + -0x1f0) = *(undefined8 *)(puVar11 + -0x1f0);
        *(undefined8 *)(puVar11 + -0x1e8) = *(undefined8 *)(puVar11 + -0x1e8);
        unaff_x25 = (long *)0x0;
        if ((bRam0000000007e1b904 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07754420);
          bRam0000000007e1b904 = 1;
        }
        puVar19 = (undefined8 *)func_0x03280afc(*(undefined8 *)puVar8,plVar17);
        lVar15 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x1b0);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
        }
        param_3 = (long *)func_0x03280afc(lVar15,plVar17);
        plVar32 = plVar30 + 3;
        uVar24 = *(uint *)(plVar30 + 4);
        puVar34 = (uint *)(ulong)uVar24;
        plVar20 = (long *)0x0;
        plVar16 = param_3;
        func_0x057b9f30(*plVar32,0,param_3,0,puVar34,0);
        if ((int)uVar24 < 1) goto LAB_04fe423c;
        if (param_3 != (long *)0x0) {
          uVar24 = *(uint *)(param_3 + 3);
          puVar33 = (uint *)0x0;
          while (puVar33 < (uint *)(ulong)uVar24) {
            iVar5 = (int)param_3[(long)puVar33 * 3 + 4];
            if (-1 < iVar5) {
              if (puVar19 == (undefined8 *)0x0) goto LAB_04fe4274;
              iVar4 = 0;
              if (uVar12 != 0) {
                iVar4 = iVar5 / (int)uVar12;
              }
              uVar23 = iVar5 - iVar4 * uVar12;
              if (*(uint *)(puVar19 + 3) <= uVar23) break;
              *(int *)((long)param_3 + (long)puVar33 * 0x18 + 0x24) =
                   *(int *)((long)puVar19 + (ulong)uVar23 * 4 + 0x20) + -1;
              *(int *)((long)puVar19 + (ulong)uVar23 * 4 + 0x20) = (int)puVar33 + 1;
            }
            puVar33 = (uint *)((long)puVar33 + 1);
            if (puVar33 == puVar34) goto LAB_04fe423c;
          }
          func_0x03280cb4();
        }
LAB_04fe4274:
        uVar18 = 0x4fe4278;
        auVar37 = func_0x03280cac();
        puVar11 = puVar11 + -0x230;
      } while( true );
    }
    func_0x03d1b250(&plStack_1a0,plVar17,*(undefined8 *)PTR_DAT_0777a488);
    plVar20 = plStack_198;
    if (plVar16[4] != 0) {
      uVar18 = func_0x03d1b250(&plStack_1a0,plVar16[4],*(undefined8 *)puVar8);
      uStack_e8 = extraout_x1[1];
      uStack_f0 = *extraout_x1;
      uStack_d8 = extraout_x1[3];
      uStack_e0 = extraout_x1[2];
      plVar32 = (long *)Merger_MergeBoard_Systems_PendingItemsCombinationSystem__FindPendingVerificationPairs
                                  (uVar18,&uStack_f0,plVar20);
      plVar30 = plVar20;
      if (plVar32 != (long *)0x0) {
        lVar15 = *plVar32;
        uVar28 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_07831360) {
              puVar19 = (undefined8 *)(lVar15 + (long)*piVar29 * 0x10 + 0x138);
              plVar20 = plStack_198;
              goto LAB_06b72740;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        puVar19 = (undefined8 *)func_0x03256b10(plVar32,*(long *)PTR_DAT_07831360,0);
        plVar20 = plStack_198;
LAB_06b72740:
        plVar30 = (long *)(*(code *)*puVar19)(plVar32,puVar19[1]);
        unaff_x28 = (uint *)PTR_DAT_07831370;
        unaff_x26 = PTR_DAT_07831368;
        unaff_x27 = PTR_DAT_07831358;
        unaff_x25 = (long *)PTR_DAT_0774e8e0;
        if (plVar30 == (long *)0x0) goto LAB_06b72934;
        lVar15 = *plVar30;
        uVar28 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0774e8e0) {
              puVar19 = (undefined8 *)(lVar15 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_06b727c0;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        puVar19 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0774e8e0,0);
LAB_06b727c0:
        plVar32 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
        if (((ulong)plVar32 & 1) == 0) {
          plVar16 = (long *)0x0;
          goto LAB_06b728a0;
        }
        lVar15 = *plVar30;
        uVar28 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)unaff_x26) {
              puVar19 = (undefined8 *)(lVar15 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_06b7281c;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        puVar19 = (undefined8 *)func_0x03256b10(plVar30,*(long *)unaff_x26,0);
LAB_06b7281c:
        (*(code *)*puVar19)(&plStack_1a0,plVar30,puVar19[1]);
        if (plStack_1a0 != (long *)0x0) {
          lVar15 = *(long *)unaff_x27;
          uStack_200 = 0x6b72844;
          plVar17 = plStack_1a0;
          plStack_1e8 = plVar30;
          plVar32 = plStack_148;
          param_3 = plStack_1a0;
          goto SUB_03d1c438;
        }
        func_0x03280cac();
        func_0x03280cac();
      }
    }
  }
  func_0x03280cac();
LAB_06b72934:
  func_0x03280cac();
  while( true ) {
    auVar38 = func_0x03280ca4(plVar16);
    if (auVar38._8_4_ != 1) break;
    puVar19 = (undefined8 *)func_0x072ce910(auVar38._0_8_);
    plVar16 = (long *)*puVar19;
    plVar32 = (long *)func_0x072ce920();
LAB_06b728a0:
    if (plVar30 != (long *)0x0) {
      lVar15 = *plVar30;
      uVar28 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar15 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_06b728f8;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b728f8:
      plVar32 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
    }
    if (plVar16 == (long *)0x0) {
      return plVar32;
    }
  }
  if (plVar30 != (long *)0x0) {
    lVar15 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar19 = (undefined8 *)(lVar15 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_06b729e4;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b729e4:
    (*(code *)*puVar19)(plVar30,puVar19[1]);
  }
  func_0x03365958(auVar38._0_8_);
  func_0x03280ca4(0);
  plVar20 = (long *)func_0x02f09514();
  return plVar20;
LAB_04fe423c:
  plVar16 = plVar30 + 2;
  *plVar16 = (long)puVar19;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar16 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar16 >> 0xc & 0x3f);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  return plVar16;
}

