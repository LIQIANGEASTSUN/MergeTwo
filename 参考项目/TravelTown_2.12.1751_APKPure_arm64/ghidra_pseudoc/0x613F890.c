/* Ghidra 12.1.2 native pseudocode; RVA 0x613F890; MergeEngine.Model.Configuration.MergingConfigurationModel.IsLastItemInProducerBaseChain; status ok */


ulong MergeEngine_Model_Configuration_MergingConfigurationModel__IsLastItemInProducerBaseChain
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000007e245ba & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07763de8);
    bRam0000000007e245ba = 1;
  }
  plVar3 = (long *)MergeEngine_Model_Configuration_MergingConfigurationModel__GetNextItemOnGraph
                             (param_1,param_2);
  if (plVar3 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0623f944;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_07779820,0);
LAB_0623f944:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (param_3 == 0) {
      auVar10 = func_0x03280cac();
      plVar3 = auVar10._0_8_;
      if ((bRam0000000007e245bb & 1) == 0) {
        func_0x03280a18(PTR_DAT_07779820);
        bRam0000000007e245bb = 1;
      }
      plVar6 = (long *)MergeEngine_Model_Configuration_MergingConfigurationModel__GetMergeItemFromComponent
                                 (plVar3,auVar10._8_8_);
      if (plVar6 == (long *)0x0) {
        auVar10 = func_0x03280cac();
        plVar3 = auVar10._0_8_;
        if ((bRam0000000007e245bc & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c248);
          func_0x03280a18(PTR_DAT_077db338);
          bRam0000000007e245bc = 1;
        }
        plVar6 = (long *)(**(code **)(*plVar3 + 0x4d8))
                                   (plVar3,auVar10._8_8_,*(undefined8 *)(*plVar3 + 0x4e0));
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777c248) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0623fb00;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777c248,0);
LAB_0623fb00:
          lVar7 = (*(code *)*puVar4)(plVar6,puVar4[1]);
          uVar5 = (**(code **)(*plVar3 + 0x4e8))
                            (plVar3,auVar10._8_8_,*(undefined8 *)(*plVar3 + 0x4f0));
          if (lVar7 != 0) {
            iVar2 = func_0x04145210(lVar7,uVar5,*(undefined8 *)PTR_DAT_077db338);
            return (ulong)(iVar2 + 1);
          }
        }
        func_0x03280cac();
        lVar7 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetNextItemOnGraph();
        return (ulong)(lVar7 == 0);
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0623fa20;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07779820,0);
LAB_0623fa20:
      uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x0623fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*plVar3 + 0x4d8))(plVar3,uVar5,*(undefined8 *)(*plVar3 + 0x4e0));
      return uVar8;
    }
    uVar1 = func_0x041447fc(param_3,uVar5,*(undefined8 *)PTR_DAT_07763de8);
    uVar1 = uVar1 ^ 1;
  }
  return (ulong)(uVar1 & 1);
}

