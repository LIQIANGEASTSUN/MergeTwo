/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACEB04; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.System.IDisposable.Dispose; status ok */


/* WARNING: Possible PIC construction at 0x06bced18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcee70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcee88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d606f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d607b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6083c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6085c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03d60840) */
/* WARNING: Removing unreachable block (ram,0x03d607bc) */
/* WARNING: Removing unreachable block (ram,0x03d6079c) */
/* WARNING: Removing unreachable block (ram,0x03d60718) */
/* WARNING: Removing unreachable block (ram,0x03d606f8) */
/* WARNING: Removing unreachable block (ram,0x06bcf2a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf2a8) */
/* WARNING: Removing unreachable block (ram,0x06bcf008) */
/* WARNING: Removing unreachable block (ram,0x06bcf054) */
/* WARNING: Removing unreachable block (ram,0x06bcf0a8) */
/* WARNING: Removing unreachable block (ram,0x06bcf0b4) */
/* WARNING: Removing unreachable block (ram,0x06bcf134) */
/* WARNING: Removing unreachable block (ram,0x06bcf168) */
/* WARNING: Removing unreachable block (ram,0x06bcf184) */
/* WARNING: Removing unreachable block (ram,0x06bcf18c) */
/* WARNING: Removing unreachable block (ram,0x06bcf1b4) */
/* WARNING: Removing unreachable block (ram,0x06bcf198) */
/* WARNING: Removing unreachable block (ram,0x06bcf1a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf1c4) */
/* WARNING: Removing unreachable block (ram,0x06bcf1d4) */
/* WARNING: Removing unreachable block (ram,0x06bcf1dc) */
/* WARNING: Removing unreachable block (ram,0x06bcf208) */
/* WARNING: Removing unreachable block (ram,0x06bcf214) */
/* WARNING: Removing unreachable block (ram,0x06bcf28c) */
/* WARNING: Removing unreachable block (ram,0x06bcf230) */
/* WARNING: Removing unreachable block (ram,0x06bcf238) */
/* WARNING: Removing unreachable block (ram,0x06bcf244) */
/* WARNING: Removing unreachable block (ram,0x06bcf0d8) */
/* WARNING: Removing unreachable block (ram,0x06bcf0e0) */
/* WARNING: Removing unreachable block (ram,0x06bcf0ec) */
/* WARNING: Removing unreachable block (ram,0x06bcee8c) */
/* WARNING: Removing unreachable block (ram,0x06bcee90) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */

