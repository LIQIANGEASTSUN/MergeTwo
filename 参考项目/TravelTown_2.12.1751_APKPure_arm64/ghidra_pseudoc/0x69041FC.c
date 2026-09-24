/* Ghidra 12.1.2 native pseudocode; RVA 0x69041FC; MergeEngine.ECS.Components.Board.BoardQueueComponent.HeadOfQueue; status ok */


undefined8 MergeEngine_ECS_Components_Board_BoardQueueComponent__HeadOfQueue(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000007e29920 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826908);
    func_0x03280a18(PTR_DAT_07826998);
    func_0x03280a18(PTR_DAT_078269b0);
    bRam0000000007e29920 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x18)) {
      return *(undefined8 *)(lVar5 + 0x10);
    }
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) < 1) {
        return 0;
      }
      uVar3 = *(undefined8 *)PTR_DAT_078269b0;
      if (*(long *)(lVar5 + 0x10) == 0) {
        return 0;
      }
      return *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x20);
    }
  }
  auVar6 = func_0x03280cac();
  lVar4 = auVar6._8_8_;
  lVar5 = auVar6._0_8_;
  if ((bRam0000000007e29919 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07752c80);
    func_0x03280a18(PTR_DAT_078269b8);
    bRam0000000007e29919 = 1;
  }
  puVar1 = PTR_DAT_078269b8;
  if (*(long *)(lVar5 + 0x28) != 0) {
    uVar2 = func_0x054f0d40(*(long *)(lVar5 + 0x28),lVar4,*(undefined8 *)PTR_DAT_078269b8);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar5 + 0x30) == 0) goto LAB_06a04350;
      uVar2 = func_0x054f0d40(*(long *)(lVar5 + 0x30),lVar4,*(undefined8 *)puVar1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    if ((lVar4 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
      func_0x053c1024(*(long *)(lVar5 + 0x38),*(undefined8 *)(lVar4 + 0x20),
                      *(undefined8 *)PTR_DAT_07752c80);
      func_0x06a03fd0(lVar5);
      return 1;
    }
  }
LAB_06a04350:
  uVar3 = func_0x03280cac();
  if ((bRam0000000007e2991a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826980);
    bRam0000000007e2991a = 1;
  }
  lVar5 = MergeEngine_ECS_Components_Board_BoardQueueComponent__HeadOfQueue(uVar3);
  uVar3 = 0;
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
  }
  return uVar3;
}

