/* Ghidra 12.1.2 native pseudocode; RVA 0x6A31AE8; Merger.MergeBoard.ViewModel.MergeBoardItemCreatorViewModel.GetTransformForIndex; status ok */


undefined1  [16]
Merger_MergeBoard_ViewModel_MergeBoardItemCreatorViewModel__GetTransformForIndex
          (long param_1,undefined4 param_2)

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
  
  if ((bRam0000000007e2a497 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1e40);
    bRam0000000007e2a497 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x70);
  if (plVar8 == (long *)0x0) {
    auVar9 = func_0x03280cac();
    if ((bRam0000000007e2a498 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c13c8);
      bRam0000000007e2a498 = 1;
    }
    plVar8 = *(long **)(auVar9._0_8_ + 0x78);
    if (plVar8 == (long *)0x0) {
      auVar9 = func_0x03280cac();
      if ((bRam0000000007e2a499 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c13c8);
        bRam0000000007e2a499 = 1;
      }
      plVar8 = *(long **)(auVar9._0_8_ + 0x78);
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
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c13c8) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06b31ccc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c13c8,1);
LAB_06b31ccc:
                    /* WARNING: Could not recover jumptable at 0x06b31ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*(code *)*puVar4)(plVar8,auVar9._8_8_ & 0xffffffff,puVar4[1]);
      return auVar9;
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c13c8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_06b31c20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c13c8,2);
LAB_06b31c20:
                    /* WARNING: Could not recover jumptable at 0x06b31c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*(code *)*puVar4)(plVar8,auVar9._8_8_ & 0xffffffff,puVar4[1]);
    return auVar9;
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06b31b74;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c1e40,0);
LAB_06b31b74:
                    /* WARNING: Could not recover jumptable at 0x06b31b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*(code *)*puVar4)(plVar8,param_2,puVar4[1]);
  return auVar9;
}

