/* Ghidra 12.1.2 native pseudocode; RVA 0x6A725C4; Merger.MergeBoard.Systems.PendingItemsCombinationSystem.HandleCombinationVerification; status ok */


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

long * Merger_MergeBoard_Systems_PendingItemsCombinationSystem__HandleCombinationVerification
                 (undefined8 param_1,undefined8 *param_2,undefined *param_3,long *param_4)

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
  undefined1 *puVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  long *plVar28;
  undefined *puVar29;
  long *unaff_x22;
  long *plVar30;
  uint *puVar31;
  long *unaff_x23;
  uint *puVar32;
  uint *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  uint *puVar33;
  uint *unaff_x29;
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  long *plStack_178;
  undefined1 auStack_170 [64];
  long *plStack_130;
  long *plStack_128;
  long *plStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar28 = (long *)0x7e2a000;
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
  puVar29 = PTR_DAT_0777a488;
  if ((param_3 != (undefined *)0x0) &&
     (plVar14 = *(long **)(param_3 + 0x18), plVar14 != (long *)0x0)) {
    if (param_3[0x10] == '\0') {
      lVar24 = *(long *)PTR_DAT_07831358;
      uStack_190 = 0x6b72708;
      plStack_178 = (long *)PTR_DAT_07831358;
SUB_03d1c438:
      puVar17 = *(undefined8 **)(lVar24 + 0x38);
      puStack_180 = param_3;
      if (puVar17 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_0774e558);
        puVar17 = *(undefined8 **)(lVar24 + 0x38);
        if (puVar17 == (undefined8 *)0x0) {
          func_0x03256878(lVar24);
          puVar17 = *(undefined8 **)(lVar24 + 0x38);
        }
      }
      uVar15 = *puVar17;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar15 = func_0x057a51c4(uVar15,0);
      puStack_188 = param_2;
      if ((bRam0000000007e22c55 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c3a80,uVar15,0);
        bRam0000000007e22c55 = 1;
      }
      auVar34._8_8_ = uVar15;
      auVar34._0_8_ = plVar14[2];
      if (plVar14[2] == 0) {
        auVar34 = func_0x03280cac();
        uStack_1c0 = 0x6014fb4;
        uStack_1a8 = 0x7e22000;
        plStack_1a0 = plVar14;
        uStack_198 = uVar15;
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
        uStack_1d0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        lVar24 = *(long *)(auVar34._0_8_ + 0x10);
        if (((lVar24 != 0) &&
            (func_0x04fe2f04(lVar24,*(undefined8 *)PTR_DAT_077c3a88), puVar9 = PTR_DAT_077c3a60,
            puVar8 = PTR_DAT_077c3a58, puVar29 = PTR_DAT_07779c58, auVar34._8_8_ != 0)) &&
           (lVar24 = *(long *)(auVar34._8_8_ + 0x10), lVar24 != 0)) {
          func_0x04fe31ac(&uStack_1f0,lVar24,*(undefined8 *)PTR_DAT_077c3a50);
          while( true ) {
            uVar26 = func_0x0515fbd0(&uStack_1f0,*(undefined8 *)puVar9);
            if ((uVar26 & 1) == 0) {
              plVar28 = (long *)func_0x0515fcf0(&uStack_1f0,*(undefined8 *)puVar8);
              return plVar28;
            }
            lVar24 = *(long *)(auVar34._0_8_ + 0x10);
            if (lVar24 == 0) break;
            func_0x04fe2d68(lVar24,uStack_1e0,uStack_1d8,*(undefined8 *)puVar29);
          }
          func_0x03280cac();
        }
        auVar35 = func_0x03280cac();
        if (auVar35._8_4_ == 1) {
          plVar28 = (long *)func_0x072ce910(auVar35._0_8_);
          lVar24 = *plVar28;
          func_0x072ce920();
          plVar28 = (long *)func_0x0515fcf0(&uStack_1f0,*(undefined8 *)PTR_DAT_077c3a58);
          if (lVar24 == 0) {
            return plVar28;
          }
          func_0x03280ca4(lVar24);
        }
        func_0x0515fcf0(&uStack_1f0,*(undefined8 *)PTR_DAT_077c3a58);
        func_0x03365958(auVar35._0_8_);
        func_0x03280ca4(0);
        lVar24 = func_0x02f09514();
        return *(long **)(lVar24 + 0x10);
      }
      plVar28 = *(long **)PTR_DAT_077c3a80;
      puVar10 = auStack_170;
      plVar14 = plStack_178;
      puVar29 = puStack_180;
      puVar17 = puStack_188;
      uVar15 = uStack_190;
      do {
        plVar16 = auVar34._8_8_;
        lVar24 = auVar34._0_8_;
        *(uint **)(puVar10 + -0x60) = unaff_x29;
        *(undefined8 *)(puVar10 + -0x58) = uVar15;
        *(uint **)(puVar10 + -0x50) = unaff_x28;
        *(undefined **)(puVar10 + -0x48) = unaff_x27;
        *(undefined **)(puVar10 + -0x40) = unaff_x26;
        *(undefined **)(puVar10 + -0x38) = unaff_x25;
        *(uint **)(puVar10 + -0x30) = unaff_x24;
        *(long **)(puVar10 + -0x28) = unaff_x23;
        *(long **)(puVar10 + -0x20) = unaff_x22;
        *(undefined8 **)(puVar10 + -0x18) = puVar17;
        *(undefined **)(puVar10 + -0x10) = puVar29;
        *(long **)(puVar10 + -8) = plVar14;
        *(long **)(puVar10 + -0x68) = plVar28;
        if (plVar16 == (long *)0x0) {
          func_0x057a867c(5);
        }
        if (*(long *)(lVar24 + 0x10) == 0) {
          return (long *)0x0;
        }
        plVar14 = *(long **)(lVar24 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (plVar16 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar16 + 0x158))(plVar16,*(undefined8 *)(*plVar16 + 0x160));
            goto LAB_04fe4354;
          }
LAB_04fe4580:
          func_0x03280cac();
        }
        else {
          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0x68) + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = func_0x0325681c(lVar18);
          }
          lVar23 = *plVar14;
          uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar18) {
                puVar17 = (undefined8 *)(lVar23 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_04fe4344;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar14,lVar18,1);
LAB_04fe4344:
          plVar28 = (long *)puVar17[1];
          uVar11 = (*(code *)*puVar17)(plVar14,plVar16);
LAB_04fe4354:
          lVar18 = *(long *)(lVar24 + 0x10);
          if (lVar18 == 0) goto LAB_04fe4580;
          uVar21 = *(uint *)(lVar18 + 0x18);
          uVar11 = uVar11 & 0x7fffffff;
          unaff_x27 = (undefined *)(ulong)uVar11;
          iVar5 = 0;
          if (uVar21 != 0) {
            iVar5 = (int)uVar11 / (int)uVar21;
          }
          uVar20 = uVar11 - iVar5 * uVar21;
          if (uVar20 < uVar21) {
            uVar21 = *(int *)(lVar18 + (ulong)uVar20 * 4 + 0x20) - 1;
            if ((int)uVar21 < 0) {
              return (long *)0x0;
            }
            plVar30 = (long *)0x0;
            unaff_x25 = (undefined *)0xffffffff;
            puVar29 = (undefined *)0x18;
            *(ulong *)(puVar10 + -0x70) = (ulong)uVar20;
            while( true ) {
              unaff_x24 = (uint *)(ulong)uVar21;
              unaff_x26 = *(undefined **)(lVar24 + 0x18);
              unaff_x23 = plVar30;
              if (unaff_x26 == (undefined *)0x0) break;
              if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_04fe4584;
              unaff_x29 = (uint *)(unaff_x26 + (ulong)uVar21 * 0x18 + 0x20);
              unaff_x28 = unaff_x24;
              if (*unaff_x29 == uVar11) {
                plVar14 = *(long **)(lVar24 + 0x30);
                if (plVar14 == (long *)0x0) {
                  plVar13 = (long *)func_0x039574b0(*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)(puVar10 + -0x68)
                                                                         + 0x20) + 0xc0) + 0x18));
                  plVar14 = plVar30;
                  if (plVar13 == (long *)0x0) break;
                  param_4 = *(long **)(*plVar13 + 0x1c0);
                  plVar28 = plVar16;
                  uVar26 = (**(code **)(*plVar13 + 0x1b8))
                                     (plVar13,*(undefined8 *)
                                               (unaff_x26 + (long)unaff_x24 * 0x18 + 0x28));
                }
                else {
                  if (plVar14 == (long *)0x0) break;
                  lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0x68) + 0x20) + 0xc0)
                                    + 8);
                  unaff_x23 = *(long **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
                  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                    lVar18 = func_0x0325681c(lVar18);
                  }
                  lVar23 = *plVar14;
                  uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  if (uVar26 != 0) {
                    piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar18) {
                        puVar17 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_04fe4490;
                      }
                      uVar26 = uVar26 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x03256b10(plVar14,lVar18,0);
