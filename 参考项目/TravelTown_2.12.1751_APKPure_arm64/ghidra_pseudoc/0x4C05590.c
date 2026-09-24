/* Ghidra 12.1.2 native pseudocode; RVA 0x4C05590; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.<GetToolGraphsFromItems>b__25_0; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____GetToolGraphsFromItems_b__25_0
                (long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000007e1ae80 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e1ae80 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    plVar7 = *(long **)(param_1 + 0x40);
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
    puVar2 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_04d05628:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
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
  auVar8 = func_0x03280cac();
  if ((bRam0000000007e1ae81 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780148);
    bRam0000000007e1ae81 = 1;
  }
  lVar4 = *(long *)(auVar8._0_8_ + 0x78);
  if (lVar4 != 0) {
    uVar1 = func_0x04fb62d8(lVar4,auVar8._8_8_,
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)PTR_DAT_07780148 + 0x20) + 0xc0) + 0x110)
                           );
    return (ulong)(~uVar1 >> 0x1f);
  }
  func_0x03280cac();
  return 0xf;
}

