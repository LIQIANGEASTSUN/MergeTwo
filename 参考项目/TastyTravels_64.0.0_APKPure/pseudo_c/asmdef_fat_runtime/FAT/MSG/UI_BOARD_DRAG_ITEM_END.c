/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_BOARD_DRAG_ITEM_END$$.ctor RVA 0x229b568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ab568(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ab5b0 + 0x22ab57c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ab5b4 + 0x22ab590));
    *pcVar1 = '\x01';
  }
  return param_1;
}


