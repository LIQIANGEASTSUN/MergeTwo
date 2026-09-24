/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_ACTIVITY_BOARD_MOVE_COLLECT$$.ctor RVA 0x229ce18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ace18(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ace60 + 0x22ace2c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ace64 + 0x22ace40));
    *pcVar1 = '\x01';
  }
  return param_1;
}


