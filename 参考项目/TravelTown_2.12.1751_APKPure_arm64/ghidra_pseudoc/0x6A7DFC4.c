/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7DFC4; Merger.MergeBoard.Models.TileConfigurationModel.GetTileConfiguration; status ok */


undefined8
Merger_MergeBoard_Models_TileConfigurationModel__GetTileConfiguration
          (long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a74b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831a10);
    bRam0000000007e2a74b = 1;
  }
  uStack_28 = 0;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar1 = func_0x04f37608(*(long *)(param_1 + 0x10),param_2,&uStack_28,
                              *(undefined8 *)PTR_DAT_07831a10), uVar2 = uStack_28, (uVar1 & 1) == 0)
     ) {
    uVar2 = 0;
  }
  return uVar2;
}

