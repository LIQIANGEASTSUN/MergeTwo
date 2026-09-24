/* Ghidra 12.1.2 native pseudocode; RVA 0x6A32DA4; Merger.MergeBoard.ViewModel.MergeBoardViewModel.GetGatewayFloatingTextKey; status ok */


undefined1  [16]
Merger_MergeBoard_ViewModel_MergeBoardViewModel__GetGatewayFloatingTextKey
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000007e2a4ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a4ac = 1;
  }
  lVar3 = func_0x06b32bb4(param_1,param_2);
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)PTR_DAT_0777e548;
    lVar4 = func_0x03280b90(lVar3,uVar9);
    if (lVar4 != 0) goto LAB_06b32e24;
    func_0x03281048(lVar3,uVar9);
  }
  lVar4 = 0;
LAB_06b32e24:
  plVar8 = *(long **)(param_1 + 0x88);
  if (plVar8 == (long *)0x0) {
    auVar10._0_8_ = func_0x03280cac();
    puVar2 = PTR_DAT_07828a38;
    puVar1 = PTR_DAT_07828a30;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x053bfe40(uVar9,*(undefined8 *)puVar2);
    *(undefined8 *)(auVar10._0_8_ + 0x60) = uVar9;
    func_0x032809c4((undefined8 *)(auVar10._0_8_ + 0x60),uVar9);
    auVar10._8_8_ = 0;
    return auVar10;
  }
  lVar3 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x24) * 0x10 + 0x138);
        goto LAB_06b32e84;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0x24);
LAB_06b32e84:
                    /* WARNING: Could not recover jumptable at 0x06b32e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar10 = (*(code *)*puVar5)(plVar8,lVar4,puVar5[1]);
  return auVar10;
}

