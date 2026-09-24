/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.GAME_BOARD_ITEM_TAP$$.ctor RVA 0x2299e78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a9e78(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022a9ec0 + 0x22a9e8c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a9ec4 + 0x22a9ea0));
    *pcVar1 = '\x01';
  }
  return param_1;
}


