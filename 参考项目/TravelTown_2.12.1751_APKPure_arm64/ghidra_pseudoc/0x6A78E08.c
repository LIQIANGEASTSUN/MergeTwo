/* Ghidra 12.1.2 native pseudocode; RVA 0x6A78E08; Merger.MergeBoard.Systems.TimeLockSystem.ShouldStartUnlockOnInteraction; status ok */

bool Merger_MergeBoard_Systems_TimeLockSystem__ShouldStartUnlockOnInteraction
               (undefined8 param_1,long param_2,long param_3)

{
  return (*(uint *)(param_3 + 0x20) & (*(uint *)(param_2 + 0x1c) ^ 0xffffffff)) == 0;
}

