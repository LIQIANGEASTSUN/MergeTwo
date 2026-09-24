/* Ghidra 12.1.2 native pseudocode; RVA 0x6902D70; MergeEngine.ECS.Components.Board.BoardItemCountComponent.InvokeChanged; status ok */


void MergeEngine_ECS_Components_Board_BoardItemCountComponent__InvokeChanged
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a02db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28))
    ;
    return;
  }
  return;
}

