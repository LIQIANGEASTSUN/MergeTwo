/* Ghidra 12.1.2 native pseudocode; RVA 0x6140E54; MergeEngine.Model.Configuration.MergingConfigurationModel.DisposeModel; status ok */


void MergeEngine_Model_Configuration_MergingConfigurationModel__DisposeModel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = PTR_DAT_077db468;
  puVar2 = PTR_DAT_077db200;
  puVar1 = PTR_DAT_077db1f8;
  if ((bRam0000000007e245c6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db1f8);
    func_0x03280a18(PTR_DAT_077db468);
    func_0x03280a18(PTR_DAT_077db200);
    bRam0000000007e245c6 = 1;
  }
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x054221d4(uVar4,param_1,*(undefined8 *)puVar2,0);
  lVar5 = *(long *)puVar3;
  lVar6 = lVar5;
  if (*(long *)(lVar5 + 0x38) == 0) {
    func_0x03256878(lVar5);
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 == (long *)0x0) {
    auVar12 = func_0x03280cac();
    uVar4 = auVar12._8_8_;
    uStack_40 = 0x3cc7414;
    lVar7 = lVar6;
    lStack_38 = lVar5;
    if (*(long *)(lVar6 + 0x38) == 0) {
      func_0x03256878(lVar6);
    }
    plVar11 = *(long **)(auVar12._0_8_ + 0x10);
    if (plVar11 == (long *)0x0) {
      auVar12 = func_0x03280cac();
      uStack_60 = 0x3cc74c4;
      lStack_58 = lVar6;
      plStack_50 = plVar11;
      uStack_48 = uVar4;
      if (*(long *)(lVar7 + 0x38) == 0) {
        func_0x03256878(lVar7);
      }
      lVar6 = *(long *)(auVar12._0_8_ + 0x20);
      if (lVar6 != 0) {
        lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
        lVar7 = *(long *)(lVar5 + 0x38);
        if (lVar7 == 0) {
          func_0x03256878(lVar5);
          lVar7 = *(long *)(lVar5 + 0x38);
        }
        lVar5 = *(long *)(lVar7 + 8);
        uStack_70 = uStack_60;
        puVar8 = *(undefined8 **)(lVar5 + 0x38);
        if (puVar8 == (undefined8 *)0x0) {
          func_0x03280a18(PTR_DAT_0774e558);
          puVar8 = *(undefined8 **)(lVar5 + 0x38);
          if (puVar8 == (undefined8 *)0x0) {
            func_0x03256878(lVar5);
            puVar8 = *(undefined8 **)(lVar5 + 0x38);
          }
        }
        uVar4 = *puVar8;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar4 = func_0x057a51c4(uVar4,0);
        uStack_60 = uStack_70;
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x072a6c4c(&uStack_70,uVar4,0,0,0,0);
        func_0x07286e40(lVar6,uStack_70,uStack_68,auVar12._8_8_,0);
        return;
      }
      return;
    }
    lVar5 = *plVar11;
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)(lVar6 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
          goto LAB_03cc7498;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar5 = func_0x03256b10(plVar11);
LAB_03cc7498:
    lVar6 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x03cc74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))(plVar11,uVar4,lVar6);
    return;
  }
  lVar6 = *plVar11;
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_03cc73e8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar6 = func_0x03256b10(plVar11);
LAB_03cc73e8:
  lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x03cc740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))(plVar11,uVar4,lVar6);
  return;
}

