/* Ghidra 12.1.2 native pseudocode; RVA 0x613E194; MergeEngine.Model.Configuration.MergingConfigurationModel.GetItemWithDynamicConfig; status ok */


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

void MergeEngine_Model_Configuration_MergingConfigurationModel__GetItemWithDynamicConfig
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000007e245ae & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ceda0);
    bRam0000000007e245ae = 1;
  }
  plVar10 = *(long **)(param_1 + 0x30);
  if (plVar10 == (long *)0x0) {
    auVar13 = func_0x03280cac();
    plVar5 = auVar13._8_8_;
    uVar9 = auVar13._0_8_;
    puVar2 = &uStack_40;
    uStack_40 = 0x623e240;
    uStack_38 = 0x7e24000;
    uVar11 = 0x7e24000;
    plStack_30 = plVar10;
    uStack_28 = param_2;
    if ((bRam0000000007e245af & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779820);
      bRam0000000007e245af = 1;
    }
    if (plVar5 == (long *)0x0) {
      uVar12 = 0x623e2ec;
      func_0x03280cac();
      plVar10 = (long *)0x0;
      uVar4 = extraout_x1;
    }
    else {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779820) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0623e2c8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_0623e2c8:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      puVar2 = (undefined8 *)&stack0xffffffffffffffe0;
      uVar9 = uStack_28;
      plVar10 = plStack_30;
      uVar11 = uStack_38;
      uVar12 = uStack_40;
    }
    puVar1 = PTR_DAT_077db328;
    *(undefined8 *)((long)puVar2 + -0x30) = uVar12;
    *(undefined8 *)((long)puVar2 + -0x28) = unaff_x23;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x22;
    *(undefined8 *)((long)puVar2 + -0x18) = uVar11;
    *(long **)((long)puVar2 + -0x10) = plVar10;
    *(undefined8 *)((long)puVar2 + -8) = uVar9;
    if ((bRam0000000007e245b0 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c248,uVar4);
      func_0x03280a18(PTR_DAT_077db330);
      func_0x03280a18(PTR_DAT_077db338);
      func_0x03280a18(PTR_DAT_0777e508);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_077db340);
      func_0x03280a18(PTR_DAT_077db348);
      func_0x03280a18(PTR_DAT_077db328);
      bRam0000000007e245b0 = 1;
    }
    func_0x03280ca0(*(undefined8 *)puVar1);
    return;
  }
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077ceda0) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_0623e224;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077ceda0,1);
LAB_0623e224:
                    /* WARNING: Could not recover jumptable at 0x0623e238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar10,param_2,puVar3[1]);
  return;
}

