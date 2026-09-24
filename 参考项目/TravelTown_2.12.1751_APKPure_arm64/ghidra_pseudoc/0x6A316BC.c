/* Ghidra 12.1.2 native pseudocode; RVA 0x6A316BC; Merger.MergeBoard.ViewModel.ImmediateToolsGrantViewModel.SetToolProgress; status ok */


undefined1  [16]
Merger_MergeBoard_ViewModel_ImmediateToolsGrantViewModel__SetToolProgress
          (undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000007e2a492 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e2a492 = 1;
  }
  plVar8 = *(long **)(param_2 + 0x70);
  if (plVar8 == (long *)0x0) {
    auVar9._0_8_ = func_0x03280cac();
    puVar2 = PTR_DAT_07828a38;
    puVar1 = PTR_DAT_07828a30;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x053bfe40(uVar3,*(undefined8 *)puVar2);
    *(undefined8 *)(auVar9._0_8_ + 0x60) = uVar3;
    func_0x032809c4((undefined8 *)(auVar9._0_8_ + 0x60),uVar3);
    auVar9._8_8_ = 0;
    return auVar9;
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07806898) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_06b31754;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07806898,9);
LAB_06b31754:
                    /* WARNING: Could not recover jumptable at 0x06b31770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*(code *)*puVar4)(param_1,plVar8,param_3,puVar4[1]);
  return auVar9;
}

