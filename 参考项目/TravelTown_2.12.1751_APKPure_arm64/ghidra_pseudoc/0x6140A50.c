/* Ghidra 12.1.2 native pseudocode; RVA 0x6140A50; MergeEngine.Model.Configuration.MergingConfigurationModel.GetLocalMergeItems; status ok */


undefined8
MergeEngine_Model_Configuration_MergingConfigurationModel__GetLocalMergeItems(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long *unaff_x23;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  code *pcStack_80;
  long *plStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  puVar9 = PTR_DAT_077cf4d0;
  puVar2 = PTR_DAT_077cf4c8;
  if ((bRam0000000007e245c5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0775ad18);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077db448);
    func_0x03280a18(PTR_DAT_077db450);
    func_0x03280a18(PTR_DAT_077db458);
    func_0x03280a18(PTR_DAT_077cf4c8);
    func_0x03280a18(PTR_DAT_077cf4d0);
    func_0x03280a18(PTR_DAT_077db460);
    bRam0000000007e245c5 = 1;
  }
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar9);
  func_0x04143c38(lVar7,*(undefined8 *)puVar2);
  plVar16 = (long *)param_1[5];
  if (plVar16 != (long *)0x0) {
    lVar11 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077db448) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_06240b6c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_077db448,1);
LAB_06240b6c:
    lVar11 = (*(code *)*puVar8)(plVar16,puVar8[1]);
    plVar17 = (long *)PTR_DAT_0774e8c8;
    if (lVar11 != 0) {
      plVar16 = (long *)func_0x04545bc8(lVar11,*(undefined8 *)PTR_DAT_077db460);
      puVar4 = PTR_DAT_077db450;
      puVar3 = PTR_DAT_0775ad18;
      puVar2 = PTR_DAT_0774e8e0;
      if (plVar16 == (long *)0x0) goto LAB_06240d94;
LAB_06240bb4:
      do {
        lVar11 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06240c00;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar2,0);
LAB_06240c00:
        uVar13 = (*(code *)*puVar8)(plVar16,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          param_1 = (long *)0x0;
          goto LAB_06240cfc;
        }
        lVar11 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06240c5c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar3,0);
LAB_06240c5c:
        puVar9 = (undefined *)(*(code *)*puVar8)(plVar16,puVar8[1]);
        uVar13 = func_0x0623e058(param_1,puVar9);
      } while (((uVar13 & 1) == 0) ||
              (lVar11 = (**(code **)(*param_1 + 0x4e8))
                                  (param_1,puVar9,*(undefined8 *)(*param_1 + 0x4f0)), lVar11 == 0));
      if (lVar7 != 0) {
        lVar12 = *(long *)(lVar7 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_06240d8c;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar7,lVar11,
                          *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06240bb4;
      }
      func_0x03280cac();
LAB_06240d8c:
      func_0x03280cac();
      unaff_x23 = plVar17;
    }
  }
  do {
    plVar17 = unaff_x23;
    func_0x03280cac();
LAB_06240d94:
    func_0x03280cac();
    do {
      auVar19 = func_0x03280ca4(param_1);
      uVar6 = auVar19._0_8_;
      if (auVar19._8_4_ != 1) {
        if (plVar16 == (long *)0x0) goto LAB_06240e3c;
        lVar7 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 == 0) goto LAB_06240e14;
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_06240dfc;
      }
      puVar8 = (undefined8 *)func_0x072ce910();
      param_1 = (long *)*puVar8;
      func_0x072ce920();
LAB_06240cfc:
      if (plVar16 != (long *)0x0) {
        lVar11 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *plVar17) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06240d4c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar16,*plVar17,0);
LAB_06240d4c:
        (*(code *)*puVar8)(plVar16,puVar8[1]);
      }
    } while (param_1 != (long *)0x0);
    unaff_x23 = plVar17;
    if (lVar7 != 0) {
      lVar12 = *(long *)PTR_DAT_077db458;
      lVar11 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      uVar6 = func_0x03280ca0(lVar11);
      func_0x04545928(uVar6,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0xa0)
                     );
      return uVar6;
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_06240dfc:
    if (*(long *)(piVar15 + -2) == *plVar17) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06240e30;
    }
  }
