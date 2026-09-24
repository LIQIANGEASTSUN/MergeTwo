/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.BOARD_FLY_TEXT$$.ctor RVA 0x229c8c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ac8c0(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ac908 + 0x22ac8d4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ac90c + 0x22ac8e8));
    *pcVar1 = '\x01';
  }
  return param_1;
}


