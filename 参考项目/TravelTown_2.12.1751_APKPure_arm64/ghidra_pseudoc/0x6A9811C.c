/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9811C; Merger.MergeBoard.Extensions.EntitySpawnerExtension.IsSpawner; status ok */


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

long * Merger_MergeBoard_Extensions_EntitySpawnerExtension__IsSpawner
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  int *piVar28;
  undefined8 uVar29;
  long *plVar30;
  long unaff_x21;
  long *plVar31;
  undefined8 *unaff_x22;
  long *plVar32;
  uint *puVar33;
  long *unaff_x23;
  uint *puVar34;
  uint *unaff_x24;
  ulong unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  uint *puVar35;
  uint *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_60;
  undefined8 auStack_40 [2];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar10 = &stack0xffffffffffffffe0;
  if ((bRam0000000007e2a820 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831028);
    func_0x03280a18(PTR_DAT_07831030);
    func_0x03280a18(PTR_DAT_07832588);
    bRam0000000007e2a820 = 1;
  }
  if (param_1 == 0) {
    plVar19 = (long *)func_0x03280cac();
    return plVar19;
  }
  uVar16 = func_0x03d1be30(param_1,*(undefined8 *)PTR_DAT_07831028);
  if (((uVar16 & 1) != 0) ||
     (uVar16 = func_0x03d1bec8(param_1,*(undefined8 *)PTR_DAT_07831030), (uVar16 & 1) != 0)) {
    return (long *)0x1;
  }
  lVar17 = *(long *)PTR_DAT_07832588;
  puVar22 = *(undefined8 **)(lVar17 + 0x38);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_07779c50);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar22 = *(undefined8 **)(lVar17 + 0x38);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x03256878(lVar17);
      puVar22 = *(undefined8 **)(lVar17 + 0x38);
    }
  }
  lVar17 = *(long *)(param_1 + 0x10);
  uVar29 = *puVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar29,0);
  if (lVar17 == 0) {
    auVar36 = func_0x03280cac();
    lVar18 = auVar36._8_8_;
    auStack_40[0] = 0x3d1c1c0;
    puVar23 = *(ulong **)(lVar18 + 0x38);
    uStack_30 = uVar29;
    lStack_28 = lVar17;
    if (puVar23 == (ulong *)0x0) {
      func_0x03280a18(PTR_DAT_07779c50);
      func_0x03280a18(PTR_DAT_0774e558);
      puVar23 = *(ulong **)(lVar18 + 0x38);
      if (puVar23 == (ulong *)0x0) {
        func_0x03256878(lVar18);
        puVar23 = *(ulong **)(lVar18 + 0x38);
      }
    }
    lVar17 = *(long *)(auVar36._0_8_ + 0x10);
    uVar16 = *puVar23;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar12 = func_0x057a51c4(uVar16,0);
    if (lVar17 == 0) {
      auVar36 = func_0x03280cac();
      lVar17 = auVar36._8_8_;
      puVar22 = *(undefined8 **)(lVar17 + 0x38);
      if (puVar22 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_0774e558);
        puVar22 = *(undefined8 **)(lVar17 + 0x38);
        if (puVar22 == (undefined8 *)0x0) {
          func_0x03256878(lVar17);
          puVar22 = *(undefined8 **)(lVar17 + 0x38);
        }
      }
      uVar29 = *puVar22;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar29 = func_0x057a51c4(uVar29,0);
      uStack_60 = 0x3d1c258;
      if ((bRam0000000007e22c55 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c3a80,uVar29,0);
        bRam0000000007e22c55 = 1;
      }
      lVar17 = *(long *)(auVar36._0_8_ + 0x10);
      auVar36._8_8_ = uVar29;
      auVar36._0_8_ = lVar17;
      if (lVar17 == 0) {
        auVar36 = func_0x03280cac();
        uStack_90 = 0x6014fb4;
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
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        lVar17 = *(long *)(auVar36._0_8_ + 0x10);
        if (((lVar17 != 0) &&
            (func_0x04fe2f04(lVar17,*(undefined8 *)PTR_DAT_077c3a88), puVar9 = PTR_DAT_077c3a60,
            puVar8 = PTR_DAT_077c3a58, puVar7 = PTR_DAT_07779c58, auVar36._8_8_ != 0)) &&
           (lVar17 = *(long *)(auVar36._8_8_ + 0x10), lVar17 != 0)) {
          func_0x04fe31ac(&uStack_c0,lVar17,*(undefined8 *)PTR_DAT_077c3a50);
          while( true ) {
            uVar16 = func_0x0515fbd0(&uStack_c0,*(undefined8 *)puVar9);
            if ((uVar16 & 1) == 0) {
              plVar19 = (long *)func_0x0515fcf0(&uStack_c0,*(undefined8 *)puVar8);
              return plVar19;
            }
            lVar17 = *(long *)(auVar36._0_8_ + 0x10);
            if (lVar17 == 0) break;
            func_0x04fe2d68(lVar17,uStack_b0,uStack_a8,*(undefined8 *)puVar7);
          }
          func_0x03280cac();
        }
        auVar37 = func_0x03280cac();
        if (auVar37._8_4_ == 1) {
          plVar19 = (long *)func_0x072ce910(auVar37._0_8_);
          lVar17 = *plVar19;
          func_0x072ce920();
          plVar19 = (long *)func_0x0515fcf0(&uStack_c0,*(undefined8 *)PTR_DAT_077c3a58);
          if (lVar17 == 0) {
            return plVar19;
          }
          func_0x03280ca4(lVar17);
        }
        func_0x0515fcf0(&uStack_c0,*(undefined8 *)PTR_DAT_077c3a58);
        func_0x03365958(auVar37._0_8_);
        func_0x03280ca4(0);
        lVar17 = func_0x02f09514();
        return *(long **)(lVar17 + 0x10);
      }
      plVar19 = *(long **)PTR_DAT_077c3a80;
      lVar17 = 0;
      puVar22 = auStack_40;
      do {
        plVar30 = auVar36._8_8_;
        lVar18 = auVar36._0_8_;
        *(uint **)((long)puVar22 + -0x60) = unaff_x29;
        *(undefined8 *)((long)puVar22 + -0x58) = uStack_60;
        *(uint **)((long)puVar22 + -0x50) = unaff_x28;
        *(undefined **)((long)puVar22 + -0x48) = unaff_x27;
        *(undefined **)((long)puVar22 + -0x40) = unaff_x26;
        *(ulong *)((long)puVar22 + -0x38) = unaff_x25;
        *(uint **)((long)puVar22 + -0x30) = unaff_x24;
        *(long **)((long)puVar22 + -0x28) = unaff_x23;
        *(undefined8 **)((long)puVar22 + -0x20) = unaff_x22;
        *(long *)((long)puVar22 + -0x18) = unaff_x21;
        *(ulong *)((long)puVar22 + -0x10) = uVar16;
        *(long *)((long)puVar22 + -8) = lVar17;
        *(long **)((long)puVar22 + -0x68) = plVar19;
        if (plVar30 == (long *)0x0) {
          func_0x057a867c(5);
        }
        if (*(long *)(lVar18 + 0x10) == 0) {
          return (long *)0x0;
        }
        plVar31 = *(long **)(lVar18 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (plVar30 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar30 + 0x158))(plVar30,*(undefined8 *)(*plVar30 + 0x160));
            goto LAB_04fe4354;
          }
LAB_04fe4580:
          func_0x03280cac();
        }
        else {
          lVar17 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar22 + -0x68) + 0x20) + 0xc0) +
                            8);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x0325681c(lVar17);
          }
          lVar25 = *plVar31;
          uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar17) {
                puVar14 = (undefined8 *)(lVar25 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_04fe4344;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar14 = (undefined8 *)func_0x03256b10(plVar31,lVar17,1);
LAB_04fe4344:
          plVar19 = (long *)puVar14[1];
          uVar11 = (*(code *)*puVar14)(plVar31,plVar30);
LAB_04fe4354:
          lVar17 = *(long *)(lVar18 + 0x10);
          if (lVar17 == 0) goto LAB_04fe4580;
          uVar21 = *(uint *)(lVar17 + 0x18);
          uVar11 = uVar11 & 0x7fffffff;
          unaff_x27 = (undefined *)(ulong)uVar11;
          iVar4 = 0;
          if (uVar21 != 0) {
            iVar4 = (int)uVar11 / (int)uVar21;
          }
          uVar20 = uVar11 - iVar4 * uVar21;
          if (uVar20 < uVar21) {
            uVar21 = *(int *)(lVar17 + (ulong)uVar20 * 4 + 0x20) - 1;
            if ((int)uVar21 < 0) {
              return (long *)0x0;
            }
            plVar32 = (long *)0x0;
            unaff_x25 = 0xffffffff;
            uVar16 = 0x18;
            *(ulong *)((long)puVar22 + -0x70) = (ulong)uVar20;
            while( true ) {
              unaff_x24 = (uint *)(ulong)uVar21;
              unaff_x26 = *(undefined **)(lVar18 + 0x18);
              unaff_x23 = plVar32;
              if (unaff_x26 == (undefined *)0x0) break;
              if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_04fe4584;
              unaff_x29 = (uint *)(unaff_x26 + (ulong)uVar21 * 0x18 + 0x20);
              unaff_x28 = unaff_x24;
              if (*unaff_x29 == uVar11) {
                plVar31 = *(long **)(lVar18 + 0x30);
                if (plVar31 == (long *)0x0) {
                  plVar15 = (long *)func_0x039574b0(*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)((long)puVar22 +
                                                                                   -0x68) + 0x20) +
                                                               0xc0) + 0x18));
                  plVar31 = plVar32;
                  if (plVar15 == (long *)0x0) break;
                  param_4 = *(long *)(*plVar15 + 0x1c0);
                  plVar19 = plVar30;
                  uVar27 = (**(code **)(*plVar15 + 0x1b8))
                                     (plVar15,*(undefined8 *)
                                               (unaff_x26 + (long)unaff_x24 * 0x18 + 0x28));
                }
                else {
                  if (plVar31 == (long *)0x0) break;
                  lVar17 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar22 + -0x68) + 0x20) +
                                              0xc0) + 8);
                  unaff_x23 = *(long **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = func_0x0325681c(lVar17);
                  }
                  lVar25 = *plVar31;
                  uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar27 != 0) {
                    piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar17) {
                        puVar14 = (undefined8 *)(lVar25 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_04fe4490;
                      }
                      uVar27 = uVar27 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar27 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x03256b10(plVar31,lVar17,0);
LAB_04fe4490:
                  param_4 = puVar14[1];
                  plVar19 = plVar30;
                  uVar27 = (*(code *)*puVar14)(plVar31,unaff_x23);
                  plVar32 = plVar31;
                }
                if ((uVar27 & 1) != 0) {
                  plVar31 = plVar32;
                  if ((int)(uint)unaff_x25 < 0) {
                    lVar17 = *(long *)(lVar18 + 0x10);
                    if (lVar17 == 0) break;
                    if (*(uint *)(lVar17 + 0x18) <= (uint)*(long *)((long)puVar22 + -0x70))
                    goto LAB_04fe4584;
                    *(int *)(lVar17 + *(long *)((long)puVar22 + -0x70) * 4 + 0x20) =
                         *(int *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) + 1;
                  }
                  else {
                    lVar17 = *(long *)(lVar18 + 0x18);
                    if (lVar17 == 0) break;
                    if (*(uint *)(lVar17 + 0x18) <= (uint)unaff_x25) goto LAB_04fe4584;
                    *(undefined4 *)(lVar17 + unaff_x25 * 0x18 + 0x24) =
                         *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
                  }
                  *unaff_x29 = 0xffffffff;
                  uVar2 = *(undefined4 *)(lVar18 + 0x24);
                  *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
                  *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x30) = 0;
                  *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar2;
                  *(uint *)(lVar18 + 0x24) = uVar21;
                  *(ulong *)(lVar18 + 0x28) =
                       CONCAT44((int)((ulong)*(undefined8 *)(lVar18 + 0x28) >> 0x20) + 1,
                                (int)*(undefined8 *)(lVar18 + 0x28) + 1);
                  return (long *)0x1;
                }
              }
              unaff_x25 = (ulong)uVar21;
              plVar31 = plVar32;
              uVar21 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
              if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
                return (long *)0x0;
              }
            }
            goto LAB_04fe4580;
          }
        }
