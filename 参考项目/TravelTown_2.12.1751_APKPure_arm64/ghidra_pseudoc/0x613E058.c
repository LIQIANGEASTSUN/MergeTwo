/* Ghidra 12.1.2 native pseudocode; RVA 0x613E058; MergeEngine.Model.Configuration.MergingConfigurationModel.HasItemById; status ok */


/* WARNING: Possible PIC construction at 0x0623e38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0623e390) */
/* WARNING: Removing unreachable block (ram,0x0623e394) */
/* WARNING: Removing unreachable block (ram,0x0623e3c4) */
/* WARNING: Removing unreachable block (ram,0x0623e3f0) */
/* WARNING: Removing unreachable block (ram,0x0623e3f8) */
/* WARNING: Removing unreachable block (ram,0x0623e420) */
/* WARNING: Removing unreachable block (ram,0x0623e404) */
/* WARNING: Removing unreachable block (ram,0x0623e410) */
/* WARNING: Removing unreachable block (ram,0x0623e42c) */
/* WARNING: Removing unreachable block (ram,0x0623e460) */
/* WARNING: Removing unreachable block (ram,0x0623e48c) */
/* WARNING: Removing unreachable block (ram,0x0623e494) */
/* WARNING: Removing unreachable block (ram,0x0623e4bc) */
/* WARNING: Removing unreachable block (ram,0x0623e4a0) */
/* WARNING: Removing unreachable block (ram,0x0623e4ac) */
/* WARNING: Removing unreachable block (ram,0x0623e4c8) */
/* WARNING: Removing unreachable block (ram,0x0623e4d8) */
/* WARNING: Removing unreachable block (ram,0x0623e500) */
/* WARNING: Removing unreachable block (ram,0x0623e508) */
/* WARNING: Removing unreachable block (ram,0x0623e530) */
/* WARNING: Removing unreachable block (ram,0x0623e514) */
/* WARNING: Removing unreachable block (ram,0x0623e520) */
/* WARNING: Removing unreachable block (ram,0x0623e53c) */
/* WARNING: Removing unreachable block (ram,0x0623e54c) */
/* WARNING: Removing unreachable block (ram,0x0623e59c) */
/* WARNING: Removing unreachable block (ram,0x0623e55c) */
/* WARNING: Removing unreachable block (ram,0x0623e56c) */
/* WARNING: Removing unreachable block (ram,0x0623e574) */
/* WARNING: Removing unreachable block (ram,0x0623e5b0) */
/* WARNING: Removing unreachable block (ram,0x0623e580) */
/* WARNING: Removing unreachable block (ram,0x0623e58c) */
/* WARNING: Removing unreachable block (ram,0x0623e5bc) */
/* WARNING: Removing unreachable block (ram,0x0623e5ec) */
/* WARNING: Removing unreachable block (ram,0x0623e5cc) */
/* WARNING: Removing unreachable block (ram,0x0414419c) */
/* WARNING: Removing unreachable block (ram,0x041441b8) */
/* WARNING: Removing unreachable block (ram,0x041441c0) */
/* WARNING: Removing unreachable block (ram,0x041441e8) */
/* WARNING: Removing unreachable block (ram,0x041441c8) */
/* WARNING: Removing unreachable block (ram,0x041441ec) */
/* WARNING: Removing unreachable block (ram,0x04144210) */
/* WARNING: Removing unreachable block (ram,0x04144218) */
/* WARNING: Removing unreachable block (ram,0x04144254) */
/* WARNING: Removing unreachable block (ram,0x04144220) */
/* WARNING: Removing unreachable block (ram,0x04144258) */
/* WARNING: Removing unreachable block (ram,0x04144270) */
/* WARNING: Removing unreachable block (ram,0x0414427c) */
/* WARNING: Removing unreachable block (ram,0x0414428c) */
/* WARNING: Removing unreachable block (ram,0x04144298) */
/* WARNING: Removing unreachable block (ram,0x041442ac) */
/* WARNING: Removing unreachable block (ram,0x041442a4) */
/* WARNING: Removing unreachable block (ram,0x041442b4) */
/* WARNING: Removing unreachable block (ram,0x0414422c) */
/* WARNING: Removing unreachable block (ram,0x041441d4) */

