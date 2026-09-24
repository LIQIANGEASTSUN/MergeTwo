/* Ghidra 12.1.2 native pseudocode; RVA 0x6788C0C; MergeEngine.ECS.Systems.Board.UnboxingSystem.GetInteractionAmountLeft; status ok */


ulong MergeEngine_ECS_Systems_Board_UnboxingSystem__GetInteractionAmountLeft(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((bRam0000000007e28d27 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e28d27 = 1;
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (0 < iVar1) {
      iVar2 = *(int *)(param_1 + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar3 = iVar1 - iVar2;
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      return (ulong)uVar3;
    }
    return 0;
  }
  uVar4 = func_0x03280cac();
  return uVar4;
}

