/* Ghidra 12.1.2 native pseudocode; RVA 0x6A58AA8; Merger.MergeBoardQueue.Models.BoardQueueModel.Peek; status ok */


undefined8 Merger_MergeBoardQueue_Models_BoardQueueModel__Peek(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000007e2a60d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830358);
    bRam0000000007e2a60d = 1;
  }
  lVar1 = func_0x06b58af0(param_1);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
  }
  return uVar2;
}

