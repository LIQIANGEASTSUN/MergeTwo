/* Ghidra 12.1.2 native pseudocode; RVA 0x66922A0; Merger.Game.Views.BoardView.TrySubscribeToBoardContainerDimensionsChange; status ok */


/* WARNING: Possible PIC construction at 0x06792534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0679275c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069aa740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06792760) */
/* WARNING: Removing unreachable block (ram,0x06792764) */
/* WARNING: Removing unreachable block (ram,0x06792778) */
/* WARNING: Removing unreachable block (ram,0x06792780) */
/* WARNING: Removing unreachable block (ram,0x0679279c) */
/* WARNING: Removing unreachable block (ram,0x067927a4) */
/* WARNING: Removing unreachable block (ram,0x067927cc) */
/* WARNING: Removing unreachable block (ram,0x067927b0) */
/* WARNING: Removing unreachable block (ram,0x067927bc) */
/* WARNING: Removing unreachable block (ram,0x067927d8) */
/* WARNING: Removing unreachable block (ram,0x06792874) */
/* WARNING: Removing unreachable block (ram,0x067927e8) */
/* WARNING: Removing unreachable block (ram,0x06792864) */
/* WARNING: Removing unreachable block (ram,0x06792808) */
/* WARNING: Removing unreachable block (ram,0x06792848) */
/* WARNING: Removing unreachable block (ram,0x0679284c) */
/* WARNING: Removing unreachable block (ram,0x069aa69c) */
/* WARNING: Removing unreachable block (ram,0x069aa6bc) */
/* WARNING: Removing unreachable block (ram,0x069aa6d0) */
/* WARNING: Removing unreachable block (ram,0x069aa6dc) */
/* WARNING: Removing unreachable block (ram,0x069aa6e0) */
/* WARNING: Removing unreachable block (ram,0x069aa6f4) */
/* WARNING: Removing unreachable block (ram,0x069aa71c) */
/* WARNING: Removing unreachable block (ram,0x069aa730) */
/* WARNING: Removing unreachable block (ram,0x06792538) */
/* WARNING: Removing unreachable block (ram,0x0679253c) */
/* WARNING: Removing unreachable block (ram,0x067925e4) */
/* WARNING: Removing unreachable block (ram,0x06792568) */
/* WARNING: Removing unreachable block (ram,0x0679259c) */
/* WARNING: Removing unreachable block (ram,0x067925b4) */
/* WARNING: Removing unreachable block (ram,0x067925bc) */
/* WARNING: Removing unreachable block (ram,0x067925f4) */
/* WARNING: Removing unreachable block (ram,0x067925c8) */
/* WARNING: Removing unreachable block (ram,0x067925d4) */
/* WARNING: Removing unreachable block (ram,0x06792600) */
/* WARNING: Removing unreachable block (ram,0x06792610) */
/* WARNING: Removing unreachable block (ram,0x067926d0) */
/* WARNING: Removing unreachable block (ram,0x067926fc) */
/* WARNING: Removing unreachable block (ram,0x0679274c) */
/* WARNING: Removing unreachable block (ram,0x06792660) */
/* WARNING: Removing unreachable block (ram,0x06792678) */
/* WARNING: Removing unreachable block (ram,0x06792680) */
/* WARNING: Removing unreachable block (ram,0x067926a8) */
/* WARNING: Removing unreachable block (ram,0x0679268c) */
/* WARNING: Removing unreachable block (ram,0x06792698) */
/* WARNING: Removing unreachable block (ram,0x067926b4) */
/* WARNING: Removing unreachable block (ram,0x069aa744) */
/* WARNING: Removing unreachable block (ram,0x069aa748) */
/* WARNING: Removing unreachable block (ram,0x069aa7d8) */
/* WARNING: Removing unreachable block (ram,0x069aa7e0) */
/* WARNING: Removing unreachable block (ram,0x069aa76c) */
/* WARNING: Removing unreachable block (ram,0x069aa778) */
/* WARNING: Removing unreachable block (ram,0x069aa78c) */
/* WARNING: Removing unreachable block (ram,0x069aa7fc) */
/* WARNING: Removing unreachable block (ram,0x069aa7a4) */
/* WARNING: Removing unreachable block (ram,0x069aa80c) */
/* WARNING: Removing unreachable block (ram,0x069aa7bc) */
/* WARNING: Removing unreachable block (ram,0x06fe0ba0) */
/* WARNING: Removing unreachable block (ram,0x06fe0c14) */
/* WARNING: Removing unreachable block (ram,0x06fe0bac) */
/* WARNING: Removing unreachable block (ram,0x06fe0bc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bd4) */
/* WARNING: Removing unreachable block (ram,0x06fe0c48) */
/* WARNING: Removing unreachable block (ram,0x06fe0c78) */
/* WARNING: Removing unreachable block (ram,0x06fe0cac) */
/* WARNING: Removing unreachable block (ram,0x06fe0cc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0be0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bec) */
/* WARNING: Removing unreachable block (ram,0x06fe0c00) */

