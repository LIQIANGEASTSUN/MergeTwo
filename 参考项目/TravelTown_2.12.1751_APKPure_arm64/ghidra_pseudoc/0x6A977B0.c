/* Ghidra 12.1.2 native pseudocode; RVA 0x6A977B0; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateFeedingCombinationComponent; status ok */


undefined8
Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateFeedingCombinationComponent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_07831ca0;
  puVar1 = PTR_DAT_07831c98;
  if ((bRam0000000007e2a80f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831c98);
    func_0x03280a18(PTR_DAT_07831ca0);
    bRam0000000007e2a80f = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04143c38(uVar3,*(undefined8 *)puVar1);
  uStack_28 = uVar3;
  func_0x032809c4(&uStack_28,uVar3);
  return uStack_28;
}

