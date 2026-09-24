/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD07A8; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.Setup; status ok */


/* WARNING: Possible PIC construction at 0x06bd09c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06bd09cc) */
/* WARNING: Removing unreachable block (ram,0x06bd09d4) */
/* WARNING: Removing unreachable block (ram,0x06bd09ec) */
/* WARNING: Removing unreachable block (ram,0x06bd09f4) */
/* WARNING: Removing unreachable block (ram,0x06bd0a1c) */
/* WARNING: Removing unreachable block (ram,0x06bd0a00) */
/* WARNING: Removing unreachable block (ram,0x06bd0a0c) */
/* WARNING: Removing unreachable block (ram,0x06bd0a2c) */
/* WARNING: Removing unreachable block (ram,0x06bd0a3c) */
/* WARNING: Removing unreachable block (ram,0x06bd0b0c) */
/* WARNING: Removing unreachable block (ram,0x06bd0a78) */
/* WARNING: Removing unreachable block (ram,0x06bd0a98) */
/* WARNING: Removing unreachable block (ram,0x06bd0aa0) */
/* WARNING: Removing unreachable block (ram,0x06bd0ac4) */
/* WARNING: Removing unreachable block (ram,0x06bd0aac) */
/* WARNING: Removing unreachable block (ram,0x06bd0ab8) */
/* WARNING: Removing unreachable block (ram,0x06bd0ad4) */

long * Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__Setup
                 (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  code **ppcVar6;
  code **ppcVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 unaff_x21;
  long *unaff_x22;
  long lVar25;
  long unaff_x23;
  long unaff_x24;
  long *plVar26;
  code *pcVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  code *pcStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long *plStack_68;
  code *pcStack_60;
  
  if ((bRam0000000007e2aa81 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07751df8);
    func_0x03280a18(PTR_DAT_07834168);
    func_0x03280a18(PTR_DAT_07834170);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e2aa81 = 1;
  }
  uVar15 = func_0x055f7aac(param_2,0);
  puVar4 = PTR_DAT_07834170;
  puVar3 = PTR_DAT_0776dcd8;
  puVar2 = PTR_DAT_07751df8;
  puVar1 = PTR_DAT_077503b8;
  if ((uVar15 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    func_0x032809c4((undefined8 *)(param_1 + 0x20),param_2);
    Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__LoadData(param_1);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (plVar13 = *(long **)(param_1 + 0x10), plVar13 == (long *)0x0)) {
      lVar22 = func_0x03280cac();
      puVar1 = PTR_DAT_07834178;
      ppcVar7 = &pcStack_60;
      pcStack_60 = Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__LoadData;
      if ((bRam0000000007e2aa85 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07834180);
        func_0x03280a18(PTR_DAT_07833e20);
        func_0x03280a18(PTR_DAT_07759a18);
        func_0x03280a18(PTR_DAT_07759a10);
        func_0x03280a18(PTR_DAT_07834178);
        bRam0000000007e2aa85 = 1;
      }
      lVar10 = *(long *)(lVar22 + 0x20);
      plVar13 = *(long **)(lVar22 + 0x28);
      plVar12 = (long *)func_0x03280ca0(*(undefined8 *)puVar1);
      uVar16 = 0x6bd09cc;
      plVar26 = plVar12;
    }
    else {
      lVar22 = *plVar13;
      uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x10);
      uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar15 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07833e20) {
            puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 0xd) * 0x10 + 0x138);
            goto LAB_06bd0928;
          }
          uVar15 = uVar15 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07833e20,0xd);
LAB_06bd0928:
      (*(code *)*puVar14)(plVar13,uVar9,puVar14[1]);
      if ((bRam0000000007e2aa82 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07773028);
        func_0x03280a18(PTR_DAT_0777afa8);
        func_0x03280a18(PTR_DAT_07833e20);
        func_0x03280a18(PTR_DAT_07834188);
        bRam0000000007e2aa82 = 1;
      }
      puVar2 = PTR_DAT_07834188;
      puVar1 = PTR_DAT_07773028;
      plVar13 = *(long **)(param_1 + 0x10);
      if (plVar13 != (long *)0x0) {
        lVar22 = *plVar13;
        uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar15 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07833e20) {
              puVar14 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_06bd0bd0;
            }
            uVar15 = uVar15 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07833e20,0);
