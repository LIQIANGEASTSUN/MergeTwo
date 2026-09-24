/* Ghidra 12.1.2 native pseudocode; RVA 0x6A590C4; Merger.MergeBoardQueue.Models.BoardQueueModel.EnqueueItem; status ok */


undefined8
Merger_MergeBoardQueue_Models_BoardQueueModel__EnqueueItem
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_077c1668;
  if ((bRam0000000007e2a612 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1668);
    bRam0000000007e2a612 = 1;
  }
  uVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x06b59160(uVar2,param_2,param_4,param_5,param_3,0);
  Merger_MergeBoardQueue_Models_BoardQueueModel__Enqueue(param_1,uVar2);
  func_0x06b587c8(param_1);
  return uVar2;
}

