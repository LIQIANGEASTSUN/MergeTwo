/* Ghidra 12.1.2 native pseudocode; RVA 0x6A86530; Merger.MergeBoard.Logic.CombineValidators.AnyItemCombinerValidator.ToggleVisuals; status ok */


void Merger_MergeBoard_Logic_CombineValidators_AnyItemCombinerValidator__ToggleVisuals
               (undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 auStack_90 [6];
  undefined8 uStack_60;
  
  plVar9 = param_3;
  if ((bRam0000000007e2a79e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a79e = 1;
  }
  puVar2 = PTR_DAT_077c1d88;
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x5f) * 0x10 + 0x138);
          goto LAB_06b865c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b865c4:
    (*(code *)*puVar4)(param_3,param_4 & 1,puVar4[1]);
    lVar6 = *param_3;
    lVar5 = *(long *)puVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_06b86624;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_3,lVar5,9);
LAB_06b86624:
    plVar9 = (long *)puVar4[1];
    (*(code *)*puVar4)(param_3,param_4 & 1);
    if (param_2 != (long *)0x0) {
      lVar6 = *param_2;
      lVar5 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_06b86688;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,lVar5,9);
LAB_06b86688:
                    /* WARNING: Could not recover jumptable at 0x06b866a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_2,param_4 & 1,puVar4[1]);
      return;
    }
  }
  auVar10 = func_0x03280cac();
  uStack_60 = 0x6b866a8;
  if ((bRam0000000007e2a79f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830dd8);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a79f = 1;
  }
  if ((plVar9 != (long *)0x0) &&
     (iVar3 = func_0x03d1b52c(plVar9,*(undefined8 *)PTR_DAT_07830dd8), puVar2 = PTR_DAT_0777a488,
     auVar10._8_8_ != 0)) {
    func_0x03d1b250(auStack_90,auVar10._8_8_,*(undefined8 *)PTR_DAT_0777a488);
    uVar1 = auStack_90[0];
    func_0x03d1b250(auStack_90,plVar9,*(undefined8 *)puVar2);
    plVar9 = *(long **)(auVar10._0_8_ + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_06b867ac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b867ac:
      if (iVar3 != 1) {
        uVar1 = auStack_90[0];
      }
      (*(code *)*puVar4)(plVar9,uVar1,puVar4[1]);
      return;
    }
  }
  func_0x03280cac();
  return;
}

