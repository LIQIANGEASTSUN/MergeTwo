/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_MINE_BOARD_MOVE_UP_COLLECT$$.ctor RVA 0x229d050 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ad050(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ad098 + 0x22ad064);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ad09c + 0x22ad078));
    *pcVar1 = '\x01';
  }
  return param_1;
}


