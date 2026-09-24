/* Ghidra 12.1.2 native pseudocode; RVA 0x690429C; MergeEngine.ECS.Components.Board.BoardQueueComponent.RemoveElement; status ok */


undefined8
MergeEngine_ECS_Components_Board_BoardQueueComponent__RemoveElement(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000007e29919 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07752c80);
    func_0x03280a18(PTR_DAT_078269b8);
    bRam0000000007e29919 = 1;
  }
  puVar1 = PTR_DAT_078269b8;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = func_0x054f0d40(*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_078269b8);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_06a04350;
      uVar2 = func_0x054f0d40(*(long *)(param_1 + 0x30),param_2,*(undefined8 *)puVar1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    if ((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      func_0x053c1024(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x20),
                      *(undefined8 *)PTR_DAT_07752c80);
      MergeEngine_ECS_Components_Board_BoardQueueComponent__NotifyQueueChanged(param_1);
      return 1;
    }
  }
LAB_06a04350:
  uVar3 = func_0x03280cac();
  if ((bRam0000000007e2991a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826980);
    bRam0000000007e2991a = 1;
  }
  lVar4 = MergeEngine_ECS_Components_Board_BoardQueueComponent__HeadOfQueue(uVar3);
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
  }
  return uVar3;
}

