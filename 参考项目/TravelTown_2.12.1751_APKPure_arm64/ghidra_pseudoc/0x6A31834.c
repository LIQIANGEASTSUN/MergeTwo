/* Ghidra 12.1.2 native pseudocode; RVA 0x6A31834; Merger.MergeBoard.ViewModel.MergeBoardHintViewModel.GetItemLevel; status ok */


long Merger_MergeBoard_ViewModel_MergeBoardHintViewModel__GetItemLevel
               (long param_1,undefined8 param_2)

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
  undefined4 uStack_24;
  
  if ((bRam0000000007e2a494 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0774e6b0);
    bRam0000000007e2a494 = 1;
  }
  puVar1 = PTR_DAT_0774e6b0;
  plVar8 = *(long **)(param_1 + 0x68);
  if (plVar8 == (long *)0x0) {
    auVar9 = func_0x03280cac();
    if ((bRam0000000007e2a495 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_0777a498);
      bRam0000000007e2a495 = 1;
    }
    plVar8 = *(long **)(auVar9._0_8_ + 0x68);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_06b319b0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,4);
LAB_06b319b0:
      plVar8 = (long *)(*(code *)*puVar4)(plVar8,auVar9._8_8_,puVar4[1]);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
              goto LAB_06b31a20;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777c248,7);
LAB_06b31a20:
                    /* WARNING: Could not recover jumptable at 0x06b31a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        return lVar5;
      }
    }
    lVar5 = func_0x03280cac();
    puVar2 = PTR_DAT_07828a38;
    puVar1 = PTR_DAT_07828a30;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x053bfe40(uVar3,*(undefined8 *)puVar2);
    *(undefined8 *)(lVar5 + 0x60) = uVar3;
    func_0x032809c4((undefined8 *)(lVar5 + 0x60),uVar3);
    return lVar5;
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x19) * 0x10 + 0x138);
        goto LAB_06b318dc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0x19);
LAB_06b318dc:
  uStack_24 = (*(code *)*puVar4)(plVar8,param_2,puVar4[1]);
  lVar5 = func_0x03280b94(*(undefined8 *)puVar1,&uStack_24);
  return lVar5;
}

