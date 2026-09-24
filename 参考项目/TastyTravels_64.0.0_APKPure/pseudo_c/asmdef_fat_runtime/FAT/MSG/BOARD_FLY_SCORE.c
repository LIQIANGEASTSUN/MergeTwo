/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.BOARD_FLY_SCORE$$.ctor RVA 0x229c358 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ac358(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ac3a0 + 0x22ac36c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ac3a4 + 0x22ac380));
    *pcVar1 = '\x01';
  }
  return param_1;
}


