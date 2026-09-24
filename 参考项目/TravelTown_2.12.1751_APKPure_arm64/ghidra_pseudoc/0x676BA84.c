/* Ghidra 12.1.2 native pseudocode; RVA 0x676BA84; Merger.Game.Signal.ItemsMergedSignal..ctor; status ok */


void Merger_Game_Signal_ItemsMergedSignal___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,byte param_6,byte param_7,undefined4 param_8,undefined4 param_9,
               undefined8 param_10,undefined8 param_11)

{
  func_0x057da5fc(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  func_0x032809c4((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x032809c4((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  func_0x032809c4((undefined8 *)(param_1 + 0x20),param_4);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  func_0x032809c4((undefined8 *)(param_1 + 0x28),param_5);
  *(undefined8 *)(param_1 + 0x40) = param_10;
  *(byte *)(param_1 + 0x31) = param_7 & 1;
  *(byte *)(param_1 + 0x30) = param_6 & 1;
  *(undefined4 *)(param_1 + 0x34) = param_8;
  *(undefined4 *)(param_1 + 0x38) = param_9;
  func_0x032809c4((undefined8 *)(param_1 + 0x40),param_10);
  *(undefined8 *)(param_1 + 0x48) = param_11;
  return;
}