LAB_04fe4490:
                  param_4 = (long *)puVar17[1];
                  plVar28 = plVar16;
                  uVar26 = (*(code *)*puVar17)(plVar14,unaff_x23);
                  plVar30 = plVar14;
                }
                if ((uVar26 & 1) != 0) {
                  plVar14 = plVar30;
                  if ((int)(uint)unaff_x25 < 0) {
                    lVar18 = *(long *)(lVar24 + 0x10);
                    if (lVar18 == 0) break;
                    if (*(uint *)(lVar18 + 0x18) <= (uint)*(long *)(puVar10 + -0x70))
                    goto LAB_04fe4584;
                    *(int *)(lVar18 + *(long *)(puVar10 + -0x70) * 4 + 0x20) =
                         *(int *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) + 1;
                  }
                  else {
                    lVar18 = *(long *)(lVar24 + 0x18);
                    if (lVar18 == 0) break;
                    if (*(uint *)(lVar18 + 0x18) <= (uint)unaff_x25) goto LAB_04fe4584;
                    *(undefined4 *)(lVar18 + (long)unaff_x25 * 0x18 + 0x24) =
                         *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
                  }
                  *unaff_x29 = 0xffffffff;
                  uVar3 = *(undefined4 *)(lVar24 + 0x24);
                  *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
                  *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x30) = 0;
                  *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar3;
                  *(uint *)(lVar24 + 0x24) = uVar21;
                  *(ulong *)(lVar24 + 0x28) =
                       CONCAT44((int)((ulong)*(undefined8 *)(lVar24 + 0x28) >> 0x20) + 1,
                                (int)*(undefined8 *)(lVar24 + 0x28) + 1);
                  return (long *)0x1;
                }
              }
              unaff_x25 = (undefined *)(ulong)uVar21;
              plVar14 = plVar30;
              uVar21 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
              if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
                return (long *)0x0;
              }
            }
            goto LAB_04fe4580;
          }
        }