LAB_04fe4584:
        auVar36 = func_0x03280cb4();
        plVar32 = auVar36._8_8_;
        lVar17 = auVar36._0_8_;
        *(uint **)((long)puVar22 + -0xd0) = unaff_x29;
        *(undefined8 *)((long)puVar22 + -200) = 0x4fe4588;
        *(uint **)((long)puVar22 + -0xc0) = unaff_x28;
        *(undefined **)((long)puVar22 + -0xb8) = unaff_x27;
        *(undefined **)((long)puVar22 + -0xb0) = unaff_x26;
        *(ulong *)((long)puVar22 + -0xa8) = unaff_x25;
        *(uint **)((long)puVar22 + -0xa0) = unaff_x24;
        *(long **)((long)puVar22 + -0x98) = unaff_x23;
        *(long **)((long)puVar22 + -0x90) = plVar31;
        *(long **)((long)puVar22 + -0x88) = plVar30;
        *(ulong *)((long)puVar22 + -0x80) = uVar16;
        *(long *)((long)puVar22 + -0x78) = lVar18;
        *(long **)((long)puVar22 + -0xe0) = plVar19;
        *(long *)((long)puVar22 + -0xd8) = param_4;
        if (plVar32 == (long *)0x0) {
          func_0x057a867c(5);
        }
        if (*(long *)(lVar17 + 0x10) == 0) goto LAB_04fe47d0;
        puVar33 = *(uint **)(lVar17 + 0x30);
        puVar35 = unaff_x29;
        if (puVar33 == (uint *)0x0) {
          if (plVar32 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar32 + 0x158))(plVar32,*(undefined8 *)(*plVar32 + 0x160));
            goto LAB_04fe4664;
          }
