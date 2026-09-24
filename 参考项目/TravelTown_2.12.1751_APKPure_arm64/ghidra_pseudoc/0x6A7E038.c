/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7E038; Merger.MergeBoard.Models.TileConfigurationModel.HasTileConfiguration; status ok */


uint Merger_MergeBoard_Models_TileConfigurationModel__HasTileConfiguration
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((bRam0000000007e2a74c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831a18);
    bRam0000000007e2a74c = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = func_0x04f36220(*(long *)(param_1 + 0x10),param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)PTR_DAT_07831a18 + 0x20) + 0xc0) + 0x110)
                           );
    return ~uVar1 >> 0x1f;
  }
  return 0;
}