LAB_04fe4584:
        auVar34 = func_0x03280cb4();
        plVar30 = auVar34._8_8_;
        lVar18 = auVar34._0_8_;
        *(uint **)(puVar10 + -0xd0) = unaff_x29;
        *(undefined8 *)(puVar10 + -200) = 0x4fe4588;
        *(uint **)(puVar10 + -0xc0) = unaff_x28;
        *(undefined **)(puVar10 + -0xb8) = unaff_x27;
        *(undefined **)(puVar10 + -0xb0) = unaff_x26;
        *(undefined **)(puVar10 + -0xa8) = unaff_x25;
        *(uint **)(puVar10 + -0xa0) = unaff_x24;
        *(long **)(puVar10 + -0x98) = unaff_x23;
        *(long **)(puVar10 + -0x90) = plVar14;
        *(long **)(puVar10 + -0x88) = plVar16;
        *(undefined **)(puVar10 + -0x80) = puVar29;
        *(long *)(puVar10 + -0x78) = lVar24;
        *(long **)(puVar10 + -0xe0) = plVar28;
        *(long **)(puVar10 + -0xd8) = param_4;
        if (plVar30 == (long *)0x0) {
          func_0x057a867c(5);
        }
        if (*(long *)(lVar18 + 0x10) == 0) goto LAB_04fe47d0;
        puVar31 = *(uint **)(lVar18 + 0x30);
        puVar33 = unaff_x29;
        if (puVar31 == (uint *)0x0) {
          if (plVar30 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar30 + 0x158))(plVar30,*(undefined8 *)(*plVar30 + 0x160));
            goto LAB_04fe4664;
          }
LAB_04fe48a8:
          func_0x03280cac();
        }
        else {
          lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0xd8) + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = func_0x0325681c(lVar24);
          }
          lVar23 = *(long *)puVar31;
          uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar24) {
                puVar17 = (undefined8 *)(lVar23 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_04fe4654;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(puVar31,lVar24,1);
LAB_04fe4654:
          plVar28 = (long *)puVar17[1];
          uVar11 = (*(code *)*puVar17)(puVar31,plVar30);
LAB_04fe4664:
          lVar24 = *(long *)(lVar18 + 0x10);
          if (lVar24 == 0) goto LAB_04fe48a8;
          uVar21 = *(uint *)(lVar24 + 0x18);
          uVar11 = uVar11 & 0x7fffffff;
          puVar33 = (uint *)(ulong)uVar11;
          iVar5 = 0;
          if (uVar21 != 0) {
            iVar5 = (int)uVar11 / (int)uVar21;
          }
          uVar20 = uVar11 - iVar5 * uVar21;
          if (uVar20 < uVar21) {
            iVar5 = *(int *)(lVar24 + (ulong)uVar20 * 4 + 0x20);
            *(ulong *)(puVar10 + -0xe8) = (ulong)uVar20;
            uVar21 = iVar5 - 1;
            if ((int)uVar21 < 0) {
LAB_04fe47d0:
              **(undefined8 **)(puVar10 + -0xe0) = 0;
              return (long *)0x0;
            }
            puVar32 = (uint *)0x0;
            unaff_x26 = (undefined *)0xffffffff;
            plVar16 = (long *)0x18;
            while( true ) {
              unaff_x25 = (undefined *)(ulong)uVar21;
              unaff_x27 = *(undefined **)(lVar18 + 0x18);
              unaff_x24 = puVar32;
              if (unaff_x27 == (undefined *)0x0) break;
              if (*(uint *)(unaff_x27 + 0x18) <= uVar21) goto LAB_04fe48ac;
              unaff_x28 = (uint *)(unaff_x27 + (ulong)uVar21 * 0x18 + 0x20);
              puVar29 = unaff_x25;
              if (*unaff_x28 == uVar11) {
                puVar31 = *(uint **)(lVar18 + 0x30);
                if (puVar31 == (uint *)0x0) {
                  plVar14 = (long *)func_0x039574b0(*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)(puVar10 + -0xd8)
                                                                         + 0x20) + 0xc0) + 0x18));
                  puVar31 = puVar32;
                  if (plVar14 == (long *)0x0) break;
                  param_4 = *(long **)(*plVar14 + 0x1c0);
                  plVar28 = plVar30;
                  uVar26 = (**(code **)(*plVar14 + 0x1b8))
                                     (plVar14,*(undefined8 *)
                                               (unaff_x27 + (long)unaff_x25 * 0x18 + 0x28));
                }
                else {
                  if (puVar31 == (uint *)0x0) break;
                  lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(puVar10 + -0xd8) + 0x20) + 0xc0)
                                    + 8);
                  unaff_x24 = *(uint **)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28);
                  if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                    lVar24 = func_0x0325681c(lVar24);
                  }
                  lVar23 = *(long *)puVar31;
                  uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  if (uVar26 != 0) {
                    piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar24) {
                        puVar17 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_04fe47a0;
                      }
                      uVar26 = uVar26 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar26 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x03256b10(puVar31,lVar24,0);
