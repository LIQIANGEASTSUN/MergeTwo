/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.GAME_BOARD_ITEM_MERGE$$.ctor RVA 0x2299dd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a9dd0(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022a9e18 + 0x22a9de4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a9e1c + 0x22a9df8));
    *pcVar1 = '\x01';
  }
  return param_1;
}


