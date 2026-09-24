/* Ghidra 12.1.2 native pseudocode; RVA 0x67844BC; MergeEngine.ECS.Systems.Board.SplitSystem.CanCombineItems; status ok */


uint MergeEngine_ECS_Systems_Board_SplitSystem__CanCombineItems
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uVar2 = func_0x06884534();
  if ((((uVar2 & 1) == 0) && (uVar2 = func_0x06884534(uVar2,param_3), (uVar2 & 1) == 0)) &&
     (uVar2 = func_0x0688459c(uVar2,param_2,param_3,&uStack_30,&uStack_28,&uStack_38),
     (uVar2 & 1) != 0)) {
    uVar1 = func_0x068846b4(param_1,uStack_28);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

