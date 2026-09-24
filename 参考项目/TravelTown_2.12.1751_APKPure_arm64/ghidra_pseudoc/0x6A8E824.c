/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8E824; Merger.MergeBoard.Logic.BoardOperations.BoardOperationsTracker.GetOperationsMetadata; status ok */


long Merger_MergeBoard_Logic_BoardOperations_BoardOperationsTracker__GetOperationsMetadata
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lStack_28;
  
  puVar2 = PTR_DAT_0775a958;
  puVar1 = PTR_DAT_07750838;
  if ((bRam0000000007e2a7d0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077507d0);
    func_0x03280a18(PTR_DAT_0775a958);
    func_0x03280a18(PTR_DAT_07750838);
    func_0x03280a18(PTR_DAT_07831f20);
    func_0x03280a18(PTR_DAT_07779e90);
    bRam0000000007e2a7d0 = 1;
  }
  lStack_28 = 0;
  lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fe1fa4(lVar3,*(undefined8 *)puVar2);
  if (param_2 != 0) {
    uVar4 = func_0x03ec5020(param_2,&lStack_28,*(undefined8 *)PTR_DAT_07831f20);
    if ((uVar4 & 1) != 0) {
      if ((lStack_28 == 0) || (lVar3 == 0)) goto SUB_057da5fc;
      func_0x04fe2d7c(lVar3,*(undefined8 *)PTR_DAT_07779e90,*(undefined8 *)(lStack_28 + 0x10),
                      *(undefined8 *)PTR_DAT_077507d0);
    }
    return lVar3;
  }
SUB_057da5fc:
  lVar3 = func_0x03280cac();
  return lVar3;
}

