/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MergeGrid$$get_item RVA 0x20c7f48 =====

undefined4 FUN_020d7f48(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.MergeGrid$$set_item RVA 0x20c7f50 =====

void FUN_020d7f50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.Merge.MergeGrid$$get_gridTid RVA 0x20c7f58 =====

undefined4 FUN_020d7f58(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.Merge.MergeGrid$$set_gridTid RVA 0x20c7f60 =====

void FUN_020d7f60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.Merge.MergeGrid$$get_area RVA 0x20c7f68 =====

undefined4 FUN_020d7f68(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.MergeGrid$$set_area RVA 0x20c7f70 =====

void FUN_020d7f70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.Merge.MergeGrid$$.ctor RVA 0x20c7f78 =====

void FUN_020d7f78(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


