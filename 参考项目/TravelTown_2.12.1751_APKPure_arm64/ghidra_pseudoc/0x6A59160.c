/* Ghidra 12.1.2 native pseudocode; RVA 0x6A59160; Merger.MergeBoardQueue.Data.QueuedItem..ctor; status ok */


void Merger_MergeBoardQueue_Data_QueuedItem___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  func_0x057da5fc(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  func_0x032809c4((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  func_0x032809c4((undefined8 *)(param_1 + 0x20),param_5);
  *(undefined8 *)(param_1 + 0x18) = param_6;
  func_0x032809c4((undefined8 *)(param_1 + 0x18),param_6);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  return;
}

