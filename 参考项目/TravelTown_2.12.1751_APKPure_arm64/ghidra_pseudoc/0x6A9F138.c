/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9F138; Merger.MergeBoard.CoinMultipliers.Systems.CoinMultiplierApplySystem.ProcessAllComponents; status ok */


/* WARNING: Possible PIC construction at 0x06b9f4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9f4bc) */

void Merger_MergeBoard_CoinMultipliers_Systems_CoinMultiplierApplySystem__ProcessAllComponents
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  long *plStack_160;
  long lStack_158;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar3 = PTR_DAT_07832868;
  puVar16 = PTR_DAT_07832860;
  puVar2 = PTR_DAT_07832858;
  puVar15 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
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
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_c8 = param_2[1];
  lStack_d0 = *param_2;
  lStack_b8 = param_2[3];
  lStack_c0 = param_2[2];
  uVar4 = func_0x03d1a108(*(undefined8 *)puVar16);
  plVar5 = (long *)func_0x03280ca0(*(undefined8 *)puVar15);
  func_0x06015d08(plVar5,0,*(undefined8 *)puVar1,0);
  uVar10 = *(undefined8 *)puVar3;
  lStack_118 = lStack_c8;
  lStack_120 = lStack_d0;
  lStack_108 = lStack_b8;
  lStack_110 = lStack_c0;
  func_0x03e65284(&lStack_b0,&lStack_120,uVar4,plVar5,uVar10);
  lVar6 = *(long *)puVar2;
  lStack_88 = lStack_a8;
  lStack_90 = lStack_b0;
  uStack_78 = uStack_98;
  lStack_80 = lStack_a0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar6 = *(long *)puVar2;
  }
  puVar15 = PTR_DAT_07832890;
  puVar1 = PTR_DAT_07832888;
  plVar14 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (plVar14 == (long *)0x0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar6 = *(long *)puVar2;
    }
    plVar5 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    plVar14 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07832870);
    uVar10 = 0;
    func_0x05350238(plVar14,plVar5,*(undefined8 *)PTR_DAT_07832898,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar7 = (long)plVar14;
    func_0x032809c4(plVar7,plVar14);
  }
  plVar7 = *(long **)puVar15;
  func_0x0448acf8(&lStack_120,&lStack_90,plVar14);
  lStack_68 = lStack_118;
  lStack_70 = lStack_120;
  lStack_58 = lStack_108;
  lStack_60 = lStack_110;
  plVar8 = (long *)func_0x0448ad50(&lStack_70,*(undefined8 *)puVar1);
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar6 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07832878) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b9f3a4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    plVar7 = (long *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b9f3a4:
    plVar5 = (long *)PTR_DAT_0774e8c8;
    plVar14 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar16 = PTR_DAT_07832880;
    puVar15 = PTR_DAT_0774e8e0;
    if (plVar14 != (long *)0x0) {
      lVar6 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b9f424;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      plVar7 = (long *)0x0;
      puVar9 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b9f424:
      uVar12 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      if ((uVar12 & 1) == 0) {
        param_1 = 0;
        do {
          if (plVar14 != (long *)0x0) {
            lVar6 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *plVar5) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_06b9f514;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            plVar7 = (long *)0x0;
            puVar9 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b9f514:
            (*(code *)*puVar9)(plVar14,puVar9[1]);
          }
          if (param_1 == 0) {
            return;
          }
LAB_06b9f548:
          auVar18 = func_0x03280ca4(param_1);
          uStack_148 = auVar18._0_8_;
          if (auVar18._8_4_ != 1) goto LAB_06b9f574;
          plVar8 = (long *)func_0x072ce910();
          param_1 = *plVar8;
          func_0x072ce920();
        } while( true );
      }
      lVar6 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar16) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b9f480;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar16,0);
LAB_06b9f480:
      (*(code *)*puVar9)(&lStack_120,plVar14,puVar9[1]);
      lStack_a8 = lStack_110;
      lStack_b0 = lStack_118;
      lStack_a0 = lStack_108;
      lStack_138 = lStack_110;
      lStack_140 = lStack_118;
      lStack_130 = lStack_108;
      plVar7 = &lStack_140;
      uVar4 = 0x6b9f4bc;
      lVar11 = lStack_120;
      uVar10 = uStack_100;
      lVar6 = param_1;
      goto SUB_06b9f5f8;
    }
  }
  func_0x03280cac();
  puVar15 = puVar2;
  puVar16 = puVar1;
  goto LAB_06b9f548;
LAB_06b9f574:
  lVar6 = 0;
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *plVar5) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b9f5d4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    plVar7 = (long *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b9f5d4:
    (*(code *)*puVar9)(plVar14,puVar9[1]);
  }
  func_0x03365958(uStack_148);
  func_0x03280ca4(0);
  uVar4 = 0x6b9f5f8;
  auVar17 = func_0x02f09514();
  lVar11 = auVar17._8_8_;
  param_1 = auVar17._0_8_;
SUB_06b9f5f8:
  uStack_180 = uVar4;
  puStack_178 = puVar16;
  puStack_170 = puVar15;
  plStack_168 = plVar5;
  plStack_160 = plVar14;
  lStack_158 = lVar6;
  if ((bRam0000000007e2a885 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078328a0);
    func_0x03280a18(PTR_DAT_077fd5f8);
    bRam0000000007e2a885 = 1;
  }
  uStack_1a4 = 0;
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077fd5f8) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b9f6a4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077fd5f8,0);
LAB_06b9f6a4:
    uVar12 = (*(code *)*puVar9)(plVar5,uVar10,&uStack_1a4,puVar9[1]);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (plVar7[1] != 0) {
      *(undefined4 *)(plVar7[1] + 0x14) = uStack_1a4;
      lStack_190 = plVar7[2];
      lStack_198 = plVar7[1];
      lStack_1a0 = *plVar7;
      if (lVar11 != 0) {
        func_0x03d1c94c(lVar11,&lStack_1a0,*(undefined8 *)PTR_DAT_078328a0);
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}

