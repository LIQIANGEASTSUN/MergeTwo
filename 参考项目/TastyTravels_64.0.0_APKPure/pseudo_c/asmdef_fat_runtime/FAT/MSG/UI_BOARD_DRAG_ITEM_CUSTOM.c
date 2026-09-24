/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_BOARD_DRAG_ITEM_CUSTOM$$.ctor RVA 0x229b5bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ab5bc(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ab604 + 0x22ab5d0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ab608 + 0x22ab5e4));
    *pcVar1 = '\x01';
  }
  return param_1;
}


