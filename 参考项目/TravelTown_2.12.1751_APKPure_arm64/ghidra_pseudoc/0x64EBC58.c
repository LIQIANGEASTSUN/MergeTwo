/* Ghidra 12.1.2 native pseudocode; RVA 0x64EBC58; MergeEngine.ECS.Systems.State.Board.Event.EventFreeVouchersStateSystem.UpdateFreeBurst; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_State_Board_Event_EventFreeVouchersStateSystem__UpdateFreeBurst
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_3 != 0) {
    *(int *)(param_3 + 0x58) = (int)param_2;
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  auVar3._0_8_ = func_0x03280cac();
  puVar1 = PTR_DAT_077fbb08;
  if ((bRam0000000007e27059 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fbb08);
    bRam0000000007e27059 = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  auVar3._8_8_ = 0;
  return auVar3;
}