ulong Merger_Game_Views_BoardView__TrySubscribeToBoardContainerDimensionsChange(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code **ppcVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar15;
  undefined *unaff_x23;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_40;
  undefined *puStack_38;
  
  puVar12 = (undefined8 *)0x7e28000;
  if ((bRam0000000007e282bc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07809320);
    func_0x03280a18(PTR_DAT_0777ab78);
    func_0x03280a18(PTR_DAT_07809328);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809168);
    bRam0000000007e282bc = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0679246c;
  uVar6 = func_0x06724224(*(long *)(param_1 + 0x28),0);
  unaff_x21 = PTR_DAT_0774e4e0;
  if ((uVar6 & 1) != 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar6 = func_0x06fe04ec(puVar12,0,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar7 = func_0x03cec8b4(*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_0777ab78);
        puVar12 = (undefined8 *)(param_1 + 0x180);
        *(undefined8 *)(param_1 + 0x180) = uVar7;
        func_0x032809c4(puVar12,uVar7);
        lVar8 = *(long *)unaff_x21;
        unaff_x21 = *(undefined **)(param_1 + 0x180);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar6 = func_0x06fe04ec(unaff_x21,0,0);
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(param_1 + 0x70) == 0) ||
             (lVar8 = func_0x06fdbed0(*(long *)(param_1 + 0x70),0), lVar8 == 0)) goto LAB_0679246c;
          uVar7 = func_0x03dc9430(lVar8,*(undefined8 *)PTR_DAT_07809328);
          *puVar12 = uVar7;
          func_0x032809c4(puVar12,uVar7);
        }
        unaff_x22 = PTR_DAT_0774e758;
        lVar8 = *(long *)(param_1 + 0x180);
        unaff_x21 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
        unaff_x23 = PTR_DAT_07809320;
        func_0x056ed730(unaff_x21,param_1,*(undefined8 *)PTR_DAT_07809320,0);
        puVar12 = (undefined8 *)0x0;
        if (lVar8 != 0) {
          func_0x069adca0(lVar8,unaff_x21,0);
          lVar8 = *(long *)(param_1 + 0x180);
          unaff_x21 = (undefined *)func_0x03280ca0(*(undefined8 *)unaff_x22);
          func_0x056ed730(unaff_x21,param_1,*(undefined8 *)unaff_x23,0);
          puVar12 = (undefined8 *)0x0;
          if (lVar8 != 0) {
            if ((bRam0000000007e29543 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758,unaff_x21,0);
              bRam0000000007e29543 = 1;
            }
            puVar2 = PTR_DAT_0774e758;
            pcVar13 = (code *)(lVar8 + 0x38);
            uVar6 = *(ulong *)pcVar13;
            while ((plVar9 = (long *)func_0x057ddb20(uVar6,unaff_x21,0), plVar9 == (long *)0x0 ||
                   (*plVar9 == *(long *)puVar2))) {
              uVar10 = func_0x032dd140(pcVar13,plVar9,uVar6);
              bVar5 = uVar6 == uVar10;
              uVar6 = uVar10;
              if (bVar5) {
                return uVar10;
              }
            }
            lVar8 = func_0x03281048(plVar9);
            lVar14 = 0x7e29000;
            pcStack_40 = pcVar13;
            puStack_38 = unaff_x21;
            if ((bRam0000000007e29529 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              func_0x03280a18(PTR_DAT_07824020);
              bRam0000000007e29529 = 1;
            }
            uVar6 = func_0x0726f3a0(lVar8,0);
            puVar3 = PTR_DAT_07824020;
            puVar2 = PTR_DAT_0774e758;
            lVar15 = *(long *)(lVar8 + 0x40);
            if ((lVar15 != 0) && (uVar1 = *(uint *)(lVar15 + 0x18), 0 < (int)uVar1)) {
              lVar16 = 0;
              do {
                if (uVar1 <= (uint)lVar16) {
                  func_0x03280cb4();
LAB_069adeb8:
                  lVar8 = func_0x03280cac();
                  if (*(long *)(lVar8 + 0x48) != 0) {
                    func_0x06fe95bc(*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                                    *(long *)(lVar8 + 0x48),0);
                    if (*(long *)(lVar8 + 0x48) != 0) {
                      func_0x06fe96d8(*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),
                                      *(long *)(lVar8 + 0x48),0);
                      if (*(long *)(lVar8 + 0x48) != 0) {
                        uVar6 = func_0x06fe9a2c(*(undefined4 *)(lVar8 + 0x30),
                                                *(undefined4 *)(lVar8 + 0x34),
                                                *(long *)(lVar8 + 0x48),0);
                        if (*(char *)(lVar8 + 0x38) == '\0') {
                          return uVar6;
                        }
                        lVar14 = 0x7e13000;
                        lVar15 = *(long *)(lVar8 + 0x48);
                        if (cRam0000000007e136d6 == '\0') {
                          func_0x03280a18(PTR_DAT_0774fd60);
                          cRam0000000007e136d6 = '\x01';
                        }
                        lVar8 = 0;
                        if (lVar15 != 0) {
                          puVar11 = *(undefined4 **)(*(long *)PTR_DAT_0774fd60 + 0xb8);
                          uVar18 = puVar11[1];
                          uVar19 = puVar11[2];
                          func_0x06fe97f4(*puVar11,lVar15,0);
                          uVar17 = func_0x06fe9aec(lVar15);
                          uStack_b0 = CONCAT44(uVar18,uVar17);
                          lStack_a8 = CONCAT44(lStack_a8._4_4_,uVar19);
                          if (pcRam0000000007e30418 == (code *)0x0) {
                            pcRam0000000007e30418 = (code *)func_0x032809dc(&UNK_017990cf);
                          }
                          uVar6 = (*pcRam0000000007e30418)(lVar15,&uStack_b0);
                          return uVar6;
                        }
                      }
                    }
                  }
                  uVar6 = func_0x03280cac();
                  *(undefined1 *)(uVar6 + 0x38) = 1;
                  puVar2 = PTR_DAT_0774e4e0;
                  uStack_b0 = lVar14;
                  lStack_a8 = lVar8;
                  if ((bRam0000000007e2fb28 & 1) == 0) {
                    func_0x03280a18(PTR_DAT_0774e4e0,0);
                    bRam0000000007e2fb28 = 1;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) != 0) {
                    return uVar6;
                  }
                  func_0x03280b8c();
                  return uVar6;
                }
                lVar14 = *(long *)(lVar15 + 0x20 + lVar16 * 8);
                uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
                func_0x056ed730(uVar7,lVar8,*(undefined8 *)puVar3,0);
                if (lVar14 == 0) goto LAB_069adeb8;
                uVar6 = func_0x069adca0(lVar14,uVar7);
                uVar1 = *(uint *)(lVar15 + 0x18);
                lVar16 = lVar16 + 1;
              } while ((int)lVar16 < (int)uVar1);
            }
            return uVar6;
          }
        }
      }
