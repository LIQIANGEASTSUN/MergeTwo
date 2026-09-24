/* Ghidra 12.1.2 native pseudocode; RVA 0x4C054E4; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.<GetUnlockedItemsOnBoard>b__24_1; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____GetUnlockedItemsOnBoard_b__24_1
                (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000007e1ae7f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e1ae7f = 1;
  }
  plVar8 = *(long **)(param_1 + 0x40);
  if (plVar8 == (long *)0x0) {
    auVar9 = func_0x03280cac();
    plVar8 = auVar9._8_8_;
    if ((bRam0000000007e1ae80 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_07779820);
      bRam0000000007e1ae80 = 1;
    }
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      plVar7 = *(long **)(auVar9._0_8_ + 0x40);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07779820) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04d05628;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779820,0);
LAB_04d05628:
      uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_04d05694;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a498,4);
LAB_04d05694:
                    /* WARNING: Could not recover jumptable at 0x04d056a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
        return uVar5;
      }
    }
    auVar9 = func_0x03280cac();
    if ((bRam0000000007e1ae81 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780148);
      bRam0000000007e1ae81 = 1;
    }
    lVar4 = *(long *)(auVar9._0_8_ + 0x78);
    if (lVar4 != 0) {
      uVar1 = func_0x04fb62d8(lVar4,auVar9._8_8_,
                              *(undefined8 *)
                               (*(long *)(*(long *)(*(long *)PTR_DAT_07780148 + 0x20) + 0xc0) +
                               0x110));
      return (ulong)(~uVar1 >> 0x1f);
    }
    func_0x03280cac();
    return 0xf;
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x14) * 0x10 + 0x138);
        goto LAB_04d05574;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d05574:
                    /* WARNING: Could not recover jumptable at 0x04d05588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar2)(plVar8,param_2,puVar2[1]);
  return uVar5;
}

