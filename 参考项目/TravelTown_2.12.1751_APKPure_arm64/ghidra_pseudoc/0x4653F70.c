/* Ghidra 12.1.2 native pseudocode; RVA 0x4653F70; MergeEngine.Util.TwoDArray<T>..ctor; status ok */


/* WARNING: Possible PIC construction at 0x0475427c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04754280) */

ulong MergeEngine_Util_TwoDArray_T____ctor(ulong param_1,uint param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_0777ecd8;
  puVar8 = PTR_DAT_0777ecd0;
  puVar4 = PTR_DAT_0777ecc8;
  puVar6 = auStack_b0;
  uVar20 = (ulong)param_3;
  uVar21 = (ulong)param_2;
  if ((bRam0000000007e196d9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ecd8);
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196d9 = 1;
  }
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x040ce3d4(uVar7,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  func_0x032809c4((undefined8 *)(param_1 + 0x20),uVar7);
  puVar8 = (undefined *)func_0x03280afc(*(undefined8 *)puVar5,4);
  uStack_48 = 0;
  func_0x069fdc94(&uStack_48,0xffffffff,0,0);
  if (puVar8 != (undefined *)0x0) {
    if (*(int *)(puVar8 + 0x18) != 0) {
      *(undefined8 *)(puVar8 + 0x20) = uStack_48;
      uStack_58 = 0;
      func_0x069fdc94(&uStack_58,1,0,0);
      if (1 < *(uint *)(puVar8 + 0x18)) {
        *(undefined8 *)(puVar8 + 0x28) = uStack_58;
        uStack_60 = 0;
        func_0x069fdc94(&uStack_60,0,0xffffffff,0);
        if (2 < *(uint *)(puVar8 + 0x18)) {
          *(undefined8 *)(puVar8 + 0x30) = uStack_60;
          uStack_68 = 0;
          func_0x069fdc94(&uStack_68,0,1,0);
          if (3 < *(uint *)(puVar8 + 0x18)) {
            *(undefined8 *)(puVar8 + 0x38) = uStack_68;
            *(undefined8 *)(param_1 + 0x28) = puVar8;
            func_0x032809c4((undefined8 *)(param_1 + 0x28),puVar8);
            puVar8 = (undefined *)func_0x03280afc(*(undefined8 *)puVar5,8);
            uStack_70 = 0;
            func_0x069fdc94(&uStack_70,0xffffffff,0,0);
            if (puVar8 == (undefined *)0x0) goto LAB_047542a8;
            if (*(int *)(puVar8 + 0x18) != 0) {
              *(undefined8 *)(puVar8 + 0x20) = uStack_70;
              uStack_78 = 0;
              func_0x069fdc94(&uStack_78,1,0,0);
              if (1 < *(uint *)(puVar8 + 0x18)) {
                *(undefined8 *)(puVar8 + 0x28) = uStack_78;
                uStack_80 = 0;
                func_0x069fdc94(&uStack_80,0,0xffffffff,0);
                if (2 < *(uint *)(puVar8 + 0x18)) {
                  *(undefined8 *)(puVar8 + 0x30) = uStack_80;
                  uStack_88 = 0;
                  func_0x069fdc94(&uStack_88,0,1,0);
                  if (3 < *(uint *)(puVar8 + 0x18)) {
                    *(undefined8 *)(puVar8 + 0x38) = uStack_88;
                    uStack_90 = 0;
                    func_0x069fdc94(&uStack_90,0xffffffff,0xffffffff,0);
                    if (4 < *(uint *)(puVar8 + 0x18)) {
                      *(undefined8 *)(puVar8 + 0x40) = uStack_90;
                      uStack_98 = 0;
                      func_0x069fdc94(&uStack_98,0xffffffff,1,0);
                      if (5 < *(uint *)(puVar8 + 0x18)) {
                        *(undefined8 *)(puVar8 + 0x48) = uStack_98;
                        uStack_a0 = 0;
                        func_0x069fdc94(&uStack_a0,1,1,0);
                        if (6 < *(uint *)(puVar8 + 0x18)) {
                          uVar14 = 0xffffffff;
                          *(undefined8 *)(puVar8 + 0x50) = uStack_a0;
                          uStack_a8 = 0;
                          func_0x069fdc94(&uStack_a8,1,0xffffffff,0);
                          if (7 < *(uint *)(puVar8 + 0x18)) {
                            *(undefined8 *)(puVar8 + 0x58) = uStack_a8;
                            *(undefined8 *)(param_1 + 0x30) = puVar8;
                            func_0x032809c4((undefined8 *)(param_1 + 0x30),puVar8);
                            func_0x057da5fc(param_1,0);
                            *(uint *)(param_1 + 0x10) = param_2;
                            *(uint *)(param_1 + 0x14) = param_3;
                            lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
                            uVar7 = 0x4754280;
                            uVar9 = param_1;
SUB_047543b4:
                            *(undefined8 *)(puVar6 + -0x40) = uVar7;
                            *(undefined **)(puVar6 + -0x30) = puVar5;
                            *(undefined **)(puVar6 + -0x28) = puVar8;
                            *(ulong *)(puVar6 + -0x20) = uVar21;
                            *(ulong *)(puVar6 + -0x18) = uVar20;
                            *(ulong *)(puVar6 + -0x10) = param_4;
                            *(ulong *)(puVar6 + -8) = uVar9;
                            uVar2 = *(undefined4 *)(param_1 + 0x14);
                            lVar18 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x18);
                            if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                              lVar18 = func_0x0325681c();
                            }
                            uVar7 = func_0x03280afc(lVar18,uVar2);
                            *(undefined8 *)(param_1 + 0x18) = uVar7;
                            uVar20 = func_0x032809c4((undefined8 *)(param_1 + 0x18));
                            if (0 < *(int *)(param_1 + 0x14)) {
                              uVar21 = 0;
                              lVar18 = 0x20;
                              do {
                                plVar22 = *(long **)(param_1 + 0x18);
                                uVar3 = *(uint *)(param_1 + 0x10);
                                lVar11 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x28
                                                  );
                                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                                  lVar11 = func_0x0325681c();
                                }
                                uVar20 = func_0x03280afc(lVar11,(ulong)uVar3);
                                if (plVar22 == (long *)0x0) {
                                  func_0x03280cac();
                                  uVar20 = (ulong)uVar3;
LAB_047544a8:
                                  func_0x03280cb4();
LAB_047544ac:
                                  uVar7 = func_0x03280cd0();
                                  auVar23 = func_0x03280b7c(uVar7,0);
                                  *(undefined8 *)(puVar6 + -0x50) = 0x47544b8;
                                  lVar11 = *(long *)(auVar23._0_8_ + 0x18);
                                  if (lVar11 == 0) {
LAB_04754504:
                                    func_0x03280cac();
                                  }
                                  else if (auVar23._12_4_ < *(uint *)(lVar11 + 0x18)) {
                                    lVar11 = *(long *)(lVar11 + (auVar23._8_8_ >> 0x20) * 8 + 0x20);
                                    if (lVar11 == 0) goto LAB_04754504;
                                    if (auVar23._8_4_ < *(uint *)(lVar11 + 0x18)) {
                                      return *(ulong *)(lVar11 + ((auVar23._8_8_ << 0x20) >> 0x1d) +
                                                       0x20);
                                    }
                                  }
                                  auVar23 = func_0x03280cb4();
                                  lVar16 = auVar23._8_8_;
                                  lVar11 = auVar23._0_8_;
                                  *(undefined8 *)(puVar6 + -0x80) = 0x475450c;
                                  *(ulong *)(puVar6 + -0x70) = uVar21;
                                  *(ulong *)(puVar6 + -0x68) = uVar20;
                                  *(ulong *)(puVar6 + -0x60) = param_1;
                                  *(long *)(puVar6 + -0x58) = lVar13;
                                  uVar20 = uVar14;
                                  if ((bRam0000000007e196db & 1) == 0) {
                                    func_0x03280a18(PTR_DAT_0777ece0);
                                    func_0x03280a18(PTR_DAT_0777ece8);
                                    func_0x03280a18(PTR_DAT_0777ecf0);
                                    bRam0000000007e196db = 1;
                                  }
                                  lVar13 = *(long *)(lVar11 + 0x18);
                                  if (lVar13 == 0) {
LAB_0475465c:
                                    func_0x03280cac();
                                  }
                                  else if (auVar23._12_4_ < *(uint *)(lVar13 + 0x18)) {
                                    lVar13 = *(long *)(lVar13 + (lVar16 >> 0x20) * 8 + 0x20);
                                    if (lVar13 != 0) {
                                      if (*(uint *)(lVar13 + 0x18) <= auVar23._8_4_)
                                      goto LAB_04754660;
                                      puVar12 = (ulong *)(lVar13 + ((lVar16 << 0x20) >> 0x1d) + 0x20
                                                         );
                                      *puVar12 = uVar14;
                                      func_0x032809c4(puVar12,uVar14);
                                      lVar13 = *(long *)(lVar11 + 0x20);
                                      if (lVar13 != 0) {
                                        if (uVar14 != 0) {
                                          func_0x040d028c(lVar13,lVar16,
                                                          *(undefined8 *)PTR_DAT_0777ecf0);
                                          return 1;
                                        }
                                        uVar20 = *(ulong *)PTR_DAT_0777ece8;
                                        uVar21 = func_0x040cefa0(lVar13,lVar16);
                                        if ((uVar21 & 1) != 0) {
                                          return 0;
                                        }
                                        lVar13 = *(long *)(lVar11 + 0x20);
                                        if (lVar13 != 0) {
                                          lVar11 = *(long *)(lVar13 + 0x10);
                                          lVar19 = *(long *)PTR_DAT_0777ece0;
                                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                          if (lVar11 != 0) {
                                            uVar3 = *(uint *)(lVar13 + 0x18);
                                            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                                              *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                                              *(long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) =
                                                   lVar16;
                                              return 1;
                                            }
                                            func_0x040cec28(lVar13,lVar16,
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar19 + 0x20) +
                                                                       0xc0) + 0x70));
                                            return 1;
                                          }
                                        }
                                      }
                                    }
                                    goto LAB_0475465c;
                                  }
LAB_04754660:
                                  auVar24 = func_0x03280cb4();
                                  puVar5 = PTR_DAT_0777ecd0;
                                  puVar8 = PTR_DAT_0777ecc8;
                                  lVar13 = auVar24._0_8_;
                                  *(undefined8 *)(puVar6 + -0xd0) = 0x4754664;
                                  *(undefined **)(puVar6 + -0xc0) = puVar4;
                                  *(undefined8 *)(puVar6 + -0xb8) = 0x7e19000;
                                  *(long **)(puVar6 + -0xb0) = plVar22;
                                  *(long *)(puVar6 + -0xa8) = lVar18;
                                  *(undefined8 *)(puVar6 + -0xa0) = 0x7e19000;
                                  *(ulong *)(puVar6 + -0x98) = uVar14;
                                  *(undefined1 (*) [16])(puVar6 + -0x90) = auVar23;
                                  if ((bRam0000000007e196dc & 1) == 0) {
                                    func_0x03280a18(PTR_DAT_0777ece0);
                                    func_0x03280a18(PTR_DAT_0777ecd0);
                                    func_0x03280a18(PTR_DAT_0777ecc8);
                                    bRam0000000007e196dc = 1;
                                  }
                                  uVar7 = *(undefined8 *)puVar8;
                                  *(undefined8 *)(puVar6 + -200) = 0;
                                  uVar21 = func_0x03280ca0(uVar7);
                                  func_0x040ce3d4(uVar21,*(undefined8 *)puVar5);
                                  puVar4 = PTR_DAT_0777ece0;
                                  lVar18 = 0x30;
                                  if ((uVar20 & 1) == 0) {
                                    lVar18 = 0x28;
                                  }
                                  lVar18 = *(long *)(lVar13 + lVar18);
                                  if (lVar18 == 0) goto LAB_047547f0;
                                  if ((int)*(ulong *)(lVar18 + 0x18) < 1) {
                                    return uVar21;
                                  }
                                  uVar20 = 0;
                                  uVar14 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
                                  goto LAB_04754720;
                                }
                                if ((uVar20 != 0) &&
                                   (lVar11 = func_0x03280b90(uVar20,*(undefined8 *)(*plVar22 + 0x40)
                                                            ), lVar11 == 0)) goto LAB_047544ac;
                                if (*(uint *)(plVar22 + 3) <= uVar21) goto LAB_047544a8;
                                *(ulong *)((long)plVar22 + lVar18) = uVar20;
                                uVar20 = func_0x032809c4((ulong *)((long)plVar22 + lVar18),uVar20);
                                uVar21 = uVar21 + 1;
                                lVar18 = lVar18 + 8;
                              } while ((long)uVar21 < (long)*(int *)(param_1 + 0x14));
                            }
                            return uVar20;
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
  uVar9 = func_0x03280cac();
  puVar6 = auStack_f0;
  uStack_e0 = 0x47542ac;
  uVar10 = uVar9;
  puStack_d8 = puVar8;
  uStack_d0 = uVar21;
  uStack_c8 = uVar20;
  uStack_c0 = param_4;
  uStack_b8 = param_1;
  if ((bRam0000000007e196da & 1) == 0) {
    uVar10 = func_0x03280a18(PTR_DAT_0777ece0);
    bRam0000000007e196da = 1;
  }
  puVar8 = PTR_DAT_0777ece0;
  iVar15 = *(int *)(uVar9 + 0x14);
  if (0 < iVar15) {
    iVar17 = *(int *)(uVar9 + 0x10);
    param_4 = 0;
    do {
      if (0 < iVar17) {
        uVar20 = 0;
        do {
          uVar21 = *(ulong *)(uVar9 + 0x20);
          uStack_e8 = 0;
          uVar14 = param_4;
          uVar10 = func_0x069fdc94(&uStack_e8,uVar20,param_4,0);
          if (uVar21 == 0) {
LAB_047543b0:
            uVar7 = 0x47543b4;
            auVar23 = func_0x03280cac();
            lVar13 = auVar23._8_8_;
            param_1 = auVar23._0_8_;
            goto SUB_047543b4;
          }
          lVar13 = *(long *)(uVar21 + 0x10);
          lVar18 = *(long *)puVar8;
          *(int *)(uVar21 + 0x1c) = *(int *)(uVar21 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_047543b0;
          uVar3 = *(uint *)(uVar21 + 0x18);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(uVar21 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = uStack_e8;
          }
          else {
            uVar10 = func_0x040cec28(uVar21,uStack_e8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          iVar17 = *(int *)(uVar9 + 0x10);
          uVar3 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar3;
        } while ((int)uVar3 < iVar17);
        iVar15 = *(int *)(uVar9 + 0x14);
      }
      uVar3 = (int)param_4 + 1;
      param_4 = (ulong)uVar3;
    } while ((int)uVar3 < iVar15);
  }
  return uVar10;
LAB_04754720:
  if (uVar14 <= uVar20) {
    func_0x03280cb4();
LAB_047547f0:
    auVar23 = func_0x03280cac();
    if (-1 < auVar23._8_4_) {
      uVar20 = 0;
      if ((-1 < auVar23._8_8_) && (auVar23._8_4_ < *(int *)(auVar23._0_8_ + 0x10))) {
        uVar20 = (ulong)(auVar23._12_4_ < *(int *)(auVar23._0_8_ + 0x14));
      }
      return uVar20;
    }
    return 0;
  }
  piVar1 = (int *)(lVar18 + 0x20 + uVar20 * 8);
  func_0x069fdc94(puVar6 + -200,*piVar1 + auVar24._8_4_,piVar1[1] + auVar24._12_4_,0);
  lVar11 = *(long *)(puVar6 + -200);
  if ((((-1 < (int)lVar11) && (-1 < lVar11)) && ((int)lVar11 < *(int *)(lVar13 + 0x10))) &&
     ((int)((ulong)lVar11 >> 0x20) < *(int *)(lVar13 + 0x14))) {
    if (uVar21 == 0) goto LAB_047547f0;
    lVar16 = *(long *)(uVar21 + 0x10);
    lVar19 = *(long *)puVar4;
    *(int *)(uVar21 + 0x1c) = *(int *)(uVar21 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_047547f0;
    uVar3 = *(uint *)(uVar21 + 0x18);
    if (uVar3 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(uVar21 + 0x18) = uVar3 + 1;
      *(long *)(lVar16 + (long)(int)uVar3 * 8 + 0x20) = lVar11;
    }
    else {
      func_0x040cec28(uVar21,lVar11,
                      *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar14 = (ulong)*(uint *)(lVar18 + 0x18);
  uVar20 = uVar20 + 1;
  if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar20) {
    return uVar21;
  }
  goto LAB_04754720;
}

