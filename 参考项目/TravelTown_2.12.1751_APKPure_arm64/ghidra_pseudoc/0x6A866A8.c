/* Ghidra 12.1.2 native pseudocode; RVA 0x6A866A8; Merger.MergeBoard.Logic.CombineValidators.AnyItemCombinerValidator.GetCombinationResult; status ok */


void Merger_MergeBoard_Logic_CombineValidators_AnyItemCombinerValidator__GetCombinationResult
               (long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 auStack_60 [6];
  
  if ((bRam0000000007e2a79f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830dd8);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a79f = 1;
  }
  if ((param_3 != 0) &&
     (iVar3 = func_0x03d1b52c(param_3,*(undefined8 *)PTR_DAT_07830dd8), puVar2 = PTR_DAT_0777a488,
     param_2 != 0)) {
    func_0x03d1b250(auStack_60,param_2,*(undefined8 *)PTR_DAT_0777a488);
    uVar1 = auStack_60[0];
    func_0x03d1b250(auStack_60,param_3,*(undefined8 *)puVar2);
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
            goto LAB_06b867ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b867ac:
      if (iVar3 != 1) {
        uVar1 = auStack_60[0];
      }
      (*(code *)*puVar4)(plVar8,uVar1,puVar4[1]);
      return;
    }
  }
  func_0x03280cac();
  return;
}

