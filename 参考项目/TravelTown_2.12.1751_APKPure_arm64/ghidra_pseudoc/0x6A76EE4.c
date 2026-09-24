/* Ghidra 12.1.2 native pseudocode; RVA 0x6A76EE4; Merger.MergeBoard.Systems.TimeCycleSystem.ShouldFireCooldownStartedEvent; status ok */


bool Merger_MergeBoard_Systems_TimeCycleSystem__ShouldFireCooldownStartedEvent
               (undefined8 param_1,uint param_2,uint param_3)

{
  if ((param_2 & 0xfffffffe) == 2) {
    return param_3 < 2;
  }
  return false;
}

