/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.ON_MERGE_HAS_SCORE_ITEM$$.ctor RVA 0x229c4b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ac4b0(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ac4f8 + 0x22ac4c4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ac4fc + 0x22ac4d8));
    *pcVar1 = '\x01';
  }
  return param_1;
}


