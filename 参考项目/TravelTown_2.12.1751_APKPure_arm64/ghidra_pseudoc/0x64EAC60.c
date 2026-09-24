/* Ghidra 12.1.2 native pseudocode; RVA 0x64EAC60; MergeEngine.ECS.Systems.State.Board.FreeVouchersStateSystem.UpdateFreeBurst; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_State_Board_FreeVouchersStateSystem__UpdateFreeBurst
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (*(long *)(param_1 + 0x50) != 0) {
    *(int *)(*(long *)(param_1 + 0x50) + 0x158) = (int)param_2;
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  auVar3._0_8_ = func_0x03280cac();
  puVar1 = PTR_DAT_077fba70;
  if ((bRam0000000007e2704a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fba70);
    bRam0000000007e2704a = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  auVar3._8_8_ = 0;
  return auVar3;
}

