/* Ghidra 12.1.2 native pseudocode; RVA 0x6A87B20; Merger.MergeBoard.Logic.CombineValidators.MergeItemCombinerValidator.ToggleVisuals; status ok */

void Merger_MergeBoard_Logic_CombineValidators_MergeItemCombinerValidator__ToggleVisuals
               (undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000007e2a7a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a7a7 = 1;
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
          goto LAB_06b87bb4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b87bb4:
    (*(code *)*puVar2)(param_3,param_4 & 1,puVar2[1]);
    lVar4 = *param_3;
    lVar3 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_06b87c14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(param_3,lVar3,9);
LAB_06b87c14:
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
            goto LAB_06b87c78;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(param_2,lVar3,9);
LAB_06b87c78:
                    /* WARNING: Could not recover jumptable at 0x06b87c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_2,param_4 & 1,puVar2[1]);
      return;
    }
  }
  func_0x03280cac();
  return;
}