LAB_04fe47a0:
                  param_4 = (long *)puVar17[1];
                  plVar28 = plVar30;
                  uVar26 = (*(code *)*puVar17)(puVar31,unaff_x24);
                  puVar32 = puVar31;
                }
                if ((uVar26 & 1) != 0) {
                  puVar31 = puVar32;
                  if ((int)(uint)unaff_x26 < 0) {
                    lVar24 = *(long *)(lVar18 + 0x10);
                    if (lVar24 == 0) break;
                    if (*(uint *)(lVar24 + 0x18) <= (uint)*(long *)(puVar10 + -0xe8))
                    goto LAB_04fe48ac;
                    *(int *)(lVar24 + *(long *)(puVar10 + -0xe8) * 4 + 0x20) =
                         *(int *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) + 1;
                  }
                  else {
                    lVar24 = *(long *)(lVar18 + 0x18);
                    if (lVar24 == 0) break;
                    if (*(uint *)(lVar24 + 0x18) <= (uint)unaff_x26) goto LAB_04fe48ac;
                    *(undefined4 *)(lVar24 + (long)unaff_x26 * 0x18 + 0x24) =
                         *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
                  }
                  plVar28 = *(long **)(puVar10 + -0xe0);
                  *plVar28 = *(long *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x30);
                  goto SUB_032809c4;
                }
              }
              unaff_x26 = (undefined *)(ulong)uVar21;
              puVar31 = puVar32;
              uVar21 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
              if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) < 0) goto LAB_04fe47d0;
            }
            goto LAB_04fe48a8;
          }
        }
LAB_04fe48ac:
        lVar24 = func_0x03280cb4();
        *(undefined8 *)(puVar10 + -0x110) = 0x4fe48b0;
        *(long **)(puVar10 + -0x108) = plVar16;
        *(undefined **)(puVar10 + -0x100) = puVar29;
        *(long *)(puVar10 + -0xf8) = lVar18;
        unaff_x29 = *(uint **)(*(long *)(param_4[4] + 0xc0) + 0x110);
        uVar11 = func_0x04fe343c();
        if ((int)uVar11 < 0) {
          *plVar28 = 0;
          return (long *)(ulong)(~uVar11 >> 0x1f);
        }
        lVar18 = *(long *)(lVar24 + 0x18);
        if (lVar18 == 0) {
          func_0x03280cac();
        }
        else if (uVar11 < *(uint *)(lVar18 + 0x18)) {
          *plVar28 = *(long *)(lVar18 + (ulong)uVar11 * 0x18 + 0x30);
          goto SUB_032809c4;
        }
        auVar34 = func_0x03280cb4();
        puVar32 = auVar34._8_8_;
        lVar18 = auVar34._0_8_;
        uVar19 = *(ulong *)(*(long *)(param_4[4] + 0xc0) + 0x118);
        *(uint **)(puVar10 + -0x170) = puVar33;
        *(undefined8 *)(puVar10 + -0x168) = 0x4fe4928;
        *(uint **)(puVar10 + -0x160) = unaff_x28;
        *(undefined **)(puVar10 + -0x158) = unaff_x27;
        *(undefined **)(puVar10 + -0x150) = unaff_x26;
        *(undefined **)(puVar10 + -0x148) = unaff_x25;
        *(uint **)(puVar10 + -0x140) = unaff_x24;
        *(uint **)(puVar10 + -0x138) = puVar31;
        *(long **)(puVar10 + -0x130) = plVar30;
        *(long *)(puVar10 + -0x128) = lVar24;
        *(ulong *)(puVar10 + -0x120) = (ulong)uVar11;
        *(long **)(puVar10 + -0x118) = plVar28;
        uVar26 = 0;
        puVar31 = unaff_x29;
        if (puVar32 == (uint *)0x0) {
          func_0x057a867c(5);
        }
        *(int *)(lVar18 + 0x2c) = *(int *)(lVar18 + 0x2c) + 1;
        if (*(long *)(lVar18 + 0x10) == 0) {
          puVar31 = *(uint **)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x10);
          func_0x04fe3720(lVar18,0);
        }
        plVar16 = *(long **)(lVar18 + 0x30);
        lVar24 = *(long *)(lVar18 + 0x18);
        if (plVar16 == (long *)0x0) {
          if (puVar32 != (uint *)0x0) {
            uVar11 = (**(code **)(*(long *)puVar32 + 0x158))
                               (puVar32,*(undefined8 *)(*(long *)puVar32 + 0x160));
            goto LAB_04fe3908;
          }
        }
        else {
          lVar23 = *(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c(lVar23);
          }
          lVar22 = *plVar16;
          uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar23) {
                puVar17 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_04fe38f8;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar16,lVar23,1);
