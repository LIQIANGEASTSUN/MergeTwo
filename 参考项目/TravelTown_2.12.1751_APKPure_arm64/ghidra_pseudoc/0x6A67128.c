/* Ghidra 12.1.2 native pseudocode; RVA 0x6A67128; Merger.MergeBoard.Systems.ExpendableTimerActivationSystem.SaveAnalyticSessionData; status ok */


void Merger_MergeBoard_Systems_ExpendableTimerActivationSystem__SaveAnalyticSessionData
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  if ((bRam0000000007e2a6a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_0777a568);
    func_0x03280a18(PTR_DAT_07800ab8);
    bRam0000000007e2a6a7 = 1;
  }
  if (param_2 != 0) {
    plVar6 = *(long **)(param_1 + 0x20);
    func_0x03d1b250(auStack_60,param_2,*(undefined8 *)PTR_DAT_0777a488);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0777a568) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_06b67200;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777a568,1);
LAB_06b67200:
      lVar3 = (*(code *)*puVar1)(plVar6,uStack_58,puVar1[1]);
      if ((*(long *)(param_3 + 0x28) != 0) &&
         (uVar2 = MergeEngine_ECS_Systems_Items_TimeLimitedActivationSystem__CreateExtraDataWithTimerItemData
                            (*(undefined4 *)(*(long *)(param_3 + 0x28) + 0x10),1,
                             *(undefined8 *)PTR_DAT_07800ab8,param_4,0,0), lVar3 != 0)) {
        *(undefined8 *)(lVar3 + 0x38) = uVar2;
        func_0x032809c4((undefined8 *)(lVar3 + 0x38),uVar2);
        *(undefined1 *)(lVar3 + 0x40) = 1;
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}

