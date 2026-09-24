/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.GAME_MERGE_ITEM_EVENT$$.ctor RVA 0x2299d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a9d7c(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022a9dc4 + 0x22a9d90);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a9dc8 + 0x22a9da4));
    *pcVar1 = '\x01';
  }
  return param_1;
}


