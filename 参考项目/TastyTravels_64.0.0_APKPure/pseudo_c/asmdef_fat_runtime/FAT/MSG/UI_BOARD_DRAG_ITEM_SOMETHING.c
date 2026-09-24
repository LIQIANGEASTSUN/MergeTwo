/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_BOARD_DRAG_ITEM_SOMETHING$$.ctor RVA 0x229b610 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ab610(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ab658 + 0x22ab624);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ab65c + 0x22ab638));
    *pcVar1 = '\x01';
  }
  return param_1;
}


