/* Ghidra 12.1.2 native pseudocode; RVA 0x613F988; MergeEngine.Model.Configuration.MergingConfigurationModel.GetMergeGraphItemFromComponent; status ok */


ulong MergeEngine_Model_Configuration_MergingConfigurationModel__GetMergeGraphItemFromComponent
                (long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000007e245bb & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e245bb = 1;
  }
  plVar2 = (long *)func_0x0623f4b8(param_1,param_2);
  if (plVar2 == (long *)0x0) {
    auVar9 = func_0x03280cac();
    plVar2 = auVar9._0_8_;
    if ((bRam0000000007e245bc & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077db338);
      bRam0000000007e245bc = 1;
    }
    plVar5 = (long *)(**(code **)(*plVar2 + 0x4d8))
                               (plVar2,auVar9._8_8_,*(undefined8 *)(*plVar2 + 0x4e0));
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0623fb00;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0);
LAB_0623fb00:
      lVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      uVar4 = (**(code **)(*plVar2 + 0x4e8))(plVar2,auVar9._8_8_,*(undefined8 *)(*plVar2 + 0x4f0));
      if (lVar6 != 0) {
        iVar1 = func_0x04145210(lVar6,uVar4,*(undefined8 *)PTR_DAT_077db338);
        return (ulong)(iVar1 + 1);
      }
    }
    func_0x03280cac();
    lVar6 = func_0x0623e2ec();
    return (ulong)(lVar6 == 0);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779820) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0623fa20;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar2,*(long *)PTR_DAT_07779820,0);
LAB_0623fa20:
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
                    /* WARNING: Could not recover jumptable at 0x0623fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*param_1 + 0x4d8))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x4e0));
  return uVar7;
}