LAB_04fe38f8:
          puVar31 = (uint *)puVar17[1];
          uVar11 = (*(code *)*puVar17)(plVar16,puVar32);
LAB_04fe3908:
          lVar23 = *(long *)(lVar18 + 0x10);
          if (lVar23 != 0) {
            uVar21 = *(uint *)(lVar23 + 0x18);
            uVar11 = uVar11 & 0x7fffffff;
            unaff_x27 = (undefined *)(ulong)uVar11;
            iVar5 = 0;
            if (uVar21 != 0) {
              iVar5 = (int)uVar11 / (int)uVar21;
            }
            uVar20 = uVar11 - iVar5 * uVar21;
            plVar14 = plVar16;
            if (uVar20 < uVar21) {
              unaff_x28 = (uint *)(lVar23 + (ulong)uVar20 * 4 + 0x20);
              uVar21 = *unaff_x28 - 1;
              plVar28 = (long *)(ulong)uVar21;
              if (plVar16 == (long *)0x0) {
                plVar14 = (long *)func_0x039574b0(*(undefined8 *)
                                                   (*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) +
                                                   0x18));
                if (lVar24 != 0) {
                  uVar15 = *(undefined8 *)(lVar24 + 0x18);
                  uVar20 = (uint)uVar15;
                  if (uVar21 < uVar20) {
                    *(undefined4 *)(puVar10 + -0x174) = 0;
                    uVar26 = 0;
                    unaff_x25 = (undefined *)0x18;
                    do {
                      uVar21 = (uint)uVar15;
                      uVar20 = (uint)plVar28;
                      plVar28 = (long *)(long)(int)uVar20;
                      plVar16 = plVar14;
                      if (*(uint *)(lVar24 + (long)(int)uVar20 * 0x18 + 0x20) == uVar11) {
                        if (plVar14 == (long *)0x0) goto LAB_04fe3c74;
                        puVar31 = puVar32;
                        uVar25 = (**(code **)(*plVar14 + 0x1b8))
                                           (plVar14,*(undefined8 *)
                                                     (lVar24 + (long)plVar28 * 0x18 + 0x28),puVar32,
                                            *(undefined8 *)(*plVar14 + 0x1c0));
                        if ((uVar25 & 1) != 0) {
                          if ((*(uint *)(puVar10 + -0x174) & 0xff) == 2) goto LAB_04fe3c5c;
                          if ((*(uint *)(puVar10 + -0x174) & 0xff) != 1) {
                            return (long *)0x0;
                          }
                          if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_04fe3c70;
                          plVar28 = (long *)(lVar24 + (long)plVar28 * 0x18 + 0x30);
                          *plVar28 = (long)unaff_x29;
                          goto SUB_032809c4;
                        }
                        uVar21 = *(uint *)(lVar24 + 0x18);
                      }
                      if (uVar21 <= uVar20) goto LAB_04fe3c70;
                      uVar2 = *(uint *)(lVar24 + (long)plVar28 * 0x18 + 0x24);
                      plVar28 = (long *)(ulong)uVar2;
                      if ((int)uVar21 <= (int)uVar26) {
                        func_0x057b8684(0);
                      }
                      uVar15 = *(undefined8 *)(lVar24 + 0x18);
                      uVar26 = (ulong)((int)uVar26 + 1);
                      uVar20 = (uint)uVar15;
                    } while (uVar2 < uVar20);
                  }
                  goto LAB_04fe3ad4;
                }
              }
              else if (lVar24 != 0) {
                uVar15 = *(undefined8 *)(lVar24 + 0x18);
                uVar20 = (uint)uVar15;
                if (uVar21 < uVar20) {
                  *(undefined4 *)(puVar10 + -0x174) = 0;
                  *(uint **)(puVar10 + -0x180) = unaff_x29;
                  unaff_x29 = (uint *)0x0;
                  uVar26 = 0x18;
                  do {
                    uVar21 = (uint)uVar15;
                    uVar20 = (uint)plVar28;
                    plVar28 = (long *)(long)(int)uVar20;
                    if (*(uint *)(lVar24 + (long)(int)uVar20 * 0x18 + 0x20) == uVar11) {
                      lVar23 = *(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 8);
                      unaff_x25 = *(undefined **)(lVar24 + (long)plVar28 * 0x18 + 0x28);
                      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                        lVar23 = func_0x0325681c(lVar23);
                      }
                      lVar22 = *plVar16;
                      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                      if (uVar25 != 0) {
                        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == lVar23) {
                            puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                            goto LAB_04fe39e0;
                          }
                          uVar25 = uVar25 - 1;
                          piVar27 = piVar27 + 4;
                        } while (uVar25 != 0);
                      }
                      puVar17 = (undefined8 *)func_0x03256b10(plVar16,lVar23,0);
LAB_04fe39e0:
                      puVar31 = puVar32;
                      uVar25 = (*(code *)*puVar17)(plVar16,unaff_x25,puVar32,puVar17[1]);
                      if ((uVar25 & 1) != 0) {
                        if ((*(uint *)(puVar10 + -0x174) & 0xff) == 2) {
LAB_04fe3c5c:
                          func_0x057b8580(puVar32,0);
                          return (long *)0x0;
                        }
                        if ((*(uint *)(puVar10 + -0x174) & 0xff) != 1) {
                          return (long *)0x0;
                        }
                        if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_04fe3c70;
                        plVar28 = (long *)(lVar24 + (long)plVar28 * 0x18 + 0x30);
                        *plVar28 = *(long *)(puVar10 + -0x180);
                        goto SUB_032809c4;
                      }
                      uVar21 = *(uint *)(lVar24 + 0x18);
                    }
                    if (uVar21 <= uVar20) goto LAB_04fe3c70;
                    uVar2 = *(uint *)(lVar24 + (long)plVar28 * 0x18 + 0x24);
                    plVar28 = (long *)(ulong)uVar2;
                    if ((int)uVar21 <= (int)unaff_x29) {
                      func_0x057b8684(0);
                    }
                    uVar15 = *(undefined8 *)(lVar24 + 0x18);
                    unaff_x29 = (uint *)(ulong)((int)unaff_x29 + 1);
                    uVar20 = (uint)uVar15;
                  } while (uVar2 < uVar20);
                  unaff_x29 = *(uint **)(puVar10 + -0x180);
                }
