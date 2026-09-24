/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_MINECART_BOARD_MOVE_UP$$.ctor RVA 0x229d1f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ad1f4(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ad23c + 0x22ad208);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ad240 + 0x22ad21c));
    *pcVar1 = '\x01';
  }
  return param_1;
}