LAB_0679246c:
      func_0x03280cac();
      ppcVar4 = &pcStack_40;
      pcStack_40 = Merger_Game_Views_BoardView__OnPlayStackingAnimation;
      if (extraout_x1 == 0) {
        pcVar13 = Merger_Game_Views_BoardView__PlayStackingAnimation;
        func_0x03280cac();
        uVar7 = extraout_x1_00;
      }
      else {
        uVar7 = *(undefined8 *)(extraout_x1 + 0x10);
        ppcVar4 = (code **)&stack0xffffffffffffffd0;
        pcVar13 = Merger_Game_Views_BoardView__OnPlayStackingAnimation;
      }
      puVar2 = PTR_DAT_07809330;
      *(code **)((long)ppcVar4 + -0x30) = pcVar13;
      *(undefined **)((long)ppcVar4 + -0x28) = unaff_x23;
      *(undefined **)((long)ppcVar4 + -0x20) = unaff_x22;
      *(undefined **)((long)ppcVar4 + -0x18) = unaff_x21;
      *(undefined8 **)((long)ppcVar4 + -0x10) = puVar12;
      *(long *)((long)ppcVar4 + -8) = param_1;
      if ((bRam0000000007e282ed & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776e340,uVar7);
        func_0x03280a18(PTR_DAT_07772358);
        func_0x03280a18(PTR_DAT_077c0858);
        func_0x03280a18(PTR_DAT_07772368);
        func_0x03280a18(PTR_DAT_07809338);
        func_0x03280a18(PTR_DAT_07809330);
        func_0x03280a18(PTR_DAT_07809168);
        func_0x03280a18(PTR_DAT_07809340);
        bRam0000000007e282ed = 1;
      }
      uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
      return uVar6;
    }
  }
  return uVar6;
}

