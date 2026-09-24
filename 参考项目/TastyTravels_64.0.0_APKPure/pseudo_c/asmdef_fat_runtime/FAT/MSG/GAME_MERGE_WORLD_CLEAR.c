/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.GAME_MERGE_WORLD_CLEAR$$.ctor RVA 0x2299c70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a9c70(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022a9cb8 + 0x22a9c84);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a9cbc + 0x22a9c98));
    *pcVar1 = '\x01';
  }
  return param_1;
}