undefined8 *
Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__System_IDisposable_Dispose
          (undefined8 param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code **ppcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  int *piVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  int *piVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  code *pcStack_120;
  code *pcStack_100;
  undefined *puStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  code *apcStack_80 [2];
  
  puVar5 = PTR_DAT_07834100;
  puVar15 = PTR_DAT_0774e758;
  if ((bRam0000000007e2aa70 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077d1d20);
    func_0x03280a18(PTR_DAT_07834100);
    bRam0000000007e2aa70 = 1;
  }
  lVar18 = func_0x06bce868(param_1);
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar15);
  lVar25 = 0;
  func_0x056ed730(uVar19,param_1,*(undefined8 *)puVar5);
  if (lVar18 != 0) {
    if ((bRam0000000007e1aec8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758,uVar19,*(undefined8 *)PTR_DAT_077d1d20);
      bRam0000000007e1aec8 = 1;
    }
    puVar15 = PTR_DAT_0774e758;
    puVar21 = *(undefined8 **)(lVar18 + 0x18);
    while ((plVar16 = (long *)func_0x057ddd18(puVar21,uVar19,0), plVar16 == (long *)0x0 ||
           (*plVar16 == *(long *)puVar15))) {
      puVar17 = (undefined8 *)func_0x032dd140((long *)(lVar18 + 0x18),plVar16,puVar21);
      bVar11 = puVar21 == puVar17;
      puVar21 = puVar17;
      if (bVar11) {
        return puVar17;
      }
    }
    lVar18 = func_0x03281048(plVar16);
    return (undefined8 *)(ulong)*(uint *)(lVar18 + 0x20);
  }
  piVar20 = (int *)func_0x03280cac();
  piVar28 = (int *)PTR_DAT_07834108;
  ppcVar7 = apcStack_80;
  apcStack_80[0] =
       Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculateAvailableBoostsByLevel
  ;
  if ((bRam0000000007e2aa7a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776ab48);
    func_0x03280a18(PTR_DAT_07781880);
    func_0x03280a18(PTR_DAT_07834110);
    func_0x03280a18(PTR_DAT_077df528);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_077a6e80);
    func_0x03280a18(PTR_DAT_077df530);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07754420);
    func_0x03280a18(PTR_DAT_07834118);
    func_0x03280a18(PTR_DAT_07834120);
    func_0x03280a18(PTR_DAT_07834108);
    bRam0000000007e2aa7a = 1;
  }
  uVar19 = Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__GetBoostConfigsForLevel
                     (piVar20);
  lVar18 = *(long *)piVar28;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x03280b8c(lVar18);
    lVar18 = *(long *)piVar28;
  }
  puVar6 = PTR_DAT_077df528;
  puVar5 = PTR_DAT_07781880;
  puVar15 = PTR_DAT_07754420;
  lVar30 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x18);
  if (lVar30 == 0) {
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c(lVar18);
      lVar18 = *(long *)piVar28;
    }
    uVar32 = **(undefined8 **)(lVar18 + 0xb8);
    uVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077df530);
    func_0x05356664(uVar19,uVar32,*(undefined8 *)PTR_DAT_07834118,0);
    puVar21 = (undefined8 *)(*(long *)(*(long *)piVar28 + 0xb8) + 0x18);
    *puVar21 = uVar19;
    goto SUB_032809c4;
  }
  uVar19 = func_0x03d504ac(uVar19,lVar30,*(undefined8 *)PTR_DAT_077df528);
  uVar19 = func_0x03d3c59c(uVar19,*(undefined8 *)puVar5);
  lVar18 = func_0x03280afc(*(undefined8 *)puVar15,1);
  plVar16 = *(long **)(piVar20 + 6);
  if (plVar16 == (long *)0x0) {
LAB_06bceeb4:
    func_0x03280cac();
LAB_06bceeb8:
    uVar32 = func_0x03280cb4();
    puVar4 = PTR_DAT_07834128;
    pcStack_d0 = 
    Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculatePlayableBoosts;
    puStack_c0 = puVar6;
    puStack_b8 = puVar5;
    puStack_b0 = puVar15;
    puStack_a8 = (undefined *)piVar28;
    plStack_a0 = plVar16;
    lStack_98 = lVar30;
    uStack_90 = uVar19;
    piStack_88 = piVar20;
    if ((bRam0000000007e2aa79 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f9f0);
      func_0x03280a18(PTR_DAT_0776ab48);
      func_0x03280a18(PTR_DAT_07781880);
      func_0x03280a18(PTR_DAT_07834110);
      func_0x03280a18(PTR_DAT_077df528);
      func_0x03280a18(PTR_DAT_077c1cf8);
      func_0x03280a18(PTR_DAT_077df570);
      func_0x03280a18(PTR_DAT_077a6e80);
      func_0x03280a18(PTR_DAT_077df578);
      func_0x03280a18(PTR_DAT_077df530);
      func_0x03280a18(PTR_DAT_07833e20);
      func_0x03280a18(PTR_DAT_07754420);
      func_0x03280a18(PTR_DAT_07834130);
      func_0x03280a18(PTR_DAT_07834138);
      func_0x03280a18(PTR_DAT_07834140);
      func_0x03280a18(PTR_DAT_07834148);
      func_0x03280a18(PTR_DAT_07834128);
      func_0x03280a18(PTR_DAT_07834108);
      bRam0000000007e2aa79 = 1;
    }
    lVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x057da5fc(lVar18,0);
    if (lVar18 != 0) {
      puVar21 = (undefined8 *)(lVar18 + 0x10);
      *puVar21 = uVar32;
      goto SUB_032809c4;
    }
    func_0x03280cac();
    auVar34 = func_0x03280cb4();
    piVar20 = auVar34._8_8_;
    lVar30 = auVar34._0_8_;
    pcStack_100 = 
    Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculateUnlockableBoost;
    puStack_f8 = (undefined *)piVar28;
    puStack_e8 = puVar4;
    plStack_f0 = plVar16;
    lStack_e0 = lVar18;
    uStack_d8 = uVar32;
    if ((bRam0000000007e2aa71 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f6d0);
      func_0x03280a18(PTR_DAT_07833e20);
      bRam0000000007e2aa71 = 1;
    }
    puVar15 = PTR_DAT_07833e20;
    plVar31 = *(long **)(lVar30 + 0x18);
    if (plVar31 != (long *)0x0) {
      lVar18 = *plVar31;
      uVar26 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07833e20) {
            puVar21 = (undefined8 *)(lVar18 + (long)(*piVar27 + 5) * 0x10 + 0x138);
            goto LAB_06bcf374;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar31,*(long *)PTR_DAT_07833e20,5);
LAB_06bcf374:
      uVar26 = (*(code *)*puVar21)(plVar31,puVar21[1]);
      plVar16 = (long *)puVar15;
      if ((uVar26 & 1) == 0) {
        plVar29 = *(long **)(lVar30 + 0x18);
        lVar30 = 0;
        if (plVar29 != (long *)0x0) {
          lVar18 = *plVar29;
          uVar26 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar26 != 0) {
            piVar28 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)puVar15) {
                puVar21 = (undefined8 *)(lVar18 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_06bcf460;
              }
              uVar26 = uVar26 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar26 != 0);
          }
          puVar21 = (undefined8 *)func_0x03256b10(plVar29,*(long *)puVar15,1);
