/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MergeWorldParam$$.ctor RVA 0x2130c20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02140c20(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02140c70 + 0x2140c34);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02140c74 + 0x2140c48));
    *pcVar1 = '\x01';
  }
  *(undefined4 *)(param_1 + 8) = **(undefined4 **)(_UNK_02140c78 + 0x2140c60);
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


