/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1E58; Merger.MergeBoard.PowerBoost.Models.PowerBoostModel.UpdateConfiguration; status ok */


void Merger_MergeBoard_PowerBoost_Models_PowerBoostModel__UpdateConfiguration
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  func_0x032809c4();
  *(undefined8 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  func_0x032809c4((undefined8 *)(param_1 + 0x18),param_5);
  *(undefined4 *)(param_1 + 0x20) = param_4;
  return;
}