LAB_06bcf460:
          iVar13 = (*(code *)*puVar21)(plVar29,puVar21[1]);
          *piVar20 = iVar13;
          return (undefined8 *)0x0;
        }
      }
      else {
        plVar31 = (long *)Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__GetUnlockableBoosts
                                    (lVar30);
        uVar26 = func_0x03d27f10(plVar31,*(undefined8 *)PTR_DAT_0782f6d0);
        piVar28 = (int *)0x0;
        if ((uVar26 & 1) == 0) {
          piVar28 = piVar20;
        }
        if ((uVar26 & 1) == 0) {
          plVar31 = *(long **)(lVar30 + 0x18);
          if (plVar31 == (long *)0x0) goto LAB_06bcf51c;
          lVar18 = *plVar31;
          uVar26 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar15) {
                puVar21 = (undefined8 *)(lVar18 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_06bcf48c;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar21 = (undefined8 *)func_0x03256b10(plVar31,*(long *)puVar15,1);
LAB_06bcf48c:
          iVar13 = (*(code *)*puVar21)(plVar31,puVar21[1]);
        }
        else {
          iVar13 = func_0x05ac8180(plVar31,0);
          piVar28 = piVar20;
        }
        *piVar28 = iVar13;
        plVar29 = *(long **)(lVar30 + 0x18);
        lVar30 = 0;
        if (plVar29 != (long *)0x0) {
          lVar18 = *plVar29;
          iVar13 = *piVar20;
          uVar26 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar26 != 0) {
            piVar28 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)puVar15) {
                puVar21 = (undefined8 *)(lVar18 + (long)(*piVar28 + 2) * 0x10 + 0x138);
                goto LAB_06bcf4f8;
              }
              uVar26 = uVar26 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar26 != 0);
          }
          puVar21 = (undefined8 *)func_0x03256b10(plVar29,*(long *)puVar15,2);
LAB_06bcf4f8:
          iVar14 = (*(code *)*puVar21)(plVar29,puVar21[1]);
          return (undefined8 *)(ulong)(iVar14 <= iVar13);
        }
      }
    }
LAB_06bcf51c:
    lVar18 = func_0x03280cac();
    pcStack_120 = 
    Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__GetUnlockableBoosts;
    if ((bRam0000000007e2aa72 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c1cf8);
      func_0x03280a18(PTR_DAT_077e5590);
      func_0x03280a18(PTR_DAT_077a3990);
      func_0x03280a18(PTR_DAT_07833e20);
      func_0x03280a18(PTR_DAT_07759a18);
      func_0x03280a18(PTR_DAT_07759a10);
      func_0x03280a18(PTR_DAT_07834150);
      bRam0000000007e2aa72 = 1;
    }
    plVar29 = *(long **)(lVar18 + 0x18);
    if (plVar29 == (long *)0x0) {
      lVar18 = func_0x03280cac();
      return *(undefined8 **)(lVar18 + 0x30);
    }
    lVar25 = *plVar29;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar21 = (undefined8 *)(lVar25 + (long)(*piVar27 + 6) * 0x10 + 0x138);
          goto LAB_06bcf5f4;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_07833e20,6);