LAB_04fe48a8:
          func_0x03280cac();
        }
        else {
          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar22 + -0xd8) + 0x20) + 0xc0) +
                            8);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = func_0x0325681c(lVar18);
          }
          lVar25 = *(long *)puVar33;
          uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar18) {
                puVar14 = (undefined8 *)(lVar25 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_04fe4654;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar14 = (undefined8 *)func_0x03256b10(puVar33,lVar18,1);
LAB_04fe4654:
          plVar19 = (long *)puVar14[1];
          uVar11 = (*(code *)*puVar14)(puVar33,plVar32);
LAB_04fe4664:
          lVar18 = *(long *)(lVar17 + 0x10);
          if (lVar18 == 0) goto LAB_04fe48a8;
          uVar21 = *(uint *)(lVar18 + 0x18);
          uVar11 = uVar11 & 0x7fffffff;
          puVar35 = (uint *)(ulong)uVar11;
          iVar4 = 0;
          if (uVar21 != 0) {
            iVar4 = (int)uVar11 / (int)uVar21;
          }
          uVar20 = uVar11 - iVar4 * uVar21;
          if (uVar20 < uVar21) {
            iVar4 = *(int *)(lVar18 + (ulong)uVar20 * 4 + 0x20);
            *(ulong *)((long)puVar22 + -0xe8) = (ulong)uVar20;
            uVar21 = iVar4 - 1;
            if ((int)uVar21 < 0) {
LAB_04fe47d0:
              **(undefined8 **)((long)puVar22 + -0xe0) = 0;
              return (long *)0x0;
            }
            puVar34 = (uint *)0x0;
            unaff_x26 = (undefined *)0xffffffff;
            plVar30 = (long *)0x18;
            while( true ) {
              unaff_x25 = (ulong)uVar21;
              unaff_x27 = *(undefined **)(lVar17 + 0x18);
              unaff_x24 = puVar34;
              if (unaff_x27 == (undefined *)0x0) break;
              if (*(uint *)(unaff_x27 + 0x18) <= uVar21) goto LAB_04fe48ac;
              unaff_x28 = (uint *)(unaff_x27 + (ulong)uVar21 * 0x18 + 0x20);
              uVar16 = unaff_x25;
              if (*unaff_x28 == uVar11) {
                puVar33 = *(uint **)(lVar17 + 0x30);
                if (puVar33 == (uint *)0x0) {
                  plVar31 = (long *)func_0x039574b0(*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)((long)puVar22 +
                                                                                   -0xd8) + 0x20) +
                                                               0xc0) + 0x18));
                  puVar33 = puVar34;
                  if (plVar31 == (long *)0x0) break;
                  param_4 = *(long *)(*plVar31 + 0x1c0);
                  plVar19 = plVar32;
                  uVar27 = (**(code **)(*plVar31 + 0x1b8))
                                     (plVar31,*(undefined8 *)(unaff_x27 + unaff_x25 * 0x18 + 0x28));
                }
                else {
                  if (puVar33 == (uint *)0x0) break;
                  lVar18 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar22 + -0xd8) + 0x20) +
                                              0xc0) + 8);
                  unaff_x24 = *(uint **)(unaff_x27 + unaff_x25 * 0x18 + 0x28);
                  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                    lVar18 = func_0x0325681c(lVar18);
                  }
                  lVar25 = *(long *)puVar33;
                  uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar27 != 0) {
                    piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar18) {
                        puVar14 = (undefined8 *)(lVar25 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_04fe47a0;
                      }
                      uVar27 = uVar27 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar27 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x03256b10(puVar33,lVar18,0);
LAB_04fe47a0:
                  param_4 = puVar14[1];
                  plVar19 = plVar32;
                  uVar27 = (*(code *)*puVar14)(puVar33,unaff_x24);
                  puVar34 = puVar33;
                }
                if ((uVar27 & 1) != 0) {
                  puVar33 = puVar34;
                  if ((int)(uint)unaff_x26 < 0) {
                    lVar18 = *(long *)(lVar17 + 0x10);
                    if (lVar18 == 0) break;
                    if (*(uint *)(lVar18 + 0x18) <= (uint)*(long *)((long)puVar22 + -0xe8))
                    goto LAB_04fe48ac;
                    *(int *)(lVar18 + *(long *)((long)puVar22 + -0xe8) * 4 + 0x20) =
                         *(int *)(unaff_x27 + unaff_x25 * 0x18 + 0x24) + 1;
                  }
                  else {
                    lVar18 = *(long *)(lVar17 + 0x18);
                    if (lVar18 == 0) break;
                    if (*(uint *)(lVar18 + 0x18) <= (uint)unaff_x26) goto LAB_04fe48ac;
                    *(undefined4 *)(lVar18 + (long)unaff_x26 * 0x18 + 0x24) =
                         *(undefined4 *)(unaff_x27 + unaff_x25 * 0x18 + 0x24);
                  }
                  plVar19 = *(long **)((long)puVar22 + -0xe0);
                  *plVar19 = *(long *)(unaff_x27 + unaff_x25 * 0x18 + 0x30);
                  goto SUB_032809c4;
                }
              }
              unaff_x26 = (undefined *)(ulong)uVar21;
              puVar33 = puVar34;
              uVar21 = *(uint *)(unaff_x27 + unaff_x25 * 0x18 + 0x24);
              if ((int)*(uint *)(unaff_x27 + unaff_x25 * 0x18 + 0x24) < 0) goto LAB_04fe47d0;
            }
            goto LAB_04fe48a8;
          }
        }
