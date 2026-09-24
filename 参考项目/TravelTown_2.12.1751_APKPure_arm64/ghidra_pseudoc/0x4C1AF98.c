/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1AF98; MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>.ShouldLoadStateForDomain; status ok */

undefined1  [16]
MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___ShouldLoadStateForDomain
          (long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000007e1af1b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a608);
    bRam0000000007e1af1b = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = func_0x064819c0(*(long *)(param_1 + 0x50),0);
    lVar2 = 0;
    if ((lVar1 != 0) && (lVar2 = 0, *(long *)(lVar1 + 0x20) != 0)) {
      lVar2 = func_0x06472e74(*(long *)(lVar1 + 0x20),0);
    }
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) != 0)) {
      return ZEXT816(0);
    }
    return ZEXT816(1);
  }
  auVar3._0_8_ = func_0x03280cac();
  auVar3._8_8_ = 0;
  return auVar3;
}

