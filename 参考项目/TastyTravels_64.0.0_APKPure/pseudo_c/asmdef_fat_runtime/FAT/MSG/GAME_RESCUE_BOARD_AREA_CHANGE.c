/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.GAME_RESCUE_BOARD_AREA_CHANGE$$.ctor RVA 0x229f2c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022af2c4(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022af30c + 0x22af2d8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022af310 + 0x22af2ec));
    *pcVar1 = '\x01';
  }
  return param_1;
}


