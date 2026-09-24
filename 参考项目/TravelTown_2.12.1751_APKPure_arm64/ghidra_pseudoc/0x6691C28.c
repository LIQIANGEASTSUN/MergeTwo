/* Ghidra 12.1.2 native pseudocode; RVA 0x6691C28; Merger.Game.Views.BoardView.Start; status ok */


/* WARNING: Possible PIC construction at 0x06791e30: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06791e34) */
/* WARNING: Removing unreachable block (ram,0x06791e48) */
/* WARNING: Removing unreachable block (ram,0x06791e50) */
/* WARNING: Removing unreachable block (ram,0x06791e7c) */
/* WARNING: Removing unreachable block (ram,0x06791ec0) */
/* WARNING: Removing unreachable block (ram,0x06791f0c) */
/* WARNING: Removing unreachable block (ram,0x06791f58) */
/* WARNING: Removing unreachable block (ram,0x06791f94) */
/* WARNING: Removing unreachable block (ram,0x06791fec) */
/* WARNING: Removing unreachable block (ram,0x0679200c) */
/* WARNING: Removing unreachable block (ram,0x072cde44) */
/* WARNING: Removing unreachable block (ram,0x06792024) */
/* WARNING: Removing unreachable block (ram,0x06792040) */
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

ulong Merger_Game_Views_BoardView__Start(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  code **ppcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined8 *puVar17;
  code *pcVar18;
  undefined *puVar19;
  undefined *unaff_x22;
  long lVar20;
  undefined *unaff_x23;
  long lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_110;
  long lStack_108;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  
  if ((bRam0000000007e282b0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f318);
    func_0x03280a18(PTR_DAT_077726c8);
    func_0x03280a18(PTR_DAT_078092a8);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_078092b0);
    func_0x03280a18(PTR_DAT_078092b8);
    func_0x03280a18(PTR_DAT_078092c0);
    func_0x03280a18(PTR_DAT_077726e8);
    func_0x03280a18(PTR_DAT_078092c8);
    func_0x03280a18(PTR_DAT_078092d0);
    func_0x03280a18(PTR_DAT_07772820);
    func_0x03280a18(PTR_DAT_078092d8);
    func_0x03280a18(PTR_DAT_078092e0);
    func_0x03280a18(PTR_DAT_078092e8);
    func_0x03280a18(PTR_DAT_078092f0);
    func_0x03280a18(PTR_DAT_078092f8);
    func_0x03280a18(PTR_DAT_07809300);
    func_0x03280a18(PTR_DAT_077706c0);
    func_0x03280a18(PTR_DAT_07809248);
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_0777c210);
    func_0x03280a18(PTR_DAT_07809168);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e282b0 = 1;
  }
  puVar19 = PTR_DAT_077706c0;
  if (param_1[0xf] != 0) {
    lVar5 = func_0x03cec8b4(param_1[0xf],*(undefined8 *)PTR_DAT_07809248);
    param_1[0x2b] = lVar5;
    func_0x032809c4(param_1 + 0x2b);
    Merger_Game_Views_BoardView__HideSelector(param_1);
    lVar5 = func_0x03cecf70(param_1,*(undefined8 *)puVar19);
    puVar19 = PTR_DAT_0774e758;
    if (lVar5 != 0) {
      lVar5 = func_0x03cec8b4(lVar5,*(undefined8 *)PTR_DAT_0774e930);
      param_1[0x22] = lVar5;
      func_0x032809c4(param_1 + 0x22);
      lVar5 = param_1[5];
      uVar6 = func_0x03280ca0(*(undefined8 *)puVar19);
      func_0x056ed730(uVar6,param_1,*(undefined8 *)(*param_1 + 0x420),0);
      unaff_x22 = puVar19;
      if (lVar5 != 0) {
        func_0x067240ec(lVar5,uVar6,0);
        lVar5 = (**(code **)(*param_1 + 0x4d8))(param_1,*(undefined8 *)(*param_1 + 0x4e0));
        if (lVar5 == 0) {
          func_0x03280a2c(PTR_DAT_0775baa8,0,0);
          uVar11 = func_0x03280ca0();
          uVar6 = func_0x03280a2c(PTR_DAT_0784dc28);
          func_0x05798c04(uVar11,uVar6,0);
        }
        else {
          if (pcRam0000000007e2fd10 == (code *)0x0) {
            pcRam0000000007e2fd10 = (code *)func_0x032809dc(&UNK_01794efd);
          }
          uVar7 = (*pcRam0000000007e2fd10)(param_1);
          if ((uVar7 & 1) != 0) {
            if (pcRam0000000007e2fd20 == (code *)0x0) {
              pcRam0000000007e2fd20 = (code *)func_0x032809dc(&UNK_017a2983);
            }
                    /* WARNING: Could not recover jumptable at 0x06fe0c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*pcRam0000000007e2fd20)(param_1,lVar5);
            return uVar7;
          }
          func_0x03280a2c(PTR_DAT_0774e6e8);
          uVar11 = func_0x03280ca0();
          uVar6 = func_0x03280a2c(PTR_DAT_0784dc18);
          func_0x056ede60(uVar11,uVar6,0);
        }
        uVar6 = func_0x03280a2c(PTR_DAT_0784dc30);
        auVar25 = func_0x03280b7c(uVar11,uVar6);
        if (pcRam0000000007e2fd20 == (code *)0x0) {
          pcRam0000000007e2fd20 = (code *)func_0x032809dc(&UNK_017a2983);
        }
                    /* WARNING: Could not recover jumptable at 0x06fe0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*pcRam0000000007e2fd20)(auVar25._0_8_,auVar25._8_8_);
        return uVar7;
      }
    }
  }
  lVar5 = func_0x03280cac();
  if (*(long *)(lVar5 + 0xa0) != 0) {
    func_0x0681b500(*(long *)(lVar5 + 0xa0),0,0);
    if ((*(long *)(lVar5 + 0xa0) != 0) &&
       (lVar8 = func_0x06fdbe94(*(long *)(lVar5 + 0xa0),0), lVar8 != 0)) {
      uVar6 = *(undefined8 *)(lVar5 + 0x70);
      if (pcRam0000000007e302d0 == (code *)0x0) {
        pcRam0000000007e302d0 = (code *)func_0x032809dc(&UNK_017ae4bb,uVar6,0);
      }
                    /* WARNING: Could not recover jumptable at 0x06feb6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000007e302d0)(lVar8,uVar6,1);
      return uVar7;
    }
  }
  lVar5 = func_0x03280cac();
  puVar19 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e282b2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809308);
    func_0x03280a18(PTR_DAT_07809310);
    func_0x03280a18(PTR_DAT_07809318);
    func_0x03280a18(PTR_DAT_07756328);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e282b2 = 1;
  }
  uVar6 = *(undefined8 *)(lVar5 + 0xa8);
  if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar7 = func_0x06fe04ec(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
LAB_06792224:
    uVar6 = *(undefined8 *)(lVar5 + 0xa8);
    if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar7 = func_0x06fe04ec(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      return uVar7;
    }
    uVar6 = *(undefined8 *)(lVar5 + 0xb0);
    if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar7 = func_0x06fdeb74(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      return uVar7;
    }
    lVar5 = *(long *)(lVar5 + 0xb0);
    if (lVar5 != 0) {
      if (pcRam0000000007e2d950 == (code *)0x0) {
        pcRam0000000007e2d950 = (code *)func_0x032809dc(&UNK_0178d148);
      }
                    /* WARNING: Could not recover jumptable at 0x06f97080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000007e2d950)(lVar5,1);
      return uVar7;
    }
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0xb0);
    if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar7 = func_0x06fe04ec(uVar6,0,0);
    if ((uVar7 & 1) == 0) goto LAB_06792224;
    plVar9 = (long *)func_0x057dadc4(lVar5,0);
    if (plVar9 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar6 = func_0x055f7538(*(undefined8 *)PTR_DAT_07756328,uVar6,*(undefined8 *)PTR_DAT_07809310,
                              0);
      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
      }
      puVar19 = PTR_DAT_0776dcd8;
      uVar11 = *(undefined8 *)PTR_DAT_077503b8;
      uVar12 = *(undefined8 *)PTR_DAT_07809318;
      uVar13 = *(undefined8 *)PTR_DAT_07809308;
      pcStack_90 = Merger_Game_Views_BoardView__InitPowerBoostBanner;
      if ((bRam0000000007e1c84b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776dcd8);
        func_0x03280a18(PTR_DAT_07784e90);
        bRam0000000007e1c84b = 1;
      }
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if (cRam0000000007e1c87b == '\0') {
        func_0x03280a18(PTR_DAT_0776dcd8);
        cRam0000000007e1c87b = '\x01';
      }
      uVar7 = *(ulong *)puVar19;
      if (*(int *)(uVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        uVar7 = *(ulong *)puVar19;
      }
      pbVar14 = *(byte **)(uVar7 + 0xb8);
      if ((*pbVar14 & 1) != 0) {
        if (*(int *)(uVar7 + 0xe0) == 0) {
          uVar7 = func_0x03280b8c();
          pbVar14 = *(byte **)(*(long *)puVar19 + 0xb8);
        }
        plVar9 = *(long **)(pbVar14 + 8);
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07784e90) {
                puVar17 = (undefined8 *)(lVar5 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_0556c570;
              }
              uVar7 = uVar7 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar7 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07784e90,4);
LAB_0556c570:
                    /* WARNING: Could not recover jumptable at 0x0556c5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)*puVar17)(plVar9,uVar6,uVar11,0,uVar12,uVar13,0,puVar17[1]);
          return uVar7;
        }
      }
      return uVar7;
    }
  }
  lVar5 = func_0x03280cac();
  pcStack_90 = (code *)0x67922a0;
  puVar17 = (undefined8 *)0x7e28000;
  if ((bRam0000000007e282bc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07809320);
    func_0x03280a18(PTR_DAT_0777ab78);
    func_0x03280a18(PTR_DAT_07809328);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809168);
    bRam0000000007e282bc = 1;
  }
  if (*(long *)(lVar5 + 0x28) == 0) goto LAB_0679246c;
  uVar7 = func_0x06724224(*(long *)(lVar5 + 0x28),0);
  puVar19 = PTR_DAT_0774e4e0;
  if ((uVar7 & 1) != 0) {
    puVar17 = *(undefined8 **)(lVar5 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar7 = func_0x06fe04ec(puVar17,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        uVar6 = func_0x03cec8b4(*(long *)(lVar5 + 0x70),*(undefined8 *)PTR_DAT_0777ab78);
        puVar17 = (undefined8 *)(lVar5 + 0x180);
        *(undefined8 *)(lVar5 + 0x180) = uVar6;
        func_0x032809c4(puVar17,uVar6);
        lVar8 = *(long *)puVar19;
        puVar19 = *(undefined **)(lVar5 + 0x180);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar7 = func_0x06fe04ec(puVar19,0,0);
        if ((uVar7 & 1) != 0) {
          if ((*(long *)(lVar5 + 0x70) == 0) ||
             (lVar8 = func_0x06fdbed0(*(long *)(lVar5 + 0x70),0), lVar8 == 0)) goto LAB_0679246c;
          uVar6 = func_0x03dc9430(lVar8,*(undefined8 *)PTR_DAT_07809328);
          *puVar17 = uVar6;
          func_0x032809c4(puVar17,uVar6);
        }
        unaff_x22 = PTR_DAT_0774e758;
        lVar8 = *(long *)(lVar5 + 0x180);
        puVar19 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
        unaff_x23 = PTR_DAT_07809320;
        func_0x056ed730(puVar19,lVar5,*(undefined8 *)PTR_DAT_07809320,0);
        puVar17 = (undefined8 *)0x0;
        if (lVar8 != 0) {
          func_0x069adca0(lVar8,puVar19,0);
          lVar8 = *(long *)(lVar5 + 0x180);
          puVar19 = (undefined *)func_0x03280ca0(*(undefined8 *)unaff_x22);
          func_0x056ed730(puVar19,lVar5,*(undefined8 *)unaff_x23,0);
          puVar17 = (undefined8 *)0x0;
          if (lVar8 != 0) {
            if ((bRam0000000007e29543 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758,puVar19,0);
              bRam0000000007e29543 = 1;
            }
            puVar2 = PTR_DAT_0774e758;
            pcVar18 = (code *)(lVar8 + 0x38);
            uVar7 = *(ulong *)pcVar18;
            while ((plVar9 = (long *)func_0x057ddb20(uVar7,puVar19,0), plVar9 == (long *)0x0 ||
                   (*plVar9 == *(long *)puVar2))) {
              uVar10 = func_0x032dd140(pcVar18,plVar9,uVar7);
              bVar4 = uVar7 == uVar10;
              uVar7 = uVar10;
              if (bVar4) {
                return uVar10;
              }
            }
            lVar5 = func_0x03281048(plVar9);
            lVar8 = 0x7e29000;
            pcStack_a0 = pcVar18;
            puStack_98 = puVar19;
            if ((bRam0000000007e29529 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              func_0x03280a18(PTR_DAT_07824020);
              bRam0000000007e29529 = 1;
            }
            uVar7 = func_0x0726f3a0(lVar5,0);
            puVar2 = PTR_DAT_07824020;
            puVar19 = PTR_DAT_0774e758;
            lVar20 = *(long *)(lVar5 + 0x40);
            if ((lVar20 != 0) && (uVar1 = *(uint *)(lVar20 + 0x18), 0 < (int)uVar1)) {
              lVar21 = 0;
              do {
                if (uVar1 <= (uint)lVar21) {
                  func_0x03280cb4();
LAB_069adeb8:
                  lVar5 = func_0x03280cac();
                  if (*(long *)(lVar5 + 0x48) != 0) {
                    func_0x06fe95bc(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                                    *(long *)(lVar5 + 0x48),0);
                    if (*(long *)(lVar5 + 0x48) != 0) {
                      func_0x06fe96d8(*(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c),
                                      *(long *)(lVar5 + 0x48),0);
                      if (*(long *)(lVar5 + 0x48) != 0) {
                        uVar7 = func_0x06fe9a2c(*(undefined4 *)(lVar5 + 0x30),
                                                *(undefined4 *)(lVar5 + 0x34),
                                                *(long *)(lVar5 + 0x48),0);
                        if (*(char *)(lVar5 + 0x38) == '\0') {
                          return uVar7;
                        }
                        lVar8 = 0x7e13000;
                        lVar20 = *(long *)(lVar5 + 0x48);
                        if (cRam0000000007e136d6 == '\0') {
                          func_0x03280a18(PTR_DAT_0774fd60);
                          cRam0000000007e136d6 = '\x01';
                        }
                        lVar5 = 0;
                        if (lVar20 != 0) {
                          puVar15 = *(undefined4 **)(*(long *)PTR_DAT_0774fd60 + 0xb8);
                          uVar23 = puVar15[1];
                          uVar24 = puVar15[2];
                          func_0x06fe97f4(*puVar15,lVar20,0);
                          uVar22 = func_0x06fe9aec(lVar20);
                          uStack_110 = CONCAT44(uVar23,uVar22);
                          lStack_108 = CONCAT44(lStack_108._4_4_,uVar24);
                          if (pcRam0000000007e30418 == (code *)0x0) {
                            pcRam0000000007e30418 = (code *)func_0x032809dc(&UNK_017990cf);
                          }
                          uVar7 = (*pcRam0000000007e30418)(lVar20,&uStack_110);
                          return uVar7;
                        }
                      }
                    }
                  }
                  uVar7 = func_0x03280cac();
                  *(undefined1 *)(uVar7 + 0x38) = 1;
                  puVar19 = PTR_DAT_0774e4e0;
                  uStack_110 = lVar8;
                  lStack_108 = lVar5;
                  if ((bRam0000000007e2fb28 & 1) == 0) {
                    func_0x03280a18(PTR_DAT_0774e4e0,0);
                    bRam0000000007e2fb28 = 1;
                  }
                  if (*(int *)(*(long *)puVar19 + 0xe0) != 0) {
                    return uVar7;
                  }
                  func_0x03280b8c();
                  return uVar7;
                }
                lVar8 = *(long *)(lVar20 + 0x20 + lVar21 * 8);
                uVar6 = func_0x03280ca0(*(undefined8 *)puVar19);
                func_0x056ed730(uVar6,lVar5,*(undefined8 *)puVar2,0);
                if (lVar8 == 0) goto LAB_069adeb8;
                uVar7 = func_0x069adca0(lVar8,uVar6);
                uVar1 = *(uint *)(lVar20 + 0x18);
                lVar21 = lVar21 + 1;
              } while ((int)lVar21 < (int)uVar1);
            }
            return uVar7;
          }
        }
      }
LAB_0679246c:
      func_0x03280cac();
      ppcVar3 = &pcStack_a0;
      pcStack_a0 = Merger_Game_Views_BoardView__OnPlayStackingAnimation;
      if (extraout_x1 == 0) {
        pcVar18 = Merger_Game_Views_BoardView__PlayStackingAnimation;
        func_0x03280cac();
        uVar6 = extraout_x1_00;
      }
      else {
        uVar6 = *(undefined8 *)(extraout_x1 + 0x10);
        ppcVar3 = &pcStack_90;
        pcVar18 = Merger_Game_Views_BoardView__OnPlayStackingAnimation;
      }
      puVar2 = PTR_DAT_07809330;
      *(code **)((long)ppcVar3 + -0x30) = pcVar18;
      *(undefined **)((long)ppcVar3 + -0x28) = unaff_x23;
      *(undefined **)((long)ppcVar3 + -0x20) = unaff_x22;
      *(undefined **)((long)ppcVar3 + -0x18) = puVar19;
      *(undefined8 **)((long)ppcVar3 + -0x10) = puVar17;
      *(long *)((long)ppcVar3 + -8) = lVar5;
      if ((bRam0000000007e282ed & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776e340,uVar6);
        func_0x03280a18(PTR_DAT_07772358);
        func_0x03280a18(PTR_DAT_077c0858);
        func_0x03280a18(PTR_DAT_07772368);
        func_0x03280a18(PTR_DAT_07809338);
        func_0x03280a18(PTR_DAT_07809330);
        func_0x03280a18(PTR_DAT_07809168);
        func_0x03280a18(PTR_DAT_07809340);
        bRam0000000007e282ed = 1;
      }
      uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
      return uVar7;
    }
  }
  return uVar7;
}

