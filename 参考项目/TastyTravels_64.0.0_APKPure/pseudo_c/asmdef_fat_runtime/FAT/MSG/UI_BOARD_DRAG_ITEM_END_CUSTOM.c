/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_BOARD_DRAG_ITEM_END_CUSTOM$$.ctor RVA 0x229b664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ab664(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ab6ac + 0x22ab678);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ab6b0 + 0x22ab68c));
    *pcVar1 = '\x01';
  }
  return param_1;
}