LAB_04fe48ac:
        lVar18 = func_0x03280cb4();
        *(undefined8 *)((long)puVar22 + -0x110) = 0x4fe48b0;
        *(long **)((long)puVar22 + -0x108) = plVar30;
        *(ulong *)((long)puVar22 + -0x100) = uVar16;
        *(long *)((long)puVar22 + -0xf8) = lVar17;
        unaff_x29 = *(uint **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x110);
        uVar11 = func_0x04fe343c();
        if ((int)uVar11 < 0) {
          *plVar19 = 0;
          return (long *)(ulong)(~uVar11 >> 0x1f);
        }
        lVar17 = *(long *)(lVar18 + 0x18);
        if (lVar17 == 0) {
          func_0x03280cac();
        }
        else if (uVar11 < *(uint *)(lVar17 + 0x18)) {
          *plVar19 = *(long *)(lVar17 + (ulong)uVar11 * 0x18 + 0x30);
          goto SUB_032809c4;
        }
        auVar36 = func_0x03280cb4();
        puVar34 = auVar36._8_8_;
        lVar17 = auVar36._0_8_;
        uVar16 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x118);
        *(uint **)((long)puVar22 + -0x170) = puVar35;
        *(undefined8 *)((long)puVar22 + -0x168) = 0x4fe4928;
        *(uint **)((long)puVar22 + -0x160) = unaff_x28;
        *(undefined **)((long)puVar22 + -0x158) = unaff_x27;
        *(undefined **)((long)puVar22 + -0x150) = unaff_x26;
        *(ulong *)((long)puVar22 + -0x148) = unaff_x25;
        *(uint **)((long)puVar22 + -0x140) = unaff_x24;
        *(uint **)((long)puVar22 + -0x138) = puVar33;
        *(long **)((long)puVar22 + -0x130) = plVar32;
        *(long *)((long)puVar22 + -0x128) = lVar18;
        *(ulong *)((long)puVar22 + -0x120) = (ulong)uVar11;
        *(long **)((long)puVar22 + -0x118) = plVar19;
        uVar27 = 0;
        puVar33 = unaff_x29;
        if (puVar34 == (uint *)0x0) {
          func_0x057a867c(5);
        }
        *(int *)(lVar17 + 0x2c) = *(int *)(lVar17 + 0x2c) + 1;
        if (*(long *)(lVar17 + 0x10) == 0) {
          puVar33 = *(uint **)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 0x10);
          func_0x04fe3720(lVar17,0);
        }
        plVar30 = *(long **)(lVar17 + 0x30);
        lVar18 = *(long *)(lVar17 + 0x18);
        if (plVar30 == (long *)0x0) {
          if (puVar34 != (uint *)0x0) {
            uVar11 = (**(code **)(*(long *)puVar34 + 0x158))
                               (puVar34,*(undefined8 *)(*(long *)puVar34 + 0x160));
            goto LAB_04fe3908;
          }
        }
        else {
          lVar25 = *(long *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
            lVar25 = func_0x0325681c(lVar25);
          }
          lVar24 = *plVar30;
          uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar26 != 0) {
            piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar25) {
                puVar14 = (undefined8 *)(lVar24 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_04fe38f8;
              }
              uVar26 = uVar26 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar26 != 0);
          }
          puVar14 = (undefined8 *)func_0x03256b10(plVar30,lVar25,1);
