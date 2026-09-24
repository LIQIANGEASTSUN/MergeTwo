/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9AA90; Merger.MergeBoard.Data.TickResultArgs.ItemSpawnedResult..ctor; status ok */


void Merger_MergeBoard_Data_TickResultArgs_ItemSpawnedResult___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               byte param_9,byte param_10,byte param_11)

{
  func_0x057da5fc(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  func_0x032809c4((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x032809c4((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 0x28) = param_6;
  *(undefined8 *)(param_1 + 0x30) = param_7;
  func_0x032809c4((undefined8 *)(param_1 + 0x30),param_7);
  *(undefined8 *)(param_1 + 0x38) = param_8;
  func_0x032809c4((undefined8 *)(param_1 + 0x38),param_8);
  *(byte *)(param_1 + 0x2c) = param_9 & 1;
  *(byte *)(param_1 + 0x2d) = param_10 & 1;
  *(byte *)(param_1 + 0x2e) = param_11 & 1;
  return;
}