LAB_06240e14:
  puVar8 = (undefined8 *)func_0x03256b10(plVar16,*plVar17,0);
LAB_06240e30:
  (*(code *)*puVar8)(plVar16,puVar8[1]);
LAB_06240e3c:
  func_0x03365958(uVar6);
  func_0x03280ca4(0);
  lVar7 = func_0x02f09514();
  puVar4 = PTR_DAT_077db468;
  puVar3 = PTR_DAT_077db200;
  puVar2 = PTR_DAT_077db1f8;
  pcStack_80 = MergeEngine_Model_Configuration_MergingConfigurationModel__DisposeModel;
  uStack_68 = 0;
  plStack_78 = plVar17;
  pcStack_70 = (code *)puVar9;
  plStack_60 = plVar16;
  uStack_58 = uVar6;
  if ((bRam0000000007e245c6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db1f8);
    func_0x03280a18(PTR_DAT_077db468);
    func_0x03280a18(PTR_DAT_077db200);
    bRam0000000007e245c6 = 1;
  }
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x054221d4(uVar6,lVar7,*(undefined8 *)puVar3,0);
  pcVar5 = pcStack_70;
  lVar12 = *(long *)puVar4;
  pcStack_70 = pcStack_80;
  lVar11 = lVar12;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  plVar16 = *(long **)(lVar7 + 0x10);
  if (plVar16 == (long *)0x0) {
    auVar18 = func_0x03280cac();
    uVar10 = auVar18._8_8_;
    uStack_90 = 0x3cc7414;
    lVar7 = lVar11;
    lStack_88 = lVar12;
    pcStack_80 = (code *)plVar16;
    plStack_78 = (long *)uVar6;
    if (*(long *)(lVar11 + 0x38) == 0) {
      func_0x03256878(lVar11);
    }
    plVar16 = *(long **)(auVar18._0_8_ + 0x10);
    if (plVar16 == (long *)0x0) {
      auVar18 = func_0x03280cac();
      puStack_b0 = (undefined *)0x3cc74c4;
      lStack_a8 = lVar11;
      plStack_a0 = plVar16;
      uStack_98 = uVar10;
      if (*(long *)(lVar7 + 0x38) == 0) {
        func_0x03256878(lVar7);
      }
      lVar11 = *(long *)(auVar18._0_8_ + 0x20);
      if (lVar11 != 0) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
        lVar12 = *(long *)(lVar7 + 0x38);
        if (lVar12 == 0) {
          func_0x03256878(lVar7);
          lVar12 = *(long *)(lVar7 + 0x38);
        }
        lVar7 = *(long *)(lVar12 + 8);
        uStack_c0 = puStack_b0;
        puStack_b0 = pcVar5;
        puVar8 = *(undefined8 **)(lVar7 + 0x38);
        if (puVar8 == (undefined8 *)0x0) {
          func_0x03280a18(PTR_DAT_0774e558);
          puVar8 = *(undefined8 **)(lVar7 + 0x38);
          if (puVar8 == (undefined8 *)0x0) {
            func_0x03256878(lVar7);
            puVar8 = *(undefined8 **)(lVar7 + 0x38);
          }
        }
        uVar6 = *puVar8;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar6 = func_0x057a51c4(uVar6,0);
        puStack_b0 = (undefined *)uStack_c0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        func_0x072a6c4c(&uStack_c0,uVar6,0,0,0,0);
        uVar6 = func_0x07286e40(lVar11,uStack_c0,uStack_b8,auVar18._8_8_,0);
        return uVar6;
      }
      return 0;
    }
    lVar7 = *plVar16;
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_03cc7498;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    lVar7 = func_0x03256b10(plVar16);
LAB_03cc7498:
    lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03cc74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(lVar7 + 8))(plVar16,uVar10,lVar7);
    return uVar6;
  }
  lVar7 = *plVar16;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar13 != 0) {
    piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_03cc73e8;
      }
      uVar13 = uVar13 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar13 != 0);
  }
  lVar7 = func_0x03256b10(plVar16);
LAB_03cc73e8:
  lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03cc740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(lVar7 + 8))(plVar16,uVar6,lVar7);
  return uVar6;
}