ulong MergeEngine_Model_Configuration_MergingConfigurationModel__HasItemById
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code **ppcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  code *pcVar13;
  undefined1 auVar14 [16];
  code *pcStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000007e245ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db318);
    bRam0000000007e245ac = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar4 != 0) {
      uVar3 = func_0x04fe343c(lVar4,param_2,
                              *(undefined8 *)
                               (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_077db318 + 0x20) + 0xc0) + 0x110) + 0x20)
                                         + 0xc0) + 0x110));
      return (ulong)(~uVar3 >> 0x1f);
    }
    return 0;
  }
  auVar14 = func_0x03280cac();
  uVar10 = auVar14._8_8_;
  lVar4 = auVar14._0_8_;
  pcStack_40 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetItemById;
  uStack_38 = 0x7e24000;
  lStack_30 = param_1;
  uStack_28 = param_2;
  if ((bRam0000000007e245ad & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ceda0);
    func_0x03280a18(PTR_DAT_077db320);
    bRam0000000007e245ad = 1;
  }
  if (*(long *)(lVar4 + 0x48) != 0) {
    uVar5 = func_0x0431fa40(*(long *)(lVar4 + 0x48),uVar10,*(undefined8 *)PTR_DAT_077db320);
    if (uVar5 != 0) {
      return uVar5;
    }
    plVar11 = *(long **)(lVar4 + 0x30);
    lVar4 = 0;
    if (plVar11 != (long *)0x0) {
      lVar4 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077ceda0) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0623e178;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077ceda0,1);
LAB_0623e178:
                    /* WARNING: Could not recover jumptable at 0x0623e18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)*puVar6)(plVar11,uVar10,puVar6[1]);
      return uVar5;
    }
  }
  auVar14 = func_0x03280cac();
  uVar7 = auVar14._8_8_;
  pcStack_60 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetItemWithDynamicConfig;
  uStack_58 = 0x7e24000;
  lStack_50 = lVar4;
  uStack_48 = uVar10;
  if ((bRam0000000007e245ae & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ceda0);
    bRam0000000007e245ae = 1;
  }
  plVar11 = *(long **)(auVar14._0_8_ + 0x30);
  if (plVar11 == (long *)0x0) {
    auVar14 = func_0x03280cac();
    plVar8 = auVar14._8_8_;
    uVar10 = auVar14._0_8_;
    ppcVar2 = &pcStack_80;
    pcStack_80 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetNextItemOnGraph;
    uStack_78 = 0x7e24000;
    uVar12 = 0x7e24000;
    plStack_70 = plVar11;
    uStack_68 = uVar7;
    if ((bRam0000000007e245af & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779820);
      bRam0000000007e245af = 1;
    }
    if (plVar8 == (long *)0x0) {
      pcVar13 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetNextItemOnGraph;
      func_0x03280cac();
      plVar11 = (long *)0x0;
      uVar7 = extraout_x1;
    }
    else {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0623e2c8;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779820,0);
LAB_0623e2c8:
      uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      ppcVar2 = &pcStack_60;
      uVar10 = uStack_68;
      plVar11 = plStack_70;
      uVar12 = uStack_78;
      pcVar13 = pcStack_80;
    }
    puVar1 = PTR_DAT_077db328;
    *(code **)((long)ppcVar2 + -0x30) = pcVar13;
    *(undefined8 *)((long)ppcVar2 + -0x28) = unaff_x23;
    *(undefined8 *)((long)ppcVar2 + -0x20) = unaff_x22;
    *(undefined8 *)((long)ppcVar2 + -0x18) = uVar12;
    *(long **)((long)ppcVar2 + -0x10) = plVar11;
    *(undefined8 *)((long)ppcVar2 + -8) = uVar10;
    if ((bRam0000000007e245b0 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c248,uVar7);
      func_0x03280a18(PTR_DAT_077db330);
      func_0x03280a18(PTR_DAT_077db338);
      func_0x03280a18(PTR_DAT_0777e508);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_077db340);
      func_0x03280a18(PTR_DAT_077db348);
      func_0x03280a18(PTR_DAT_077db328);
      bRam0000000007e245b0 = 1;
    }
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
    return uVar5;
  }
  lVar4 = *plVar11;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077ceda0) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0623e224;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077ceda0,1);
LAB_0623e224:
                    /* WARNING: Could not recover jumptable at 0x0623e238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar6)(plVar11,uVar7,puVar6[1]);
  return uVar5;
}

