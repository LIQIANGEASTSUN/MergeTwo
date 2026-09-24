/* Ghidra 12.1.2 native pseudocode; RVA 0x668F69C; Merger.Game.Views.BoardUIView.OnInventoryNotificationChanged; status ok */


ulong Merger_Game_Views_BoardUIView__OnInventoryNotificationChanged(long param_1,uint param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong unaff_x19;
  ulong uVar9;
  ulong *puVar10;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x30;
  float extraout_s0;
  float fVar12;
  undefined1 auVar13 [16];
  
  puVar1 = PTR_DAT_0774e4e0;
  uVar9 = (ulong)param_2;
  if ((bRam0000000007e28290 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e28290 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x06fdeb74(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 == 0) {
      lVar6 = func_0x03280cac();
      if ((*(long *)(lVar6 + 0x68) == 0) ||
         (lVar6 = func_0x06fdbed0(*(long *)(lVar6 + 0x68),0), lVar6 == 0)) {
        lVar6 = func_0x03280cac();
        puVar1 = PTR_DAT_0774e4e0;
        if ((bRam0000000007e28291 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776f318);
          func_0x03280a18(PTR_DAT_07772820);
          func_0x03280a18(PTR_DAT_078091a0);
          func_0x03280a18(PTR_DAT_0774e4e0);
          func_0x03280a18(PTR_DAT_07809198);
          bRam0000000007e28291 = 1;
        }
        uVar11 = *(undefined8 *)(lVar6 + 0x60);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar9 = func_0x06fdeb74(uVar11,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(lVar6 + 0x28) != 0) {
            lVar7 = func_0x06723d10(*(long *)(lVar6 + 0x28),0);
            lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f318);
            func_0x0541e11c(lVar8,lVar6,*(undefined8 *)PTR_DAT_078091a0,0);
            if (lVar7 != 0) {
              lVar6 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_07772820 + 0x20) + 0xc0) + 0x28
                               );
              func_0x04d0dd80();
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)(lVar8 + 0x18))
                                  (*(undefined8 *)(lVar8 + 0x40),*(undefined1 *)(lVar7 + 0x20),
                                   *(undefined8 *)(lVar8 + 0x28));
                return uVar9;
              }
              auVar13 = func_0x03280cac();
              lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x30);
              puVar10 = (ulong *)(auVar13._0_8_ + 0x10);
              uVar9 = *puVar10;
              do {
                lVar7 = func_0x057ddd18(uVar9,auVar13._8_8_,0);
                lVar8 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 8);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = func_0x0325681c(lVar8);
                }
                if (lVar7 == 0) {
                  lVar3 = 0;
                }
                else {
                  lVar3 = func_0x03280b90(lVar7,lVar8);
                  if (lVar3 == 0) {
                    auVar13 = func_0x03281048(lVar7,lVar8);
                    if ((bRam0000000007e1aec2 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_0774e758);
                      bRam0000000007e1aec2 = 1;
                    }
                    puVar1 = PTR_DAT_0774e758;
                    puVar10 = (ulong *)(auVar13._0_8_ + 0x18);
                    uVar9 = *puVar10;
                    while ((plVar4 = (long *)func_0x057ddb20(uVar9,auVar13._8_8_,0),
                           plVar4 == (long *)0x0 || (*plVar4 == *(long *)puVar1))) {
                      uVar5 = func_0x032dd140(puVar10,plVar4,uVar9);
                      bVar2 = uVar9 == uVar5;
                      uVar9 = uVar5;
                      if (bVar2) {
                        return uVar5;
                      }
                    }
                    auVar13 = func_0x03281048(plVar4);
                    if ((bRam0000000007e1aec3 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_0774e758);
                      bRam0000000007e1aec3 = 1;
                    }
                    puVar1 = PTR_DAT_0774e758;
                    puVar10 = (ulong *)(auVar13._0_8_ + 0x18);
                    uVar9 = *puVar10;
                    while ((plVar4 = (long *)func_0x057ddd18(uVar9,auVar13._8_8_,0),
                           plVar4 == (long *)0x0 || (*plVar4 == *(long *)puVar1))) {
                      uVar5 = func_0x032dd140(puVar10,plVar4,uVar9);
                      bVar2 = uVar9 == uVar5;
                      uVar9 = uVar5;
                      if (bVar2) {
                        return uVar5;
                      }
                    }
                    lVar6 = func_0x03281048(plVar4);
                    return (ulong)*(byte *)(lVar6 + 0x20);
                  }
                }
                uVar5 = func_0x032dd140(puVar10,lVar3,uVar9);
                bVar2 = uVar9 != uVar5;
                uVar9 = uVar5;
              } while (bVar2);
              return uVar5;
            }
          }
          lVar6 = func_0x03280cac();
          puVar1 = PTR_DAT_07809190;
          if ((bRam0000000007e28292 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07809190);
            bRam0000000007e28292 = 1;
          }
          uVar9 = func_0x05369b3c(lVar6,*(undefined8 *)puVar1);
          if ((uVar9 & 1) != 0) {
            fVar12 = *(float *)(lVar6 + 0x74);
            uVar9 = func_0x06fd6310(0);
            fVar12 = fVar12 + extraout_s0;
            *(float *)(lVar6 + 0x74) = fVar12;
            if (*(float *)(lVar6 + 0x70) <= fVar12) {
              uVar9 = Merger_Game_Views_BoardUIView__CheckShowMetaButtonTutorial(lVar6);
              *(undefined4 *)(lVar6 + 0x74) = 0;
            }
          }
          return uVar9;
        }
        return uVar9;
      }
      param_2 = 0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x30 = 0x678f734;
    }
    else {
      param_2 = param_2 & 1;
      uVar9 = unaff_x19;
      param_1 = unaff_x20;
      uVar11 = unaff_x21;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar11;
    *(long *)((long)register0x00000008 + -0x10) = param_1;
    *(ulong *)((long)register0x00000008 + -8) = uVar9;
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000007e2fbf0)(lVar6,param_2);
    return uVar9;
  }
  return uVar5;
}

