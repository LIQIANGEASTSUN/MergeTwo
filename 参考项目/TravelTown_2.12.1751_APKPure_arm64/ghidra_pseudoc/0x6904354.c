/* Ghidra 12.1.2 native pseudocode; RVA 0x6904354; MergeEngine.ECS.Components.Board.BoardQueueComponent.Peek; status ok */


undefined8 MergeEngine_ECS_Components_Board_BoardQueueComponent__Peek(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000007e2991a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826980);
    bRam0000000007e2991a = 1;
  }
  lVar1 = MergeEngine_ECS_Components_Board_BoardQueueComponent__HeadOfQueue(param_1);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
  }
  return uVar2;
}