LAB_04fe3ad4:
                plVar14 = plVar16;
                if (*(int *)(lVar18 + 0x28) < 1) {
                  uVar21 = *(uint *)(lVar18 + 0x20);
                  plVar28 = (long *)(ulong)uVar21;
                  if (uVar21 == uVar20) {
                    func_0x04fe402c(lVar18,*(undefined8 *)
                                            (*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x1b8));
                    lVar23 = *(long *)(lVar18 + 0x10);
                    *(uint *)(lVar18 + 0x20) = uVar21 + 1;
                    if (lVar23 == 0) goto LAB_04fe3c74;
                    uVar20 = *(uint *)(lVar23 + 0x18);
                    iVar5 = 0;
                    if (uVar20 != 0) {
                      iVar5 = (int)uVar11 / (int)uVar20;
                    }
                    uVar2 = uVar11 - iVar5 * uVar20;
                    if (uVar20 <= uVar2) goto LAB_04fe3c70;
                    lVar24 = *(long *)(lVar18 + 0x18);
                    unaff_x28 = (uint *)(lVar23 + (ulong)uVar2 * 4 + 0x20);
                  }
                  else {
                    lVar24 = *(long *)(lVar18 + 0x18);
                    *(uint *)(lVar18 + 0x20) = uVar21 + 1;
                  }
                  if (lVar24 == 0) goto LAB_04fe3c74;
                  if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_04fe3c70;
                  lVar23 = (long)(int)uVar21;
                }
                else {
                  *(int *)(lVar18 + 0x28) = *(int *)(lVar18 + 0x28) + -1;
                  uVar21 = *(uint *)(lVar18 + 0x24);
                  plVar28 = (long *)(ulong)uVar21;
                  if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_04fe3c70;
                  lVar23 = (long)(int)uVar21;
                  *(undefined4 *)(lVar18 + 0x24) = *(undefined4 *)(lVar24 + lVar23 * 0x18 + 0x24);
                }
                lVar24 = lVar24 + lVar23 * 0x18;
                *(uint *)(lVar24 + 0x20) = uVar11;
                *(uint *)(lVar24 + 0x24) = *unaff_x28 - 1;
                plVar28 = (long *)(lVar24 + 0x28);
                *plVar28 = (long)puVar32;
                goto SUB_032809c4;
              }
            }
            else {
LAB_04fe3c70:
              func_0x03280cb4();
              plVar16 = plVar14;
            }
          }
        }