LAB_04fe38f8:
          puVar33 = (uint *)puVar14[1];
          uVar11 = (*(code *)*puVar14)(plVar30,puVar34);
LAB_04fe3908:
          lVar25 = *(long *)(lVar17 + 0x10);
          if (lVar25 != 0) {
            uVar21 = *(uint *)(lVar25 + 0x18);
            uVar11 = uVar11 & 0x7fffffff;
            unaff_x27 = (undefined *)(ulong)uVar11;
            iVar4 = 0;
            if (uVar21 != 0) {
              iVar4 = (int)uVar11 / (int)uVar21;
            }
            uVar20 = uVar11 - iVar4 * uVar21;
            plVar31 = plVar30;
            if (uVar20 < uVar21) {
              unaff_x28 = (uint *)(lVar25 + (ulong)uVar20 * 4 + 0x20);
              uVar21 = *unaff_x28 - 1;
              plVar19 = (long *)(ulong)uVar21;
              if (plVar30 == (long *)0x0) {
                plVar31 = (long *)func_0x039574b0(*(undefined8 *)
                                                   (*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) +
                                                   0x18));
                if (lVar18 != 0) {
                  uVar29 = *(undefined8 *)(lVar18 + 0x18);
                  uVar20 = (uint)uVar29;
                  if (uVar21 < uVar20) {
                    *(undefined4 *)((long)puVar22 + -0x174) = 0;
                    uVar27 = 0;
                    unaff_x25 = 0x18;
                    do {
                      uVar21 = (uint)uVar29;
                      uVar20 = (uint)plVar19;
                      plVar19 = (long *)(long)(int)uVar20;
                      plVar30 = plVar31;
                      if (*(uint *)(lVar18 + (long)(int)uVar20 * 0x18 + 0x20) == uVar11) {
                        if (plVar31 == (long *)0x0) goto LAB_04fe3c74;
                        puVar33 = puVar34;
                        uVar26 = (**(code **)(*plVar31 + 0x1b8))
                                           (plVar31,*(undefined8 *)
                                                     (lVar18 + (long)plVar19 * 0x18 + 0x28),puVar34,
                                            *(undefined8 *)(*plVar31 + 0x1c0));
                        if ((uVar26 & 1) != 0) {
                          if ((*(uint *)((long)puVar22 + -0x174) & 0xff) == 2) goto LAB_04fe3c5c;
                          if ((*(uint *)((long)puVar22 + -0x174) & 0xff) != 1) {
                            return (long *)0x0;
                          }
                          if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_04fe3c70;
                          plVar19 = (long *)(lVar18 + (long)plVar19 * 0x18 + 0x30);
                          *plVar19 = (long)unaff_x29;
                          goto SUB_032809c4;
                        }
                        uVar21 = *(uint *)(lVar18 + 0x18);
                      }
                      if (uVar21 <= uVar20) goto LAB_04fe3c70;
                      uVar1 = *(uint *)(lVar18 + (long)plVar19 * 0x18 + 0x24);
                      plVar19 = (long *)(ulong)uVar1;
                      if ((int)uVar21 <= (int)uVar27) {
                        func_0x057b8684(0);
                      }
                      uVar29 = *(undefined8 *)(lVar18 + 0x18);
                      uVar27 = (ulong)((int)uVar27 + 1);
                      uVar20 = (uint)uVar29;
                    } while (uVar1 < uVar20);
                  }
                  goto LAB_04fe3ad4;
                }
              }
              else if (lVar18 != 0) {
                uVar29 = *(undefined8 *)(lVar18 + 0x18);
                uVar20 = (uint)uVar29;
                if (uVar21 < uVar20) {
                  *(undefined4 *)((long)puVar22 + -0x174) = 0;
                  *(uint **)((long)puVar22 + -0x180) = unaff_x29;
                  unaff_x29 = (uint *)0x0;
                  uVar27 = 0x18;
                  do {
                    uVar21 = (uint)uVar29;
                    uVar20 = (uint)plVar19;
                    plVar19 = (long *)(long)(int)uVar20;
                    if (*(uint *)(lVar18 + (long)(int)uVar20 * 0x18 + 0x20) == uVar11) {
                      lVar25 = *(long *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 8);
                      unaff_x25 = *(ulong *)(lVar18 + (long)plVar19 * 0x18 + 0x28);
                      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                        lVar25 = func_0x0325681c(lVar25);
                      }
                      lVar24 = *plVar30;
                      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
                      if (uVar26 != 0) {
                        piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == lVar25) {
                            puVar14 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
                            goto LAB_04fe39e0;
                          }
                          uVar26 = uVar26 - 1;
                          piVar28 = piVar28 + 4;
                        } while (uVar26 != 0);
                      }
                      puVar14 = (undefined8 *)func_0x03256b10(plVar30,lVar25,0);
LAB_04fe39e0:
                      puVar33 = puVar34;
                      uVar26 = (*(code *)*puVar14)(plVar30,unaff_x25,puVar34,puVar14[1]);
                      if ((uVar26 & 1) != 0) {
                        if ((*(uint *)((long)puVar22 + -0x174) & 0xff) == 2) {
LAB_04fe3c5c:
                          func_0x057b8580(puVar34,0);
                          return (long *)0x0;
                        }
                        if ((*(uint *)((long)puVar22 + -0x174) & 0xff) != 1) {
                          return (long *)0x0;
                        }
                        if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_04fe3c70;
                        plVar19 = (long *)(lVar18 + (long)plVar19 * 0x18 + 0x30);
                        *plVar19 = *(long *)((long)puVar22 + -0x180);
                        goto SUB_032809c4;
                      }
                      uVar21 = *(uint *)(lVar18 + 0x18);
                    }
                    if (uVar21 <= uVar20) goto LAB_04fe3c70;
                    uVar1 = *(uint *)(lVar18 + (long)plVar19 * 0x18 + 0x24);
                    plVar19 = (long *)(ulong)uVar1;
                    if ((int)uVar21 <= (int)unaff_x29) {
                      func_0x057b8684(0);
                    }
                    uVar29 = *(undefined8 *)(lVar18 + 0x18);
                    unaff_x29 = (uint *)(ulong)((int)unaff_x29 + 1);
                    uVar20 = (uint)uVar29;
                  } while (uVar1 < uVar20);
                  unaff_x29 = *(uint **)((long)puVar22 + -0x180);
                }
