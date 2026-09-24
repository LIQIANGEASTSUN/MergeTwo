// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: BubbleConfig.GetChance 0x10C8290; BubbleConfig.GetChance (candidate)
// Image base: 0x10000; Ghidra address: 010d8290; native size hint: 0x7C


float BubbleConfig_GetChance_010C8290(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  float fVar4;
  
  pcVar2 = (char *)(iRam010d8300 + 0x10d82a8);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010d8304 + 0x10d82bc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(iRam010d8308 + 0x10d82d0);
  fVar4 = *(float *)(param_1 + 0x10);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x00f6b294();
    iVar1 = *piVar3;
  }
  return fVar4 * *(float *)(*(int *)(iVar1 + 0x5c) + 4);
}

