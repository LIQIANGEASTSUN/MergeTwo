/* Ghidra 12.1.2 native pseudocode; RVA 0x668F650; Merger.Game.Views.BoardUIView.OnGameStateChanged; status ok */


ulong Merger_Game_Views_BoardUIView__OnGameStateChanged(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  float extraout_s0;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 auStack_50 [2];
  
  if ((bRam0000000007e2828f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e2828f = 1;
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    (**(code **)(*plVar6 + 0x578))(plVar6,*(undefined8 *)(*plVar6 + 0x580),0);
                    /* WARNING: Could not recover jumptable at 0x06212af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar6 + 0x588))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x590));
    return uVar5;
  }
  auVar16 = func_0x03280cac();
  puVar1 = PTR_DAT_0774e4e0;
  lVar9 = auVar16._0_8_;
  auStack_50[0] = 0x678f69c;
  uVar5 = auVar16._8_8_ & 0xffffffff;
  if ((bRam0000000007e28290 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e28290 = 1;
  }
  uVar12 = *(undefined8 *)(lVar9 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x06fdeb74(uVar12,0,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)(lVar9 + 0x60);
    if (lVar8 == 0) {
      lVar8 = func_0x03280cac();
      if ((*(long *)(lVar8 + 0x68) == 0) ||
         (lVar8 = func_0x06fdbed0(*(long *)(lVar8 + 0x68),0), lVar8 == 0)) {
        lVar9 = func_0x03280cac();
        puVar1 = PTR_DAT_0774e4e0;
        if ((bRam0000000007e28291 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776f318);
          func_0x03280a18(PTR_DAT_07772820);
          func_0x03280a18(PTR_DAT_078091a0);
          func_0x03280a18(PTR_DAT_0774e4e0);
          func_0x03280a18(PTR_DAT_07809198);
          bRam0000000007e28291 = 1;
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x60);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar5 = func_0x06fdeb74(uVar12,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar9 + 0x28) != 0) {
            lVar8 = func_0x06723d10(*(long *)(lVar9 + 0x28),0);
            lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f318);
            func_0x0541e11c(lVar10,lVar9,*(undefined8 *)PTR_DAT_078091a0,0);
            if (lVar8 != 0) {
              lVar9 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_07772820 + 0x20) + 0xc0) + 0x28
                               );
              func_0x04d0dd80();
              if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (**(code **)(lVar10 + 0x18))
                                  (*(undefined8 *)(lVar10 + 0x40),*(undefined1 *)(lVar8 + 0x20),
                                   *(undefined8 *)(lVar10 + 0x28));
                return uVar5;
              }
              auVar16 = func_0x03280cac();
              lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x30);
              puVar13 = (ulong *)(auVar16._0_8_ + 0x10);
              uVar5 = *puVar13;
              do {
                lVar8 = func_0x057ddd18(uVar5,auVar16._8_8_,0);
                lVar10 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 8);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = func_0x0325681c(lVar10);
                }
                if (lVar8 == 0) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = func_0x03280b90(lVar8,lVar10);
                  if (lVar4 == 0) {
                    auVar16 = func_0x03281048(lVar8,lVar10);
                    if ((bRam0000000007e1aec2 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_0774e758);
                      bRam0000000007e1aec2 = 1;
                    }
                    puVar1 = PTR_DAT_0774e758;
                    puVar13 = (ulong *)(auVar16._0_8_ + 0x18);
                    uVar5 = *puVar13;
                    while ((plVar6 = (long *)func_0x057ddb20(uVar5,auVar16._8_8_,0),
                           plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar1))) {
                      uVar7 = func_0x032dd140(puVar13,plVar6,uVar5);
                      bVar3 = uVar5 == uVar7;
                      uVar5 = uVar7;
                      if (bVar3) {
                        return uVar7;
                      }
                    }
                    auVar16 = func_0x03281048(plVar6);
                    if ((bRam0000000007e1aec3 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_0774e758);
                      bRam0000000007e1aec3 = 1;
                    }
                    puVar1 = PTR_DAT_0774e758;
                    puVar13 = (ulong *)(auVar16._0_8_ + 0x18);
                    uVar5 = *puVar13;
                    while ((plVar6 = (long *)func_0x057ddd18(uVar5,auVar16._8_8_,0),
                           plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar1))) {
                      uVar7 = func_0x032dd140(puVar13,plVar6,uVar5);
                      bVar3 = uVar5 == uVar7;
                      uVar5 = uVar7;
                      if (bVar3) {
                        return uVar7;
                      }
                    }
                    lVar9 = func_0x03281048(plVar6);
                    return (ulong)*(byte *)(lVar9 + 0x20);
                  }
                }
                uVar7 = func_0x032dd140(puVar13,lVar4,uVar5);
                bVar3 = uVar5 != uVar7;
                uVar5 = uVar7;
              } while (bVar3);
              return uVar7;
            }
          }
          lVar9 = func_0x03280cac();
          puVar1 = PTR_DAT_07809190;
          if ((bRam0000000007e28292 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07809190);
            bRam0000000007e28292 = 1;
          }
          uVar5 = func_0x05369b3c(lVar9,*(undefined8 *)puVar1);
          if ((uVar5 & 1) != 0) {
            fVar15 = *(float *)(lVar9 + 0x74);
            uVar5 = func_0x06fd6310(0);
            fVar15 = fVar15 + extraout_s0;
            *(float *)(lVar9 + 0x74) = fVar15;
            if (*(float *)(lVar9 + 0x70) <= fVar15) {
              uVar5 = Merger_Game_Views_BoardUIView__CheckShowMetaButtonTutorial(lVar9);
              *(undefined4 *)(lVar9 + 0x74) = 0;
            }
          }
          return uVar5;
        }
        return uVar5;
      }
      uVar11 = 0;
      puVar2 = auStack_50;
      uVar14 = 0x678f734;
    }
    else {
      uVar11 = auVar16._8_4_ & 1;
      lVar9 = 0x7e28000;
      puVar2 = (undefined8 *)&stack0xffffffffffffffe0;
      uVar5 = param_1;
      uVar12 = unaff_x21;
      uVar14 = auStack_50[0];
    }
    *(undefined8 *)((long)puVar2 + -0x20) = uVar14;
    *(undefined8 *)((long)puVar2 + -0x18) = uVar12;
    *(long *)((long)puVar2 + -0x10) = lVar9;
    *(ulong *)((long)puVar2 + -8) = uVar5;
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000007e2fbf0)(lVar8,uVar11);
    return uVar5;
  }
  return uVar7;
}

