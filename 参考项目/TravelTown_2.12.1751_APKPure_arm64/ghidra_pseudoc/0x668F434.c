/* Ghidra 12.1.2 native pseudocode; RVA 0x668F434; Merger.Game.Views.BoardUIView.OnDisable; status ok */


ulong Merger_Game_Views_BoardUIView__OnDisable(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code **ppcVar4;
  code **ppcVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  float extraout_s0;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 auStack_a0 [2];
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  code *apcStack_70 [2];
  long lStack_60;
  long lStack_58;
  code *apcStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_07809188;
  puVar2 = PTR_DAT_07772b48;
  if ((bRam0000000007e2828d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772b48);
    func_0x03280a18(PTR_DAT_07772690);
    func_0x03280a18(PTR_DAT_0777fab8);
    func_0x03280a18(PTR_DAT_07772b68);
    func_0x03280a18(PTR_DAT_07772718);
    func_0x03280a18(PTR_DAT_0777fac8);
    func_0x03280a18(PTR_DAT_07809178);
    func_0x03280a18(PTR_DAT_07809180);
    func_0x03280a18(PTR_DAT_07809188);
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e2828d = 1;
  }
  lVar16 = *(long *)(param_1 + 0x28);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x054221d4(uVar8,param_1,*(undefined8 *)puVar1,0);
  if (lVar16 != 0) {
    func_0x03cc74c4(lVar16,uVar8,*(undefined8 *)PTR_DAT_07772b68);
    puVar3 = PTR_DAT_07809180;
    puVar1 = PTR_DAT_07772690;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar16 = func_0x06725f74(*(long *)(param_1 + 0x28),0);
      uVar8 = func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x05420c00(uVar8,param_1,*(undefined8 *)puVar3,0);
      if (lVar16 != 0) {
        func_0x04d0ec2c(lVar16,uVar8,*(undefined8 *)PTR_DAT_07772718);
        puVar3 = PTR_DAT_07809178;
        puVar1 = PTR_DAT_0777fab8;
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar16 = func_0x06726160(*(long *)(param_1 + 0x28),0);
          uVar8 = func_0x03280ca0(*(undefined8 *)puVar1);
          func_0x05420c00(uVar8,param_1,*(undefined8 *)puVar3,0);
          if (lVar16 != 0) {
            func_0x04d0ec2c(lVar16,uVar8,*(undefined8 *)PTR_DAT_0777fac8);
            plVar9 = *(long **)(param_1 + 0x28);
            if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0678f5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (**(code **)(*plVar9 + 0x578))(plVar9,*(undefined8 *)(*plVar9 + 0x580));
              return uVar10;
            }
          }
        }
      }
    }
  }
  lVar11 = func_0x03280cac();
  apcStack_50[0] = Merger_Game_Views_BoardUIView__OnBoardTypeChange;
  lStack_40 = lVar16;
  lStack_38 = param_1;
  if ((bRam0000000007e2828e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e2828e = 1;
  }
  plVar9 = *(long **)(lVar11 + 0x28);
  if (plVar9 == (long *)0x0) {
    uVar10 = func_0x03280cac();
    apcStack_70[0] = (code *)0x678f650;
    lStack_60 = 0x7e28000;
    lStack_58 = lVar11;
    if ((bRam0000000007e2828f & 1) == 0) {
      func_0x03280a18(PTR_DAT_07809198);
      bRam0000000007e2828f = 1;
    }
    plVar9 = *(long **)(uVar10 + 0x28);
    if (plVar9 == (long *)0x0) {
      auVar20 = func_0x03280cac();
      puVar1 = PTR_DAT_0774e4e0;
      lVar16 = auVar20._0_8_;
      auStack_a0[0] = 0x678f69c;
      puStack_90 = puVar2;
      lStack_80 = 0x7e28000;
      uVar14 = auVar20._8_8_ & 0xffffffff;
      uStack_88 = uVar8;
      uStack_78 = uVar10;
      if ((bRam0000000007e28290 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e4e0);
        bRam0000000007e28290 = 1;
      }
      uVar8 = *(undefined8 *)(lVar16 + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar10 = func_0x06fdeb74(uVar8,0,0);
      if ((uVar10 & 1) == 0) {
        return uVar10;
      }
      lVar11 = *(long *)(lVar16 + 0x60);
      if (lVar11 == 0) {
        lVar11 = func_0x03280cac();
        if ((*(long *)(lVar11 + 0x68) == 0) ||
           (lVar11 = func_0x06fdbed0(*(long *)(lVar11 + 0x68),0), lVar11 == 0)) {
          lVar16 = func_0x03280cac();
          puVar2 = PTR_DAT_0774e4e0;
          if ((bRam0000000007e28291 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f318);
            func_0x03280a18(PTR_DAT_07772820);
            func_0x03280a18(PTR_DAT_078091a0);
            func_0x03280a18(PTR_DAT_0774e4e0);
            func_0x03280a18(PTR_DAT_07809198);
            bRam0000000007e28291 = 1;
          }
          uVar8 = *(undefined8 *)(lVar16 + 0x60);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar10 = func_0x06fdeb74(uVar8,0,0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(lVar16 + 0x28) != 0) {
              lVar11 = func_0x06723d10(*(long *)(lVar16 + 0x28),0);
              lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f318);
              func_0x0541e11c(lVar12,lVar16,*(undefined8 *)PTR_DAT_078091a0,0);
              if (lVar11 != 0) {
                lVar16 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_07772820 + 0x20) + 0xc0) +
                                  0x28);
                func_0x04d0dd80();
                if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar10 = (**(code **)(lVar12 + 0x18))
                                     (*(undefined8 *)(lVar12 + 0x40),*(undefined1 *)(lVar11 + 0x20),
                                      *(undefined8 *)(lVar12 + 0x28));
                  return uVar10;
                }
                auVar20 = func_0x03280cac();
                lVar16 = *(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x30);
                puVar15 = (ulong *)(auVar20._0_8_ + 0x10);
                uVar10 = *puVar15;
                do {
                  lVar11 = func_0x057ddd18(uVar10,auVar20._8_8_,0);
                  lVar12 = *(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 8);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = func_0x0325681c(lVar12);
                  }
                  if (lVar11 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = func_0x03280b90(lVar11,lVar12);
                    if (lVar7 == 0) {
                      auVar20 = func_0x03281048(lVar11,lVar12);
                      if ((bRam0000000007e1aec2 & 1) == 0) {
                        func_0x03280a18(PTR_DAT_0774e758);
                        bRam0000000007e1aec2 = 1;
                      }
                      puVar2 = PTR_DAT_0774e758;
                      puVar15 = (ulong *)(auVar20._0_8_ + 0x18);
                      uVar10 = *puVar15;
                      while ((plVar9 = (long *)func_0x057ddb20(uVar10,auVar20._8_8_,0),
                             plVar9 == (long *)0x0 || (*plVar9 == *(long *)puVar2))) {
                        uVar14 = func_0x032dd140(puVar15,plVar9,uVar10);
                        bVar6 = uVar10 == uVar14;
                        uVar10 = uVar14;
                        if (bVar6) {
                          return uVar14;
                        }
                      }
                      auVar20 = func_0x03281048(plVar9);
                      if ((bRam0000000007e1aec3 & 1) == 0) {
                        func_0x03280a18(PTR_DAT_0774e758);
                        bRam0000000007e1aec3 = 1;
                      }
                      puVar2 = PTR_DAT_0774e758;
                      puVar15 = (ulong *)(auVar20._0_8_ + 0x18);
                      uVar10 = *puVar15;
                      while ((plVar9 = (long *)func_0x057ddd18(uVar10,auVar20._8_8_,0),
                             plVar9 == (long *)0x0 || (*plVar9 == *(long *)puVar2))) {
                        uVar14 = func_0x032dd140(puVar15,plVar9,uVar10);
                        bVar6 = uVar10 == uVar14;
                        uVar10 = uVar14;
                        if (bVar6) {
                          return uVar14;
                        }
                      }
                      lVar16 = func_0x03281048(plVar9);
                      return (ulong)*(byte *)(lVar16 + 0x20);
                    }
                  }
                  uVar14 = func_0x032dd140(puVar15,lVar7,uVar10);
                  bVar6 = uVar10 != uVar14;
                  uVar10 = uVar14;
                } while (bVar6);
                return uVar14;
              }
            }
            lVar16 = func_0x03280cac();
            puVar2 = PTR_DAT_07809190;
            if ((bRam0000000007e28292 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07809190);
              bRam0000000007e28292 = 1;
            }
            uVar10 = func_0x05369b3c(lVar16,*(undefined8 *)puVar2);
            if ((uVar10 & 1) != 0) {
              fVar19 = *(float *)(lVar16 + 0x74);
              uVar10 = func_0x06fd6310(0);
              fVar19 = fVar19 + extraout_s0;
              *(float *)(lVar16 + 0x74) = fVar19;
              if (*(float *)(lVar16 + 0x70) <= fVar19) {
                uVar10 = Merger_Game_Views_BoardUIView__CheckShowMetaButtonTutorial(lVar16);
                *(undefined4 *)(lVar16 + 0x74) = 0;
              }
            }
            return uVar10;
          }
          return uVar10;
        }
        uVar13 = 0;
        ppcVar5 = (code **)auStack_a0;
        uVar18 = 0x678f734;
      }
      else {
        uVar13 = auVar20._8_4_ & 1;
        ppcVar5 = apcStack_70;
        uVar14 = uStack_78;
        lVar16 = lStack_80;
        uVar8 = uStack_88;
        uVar18 = auStack_a0[0];
      }
      *(undefined8 *)((long)ppcVar5 + -0x20) = uVar18;
      *(undefined8 *)((long)ppcVar5 + -0x18) = uVar8;
      *(long *)((long)ppcVar5 + -0x10) = lVar16;
      *(ulong *)((long)ppcVar5 + -8) = uVar14;
      if (pcRam0000000007e2fbf0 == (code *)0x0) {
        pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
      }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*pcRam0000000007e2fbf0)(lVar11,uVar13);
      return uVar10;
    }
    uVar8 = *(undefined8 *)(uVar10 + 0x38);
    ppcVar4 = apcStack_50;
    lVar16 = lStack_58;
    lVar11 = lStack_60;
    pcVar17 = apcStack_70[0];
  }
  else {
    uVar8 = *(undefined8 *)(lVar11 + 0x38);
    ppcVar4 = (code **)&stack0xffffffffffffffd0;
    lVar16 = lStack_38;
    lVar11 = lStack_40;
    pcVar17 = apcStack_50[0];
  }
  *(code **)((long)ppcVar4 + -0x20) = pcVar17;
  *(long *)((long)ppcVar4 + -0x10) = lVar11;
  *(long *)((long)ppcVar4 + -8) = lVar16;
  (**(code **)(*plVar9 + 0x578))(plVar9,*(undefined8 *)(*plVar9 + 0x580),0);
                    /* WARNING: Could not recover jumptable at 0x06212af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (**(code **)(*plVar9 + 0x588))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x590));
  return uVar10;
}

