/* Ghidra 12.1.2 native pseudocode; RVA 0x68FDC78; MergeEngine.ECS.Components.Items.PositionComponent.LoadComponent; status ok */


void MergeEngine_ECS_Components_Items_PositionComponent__LoadComponent
               (long param_1,long param_2,undefined4 param_3)

{
  undefined1 auVar1 [12];
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    return;
  }
  auVar1 = func_0x03280cac();
  *auVar1._0_8_ = auVar1._8_4_;
  auVar1._0_8_[1] = param_3;
  return;
}

