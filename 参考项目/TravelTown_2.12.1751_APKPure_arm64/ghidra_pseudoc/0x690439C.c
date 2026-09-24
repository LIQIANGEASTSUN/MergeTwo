/* Ghidra 12.1.2 native pseudocode; RVA 0x690439C; MergeEngine.ECS.Components.Board.BoardQueueComponent.TrackPreviousState; status ok */


undefined8
MergeEngine_ECS_Components_Board_BoardQueueComponent__TrackPreviousState
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000007e2991b & 1) == 0) {
    func_0x03280a18(PTR_DAT_078269c0);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_0776e590);
    func_0x03280a18(PTR_DAT_0776e5a8);
    bRam0000000007e2991b = 1;
  }
  lVar4 = MergeEngine_ECS_Components_Board_BoardQueueComponent__CollectIds(param_2);
  puVar3 = PTR_DAT_078269c0;
  puVar2 = PTR_DAT_0776e590;
  puVar1 = PTR_DAT_0774ea58;
  plVar6 = (long *)(param_1 + 0x40);
  if (*plVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776e5a8);
    func_0x05355fbc(uVar5,param_1,*(undefined8 *)puVar3,0);
    uVar5 = func_0x03d872a8(lVar4,uVar5,*(undefined8 *)puVar2);
    uVar5 = func_0x03d5ffd0(uVar5,*(undefined8 *)puVar1);
  }
  *plVar6 = lVar4;
  func_0x032809c4(plVar6,lVar4);
  return uVar5;
}

