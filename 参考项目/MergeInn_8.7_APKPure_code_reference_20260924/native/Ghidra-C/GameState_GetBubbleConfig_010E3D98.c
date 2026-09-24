// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.GetBubbleConfig 0x10E3D98; GameState.GetBubbleConfig (candidate)
// Image base: 0x10000; Ghidra address: 010f3d98; native size hint: 0x40


void GameState_GetBubbleConfig_010E3D98(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
                    /* WARNING: Could not recover jumptable at 0x010f3dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}

