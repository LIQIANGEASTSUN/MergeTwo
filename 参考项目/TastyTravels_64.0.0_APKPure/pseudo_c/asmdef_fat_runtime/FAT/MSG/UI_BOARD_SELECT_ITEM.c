/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_BOARD_SELECT_ITEM$$.ctor RVA 0x229b46c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ab46c(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ab4b4 + 0x22ab480);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ab4b8 + 0x22ab494));
    *pcVar1 = '\x01';
  }
  return param_1;
}