LAB_04fe3c74:
        lVar18 = func_0x03280cac();
        unaff_x26 = PTR_DAT_07781380;
        *(undefined8 *)(puVar10 + -0x1d0) = 0x4fe3c78;
        *(undefined **)(puVar10 + -0x1c8) = unaff_x27;
        *(long *)(puVar10 + -0x1c0) = lVar24;
        *(undefined **)(puVar10 + -0x1b8) = unaff_x25;
        *(long **)(puVar10 + -0x1b0) = plVar16;
        *(ulong *)(puVar10 + -0x1a8) = uVar26;
        *(ulong *)(puVar10 + -0x1a0) = uVar19;
        *(undefined1 (*) [16])(puVar10 + -0x198) = auVar34;
        *(long **)(puVar10 + -0x188) = plVar28;
        uVar25 = 0x7e1b000;
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
        lVar24 = *(long *)unaff_x26;
        *(undefined8 *)(puVar10 + -0x1d8) = 0;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar24 = func_0x057624fc(0);
        if (lVar24 != 0) {
          func_0x04e91150(lVar24,lVar18,puVar10 + -0x1d8,*(undefined8 *)PTR_DAT_07781618);
          if (*(long *)(puVar10 + -0x1d8) == 0) {
            return (long *)0x0;
          }
          uVar12 = func_0x056933d8(*(long *)(puVar10 + -0x1d8),*(undefined8 *)PTR_DAT_0775b648,0);
          puVar29 = PTR_DAT_0774e558;
          if (*(long *)(puVar10 + -0x1d8) != 0) {
            uVar25 = uVar12 & 0xffffffff;
            uVar19 = func_0x056933d8(*(long *)(puVar10 + -0x1d8),*(undefined8 *)PTR_DAT_07781600,0);
            lVar24 = *(long *)puVar29;
            lVar23 = *(long *)(puVar10 + -0x1d8);
            uVar19 = uVar19 & 0xffffffff;
            plVar16 = *(long **)(*(long *)(*(long *)(puVar31 + 8) + 0xc0) + 0x170);
            if (*(int *)(lVar24 + 0xe0) == 0) {
              func_0x03280b8c(lVar24);
            }
            uVar15 = func_0x057a51c4(plVar16,0);
            uVar26 = 0;
            unaff_x27 = puVar29;
            if (lVar23 != 0) {
              lVar24 = func_0x05690f88(lVar23,*(undefined8 *)PTR_DAT_0777e440,uVar15,0);
              lVar23 = *(long *)(*(long *)(*(long *)(puVar31 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = func_0x0325681c(lVar23);
              }
              if (lVar24 == 0) {
LAB_04fe3e2c:
                lVar22 = 0;
              }
              else {
                lVar22 = func_0x03280b90(lVar24,lVar23);
                if (lVar22 == 0) {
                  func_0x03281048(lVar24,lVar23);
                  goto LAB_04fe3e2c;
                }
              }
              plVar28 = (long *)(lVar18 + 0x30);
              *plVar28 = lVar22;
              lVar18 = *(long *)(*(long *)(*(long *)(puVar31 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = func_0x0325681c(lVar18);
              }
              if ((lVar24 != 0) && (lVar23 = func_0x03280b90(lVar24,lVar18), lVar23 == 0)) {
                func_0x03281048(lVar24,lVar18);
              }
              goto SUB_032809c4;
            }
          }
        }
        func_0x03280cac();
        func_0x057b819c(0x10,0);
        func_0x03280cac();
        auVar34 = func_0x03281048(plVar16,uVar26);
        puVar29 = PTR_DAT_07781380;
        plVar14 = auVar34._0_8_;
        *(undefined8 *)(puVar10 + -0x210) = 0x4fe402c;
        *(ulong *)(puVar10 + -0x200) = uVar19;
        *(ulong *)(puVar10 + -0x1f8) = uVar25;
        *(uint **)(puVar10 + -0x1f0) = puVar31;
        *(long *)(puVar10 + -0x1e8) = lVar18;
        if ((bRam0000000007e1b903 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07781380);
          bRam0000000007e1b903 = 1;
        }
        lVar24 = plVar14[4];
        if (*(int *)(*(long *)puVar29 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar11 = func_0x05762478((int)lVar24,0);
        puVar8 = PTR_DAT_07754420;
        puVar29 = (undefined *)(ulong)uVar11;
        lVar24 = *(long *)(*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 0x1c8);
        *(undefined8 *)(puVar10 + -0x230) = *(undefined8 *)(puVar10 + -0x210);
        *(undefined **)(puVar10 + -0x220) = unaff_x26;
        *(undefined **)(puVar10 + -0x218) = unaff_x25;
        *(long **)(puVar10 + -0x210) = plVar16;
        *(ulong *)(puVar10 + -0x208) = uVar26;
        *(undefined8 *)(puVar10 + -0x200) = *(undefined8 *)(puVar10 + -0x200);
        *(undefined8 *)(puVar10 + -0x1f8) = *(undefined8 *)(puVar10 + -0x1f8);
        *(undefined8 *)(puVar10 + -0x1f0) = *(undefined8 *)(puVar10 + -0x1f0);
        *(undefined8 *)(puVar10 + -0x1e8) = *(undefined8 *)(puVar10 + -0x1e8);
        unaff_x25 = (undefined *)0x0;
        if ((bRam0000000007e1b904 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07754420);
          bRam0000000007e1b904 = 1;
        }
        puVar17 = (undefined8 *)func_0x03280afc(*(undefined8 *)puVar8,puVar29);
        lVar24 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x1b0);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c(lVar24);
        }
        unaff_x23 = (long *)func_0x03280afc(lVar24,puVar29);
        unaff_x22 = plVar14 + 3;
        uVar21 = *(uint *)(plVar14 + 4);
        unaff_x24 = (uint *)(ulong)uVar21;
        param_4 = (long *)0x0;
        plVar28 = unaff_x23;
        func_0x057b9f30(*unaff_x22,0,unaff_x23,0,unaff_x24,0);
        if ((int)uVar21 < 1) {
LAB_04fe423c:
          plVar28 = plVar14 + 2;
          *plVar28 = (long)puVar17;
SUB_032809c4:
          if (iRam00000000080486b8 != 0) {
            puVar1 = (ulong *)(((ulong)plVar28 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar28 >> 0xc & 0x3f);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          return plVar28;
        }
        if (unaff_x23 != (long *)0x0) {
          uVar21 = *(uint *)(unaff_x23 + 3);
          puVar31 = (uint *)0x0;
          while (puVar31 < (uint *)(ulong)uVar21) {
            iVar5 = (int)unaff_x23[(long)puVar31 * 3 + 4];
            if (-1 < iVar5) {
              if (puVar17 == (undefined8 *)0x0) goto LAB_04fe4274;
              iVar4 = 0;
              if (uVar11 != 0) {
                iVar4 = iVar5 / (int)uVar11;
              }
              uVar20 = iVar5 - iVar4 * uVar11;
              if (*(uint *)(puVar17 + 3) <= uVar20) break;
              *(int *)((long)unaff_x23 + (long)puVar31 * 0x18 + 0x24) =
                   *(int *)((long)puVar17 + (ulong)uVar20 * 4 + 0x20) + -1;
              *(int *)((long)puVar17 + (ulong)uVar20 * 4 + 0x20) = (int)puVar31 + 1;
            }
            puVar31 = (uint *)((long)puVar31 + 1);
            if (puVar31 == unaff_x24) goto LAB_04fe423c;
          }
          func_0x03280cb4();
        }
LAB_04fe4274:
        uVar15 = 0x4fe4278;
        auVar34 = func_0x03280cac();
        puVar10 = puVar10 + -0x230;
      } while( true );
    }
    func_0x03d1b250(&plStack_130,plVar14,*(undefined8 *)PTR_DAT_0777a488);
    plVar14 = plStack_128;
    if (*(long *)(param_3 + 0x20) != 0) {
      uVar15 = func_0x03d1b250(&plStack_130,*(long *)(param_3 + 0x20),*(undefined8 *)puVar29);
      uStack_78 = param_2[1];
      uStack_80 = *param_2;
      uStack_68 = param_2[3];
      uStack_70 = param_2[2];
      plVar16 = (long *)func_0x06b72a10(uVar15,&uStack_80,plVar14);
      plVar28 = plVar14;
      if (plVar16 != (long *)0x0) {
        lVar24 = *plVar16;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07831360) {
              puVar17 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
              param_4 = plStack_128;
              goto LAB_06b72740;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_07831360,0);
        param_4 = plStack_128;
LAB_06b72740:
        plVar28 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
        unaff_x28 = (uint *)PTR_DAT_07831370;
        unaff_x26 = PTR_DAT_07831368;
        unaff_x27 = PTR_DAT_07831358;
        unaff_x25 = PTR_DAT_0774e8e0;
        if (plVar28 == (long *)0x0) goto LAB_06b72934;
        lVar24 = *plVar28;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8e0) {
              puVar17 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_06b727c0;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0774e8e0,0);
LAB_06b727c0:
        plVar14 = (long *)(*(code *)*puVar17)(plVar28,puVar17[1]);
        if (((ulong)plVar14 & 1) == 0) {
          param_3 = (undefined *)0x0;
          goto LAB_06b728a0;
        }
        lVar24 = *plVar28;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)unaff_x26) {
              puVar17 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_06b7281c;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar28,*(long *)unaff_x26,0);
LAB_06b7281c:
        (*(code *)*puVar17)(&plStack_130,plVar28,puVar17[1]);
        if (plStack_130 != (long *)0x0) {
          lVar24 = *(long *)unaff_x27;
          uStack_190 = 0x6b72844;
          plVar14 = plStack_130;
          plStack_178 = plVar28;
          unaff_x22 = plStack_d8;
          unaff_x23 = plStack_130;
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
    auVar35 = func_0x03280ca4(param_3);
    if (auVar35._8_4_ != 1) break;
    puVar17 = (undefined8 *)func_0x072ce910(auVar35._0_8_);
    param_3 = (undefined *)*puVar17;
    plVar14 = (long *)func_0x072ce920();
LAB_06b728a0:
    if (plVar28 != (long *)0x0) {
      lVar24 = *plVar28;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_06b728f8;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b728f8:
      plVar14 = (long *)(*(code *)*puVar17)(plVar28,puVar17[1]);
    }
    if (param_3 == (undefined *)0x0) {
      return plVar14;
    }
  }
  if (plVar28 != (long *)0x0) {
    lVar24 = *plVar28;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar17 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_06b729e4;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b729e4:
    (*(code *)*puVar17)(plVar28,puVar17[1]);
  }
  func_0x03365958(auVar35._0_8_);
  func_0x03280ca4(0);
  plVar28 = (long *)func_0x02f09514();
  return plVar28;
}

