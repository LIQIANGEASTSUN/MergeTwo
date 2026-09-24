/* Ghidra 12.1.2 native pseudocode; RVA 0x6A37F3C; Merger.MergeBoard.View.MergeBoardSelectorView.TryGetItemViewOnSamePosition; status ok */


ulong Merger_MergeBoard_View_MergeBoardSelectorView__TryGetItemViewOnSamePosition
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((bRam0000000007e2a4df & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f678);
    bRam0000000007e2a4df = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = func_0x06b32634(*(long *)(param_1 + 0x28),param_2);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar4 = func_0x06b324d8(*(long *)(param_1 + 0x28),uVar3);
      if (lVar4 == 0) {
        *param_3 = 0;
        uVar5 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_06b37fe8;
        uVar5 = func_0x06b36fa4(*(long *)(param_1 + 0x38),lVar4);
        *param_3 = uVar5;
      }
      func_0x032809c4(param_3,uVar5);
      return (ulong)(lVar4 != 0);
    }
  }
LAB_06b37fe8:
  uVar6 = func_0x03280cac();
  puVar2 = PTR_DAT_0782f680;
  if ((bRam0000000007e2a4e1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f680);
    bRam0000000007e2a4e1 = 1;
  }
  puVar1 = PTR_DAT_0774e4e0;
  uVar5 = *(undefined8 *)puVar2;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  return uVar6;
}

