// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.ForceUpdateCoordinates 0x10D41B8; GameState.ForceUpdateCoordinates (candidate)
// Image base: 0x10000; Ghidra address: 010e41b8; native size hint: 0x90


void GameState_ForceUpdateCoordinates_010D41B8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  func_0x0114944c(iVar1,param_2,uVar3,uVar4,0);
  return;
}