LAB_06bd0bd0:
        lVar22 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        unaff_x21 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x05420abc(unaff_x21,param_1,*(undefined8 *)puVar2,0);
        unaff_x22 = (long *)puVar1;
        if (lVar22 != 0) {
          param_1 = *(long *)PTR_DAT_0777afa8;
          puVar5 = &stack0xffffffffffffffc0;
          puVar14 = (undefined8 *)(lVar22 + 0x10);
          unaff_x22 = (long *)*puVar14;
          do {
            lVar22 = 0;
            unaff_x24 = func_0x057ddb20(unaff_x22,unaff_x21);
            unaff_x23 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(unaff_x23 + 0x135) & 1) == 0) {
              unaff_x23 = func_0x0325681c(unaff_x23);
            }
            if (unaff_x24 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = func_0x03280b90(unaff_x24,unaff_x23);
              if (lVar10 == 0) {
                auVar28 = func_0x03281048(unaff_x24,unaff_x23);
                pcVar27 = (code *)0x4d0e5dc;
                goto SUB_04d0e5dc;
              }
            }
            plVar13 = (long *)func_0x032dd140(puVar14,lVar10,unaff_x22);
            bVar8 = unaff_x22 == plVar13;
            unaff_x22 = plVar13;
            if (bVar8) {
              return plVar13;
            }
          } while( true );
        }
      }
      puVar14 = (undefined8 *)0x0;
      plVar13 = (long *)func_0x03280cac();
      pcStack_60 = (code *)0x6bd0c2c;
      if ((bRam0000000007e2aa83 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07773028);
        func_0x03280a18(PTR_DAT_0777d4a8);
        func_0x03280a18(PTR_DAT_07833e20);
        func_0x03280a18(PTR_DAT_07834188);
        bRam0000000007e2aa83 = 1;
      }
      puVar2 = PTR_DAT_07834188;
      puVar1 = PTR_DAT_07773028;
      plVar26 = (long *)plVar13[2];
      uVar16 = unaff_x21;
      plStack_80 = unaff_x22;
      if (plVar26 != (long *)0x0) {
        lVar22 = *plVar26;
        uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar15 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07833e20) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_06bd0cec;
            }
            uVar15 = uVar15 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar15 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_07833e20,0);
