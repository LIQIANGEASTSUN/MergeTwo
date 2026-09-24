/* Ghidra 12.1.2 native pseudocode; RVA 0x3BDA4BC; MergeEngine.ECS.Components.Board.BoardQueueComponent.Select<__Il2CppFullySharedGenericType>; status ok */


void MergeEngine_ECS_Components_Board_BoardQueueComponent__Select___Il2CppFullySharedGenericType_
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x38);
  if (lVar3 == 0) {
    func_0x03256878(param_3);
    lVar3 = *(long *)(param_3 + 0x38);
  }
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 8))(*(undefined8 *)(param_1 + 0x28),param_2);
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 8))
                    (*(undefined8 *)(param_1 + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x03cda534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x18))(uVar1,uVar2);
  return;
}

