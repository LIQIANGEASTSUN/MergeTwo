/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9EC04; Merger.MergeBoard.CoinMultipliers.Systems.CoinMultiplierApplySystem.Tick; status ok */


void Merger_MergeBoard_CoinMultipliers_Systems_CoinMultiplierApplySystem__Tick
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((bRam0000000007e2a883 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07832810);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07832818);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07832820);
    func_0x03280a18(PTR_DAT_07832828);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07832830);
    func_0x03280a18(PTR_DAT_07832838);
    func_0x03280a18(PTR_DAT_07832840);
    func_0x03280a18(PTR_DAT_07832848);
    func_0x03280a18(PTR_DAT_07831018);
    func_0x03280a18(PTR_DAT_07832850);
    func_0x03280a18(PTR_DAT_07832858);
    bRam0000000007e2a883 = 1;
  }
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  if (param_2[1] != 0) {
    uVar4 = func_0x03ec47bc(param_2[1],*(undefined8 *)PTR_DAT_07831018);
    if (param_2[1] != 0) {
      uVar5 = func_0x03ec47bc(param_2[1],*(undefined8 *)PTR_DAT_07832848);
      if (((uVar4 | uVar5) & 1) != 0) {
        lStack_98 = param_2[1];
        lStack_a0 = *param_2;
        lStack_88 = param_2[3];
        lStack_90 = param_2[2];
        Merger_MergeBoard_CoinMultipliers_Systems_CoinMultiplierApplySystem__ProcessAllComponents
                  (param_1,&lStack_a0);
        return;
      }
      lStack_d8 = param_2[1];
      lStack_e0 = *param_2;
      lStack_c8 = param_2[3];
      lStack_d0 = param_2[2];
      uVar6 = func_0x03d1a3ac(*(undefined8 *)PTR_DAT_07832810);
      uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe68);
      func_0x06015d08(uVar7,0,*(undefined8 *)PTR_DAT_0782fe48,0);
      lStack_138 = lStack_d8;
      lStack_140 = lStack_e0;
      lStack_128 = lStack_c8;
      lStack_130 = lStack_d0;
      func_0x03e656e4(&lStack_c0,&lStack_140,uVar6,uVar7,*(undefined8 *)PTR_DAT_07832840);
      puVar1 = PTR_DAT_07832858;
      lStack_78 = lStack_b8;
      lStack_80 = lStack_c0;
      uStack_68 = uStack_a8;
      lStack_70 = lStack_b0;
      lVar8 = *(long *)PTR_DAT_07832858;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar8 = *(long *)puVar1;
      }
      param_2 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
      if (param_2 == (long *)0x0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar8 = *(long *)puVar1;
        }
        uVar6 = **(undefined8 **)(lVar8 + 0xb8);
        param_2 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07832818);
        func_0x05350880(param_2,uVar6,*(undefined8 *)PTR_DAT_07832850,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar9 = (long)param_2;
        func_0x032809c4(plVar9,param_2);
      }
      func_0x0448da08(&lStack_140,&lStack_80,param_2,*(undefined8 *)PTR_DAT_07832838);
      lStack_58 = lStack_138;
      lStack_60 = lStack_140;
      lStack_48 = lStack_128;
      lStack_50 = lStack_130;
      plVar9 = (long *)func_0x0448da60(&lStack_60,*(undefined8 *)PTR_DAT_07832830);
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07832820) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06b9eedc;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07832820,0);
LAB_06b9eedc:
        param_2 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar17 = PTR_DAT_07832828;
        puVar1 = PTR_DAT_0774e8e0;
        if (param_2 != (long *)0x0) {
          do {
            lVar8 = *param_2;
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_06b9ef54;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b9ef54:
            uVar14 = (*(code *)*puVar10)(param_2,puVar10[1]);
            if ((uVar14 & 1) == 0) {
              param_1 = 0;
              goto LAB_06b9eff4;
            }
            lVar8 = *param_2;
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar17) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_06b9efb0;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar17,0);
LAB_06b9efb0:
            (*(code *)*puVar10)(&lStack_140,param_2,puVar10[1]);
            lStack_b8 = lStack_130;
            lStack_c0 = lStack_138;
            lStack_b0 = lStack_128;
            lStack_158 = lStack_130;
            lStack_160 = lStack_138;
            lStack_150 = lStack_128;
            Merger_MergeBoard_CoinMultipliers_Systems_CoinMultiplierApplySystem__ProcessComponent
                      (param_1,lStack_140,&lStack_160,uStack_120);
          } while( true );
        }
        goto LAB_06b9f078;
      }
    }
  }
  func_0x03280cac();
