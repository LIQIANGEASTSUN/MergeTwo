/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8825C; Merger.MergeBoard.Logic.CombineValidators.SplitterItemCombinerValidator.ToggleVisuals; status ok */


void Merger_MergeBoard_Logic_CombineValidators_SplitterItemCombinerValidator__ToggleVisuals
               (undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000007e2a7ab & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a7ab = 1;
  }
  puVar1 = PTR_DAT_077c1d88;
  if (param_3 != (long *)0x0) {
    lVar3 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x5f) * 0x10 + 0x138);
          goto LAB_06b882f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b882f0:
    (*(code *)*puVar2)(param_3,param_4 & 1,puVar2[1]);
    lVar4 = *param_3;
    lVar3 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_06b88350;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(param_3,lVar3,9);
LAB_06b88350:
    (*(code *)*puVar2)(param_3,param_4 & 1,puVar2[1]);
    if (param_2 != (long *)0x0) {
      lVar4 = *param_2;
      lVar3 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_06b883b4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(param_2,lVar3,9);
LAB_06b883b4:
                    /* WARNING: Could not recover jumptable at 0x06b883cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_2,param_4 & 1,puVar2[1]);
      return;
    }
  }
  auVar8 = func_0x03280cac();
  if ((bRam0000000007e2a7ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a7ac = 1;
  }
  plVar7 = *(long **)(auVar8._0_8_ + 0x10);
  if (plVar7 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x11) * 0x10 + 0x138);
        goto LAB_06b88470;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a498,0x11);
LAB_06b88470:
  plVar7 = (long *)(*(code *)*puVar2)(plVar7,auVar8._8_8_,puVar2[1]);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07779820) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06b884e8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_06b884e8:
                    /* WARNING: Could not recover jumptable at 0x06b884f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar7,puVar2[1]);
  return;
}