LAB_06bd0cec:
        lVar22 = (*(code *)*puVar17)(plVar26,puVar17[1]);
        uVar16 = func_0x03280ca0(*(undefined8 *)puVar1);
        auVar28._8_8_ = uVar16;
        auVar28._0_8_ = lVar22;
        func_0x05420abc(uVar16,plVar13,*(undefined8 *)puVar2,0);
        plStack_80 = (long *)puVar1;
        if (lVar22 != 0) {
          lVar22 = *(long *)PTR_DAT_0777d4a8;
          puVar5 = &stack0xffffffffffffffd0;
          pcVar27 = pcStack_60;
SUB_04d0e5dc:
          *(code **)(puVar5 + -0x40) = pcVar27;
          *(long *)(puVar5 + -0x30) = unaff_x24;
          *(long *)(puVar5 + -0x28) = unaff_x23;
          *(long **)(puVar5 + -0x20) = unaff_x22;
          *(undefined8 *)(puVar5 + -0x18) = unaff_x21;
          *(undefined8 **)(puVar5 + -0x10) = puVar14;
          *(long *)(puVar5 + -8) = param_1;
          plVar26 = (long *)(auVar28._0_8_ + 0x10);
          plVar13 = (long *)*plVar26;
          do {
            lVar10 = func_0x057ddd18(plVar13,auVar28._8_8_,0);
            lVar25 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
              lVar25 = func_0x0325681c(lVar25);
            }
            if (lVar10 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = func_0x03280b90(lVar10,lVar25);
              if (lVar11 == 0) {
                auVar29 = func_0x03281048(lVar10,lVar25);
                *(undefined8 *)(puVar5 + -0x70) = 0x4d0e688;
                *(long **)(puVar5 + -0x60) = plVar13;
                *(long *)(puVar5 + -0x58) = auVar28._8_8_;
                *(long **)(puVar5 + -0x50) = plVar26;
                *(long *)(puVar5 + -0x48) = lVar22;
                if ((bRam0000000007e1aec7 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0774e758);
                  bRam0000000007e1aec7 = 1;
                }
                puVar1 = PTR_DAT_0774e758;
                plVar26 = (long *)(auVar29._0_8_ + 0x18);
                plVar13 = (long *)*plVar26;
                while ((plVar12 = (long *)func_0x057ddb20(plVar13,auVar29._8_8_,0),
                       plVar12 == (long *)0x0 || (*plVar12 == *(long *)puVar1))) {
                  plVar12 = (long *)func_0x032dd140(plVar26,plVar12,plVar13);
                  bVar8 = plVar13 == plVar12;
                  plVar13 = plVar12;
                  if (bVar8) {
                    return plVar12;
                  }
                }
                auVar28 = func_0x03281048(plVar12);
                *(undefined8 *)(puVar5 + -0xa0) = 0x4d0e724;
                *(undefined **)(puVar5 + -0x90) = puVar1;
                *(long **)(puVar5 + -0x88) = plVar13;
                *(long **)(puVar5 + -0x80) = plVar26;
                *(long *)(puVar5 + -0x78) = auVar29._8_8_;
                if ((bRam0000000007e1aec8 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0774e758);
                  bRam0000000007e1aec8 = 1;
                }
                puVar1 = PTR_DAT_0774e758;
                plVar26 = (long *)(auVar28._0_8_ + 0x18);
                plVar13 = (long *)*plVar26;
                while ((plVar12 = (long *)func_0x057ddd18(plVar13,auVar28._8_8_,0),
                       plVar12 == (long *)0x0 || (*plVar12 == *(long *)puVar1))) {
                  plVar12 = (long *)func_0x032dd140(plVar26,plVar12,plVar13);
                  bVar8 = plVar13 == plVar12;
                  plVar13 = plVar12;
                  if (bVar8) {
                    return plVar12;
                  }
                }
                lVar22 = func_0x03281048(plVar12);
                return (long *)(ulong)*(uint *)(lVar22 + 0x20);
              }
            }
            plVar12 = (long *)func_0x032dd140(plVar26,lVar11,plVar13);
            bVar8 = plVar13 == plVar12;
            plVar13 = plVar12;
            if (bVar8) {
              return plVar12;
            }
          } while( true );
        }
      }
      auVar28 = func_0x03280cac();
      plVar26 = auVar28._0_8_;
      ppcVar6 = &pcStack_90;
      pcStack_90 = 
      Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__OnPowerBoostModeChanged;
      uVar15 = auVar28._8_8_ & 0xffffffff;
      lStack_88 = unaff_x23;
      uStack_78 = uVar16;
      uStack_70 = 0;
      plStack_68 = plVar13;
      if ((bRam0000000007e2aa84 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07833e20);
        func_0x03280a18(PTR_DAT_0774ee08);
        bRam0000000007e2aa84 = 1;
      }
      plVar13 = (long *)plVar26[6];
      if (plVar13 == (long *)0x0) {
        plVar12 = (long *)Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__LoadData
                                    (plVar26);
        plVar13 = (long *)plVar26[6];
        if (plVar13 == (long *)0x0) {
          return plVar12;
        }
      }
      puVar1 = PTR_DAT_0774ee08;
      plVar12 = (long *)plVar26[2];
      if (plVar12 == (long *)0x0) {
        pcVar27 = (code *)0x6bd0e68;
        plVar12 = (long *)func_0x03280cac();
        uVar16 = 0;
        lStack_88 = unaff_x23;
      }
      else {
        lVar22 = *plVar12;
        uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07833e20) {
              puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto LAB_06bd0e08;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07833e20,1);