LAB_04fe3ad4:
                plVar31 = plVar30;
                if (*(int *)(lVar17 + 0x28) < 1) {
                  uVar21 = *(uint *)(lVar17 + 0x20);
                  plVar19 = (long *)(ulong)uVar21;
                  if (uVar21 == uVar20) {
                    func_0x04fe402c(lVar17,*(undefined8 *)
                                            (*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 0x1b8));
                    lVar25 = *(long *)(lVar17 + 0x10);
                    *(uint *)(lVar17 + 0x20) = uVar21 + 1;
                    if (lVar25 == 0) goto LAB_04fe3c74;
                    uVar20 = *(uint *)(lVar25 + 0x18);
                    iVar4 = 0;
                    if (uVar20 != 0) {
                      iVar4 = (int)uVar11 / (int)uVar20;
                    }
                    uVar1 = uVar11 - iVar4 * uVar20;
                    if (uVar20 <= uVar1) goto LAB_04fe3c70;
                    lVar18 = *(long *)(lVar17 + 0x18);
                    unaff_x28 = (uint *)(lVar25 + (ulong)uVar1 * 4 + 0x20);
                  }
                  else {
                    lVar18 = *(long *)(lVar17 + 0x18);
                    *(uint *)(lVar17 + 0x20) = uVar21 + 1;
                  }
                  if (lVar18 == 0) goto LAB_04fe3c74;
                  if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_04fe3c70;
                  lVar25 = (long)(int)uVar21;
                }
                else {
                  *(int *)(lVar17 + 0x28) = *(int *)(lVar17 + 0x28) + -1;
                  uVar21 = *(uint *)(lVar17 + 0x24);
                  plVar19 = (long *)(ulong)uVar21;
                  if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_04fe3c70;
                  lVar25 = (long)(int)uVar21;
                  *(undefined4 *)(lVar17 + 0x24) = *(undefined4 *)(lVar18 + lVar25 * 0x18 + 0x24);
                }
                lVar18 = lVar18 + lVar25 * 0x18;
                *(uint *)(lVar18 + 0x20) = uVar11;
                *(uint *)(lVar18 + 0x24) = *unaff_x28 - 1;
                plVar19 = (long *)(lVar18 + 0x28);
                *plVar19 = (long)puVar34;
                goto SUB_032809c4;
              }
            }
            else {
LAB_04fe3c70:
              func_0x03280cb4();
              plVar30 = plVar31;
            }
          }
        }
