/* Ghidra 12.1.2 native pseudocode; RVA 0x6786494; MergeEngine.ECS.Systems.Board.SplitSystem.UpdateItemQueueAddedTimestamp; status ok */


void MergeEngine_ECS_Systems_Board_SplitSystem__UpdateItemQueueAddedTimestamp
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000007e28d17 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    bRam0000000007e28d17 = 1;
  }
  puVar1 = PTR_DAT_0777bf98;
  if (param_2 != 0) {
    lVar2 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98);
    if (((param_3 != 0) && (lVar3 = func_0x03ced81c(param_3,*(undefined8 *)puVar1), lVar3 != 0)) &&
       (lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
      return;
    }
  }
  func_0x03280cac();
  return;
}