LAB_06bd0e08:
        uVar9 = (*(code *)*puVar14)(plVar12,puVar14[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar1);
        }
        uVar9 = func_0x05797438(uVar15,uVar9,0);
        *(undefined4 *)(plVar13 + 2) = uVar9;
        ppcVar6 = &pcStack_60;
        plVar12 = plVar26;
        plVar26 = plStack_68;
        uVar15 = uStack_70;
        uVar16 = uStack_78;
        plVar13 = plStack_80;
        pcVar27 = pcStack_90;
      }
      ppcVar7 = (code **)((long)ppcVar6 + -0x30);
      *(code **)((long)ppcVar6 + -0x30) = pcVar27;
      *(long *)((long)ppcVar6 + -0x28) = lStack_88;
      *(long **)((long)ppcVar6 + -0x20) = plVar13;
      *(undefined8 *)((long)ppcVar6 + -0x18) = uVar16;
      *(ulong *)((long)ppcVar6 + -0x10) = uVar15;
      *(long **)((long)ppcVar6 + -8) = plVar26;
      lVar22 = 0x7e2a000;
      plVar13 = plVar12;
      if ((bRam0000000007e2aa86 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07834190);
        plVar13 = (long *)func_0x03280a18(PTR_DAT_07774240);
        bRam0000000007e2aa86 = 1;
      }
      lVar10 = plVar12[6];
      if (lVar10 == 0) {
        return plVar13;
      }
      plVar26 = (long *)plVar12[3];
      plVar13 = plVar12;
      if (plVar26 != (long *)0x0) {
        lVar22 = *plVar26;
        plVar13 = (long *)plVar12[4];
        plVar12 = (long *)plVar12[5];
        lVar25 = *(long *)PTR_DAT_07834190;
        uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar15 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)(lVar25 + 0x20)) {
              lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar25 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06bd0f24;
            }
            uVar15 = uVar15 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar15 != 0);
        }
        lVar22 = func_0x03256b10(plVar26);
LAB_06bd0f24:
        lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar25);
        uVar16 = (**(code **)(lVar22 + 8))(plVar26,lVar10,lVar22);
        lVar22 = 0;
        if (plVar12 != (long *)0x0) {
          lVar22 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar15 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07774240) {
                puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 7) * 0x10 + 0x138);
                goto LAB_06bd0fa4;
              }
              uVar15 = uVar15 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar15 != 0);
          }
          puVar14 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07774240,7);
LAB_06bd0fa4:
                    /* WARNING: Could not recover jumptable at 0x06bd0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar13 = (long *)(*(code *)*puVar14)(plVar12,plVar13,uVar16,1,puVar14[1]);
          return plVar13;
        }
      }
      uVar16 = 0x6bd0fcc;
      plVar12 = (long *)func_0x03280cac();
    }
    puVar2 = PTR_DAT_07759a18;
    puVar1 = PTR_DAT_07759a10;
    *(undefined8 *)((long)ppcVar7 + -0x30) = uVar16;
    *(long **)((long)ppcVar7 + -0x20) = plVar26;
    *(long *)((long)ppcVar7 + -0x18) = lVar10;
    *(long **)((long)ppcVar7 + -0x10) = plVar13;
    *(long *)((long)ppcVar7 + -8) = lVar22;
    if ((bRam0000000007e2aab8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07759a18);
      func_0x03280a18(PTR_DAT_07759a10);
      bRam0000000007e2aab8 = 1;
    }
    lVar22 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x04119444(lVar22,*(undefined8 *)puVar2);
    plVar12[3] = lVar22;
    func_0x032809c4(plVar12 + 3,lVar22);
    return plVar12;
  }
  uVar16 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_07834168,param_2,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_0776dcd8;
  uVar18 = *(undefined8 *)puVar1;
  uVar19 = *(undefined8 *)puVar4;
  uVar20 = *(undefined8 *)puVar2;
  if ((bRam0000000007e1c84b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_07784e90);
    bRam0000000007e1c84b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  if (cRam0000000007e1c87b == '\0') {
    func_0x03280a18(PTR_DAT_0776dcd8);
    cRam0000000007e1c87b = '\x01';
  }
  plVar13 = *(long **)puVar3;
  if ((int)plVar13[0x1c] == 0) {
    func_0x03280b8c();
    plVar13 = *(long **)puVar3;
  }
  pbVar21 = (byte *)plVar13[0x17];
  if ((*pbVar21 & 1) != 0) {
    if ((int)plVar13[0x1c] == 0) {
      plVar13 = (long *)func_0x03280b8c();
      pbVar21 = *(byte **)(*(long *)puVar3 + 0xb8);
    }
    plVar26 = *(long **)(pbVar21 + 8);
    if (plVar26 != (long *)0x0) {
      lVar22 = *plVar26;
      uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar15 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07784e90) {
            puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 4) * 0x10 + 0x138);
            goto LAB_0556c570;
          }
          uVar15 = uVar15 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_07784e90,4);
LAB_0556c570:
                    /* WARNING: Could not recover jumptable at 0x0556c5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar13 = (long *)(*(code *)*puVar14)(plVar26,uVar16,uVar18,0,uVar19,uVar20,0,puVar14[1]);
      return plVar13;
    }
  }
  return plVar13;
}