LAB_06bcf5f4:
    uVar26 = (*(code *)*puVar21)(plVar29,puVar21[1]);
    if ((uVar26 & 1) == 0) {
      puVar21 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07759a10);
      func_0x04119444(puVar21,*(undefined8 *)PTR_DAT_07759a18);
      return puVar21;
    }
    uVar32 = *(undefined8 *)(lVar18 + 0x38);
    uVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a3990);
    lVar25 = 0;
    func_0x05353d24(uVar19,lVar18,*(undefined8 *)PTR_DAT_07834150);
    lVar24 = *(long *)PTR_DAT_077e5590;
    lVar18 = func_0x03d86d00(uVar32,uVar19);
    lVar22 = *(long *)PTR_DAT_077c1cf8;
    ppcVar7 = &pcStack_100;
  }
  else {
    lVar30 = *plVar16;
    uVar26 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar21 = (undefined8 *)(lVar30 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          goto LAB_06bcedac;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_07833e20,1);
LAB_06bcedac:
    uVar12 = (*(code *)*puVar21)(plVar16,puVar21[1]);
    puVar4 = PTR_DAT_0776ab48;
    lVar30 = lVar18;
    if (lVar18 == 0) goto LAB_06bceeb4;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_06bceeb8;
    *(undefined4 *)(lVar18 + 0x20) = uVar12;
    lVar30 = func_0x03d37138(lVar18,uVar19,*(undefined8 *)puVar4);
    lVar18 = *(long *)piVar28;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c(lVar18);
      lVar18 = *(long *)piVar28;
    }
    puVar15 = PTR_DAT_077c1cf8;
    plVar31 = *(long **)(*(long *)(lVar18 + 0xb8) + 0x20);
    if (plVar31 == (long *)0x0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c(lVar18);
        lVar18 = *(long *)piVar28;
      }
      uVar32 = **(undefined8 **)(lVar18 + 0xb8);
      uVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a6e80);
      func_0x05353e8c(uVar19,uVar32,*(undefined8 *)PTR_DAT_07834120,0);
      puVar21 = (undefined8 *)(*(long *)(*(long *)piVar28 + 0xb8) + 0x20);
      *puVar21 = uVar19;
      goto SUB_032809c4;
    }
    lVar24 = *(long *)PTR_DAT_07834110;
    lVar18 = func_0x03d4aee0(lVar30,plVar31);
    lVar22 = *(long *)puVar15;
    pcStack_120 = (code *)0x6bcee8c;
  }
  *(code **)((long)ppcVar7 + -0x20) = pcStack_120;
  *(long *)((long)ppcVar7 + -0x10) = lVar30;
  *(int **)((long)ppcVar7 + -8) = piVar20;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (lVar18 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x0411956c(puVar21,lVar18,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar22);
  lVar18 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x40) = 0x3d5fe5c;
  *(undefined8 *)((long)ppcVar7 + -0x30) = 0;
  *(long *)((long)ppcVar7 + -0x28) = lVar22;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x0411bf8c(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar18);
  lVar30 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x60) = 0x3d5fed8;
  *(undefined8 *)((long)ppcVar7 + -0x50) = 0;
  *(long *)((long)ppcVar7 + -0x48) = lVar18;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x04132280(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar30);
  lVar18 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x80) = 0x3d5ff54;
  *(undefined8 *)((long)ppcVar7 + -0x70) = 0;
  *(long *)((long)ppcVar7 + -0x68) = lVar30;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x04135278(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar18);
  lVar30 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0xa0) = 0x3d5ffd0;
  *(undefined8 *)((long)ppcVar7 + -0x90) = 0;
  *(long *)((long)ppcVar7 + -0x88) = lVar18;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x04143d60(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar30);
  lVar18 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0xc0) = 0x3d6004c;
  *(undefined8 *)((long)ppcVar7 + -0xb0) = 0;
  *(long *)((long)ppcVar7 + -0xa8) = lVar30;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x0419ce74(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar18);
  lVar30 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0xe0) = 0x3d600c8;
  *(undefined8 *)((long)ppcVar7 + -0xd0) = 0;
  *(long *)((long)ppcVar7 + -200) = lVar18;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x041c2810(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar30);
  lVar18 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x100) = 0x3d60144;
  *(undefined8 *)((long)ppcVar7 + -0xf0) = 0;
  *(long *)((long)ppcVar7 + -0xe8) = lVar30;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x041ddb58(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar18);
  lVar30 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x120) = 0x3d601c0;
  *(undefined8 *)((long)ppcVar7 + -0x110) = 0;
  *(long *)((long)ppcVar7 + -0x108) = lVar18;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x041e617c(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar30);
  lVar18 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x140) = 0x3d6023c;
  *(undefined8 *)((long)ppcVar7 + -0x130) = 0;
  *(long *)((long)ppcVar7 + -0x128) = lVar30;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x041e8ba0(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar18);
  lVar30 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x160) = 0x3d602b8;
  *(undefined8 *)((long)ppcVar7 + -0x150) = 0;
  *(long *)((long)ppcVar7 + -0x148) = lVar18;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03256878(lVar30);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x38) + 0x10))(puVar21,auVar34._0_8_);
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar30);
  lVar18 = auVar34._8_8_;
  *(undefined8 *)((long)ppcVar7 + -0x180) = 0x3d60338;
  *(undefined8 *)((long)ppcVar7 + -0x170) = 0;
  *(long *)((long)ppcVar7 + -0x168) = lVar30;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    func_0x0420cec8(puVar21,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return puVar21;
  }
  uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar19 = func_0x05ac7464(uVar19,0);
  auVar34 = func_0x03280b7c(uVar19,lVar18);
  *(undefined8 *)((long)ppcVar7 + -0x1a0) = 0x3d603b4;
  *(long **)((long)ppcVar7 + -0x198) = plVar31;
  *(undefined8 *)((long)ppcVar7 + -400) = 0;
  *(long *)((long)ppcVar7 + -0x188) = lVar18;
  lVar18 = lVar24;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  puVar15 = PTR_DAT_07779d10;
  if ((auVar34._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar34._8_8_ == 0)) {
    uVar19 = func_0x03280a2c(puVar15);
    uVar19 = func_0x05ac7464(uVar19,0);
    auVar33 = func_0x03280b7c(uVar19,lVar24);
    *(undefined8 *)((long)ppcVar7 + -0x1c0) = 0x3d60428;
    *(undefined1 (*) [16])((long)ppcVar7 + -0x1b8) = auVar34;
    *(long *)((long)ppcVar7 + -0x1a8) = lVar24;
    lVar30 = lVar18;
    if (*(long *)(lVar18 + 0x38) == 0) {
      func_0x03256878(lVar18);
    }
    puVar15 = PTR_DAT_07779d10;
    if ((auVar33._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar33._8_8_ != 0)) {
      lVar25 = *(long *)((long)ppcVar7 + -0x1a8);
      lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
      uVar32 = 0;
      puVar9 = (undefined1 *)((long)ppcVar7 + -0x1a0);
      uVar19 = *(undefined8 *)((long)ppcVar7 + -0x1c0);
      auVar34 = *(undefined1 (*) [16])((long)ppcVar7 + -0x1b8);
      goto LAB_03d60730;
    }
    uVar19 = func_0x03280a2c(puVar15);
    uVar19 = func_0x05ac7464(uVar19,0);
    auVar34 = func_0x03280b7c(uVar19,lVar18);
    *(undefined8 *)((long)ppcVar7 + -0x1e0) = 0x3d6049c;
    *(undefined1 (*) [16])((long)ppcVar7 + -0x1d8) = auVar33;
    *(long *)((long)ppcVar7 + -0x1c8) = lVar18;
    lVar18 = lVar30;
    if (*(long *)(lVar30 + 0x38) == 0) {
      func_0x03256878(lVar30);
    }
    puVar15 = PTR_DAT_07779d10;
    if ((auVar34._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar34._8_8_ == 0)) {
      uVar19 = func_0x03280a2c(puVar15);
      uVar19 = func_0x05ac7464(uVar19,0);
      auVar33 = func_0x03280b7c(uVar19,lVar30);
      *(undefined8 *)((long)ppcVar7 + -0x200) = 0x3d60510;
      *(undefined1 (*) [16])((long)ppcVar7 + -0x1f8) = auVar34;
      *(long *)((long)ppcVar7 + -0x1e8) = lVar30;
      lVar30 = lVar18;
      if (*(long *)(lVar18 + 0x38) == 0) {
        func_0x03256878(lVar18);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar33._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar33._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar21 = (undefined8 *)
                  (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))
                            (auVar33._0_8_,auVar33._8_8_,0);
        return puVar21;
      }
      uVar19 = func_0x03280a2c(puVar15);
      uVar19 = func_0x05ac7464(uVar19,0);
      auVar34 = func_0x03280b7c(uVar19,lVar18);
      *(undefined8 *)((long)ppcVar7 + -0x230) = 0x3d60588;
      *(long **)((long)ppcVar7 + -0x220) = plVar16;
      *(undefined1 (*) [16])((long)ppcVar7 + -0x218) = auVar33;
      *(long *)((long)ppcVar7 + -0x208) = lVar18;
      lVar18 = lVar30;
      lVar22 = lVar25;
      if (*(long *)(lVar25 + 0x38) == 0) {
        func_0x03256878(lVar25);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar34._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar34._8_8_ == 0)) {
        uVar19 = func_0x03280a2c(puVar15);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar33 = func_0x03280b7c(uVar19,lVar25);
        puVar8 = (undefined1 *)((long)ppcVar7 + -0x260);
        *(undefined8 *)((long)ppcVar7 + -0x260) = 0x3d60608;
        *(undefined1 (*) [16])((long)ppcVar7 + -0x250) = auVar34;
        *(long *)((long)ppcVar7 + -0x240) = lVar30;
        *(long *)((long)ppcVar7 + -0x238) = lVar25;
        lVar25 = lVar18;
        lVar30 = lVar22;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        puVar15 = PTR_DAT_07779d10;
        if ((auVar33._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar33._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar21 = (undefined8 *)
                    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x10))
                              (auVar33._0_8_,auVar33._8_8_,lVar18);
          return puVar21;
        }
        uVar19 = func_0x03280a2c(puVar15);
        uVar32 = func_0x05ac7464(uVar19,0);
        uVar19 = 0x3d6068c;
        auVar34 = func_0x03280b7c(uVar32,lVar22);
        goto LAB_03d6068c;
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
      uVar32 = *(undefined8 *)((long)ppcVar7 + -0x208);
      plVar16 = *(long **)((long)ppcVar7 + -0x220);
      auVar33 = *(undefined1 (*) [16])((long)ppcVar7 + -0x218);
      puVar10 = (undefined1 *)((long)ppcVar7 + -0x200);
      uVar19 = *(undefined8 *)((long)ppcVar7 + -0x230);
    }
    else {
      uVar32 = *(undefined8 *)((long)ppcVar7 + -0x1c8);
      lVar25 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
      lVar30 = 0;
      puVar10 = (undefined1 *)((long)ppcVar7 + -0x1c0);
      uVar19 = *(undefined8 *)((long)ppcVar7 + -0x1e0);
      auVar33 = *(undefined1 (*) [16])((long)ppcVar7 + -0x1d8);
    }
  }
  else {
    lVar18 = *(long *)((long)ppcVar7 + -400);
    lVar22 = *(long *)((long)ppcVar7 + -0x188);
    lVar30 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
    lVar25 = 0;
    puVar8 = (undefined1 *)((long)ppcVar7 + -0x180);
    uVar19 = *(undefined8 *)((long)ppcVar7 + -0x1a0);
    auVar33._8_8_ = *(undefined8 *)((long)ppcVar7 + -0x198);
    auVar33._0_8_ = plVar16;
LAB_03d6068c:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = uVar19;
    *(undefined1 (*) [16])(puVar8 + -0x20) = auVar33;
    *(long *)(puVar8 + -0x10) = lVar18;
    *(long *)(puVar8 + -8) = lVar22;
    plVar16 = *(long **)(lVar30 + 0x38);
    lVar18 = lVar30;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar30);
      plVar16 = *(long **)(lVar30 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar22 = func_0x03280ca0();
    uVar32 = *(undefined8 *)(*(long *)(lVar30 + 0x38) + 8);
    func_0x0531dbd0(lVar22,0xfffffffe);
    if (lVar22 != 0) {
      puVar21 = (undefined8 *)(lVar22 + 0x38);
      *puVar21 = auVar34._0_8_;
      goto SUB_032809c4;
    }
    uVar19 = 0x3d60730;
    auVar33 = func_0x03280cac();
    plVar16 = (long *)0x0;
LAB_03d60730:
    puVar10 = puVar9 + -0x30;
    *(undefined8 *)(puVar9 + -0x30) = uVar19;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(undefined1 (*) [16])(puVar9 + -0x18) = auVar34;
    *(long *)(puVar9 + -8) = lVar25;
    plVar16 = *(long **)(lVar18 + 0x38);
    lVar25 = lVar18;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar18);
      plVar16 = *(long **)(lVar18 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar22 = func_0x03280ca0();
    lVar30 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    func_0x0531e428(lVar22,0xfffffffe);
    if (lVar22 != 0) {
      puVar21 = (undefined8 *)(lVar22 + 0x38);
      *puVar21 = auVar33._0_8_;
      goto SUB_032809c4;
    }
    uVar19 = 0x3d607d4;
    auVar34 = func_0x03280cac();
    plVar16 = (long *)0x0;
  }
  *(undefined8 *)(puVar10 + -0x30) = uVar19;
  *(long **)(puVar10 + -0x20) = plVar16;
  *(undefined1 (*) [16])(puVar10 + -0x18) = auVar33;
  *(undefined8 *)(puVar10 + -8) = uVar32;
  plVar16 = *(long **)(lVar25 + 0x38);
  lVar18 = lVar25;
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar25);
    plVar16 = *(long **)(lVar25 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar22 = func_0x03280ca0();
  uVar19 = *(undefined8 *)(*(long *)(lVar25 + 0x38) + 8);
  func_0x0531ec78(lVar22,0xfffffffe);
  if (lVar22 != 0) {
    puVar21 = (undefined8 *)(lVar22 + 0x40);
    *puVar21 = auVar34._0_8_;
    goto SUB_032809c4;
  }
  auVar33 = func_0x03280cac();
  puVar21 = auVar33._0_8_;
  *(undefined8 *)(puVar10 + -0x60) = 0x3d60878;
  *(int **)(puVar10 + -0x58) = piVar28;
  *(undefined8 *)(puVar10 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar10 + -0x48) = auVar34;
  *(long *)(puVar10 + -0x38) = lVar30;
  plVar16 = *(long **)(lVar18 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar18);
    plVar16 = *(long **)(lVar18 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar17 = (undefined8 *)func_0x03280ca0();
  puVar23 = *(undefined8 **)(*(long *)(lVar18 + 0x38) + 8);
  (*(code *)*puVar23)(puVar17,0xfffffffe);
  if (puVar17 != (undefined8 *)0x0) {
    func_0x02f17738(puVar17,*(long *)(**(long **)(lVar18 + 0x38) + 0x80) + 0xc0,puVar21);
    func_0x02f17738(puVar17,*(long *)(**(long **)(lVar18 + 0x38) + 0x80) + 0x100,auVar33._8_8_);
    func_0x02f17738(puVar17,*(long *)(**(long **)(lVar18 + 0x38) + 0x80) + 0x80,uVar19);
    return puVar17;
  }
  auVar34 = func_0x03280cac();
  lVar25 = auVar34._8_8_;
  plVar16 = auVar34._0_8_;
  *(undefined8 *)(puVar10 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar10 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar10 + -0x80) = auVar33;
  *(long *)(puVar10 + -0x70) = lVar18;
  *(undefined8 *)(puVar10 + -0x68) = uVar19;
  puVar17 = puVar23;
  if (puVar23[7] == 0) {
    func_0x03256878(puVar23);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar25 == 0)) {
    uVar19 = func_0x03280a2c(puVar15);
    uVar19 = func_0x05ac7464(uVar19,0);
    func_0x03280b7c(uVar19,puVar23);
LAB_03d60c04:
    func_0x03281048(plVar16);
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(puVar23[7] + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar30 = *plVar16;
    bVar2 = *(byte *)(lVar30 + 0x130);
    if ((*(byte *)(lVar18 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18)) {
      lVar18 = *(long *)(puVar23[7] + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
        lVar30 = *plVar16;
        bVar2 = *(byte *)(lVar30 + 0x130);
      }
      if ((*(byte *)(lVar18 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18))
      {
        lVar18 = *(long *)(puVar23[7] + 0x10);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
          lVar30 = *plVar16;
          bVar2 = *(byte *)(lVar30 + 0x130);
        }
        if ((*(byte *)(lVar18 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar21 = (undefined8 *)
                    (**(code **)(lVar30 + 0x228))(plVar16,lVar25,*(undefined8 *)(lVar30 + 0x230));
          return puVar21;
        }
      }
      goto LAB_03d60c04;
    }
    lVar18 = *(long *)(puVar23[7] + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar18 = func_0x03280b90(plVar16,lVar18);
    if (lVar18 == 0) {
      lVar18 = *(long *)(puVar23[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) != lVar18
         )) {
        if ((*(byte *)(*(long *)(puVar23[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        puVar21 = (undefined8 *)func_0x03280ca0();
        func_0x04b68fa4(puVar21,plVar16,lVar25,*(undefined8 *)(puVar23[7] + 0x58));
        return puVar21;
      }
      if ((*(byte *)(*(long *)(puVar23[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      puVar21 = (undefined8 *)func_0x03280ca0();
      lVar18 = *(long *)(puVar23[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      if ((*(byte *)(lVar18 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
         )) {
        func_0x04b713b0(puVar21,plVar16,lVar25,*(undefined8 *)(puVar23[7] + 0x48));
        return puVar21;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar23[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    lVar18 = *(long *)(puVar23[7] + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar30 = func_0x03280b90(plVar16,lVar18);
    if (lVar30 != 0) {
      func_0x04b66610(puVar21,lVar30,lVar25,*(undefined8 *)(puVar23[7] + 0x30));
      return puVar21;
    }
  }
  auVar33 = func_0x03281048(plVar16,lVar18);
  lVar25 = auVar33._8_8_;
  plVar16 = auVar33._0_8_;
  *(undefined8 *)(puVar10 + -0xc0) = 0x3d60c18;
  *(long *)(puVar10 + -0xb8) = lVar18;
  *(undefined8 **)(puVar10 + -0xb0) = puVar21;
  *(undefined8 **)(puVar10 + -0xa8) = puVar23;
  *(undefined1 (*) [16])(puVar10 + -0xa0) = auVar34;
  if (puVar17[7] == 0) {
    func_0x03256878(puVar17);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar25 == 0)) {
    uVar19 = func_0x03280a2c(puVar15);
    uVar19 = func_0x05ac7464(uVar19,0);
    func_0x03280b7c(uVar19,puVar17);
LAB_03d60ed8:
    func_0x03281048(plVar16);
  }
  else {
    lVar30 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    lVar22 = *plVar16;
    bVar2 = *(byte *)(lVar22 + 0x130);
    if ((*(byte *)(lVar30 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar22 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30)) {
      lVar30 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
        lVar22 = *plVar16;
        bVar2 = *(byte *)(lVar22 + 0x130);
      }
      if ((*(byte *)(lVar30 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar22 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30))
      {
        lVar30 = *(long *)(puVar17[7] + 0x10);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
          lVar22 = *plVar16;
          bVar2 = *(byte *)(lVar22 + 0x130);
        }
        if ((*(byte *)(lVar30 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar22 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar21 = (undefined8 *)
                    (**(code **)(lVar22 + 0x228))(plVar16,lVar25,*(undefined8 *)(lVar22 + 0x230));
          return puVar21;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar30 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar30 = func_0x03280b90(plVar16,lVar30);
    if (lVar30 == 0) {
      lVar30 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar30 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) != lVar30
         )) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        puVar21 = (undefined8 *)func_0x03280ca0();
        func_0x04b693d0(puVar21,plVar16,lVar25,*(undefined8 *)(puVar17[7] + 0x58));
        return puVar21;
      }
      if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      puVar21 = (undefined8 *)func_0x03280ca0();
      lVar30 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      if ((*(byte *)(lVar30 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) == lVar30
         )) {
        func_0x04b715c8(puVar21,plVar16,lVar25,*(undefined8 *)(puVar17[7] + 0x48));
        return puVar21;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    puVar21 = (undefined8 *)func_0x03280ca0();
    lVar18 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar30 = func_0x03280b90(plVar16,lVar18);
    if (lVar30 != 0) {
      func_0x04b667e0(puVar21,lVar30,lVar25,*(undefined8 *)(puVar17[7] + 0x30));
      return puVar21;
    }
  }
  lVar18 = func_0x03281048(plVar16,lVar18);
  *(undefined8 *)(puVar10 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar10 + -0xd0) = auVar33;
  lVar25 = *(long *)(lVar18 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  puVar21 = (undefined8 *)**(long **)(lVar25 + 0xb8);
  func_0x03280ab0();
  if (puVar21 != (undefined8 *)0x0) {
    return puVar21;
  }
  lVar25 = *(long *)(lVar18 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  uVar19 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar25 = *(long *)(lVar18 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  **(undefined8 **)(lVar25 + 0xb8) = uVar19;
  lVar18 = *(long *)(lVar18 + 0x20);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  puVar21 = *(undefined8 **)(lVar18 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar21 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar21 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return puVar21;
}

