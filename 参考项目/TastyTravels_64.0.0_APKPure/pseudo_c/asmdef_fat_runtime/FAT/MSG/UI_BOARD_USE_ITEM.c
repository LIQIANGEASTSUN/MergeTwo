/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_BOARD_USE_ITEM$$.ctor RVA 0x229b514 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ab514(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ab55c + 0x22ab528);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ab560 + 0x22ab53c));
    *pcVar1 = '\x01';
  }
  return param_1;
}


