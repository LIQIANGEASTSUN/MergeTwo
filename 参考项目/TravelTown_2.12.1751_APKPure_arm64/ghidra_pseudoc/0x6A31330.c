/* Ghidra 12.1.2 native pseudocode; RVA 0x6A31330; Merger.MergeBoard.ViewModel.ImmediateToolsGrantViewModel.UpdateToolProgress; status ok */


undefined1  [16]
Merger_MergeBoard_ViewModel_ImmediateToolsGrantViewModel__UpdateToolProgress
          (long param_1,undefined8 param_2,undefined4 param_3,uint param_4,ulong param_5,
          uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong extraout_x1;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 extraout_d0;
  undefined1 auVar10 [16];
  
  if ((bRam0000000007e2a48e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e2a48e = 1;
  }
  uVar4 = 0;
  uVar9 = func_0x06378a30(param_2,*(undefined8 *)(param_1 + 0x68));
  plVar8 = *(long **)(param_1 + 0x70);
  if (plVar8 == (long *)0x0) {
    auVar10 = func_0x03280cac();
    if ((bRam0000000007e2a48f & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0782f3d8);
      bRam0000000007e2a48f = 1;
    }
    plVar8 = *(long **)(auVar10._0_8_ + 0x68);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_06b314a4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,4);
LAB_06b314a4:
      uVar4 = puVar3[1];
      uVar9 = (*(code *)*puVar3)(plVar8,auVar10._8_8_);
      plVar8 = *(long **)(auVar10._0_8_ + 0x78);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0782f3d8) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06b31514;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0782f3d8,0);
LAB_06b31514:
                    /* WARNING: Could not recover jumptable at 0x06b31528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar10 = (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
        return auVar10;
      }
    }
    auVar10 = func_0x03280cac();
    if ((bRam0000000007e2a490 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07806898);
      bRam0000000007e2a490 = 1;
    }
    plVar8 = *(long **)(auVar10._0_8_ + 0x70);
    if (plVar8 == (long *)0x0) {
      auVar10 = func_0x03280cac();
      if ((bRam0000000007e2a491 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07773688);
        bRam0000000007e2a491 = 1;
      }
      plVar8 = *(long **)(auVar10._0_8_ + 0x80);
      if (plVar8 == (long *)0x0) {
        lVar5 = func_0x03280cac();
        if ((bRam0000000007e2a492 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07806898);
          bRam0000000007e2a492 = 1;
        }
        plVar8 = *(long **)(lVar5 + 0x70);
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
        lVar5 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07806898) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
              goto LAB_06b31754;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07806898,9);
LAB_06b31754:
                    /* WARNING: Could not recover jumptable at 0x06b31770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar10 = (*(code *)*puVar3)(extraout_d0,plVar8,extraout_x1 & 0xffffffff,puVar3[1]);
        return auVar10;
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07773688) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_06b31684;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07773688,3);
LAB_06b31684:
                    /* WARNING: Could not recover jumptable at 0x06b316b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)*puVar3)(plVar8,auVar10._8_8_,uVar4 & 0xffffffff,param_4 & 1,
                                   param_5 & 0xffffffff,0,param_6 & 1,puVar3[1]);
      return auVar10;
    }
    lVar5 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07806898) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_06b315c0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07806898,1);
LAB_06b315c0:
                    /* WARNING: Could not recover jumptable at 0x06b315d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar10 = (*(code *)*puVar3)(plVar8,auVar10._8_8_ & 0xffffffff,puVar3[1]);
    return auVar10;
  }
  lVar5 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07806898) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 10) * 0x10 + 0x138);
        goto LAB_06b313e0;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07806898,10);
LAB_06b313e0:
                    /* WARNING: Could not recover jumptable at 0x06b31400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar10 = (*(code *)*puVar3)(uVar9,plVar8,param_3,puVar3[1]);
  return auVar10;
}

