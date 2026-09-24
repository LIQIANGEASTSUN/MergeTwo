/* Ghidra 12.1.2 native pseudocode; RVA 0x6A883D4; Merger.MergeBoard.Logic.CombineValidators.SplitterItemCombinerValidator.GetSplitResultItemId; status ok */


void Merger_MergeBoard_Logic_CombineValidators_SplitterItemCombinerValidator__GetSplitResultItemId
               (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000007e2a7ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a7ac = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x11) * 0x10 + 0x138);
        goto LAB_06b88470;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777a498,0x11);
LAB_06b88470:
  plVar5 = (long *)(*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07779820) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_06b884e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_06b884e8:
                    /* WARNING: Could not recover jumptable at 0x06b884f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