LAB_04fe3c74:
        lVar25 = func_0x03280cac();
        unaff_x26 = PTR_DAT_07781380;
        *(undefined8 *)((long)puVar22 + -0x1d0) = 0x4fe3c78;
        *(undefined **)((long)puVar22 + -0x1c8) = unaff_x27;
        *(long *)((long)puVar22 + -0x1c0) = lVar18;
        *(ulong *)((long)puVar22 + -0x1b8) = unaff_x25;
        *(long **)((long)puVar22 + -0x1b0) = plVar30;
        *(ulong *)((long)puVar22 + -0x1a8) = uVar27;
        *(ulong *)((long)puVar22 + -0x1a0) = uVar16;
        *(undefined1 (*) [16])((long)puVar22 + -0x198) = auVar36;
        *(long **)((long)puVar22 + -0x188) = plVar19;
        uVar26 = 0x7e1b000;
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
        lVar17 = *(long *)unaff_x26;
        *(undefined8 *)((long)puVar22 + -0x1d8) = 0;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar17 = func_0x057624fc(0);
        if (lVar17 != 0) {
          func_0x04e91150(lVar17,lVar25,(undefined1 *)((long)puVar22 + -0x1d8),
                          *(undefined8 *)PTR_DAT_07781618);
          if (*(long *)((long)puVar22 + -0x1d8) == 0) {
            return (long *)0x0;
          }
          uVar13 = func_0x056933d8(*(long *)((long)puVar22 + -0x1d8),*(undefined8 *)PTR_DAT_0775b648
                                   ,0);
          puVar7 = PTR_DAT_0774e558;
          if (*(long *)((long)puVar22 + -0x1d8) != 0) {
            uVar26 = uVar13 & 0xffffffff;
            uVar16 = func_0x056933d8(*(long *)((long)puVar22 + -0x1d8),
                                     *(undefined8 *)PTR_DAT_07781600,0);
            lVar17 = *(long *)puVar7;
            lVar18 = *(long *)((long)puVar22 + -0x1d8);
            uVar16 = uVar16 & 0xffffffff;
            plVar30 = *(long **)(*(long *)(*(long *)(puVar33 + 8) + 0xc0) + 0x170);
            if (*(int *)(lVar17 + 0xe0) == 0) {
              func_0x03280b8c(lVar17);
            }
            uVar29 = func_0x057a51c4(plVar30,0);
            uVar27 = 0;
            unaff_x27 = puVar7;
            if (lVar18 != 0) {
              lVar17 = func_0x05690f88(lVar18,*(undefined8 *)PTR_DAT_0777e440,uVar29,0);
              lVar18 = *(long *)(*(long *)(*(long *)(puVar33 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = func_0x0325681c(lVar18);
              }
              if (lVar17 == 0) {
LAB_04fe3e2c:
                lVar24 = 0;
              }
              else {
                lVar24 = func_0x03280b90(lVar17,lVar18);
                if (lVar24 == 0) {
                  func_0x03281048(lVar17,lVar18);
                  goto LAB_04fe3e2c;
                }
              }
              plVar19 = (long *)(lVar25 + 0x30);
              *plVar19 = lVar24;
              lVar18 = *(long *)(*(long *)(*(long *)(puVar33 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                lVar18 = func_0x0325681c(lVar18);
              }
              if ((lVar17 != 0) && (lVar25 = func_0x03280b90(lVar17,lVar18), lVar25 == 0)) {
                func_0x03281048(lVar17,lVar18);
              }
              goto SUB_032809c4;
            }
          }
        }
        func_0x03280cac();
        func_0x057b819c(0x10,0);
        func_0x03280cac();
        auVar36 = func_0x03281048(plVar30,uVar27);
        puVar7 = PTR_DAT_07781380;
        lVar17 = auVar36._0_8_;
        *(undefined8 *)((long)puVar22 + -0x210) = 0x4fe402c;
        *(ulong *)((long)puVar22 + -0x200) = uVar16;
        *(ulong *)((long)puVar22 + -0x1f8) = uVar26;
        *(uint **)((long)puVar22 + -0x1f0) = puVar33;
        *(long *)((long)puVar22 + -0x1e8) = lVar25;
        if ((bRam0000000007e1b903 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07781380);
          bRam0000000007e1b903 = 1;
        }
        uVar2 = *(undefined4 *)(lVar17 + 0x20);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar11 = func_0x05762478(uVar2,0);
        puVar7 = PTR_DAT_07754420;
        uVar16 = (ulong)uVar11;
        lVar18 = *(long *)(*(long *)(*(long *)(auVar36._8_8_ + 0x20) + 0xc0) + 0x1c8);
        *(undefined8 *)((long)puVar22 + -0x230) = *(undefined8 *)((long)puVar22 + -0x210);
        *(undefined **)((long)puVar22 + -0x220) = unaff_x26;
        *(ulong *)((long)puVar22 + -0x218) = unaff_x25;
        *(long **)((long)puVar22 + -0x210) = plVar30;
        *(ulong *)((long)puVar22 + -0x208) = uVar27;
        *(undefined8 *)((long)puVar22 + -0x200) = *(undefined8 *)((long)puVar22 + -0x200);
        *(undefined8 *)((long)puVar22 + -0x1f8) = *(undefined8 *)((long)puVar22 + -0x1f8);
        *(undefined8 *)((long)puVar22 + -0x1f0) = *(undefined8 *)((long)puVar22 + -0x1f0);
        *(undefined8 *)((long)puVar22 + -0x1e8) = *(undefined8 *)((long)puVar22 + -0x1e8);
        unaff_x25 = 0;
        if ((bRam0000000007e1b904 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07754420);
          bRam0000000007e1b904 = 1;
        }
        unaff_x21 = func_0x03280afc(*(undefined8 *)puVar7,uVar16);
        lVar18 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x1b0);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        unaff_x23 = (long *)func_0x03280afc(lVar18,uVar16);
        unaff_x22 = (undefined8 *)(lVar17 + 0x18);
        uVar21 = *(uint *)(lVar17 + 0x20);
        unaff_x24 = (uint *)(ulong)uVar21;
        param_4 = 0;
        plVar19 = unaff_x23;
        func_0x057b9f30(*unaff_x22,0,unaff_x23,0,unaff_x24,0);
        if ((int)uVar21 < 1) {
LAB_04fe423c:
          plVar19 = (long *)(lVar17 + 0x10);
          *plVar19 = unaff_x21;
SUB_032809c4:
          if (iRam00000000080486b8 != 0) {
            puVar23 = (ulong *)(((ulong)plVar19 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar23,0x10);
              if (bVar6) {
                *puVar23 = *puVar23 | 1L << ((ulong)plVar19 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          return plVar19;
        }
        if (unaff_x23 != (long *)0x0) {
          uVar21 = *(uint *)(unaff_x23 + 3);
          puVar33 = (uint *)0x0;
          while (puVar33 < (uint *)(ulong)uVar21) {
            iVar4 = (int)unaff_x23[(long)puVar33 * 3 + 4];
            if (-1 < iVar4) {
              if (unaff_x21 == 0) goto LAB_04fe4274;
              iVar3 = 0;
              if (uVar11 != 0) {
                iVar3 = iVar4 / (int)uVar11;
              }
              uVar20 = iVar4 - iVar3 * uVar11;
              if (*(uint *)(unaff_x21 + 0x18) <= uVar20) break;
              lVar18 = unaff_x21 + (ulong)uVar20 * 4;
              *(int *)((long)unaff_x23 + (long)puVar33 * 0x18 + 0x24) = *(int *)(lVar18 + 0x20) + -1
              ;
              *(int *)(lVar18 + 0x20) = (int)puVar33 + 1;
            }
            puVar33 = (uint *)((long)puVar33 + 1);
            if (puVar33 == unaff_x24) goto LAB_04fe423c;
          }
          func_0x03280cb4();
        }
LAB_04fe4274:
        uStack_60 = 0x4fe4278;
        auVar36 = func_0x03280cac();
        puVar22 = (undefined8 *)((long)puVar22 + -0x230);
      } while( true );
    }
    lVar18 = *(long *)PTR_DAT_07779c50;
    unaff_x30 = auStack_40[0];
  }
  else {
    lVar18 = *(long *)PTR_DAT_07779c50;
    puVar10 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *)(puVar10 + -0x10) = unaff_x30;
  uVar11 = func_0x04fe343c(lVar17,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x110));
  return (long *)(ulong)(~uVar11 >> 0x1f);
}

