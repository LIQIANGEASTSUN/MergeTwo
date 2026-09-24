/* Ghidra 12.1.2 native pseudocode; RVA 0x6A87990; Merger.MergeBoard.Logic.CombineValidators.MergeItemCombinerValidator.CanMergeSpecificItem; status ok */

ulong Merger_MergeBoard_Logic_CombineValidators_MergeItemCombinerValidator__CanMergeSpecificItem
                (long param_1,int param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *extraout_x1;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  
  uVar5 = param_4;
  if ((bRam0000000007e2a7a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a7a9 = 1;
  }
  if ((param_2 == 3) || (param_7 = param_6, param_3 = param_5, param_4 == 3)) {
    uVar9 = *param_7;
    plVar4 = (long *)0x0;
    uVar2 = func_0x055ea870(uVar9,param_3);
    if ((uVar2 & 1) != 0) {
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 == (long *)0x0) {
        func_0x03280cac();
        if ((bRam0000000007e2a7a7 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077c1d88);
          bRam0000000007e2a7a7 = 1;
        }
        puVar1 = PTR_DAT_077c1d88;
        if (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c1d88) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x5f) * 0x10 + 0x138);
                goto LAB_06b87bb4;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b87bb4:
          (*(code *)*puVar3)(plVar4,uVar5 & 1,puVar3[1]);
          lVar7 = *plVar4;
          lVar6 = *(long *)puVar1;
          uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar6) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
                goto LAB_06b87c14;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar4,lVar6,9);
LAB_06b87c14:
          (*(code *)*puVar3)(plVar4,uVar5 & 1,puVar3[1]);
          if (extraout_x1 != (long *)0x0) {
            lVar7 = *extraout_x1;
            lVar6 = *(long *)puVar1;
            uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar6) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
                  goto LAB_06b87c78;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)func_0x03256b10(extraout_x1,lVar6,9);
LAB_06b87c78:
                    /* WARNING: Could not recover jumptable at 0x06b87c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (*(code *)*puVar3)(extraout_x1,uVar5 & 1,puVar3[1]);
            return uVar2;
          }
        }
        uVar2 = func_0x03280cac();
        return uVar2;
      }
      lVar6 = *plVar10;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_06b87a84;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b87a84:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,uVar9,puVar3[1]);
      if (plVar4 == (long *)0x0) {
        return 0;
      }
      lVar6 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779820) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b87af0;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_07779820,0);
LAB_06b87af0:
      lVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      return (ulong)(lVar6 != 0);
    }
  }
  return 0;
}

