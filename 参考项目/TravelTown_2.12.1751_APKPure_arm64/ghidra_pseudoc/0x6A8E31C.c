/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8E31C; Merger.MergeBoard.Logic.BoardOperations.BoardOperationActionsBuilder.Build; status ok */


long Merger_MergeBoard_Logic_BoardOperations_BoardOperationActionsBuilder__Build(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_DAT_07831ef0;
  puVar2 = PTR_DAT_077c1e00;
  if ((bRam0000000007e2a7cc & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831ef8);
    func_0x03280a18(PTR_DAT_07831ef0);
    func_0x03280a18(PTR_DAT_077c1e00);
    bRam0000000007e2a7cc = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04143d60(lVar4,uVar6,*(undefined8 *)puVar3);
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      func_0x057b9c7c(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x032809c4((undefined8 *)(param_1 + 0x20),0);
    return lVar4;
  }
  lVar4 = func_0x03280cac();
  puVar3 = PTR_DAT_077c1e00;
  puVar2 = PTR_DAT_077c1df8;
  if ((bRam0000000007e2a7ce & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1df8);
    func_0x03280a18(PTR_DAT_077c1e00);
    bRam0000000007e2a7ce = 1;
  }
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04143c38(uVar6,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar4 + 0x18) = uVar6;
  func_0x032809c4((undefined8 *)(lVar4 + 0x18),uVar6);
  return lVar4;
}

