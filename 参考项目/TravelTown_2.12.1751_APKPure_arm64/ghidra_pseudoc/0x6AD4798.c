/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD4798; Merger.MergeBoard.PowerBoost.Commands.PowerBoostConfigurationUpdatedCommand.Execute; status ok */


undefined1  [16]
Merger_MergeBoard_PowerBoost_Commands_PowerBoostConfigurationUpdatedCommand__Execute
          (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  if ((bRam0000000007e2aabf & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833e20);
    auVar12 = func_0x03280a18(PTR_DAT_07833ed0);
    bRam0000000007e2aabf = 1;
  }
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x20);
    if (lVar8 == 0) {
      return auVar12;
    }
    plVar9 = *(long **)(param_1 + 0x30);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07833e20) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
            goto LAB_06bd4864;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07833e20,0xb);
LAB_06bd4864:
      (*(code *)*puVar4)(plVar9,uVar10,uVar1,uVar2,lVar8,puVar4[1]);
      plVar9 = *(long **)(param_1 + 0x38);
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07833ed0) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 10) * 0x10 + 0x138);
              goto LAB_06bd48e0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07833ed0,10);
LAB_06bd48e0:
                    /* WARNING: Could not recover jumptable at 0x06bd48f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar12 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        return auVar12;
      }
    }
  }
  auVar11._0_8_ = func_0x03280cac();
  puVar3 = PTR_DAT_07834320;
  if ((bRam0000000007e2aac0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07834320);
    bRam0000000007e2aac0 = 1;
  }
  uVar10 = *(undefined8 *)puVar3;
  auVar11._8_8_ = 0;
  return auVar11;
}