LAB_06b9f078:
  func_0x03280cac();
  while( true ) {
    auVar20 = func_0x03280ca4(param_1);
    if (auVar20._8_4_ != 1) break;
    plVar9 = (long *)func_0x072ce910(auVar20._0_8_);
    param_1 = *plVar9;
    func_0x072ce920();
LAB_06b9eff4:
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06b9f04c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b9f04c:
      (*(code *)*puVar10)(param_2,puVar10[1]);
    }
    if (param_1 == 0) {
      return;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06b9f114;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b9f114:
    (*(code *)*puVar10)(param_2,puVar10[1]);
  }
  func_0x03365958(auVar20._0_8_);
  func_0x03280ca4(0);
  auVar19 = func_0x02f09514();
  puVar3 = PTR_DAT_07832868;
  puVar18 = PTR_DAT_07832860;
  puVar2 = PTR_DAT_07832858;
  puVar17 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
  puVar10 = auVar19._8_8_;
  lVar8 = auVar19._0_8_;
  if ((bRam0000000007e2a884 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07832860);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07832870);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07832878);
    func_0x03280a18(PTR_DAT_07832880);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07832888);
    func_0x03280a18(PTR_DAT_07832890);
    func_0x03280a18(PTR_DAT_07832868);
    func_0x03280a18(PTR_DAT_07832898);
    func_0x03280a18(PTR_DAT_07832858);
    bRam0000000007e2a884 = 1;
  }
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_228 = puVar10[1];
  uStack_230 = *puVar10;
  uStack_218 = puVar10[3];
  uStack_220 = puVar10[2];
  uVar7 = func_0x03d1a108(*(undefined8 *)puVar18);
  plVar9 = (long *)func_0x03280ca0(*(undefined8 *)puVar17);
  func_0x06015d08(plVar9,0,*(undefined8 *)puVar1,0);
  uVar6 = *(undefined8 *)puVar3;
  uStack_278 = uStack_228;
  uStack_280 = uStack_230;
  uStack_268 = uStack_218;
  uStack_270 = uStack_220;
  func_0x03e65284(&uStack_210,&uStack_280,uVar7,plVar9,uVar6);
  lVar11 = *(long *)puVar2;
  uStack_1e8 = uStack_208;
  uStack_1f0 = uStack_210;
  uStack_1d8 = uStack_1f8;
  uStack_1e0 = uStack_200;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar11 = *(long *)puVar2;
  }
  puVar17 = PTR_DAT_07832890;
  puVar1 = PTR_DAT_07832888;
  plVar16 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (plVar16 == (long *)0x0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar11 = *(long *)puVar2;
    }
    plVar9 = (long *)**(undefined8 **)(lVar11 + 0xb8);
    plVar16 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07832870);
    uVar6 = 0;
    func_0x05350238(plVar16,plVar9,*(undefined8 *)PTR_DAT_07832898,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar12 = (long)plVar16;
    func_0x032809c4(plVar12,plVar16);
  }
  puVar10 = *(undefined8 **)puVar17;
  func_0x0448acf8(&uStack_280,&uStack_1f0,plVar16);
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_1b8 = uStack_268;
  uStack_1c0 = uStack_270;
  plVar12 = (long *)func_0x0448ad50(&uStack_1d0,*(undefined8 *)puVar1);
  if (plVar12 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar11 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07832878) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06b9f3a4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b9f3a4:
    plVar9 = (long *)PTR_DAT_0774e8c8;
    plVar16 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar18 = PTR_DAT_07832880;
    puVar17 = PTR_DAT_0774e8e0;
    if (plVar16 != (long *)0x0) {
      do {
        lVar11 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar17) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06b9f424;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar16);
LAB_06b9f424:
        uVar14 = (*(code *)*puVar13)(plVar16,puVar13[1]);
        if ((uVar14 & 1) == 0) {
          lVar8 = 0;
          goto LAB_06b9f4c4;
        }
        lVar11 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar18) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06b9f480;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar18,0);
LAB_06b9f480:
        (*(code *)*puVar10)(&uStack_280,plVar16,puVar10[1]);
        uStack_208 = uStack_270;
        uStack_210 = uStack_278;
        uStack_200 = uStack_268;
        uStack_298 = uStack_270;
        uStack_2a0 = uStack_278;
        uStack_290 = uStack_268;
        puVar10 = &uStack_2a0;
        uVar6 = uStack_260;
        Merger_MergeBoard_CoinMultipliers_Systems_CoinMultiplierApplySystem__ProcessComponent
                  (lVar8,uStack_280);
      } while( true );
    }
  }
  func_0x03280cac();
  puVar17 = puVar2;
  puVar18 = puVar1;
  while( true ) {
    auVar20 = func_0x03280ca4(lVar8);
    uStack_2a8 = auVar20._0_8_;
    if (auVar20._8_4_ != 1) break;
    plVar12 = (long *)func_0x072ce910();
    lVar8 = *plVar12;
    func_0x072ce920();
LAB_06b9f4c4:
    if (plVar16 != (long *)0x0) {
      lVar11 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *plVar9) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06b9f514;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar16);
LAB_06b9f514:
      (*(code *)*puVar13)(plVar16,puVar13[1]);
    }
    if (lVar8 == 0) {
      return;
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar9) {
          puVar13 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06b9f5d4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar16);
LAB_06b9f5d4:
    (*(code *)*puVar13)(plVar16,puVar13[1]);
  }
  func_0x03365958(uStack_2a8);
  func_0x03280ca4(0);
  auVar19 = func_0x02f09514();
  pcStack_2e0 = 
  Merger_MergeBoard_CoinMultipliers_Systems_CoinMultiplierApplySystem__ProcessComponent;
  uStack_2b8 = 0;
  puStack_2d8 = puVar18;
  puStack_2d0 = puVar17;
  plStack_2c8 = plVar9;
  plStack_2c0 = plVar16;
  if ((bRam0000000007e2a885 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078328a0);
    func_0x03280a18(PTR_DAT_077fd5f8);
    bRam0000000007e2a885 = 1;
  }
  uStack_304 = 0;
  plVar9 = *(long **)(auVar19._0_8_ + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077fd5f8) {
          puVar13 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06b9f6a4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077fd5f8,0);
LAB_06b9f6a4:
    uVar14 = (*(code *)*puVar13)(plVar9,uVar6,&uStack_304,puVar13[1]);
    if ((uVar14 & 1) == 0) {
      return;
    }
    if (puVar10[1] != 0) {
      *(undefined4 *)(puVar10[1] + 0x14) = uStack_304;
      uStack_2f0 = puVar10[2];
      uStack_2f8 = puVar10[1];
      uStack_300 = *puVar10;
      if (auVar19._8_8_ != 0) {
        func_0x03d1c94c(auVar19._8_8_,&uStack_300,*(undefined8 *)PTR_DAT_078328a0);
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}

