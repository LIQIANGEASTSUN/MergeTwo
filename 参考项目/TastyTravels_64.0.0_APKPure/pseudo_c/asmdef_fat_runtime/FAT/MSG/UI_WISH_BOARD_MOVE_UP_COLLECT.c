/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_WISH_BOARD_MOVE_UP_COLLECT$$.ctor RVA 0x229e650 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ae650(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ae698 + 0x22ae664);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ae69c + 0x22ae678));
    *pcVar1 = '\x01';
  }
  return param_1;
}


