/* Ghidra 12.1.2 native pseudocode; RVA 0x4653ED0; MergeEngine.Util.TwoDArray<T>.get_IsFull; status ok */


ulong MergeEngine_Util_TwoDArray_T___get_IsFull
                (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1c0 [16];
  code *pcStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 auStack_190 [16];
  code *pcStack_180;
  code *pcStack_170;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_128;
  code *pcStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000007e196d7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ecb8);
    bRam0000000007e196d7 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return (ulong)(*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0);
  }
  lVar8 = func_0x03280cac();
  if ((bRam0000000007e196d8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ecc0);
    bRam0000000007e196d8 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x20);
  if (lVar8 != 0) {
    lVar13 = *(long *)PTR_DAT_0777ecc0;
    lVar16 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c(lVar16);
    }
    uVar7 = func_0x03280ca0(lVar16);
    func_0x044f550c(uVar7,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xa0));
    return uVar7;
  }
  auVar22 = func_0x03280cac();
  puVar6 = PTR_DAT_0777ecd8;
  puVar5 = PTR_DAT_0777ecd0;
  puVar4 = PTR_DAT_0777ecc8;
  lVar8 = auVar22._0_8_;
  pcStack_90 = MergeEngine_Util_TwoDArray_T____ctor;
  uVar7 = auVar22._8_8_ & 0xffffffff;
  if ((bRam0000000007e196d9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ecd8);
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196d9 = 1;
  }
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x040ce3d4(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(lVar8 + 0x20) = uVar9;
  func_0x032809c4((undefined8 *)(lVar8 + 0x20),uVar9);
  lVar16 = func_0x03280afc(*(undefined8 *)puVar6,4);
  uStack_88 = 0;
  func_0x069fdc94(&uStack_88,0xffffffff,0,0);
  if (lVar16 != 0) {
    if (*(int *)(lVar16 + 0x18) != 0) {
      *(undefined8 *)(lVar16 + 0x20) = uStack_88;
      uStack_98 = 0;
      func_0x069fdc94(&uStack_98,1,0,0);
      if (1 < *(uint *)(lVar16 + 0x18)) {
        *(undefined8 *)(lVar16 + 0x28) = uStack_98;
        uStack_a0 = 0;
        func_0x069fdc94(&uStack_a0,0,0xffffffff,0);
        if (2 < *(uint *)(lVar16 + 0x18)) {
          *(undefined8 *)(lVar16 + 0x30) = uStack_a0;
          uStack_a8 = 0;
          func_0x069fdc94(&uStack_a8,0,1,0);
          if (3 < *(uint *)(lVar16 + 0x18)) {
            *(undefined8 *)(lVar16 + 0x38) = uStack_a8;
            *(long *)(lVar8 + 0x28) = lVar16;
            func_0x032809c4((long *)(lVar8 + 0x28),lVar16);
            lVar16 = func_0x03280afc(*(undefined8 *)puVar6,8);
            uStack_b0 = 0;
            func_0x069fdc94(&uStack_b0,0xffffffff,0,0);
            if (lVar16 == 0) goto LAB_047542a8;
            if (*(int *)(lVar16 + 0x18) != 0) {
              *(undefined8 *)(lVar16 + 0x20) = uStack_b0;
              uStack_b8 = 0;
              func_0x069fdc94(&uStack_b8,1,0,0);
              if (1 < *(uint *)(lVar16 + 0x18)) {
                *(undefined8 *)(lVar16 + 0x28) = uStack_b8;
                uStack_c0 = 0;
                func_0x069fdc94(&uStack_c0,0,0xffffffff,0);
                if (2 < *(uint *)(lVar16 + 0x18)) {
                  *(undefined8 *)(lVar16 + 0x30) = uStack_c0;
                  uStack_c8 = 0;
                  func_0x069fdc94(&uStack_c8,0,1,0);
                  if (3 < *(uint *)(lVar16 + 0x18)) {
                    *(undefined8 *)(lVar16 + 0x38) = uStack_c8;
                    uStack_d0 = 0;
                    func_0x069fdc94(&uStack_d0,0xffffffff,0xffffffff,0);
                    if (4 < *(uint *)(lVar16 + 0x18)) {
                      *(undefined8 *)(lVar16 + 0x40) = uStack_d0;
                      uStack_d8 = 0;
                      func_0x069fdc94(&uStack_d8,0xffffffff,1,0);
                      if (5 < *(uint *)(lVar16 + 0x18)) {
                        *(undefined8 *)(lVar16 + 0x48) = uStack_d8;
                        uStack_e0 = 0;
                        func_0x069fdc94(&uStack_e0,1,1,0);
                        if (6 < *(uint *)(lVar16 + 0x18)) {
                          *(undefined8 *)(lVar16 + 0x50) = uStack_e0;
                          uStack_e8 = 0;
                          func_0x069fdc94(&uStack_e8,1,0xffffffff,0);
                          if (7 < *(uint *)(lVar16 + 0x18)) {
                            *(undefined8 *)(lVar16 + 0x58) = uStack_e8;
                            *(long *)(lVar8 + 0x30) = lVar16;
                            func_0x032809c4((long *)(lVar8 + 0x30),lVar16);
                            func_0x057da5fc(lVar8,0);
                            *(int *)(lVar8 + 0x10) = auVar22._8_4_;
                            *(int *)(lVar8 + 0x14) = (int)param_3;
                            MergeEngine_Util_TwoDArray_T___CreateArray
                                      (lVar8,*(undefined8 *)
                                              (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8));
                            uVar7 = MergeEngine_Util_TwoDArray_T___FillEmptyPositions(lVar8);
                            return uVar7;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    func_0x03280cb4();
  }
LAB_047542a8:
  uVar10 = func_0x03280cac();
  pcStack_120 = MergeEngine_Util_TwoDArray_T___FillEmptyPositions;
  uVar11 = uVar10;
  lStack_118 = lVar16;
  uStack_110 = uVar7;
  uStack_108 = param_3 & 0xffffffff;
  lStack_100 = param_4;
  lStack_f8 = lVar8;
  if ((bRam0000000007e196da & 1) == 0) {
    uVar11 = func_0x03280a18(PTR_DAT_0777ece0);
    bRam0000000007e196da = 1;
  }
  puVar5 = PTR_DAT_0777ece0;
  iVar15 = *(int *)(uVar10 + 0x14);
  if (0 < iVar15) {
    iVar18 = *(int *)(uVar10 + 0x10);
    uVar7 = 0;
    do {
      if (0 < iVar18) {
        uVar20 = 0;
        do {
          lVar8 = *(long *)(uVar10 + 0x20);
          uStack_128 = 0;
          uVar14 = uVar7;
          uVar11 = func_0x069fdc94(&uStack_128,uVar20,uVar7,0);
          if (lVar8 == 0) {
LAB_047543b0:
            auVar22 = func_0x03280cac();
            lVar16 = auVar22._0_8_;
            pcStack_170 = MergeEngine_Util_TwoDArray_T___CreateArray;
            puStack_160 = puVar6;
            puStack_158 = puVar5;
            uVar2 = *(undefined4 *)(lVar16 + 0x14);
            lVar13 = *(long *)(*(long *)(*(long *)(auVar22._8_8_ + 0x20) + 0xc0) + 0x18);
            lStack_150 = lVar8;
            uStack_148 = uVar20;
            uStack_140 = uVar7;
            uStack_138 = uVar10;
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            uVar9 = func_0x03280afc(lVar13,uVar2);
            *(undefined8 *)(lVar16 + 0x18) = uVar9;
            uVar7 = func_0x032809c4((undefined8 *)(lVar16 + 0x18));
            if (*(int *)(lVar16 + 0x14) < 1) {
              return uVar7;
            }
            uVar7 = 0;
            lVar8 = 0x20;
            goto LAB_04754418;
          }
          lVar16 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_047543b0;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20) = uStack_128;
          }
          else {
            uVar11 = func_0x040cec28(lVar8,uStack_128,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          iVar18 = *(int *)(uVar10 + 0x10);
          uVar3 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar3;
        } while ((int)uVar3 < iVar18);
        iVar15 = *(int *)(uVar10 + 0x14);
      }
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar3;
    } while ((int)uVar3 < iVar15);
  }
  return uVar11;
LAB_04754418:
  plVar21 = *(long **)(lVar16 + 0x18);
  uVar3 = *(uint *)(lVar16 + 0x10);
  lVar13 = *(long *)(*(long *)(*(long *)(auVar22._8_8_ + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  uVar11 = func_0x03280afc(lVar13,(ulong)uVar3);
  if (plVar21 == (long *)0x0) {
    func_0x03280cac();
    uVar11 = (ulong)uVar3;
LAB_047544a8:
    func_0x03280cb4();
LAB_047544ac:
    uVar9 = func_0x03280cd0();
    auVar23 = func_0x03280b7c(uVar9,0);
    pcStack_180 = MergeEngine_Util_TwoDArray_T___GetItem;
    lVar16 = *(long *)(auVar23._0_8_ + 0x18);
    if (lVar16 == 0) {
LAB_04754504:
      func_0x03280cac();
    }
    else if (auVar23._12_4_ < *(uint *)(lVar16 + 0x18)) {
      lVar16 = *(long *)(lVar16 + (auVar23._8_8_ >> 0x20) * 8 + 0x20);
      if (lVar16 == 0) goto LAB_04754504;
      if (auVar23._8_4_ < *(uint *)(lVar16 + 0x18)) {
        return *(ulong *)(lVar16 + ((auVar23._8_8_ << 0x20) >> 0x1d) + 0x20);
      }
    }
    auVar23 = func_0x03280cb4();
    lVar13 = auVar23._8_8_;
    lVar16 = auVar23._0_8_;
    pcStack_1b0 = MergeEngine_Util_TwoDArray_T___SetItem;
    uVar10 = uVar14;
    uStack_1a0 = uVar7;
    uStack_198 = uVar11;
    auStack_190 = auVar22;
    if ((bRam0000000007e196db & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ece0);
      func_0x03280a18(PTR_DAT_0777ece8);
      func_0x03280a18(PTR_DAT_0777ecf0);
      bRam0000000007e196db = 1;
    }
    lVar17 = *(long *)(lVar16 + 0x18);
    if (lVar17 == 0) {
LAB_0475465c:
      func_0x03280cac();
    }
    else if (auVar23._12_4_ < *(uint *)(lVar17 + 0x18)) {
      lVar17 = *(long *)(lVar17 + (lVar13 >> 0x20) * 8 + 0x20);
      if (lVar17 != 0) {
        if (*(uint *)(lVar17 + 0x18) <= auVar23._8_4_) goto LAB_04754660;
        puVar12 = (ulong *)(lVar17 + ((lVar13 << 0x20) >> 0x1d) + 0x20);
        *puVar12 = uVar14;
        func_0x032809c4(puVar12,uVar14);
        lVar17 = *(long *)(lVar16 + 0x20);
        if (lVar17 != 0) {
          if (uVar14 != 0) {
            func_0x040d028c(lVar17,lVar13,*(undefined8 *)PTR_DAT_0777ecf0);
            return 1;
          }
          uVar10 = *(ulong *)PTR_DAT_0777ece8;
          uVar7 = func_0x040cefa0(lVar17,lVar13);
          if ((uVar7 & 1) != 0) {
            return 0;
          }
          lVar16 = *(long *)(lVar16 + 0x20);
          if (lVar16 != 0) {
            lVar17 = *(long *)(lVar16 + 0x10);
            lVar19 = *(long *)PTR_DAT_0777ece0;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar17 != 0) {
              uVar3 = *(uint *)(lVar16 + 0x18);
              if (uVar3 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar3 + 1;
                *(long *)(lVar17 + (long)(int)uVar3 * 8 + 0x20) = lVar13;
                return 1;
              }
              func_0x040cec28(lVar16,lVar13,
                              *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              return 1;
            }
          }
        }
      }
      goto LAB_0475465c;
    }
LAB_04754660:
    auVar22 = func_0x03280cb4();
    puVar6 = PTR_DAT_0777ecd0;
    puVar5 = PTR_DAT_0777ecc8;
    lVar16 = auVar22._0_8_;
    puStack_1f0 = puVar4;
    uStack_1e8 = 0x7e19000;
    uStack_1d0 = 0x7e19000;
    plStack_1e0 = plVar21;
    lStack_1d8 = lVar8;
    uStack_1c8 = uVar14;
    auStack_1c0 = auVar23;
    if ((bRam0000000007e196dc & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ece0);
      func_0x03280a18(PTR_DAT_0777ecd0);
      func_0x03280a18(PTR_DAT_0777ecc8);
      bRam0000000007e196dc = 1;
    }
    lStack_1f8 = 0;
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x040ce3d4(uVar7,*(undefined8 *)puVar6);
    puVar4 = PTR_DAT_0777ece0;
    lVar8 = 0x30;
    if ((uVar10 & 1) == 0) {
      lVar8 = 0x28;
    }
    lVar8 = *(long *)(lVar16 + lVar8);
    if (lVar8 == 0) goto LAB_047547f0;
    if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
      return uVar7;
    }
    uVar11 = 0;
    uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
    goto LAB_04754720;
  }
  if ((uVar11 != 0) &&
     (lVar13 = func_0x03280b90(uVar11,*(undefined8 *)(*plVar21 + 0x40)), lVar13 == 0))
  goto LAB_047544ac;
  if (*(uint *)(plVar21 + 3) <= uVar7) goto LAB_047544a8;
  *(ulong *)((long)plVar21 + lVar8) = uVar11;
  uVar11 = func_0x032809c4((ulong *)((long)plVar21 + lVar8),uVar11);
  uVar7 = uVar7 + 1;
  lVar8 = lVar8 + 8;
  if ((long)*(int *)(lVar16 + 0x14) <= (long)uVar7) {
    return uVar11;
  }
  goto LAB_04754418;
LAB_04754720:
  if (uVar10 <= uVar11) {
    func_0x03280cb4();
LAB_047547f0:
    auVar22 = func_0x03280cac();
    if (-1 < auVar22._8_4_) {
      uVar7 = 0;
      if ((-1 < auVar22._8_8_) && (auVar22._8_4_ < *(int *)(auVar22._0_8_ + 0x10))) {
        uVar7 = (ulong)(auVar22._12_4_ < *(int *)(auVar22._0_8_ + 0x14));
      }
      return uVar7;
    }
    return 0;
  }
  piVar1 = (int *)(lVar8 + 0x20 + uVar11 * 8);
  func_0x069fdc94(&lStack_1f8,*piVar1 + auVar22._8_4_,piVar1[1] + auVar22._12_4_,0);
  if ((((-1 < (int)lStack_1f8) && (-1 < lStack_1f8)) && ((int)lStack_1f8 < *(int *)(lVar16 + 0x10)))
     && ((int)((ulong)lStack_1f8 >> 0x20) < *(int *)(lVar16 + 0x14))) {
    if (uVar7 == 0) goto LAB_047547f0;
    lVar13 = *(long *)(uVar7 + 0x10);
    lVar17 = *(long *)puVar4;
    *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_047547f0;
    uVar3 = *(uint *)(uVar7 + 0x18);
    if (uVar3 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(uVar7 + 0x18) = uVar3 + 1;
      *(long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = lStack_1f8;
    }
    else {
      func_0x040cec28(uVar7,lStack_1f8,
                      *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
  uVar11 = uVar11 + 1;
  if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar11) {
    return uVar7;
  }
  goto LAB_04754720;
}

