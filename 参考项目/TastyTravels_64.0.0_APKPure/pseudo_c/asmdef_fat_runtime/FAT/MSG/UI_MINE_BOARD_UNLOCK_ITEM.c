/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_MINE_BOARD_UNLOCK_ITEM$$.ctor RVA 0x229cff4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022acff4(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ad03c + 0x22ad008);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ad040 + 0x22ad01c));
    *pcVar1 = '\x01';
  }
  return param_1;
}


