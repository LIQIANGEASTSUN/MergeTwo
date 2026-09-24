/* Ghidra 12.1.2 native pseudocode; RVA 0x679DA54; MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelItemProduceByBoardState.GetBoardAndInventoryCount; status ok */


ulong MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceByBoardState__GetBoardAndInventoryCount
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = func_0x0689e2fc();
  if (lVar4 != 0) {
    iVar1 = func_0x0676b038(lVar4,param_2,0);
    lVar4 = func_0x0689e3dc(param_1);
    if ((lVar4 != 0) && (iVar2 = func_0x06381150(lVar4,param_2,0), param_3 != 0)) {
      iVar3 = func_0x06a04a20(param_3,param_2,0);
      return (ulong)(uint)(iVar2 + iVar1 + iVar3);
    }
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

