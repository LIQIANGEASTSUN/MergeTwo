/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_WISH_BOARD_UNLOCK_ITEM$$.ctor RVA 0x229e53c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ae53c(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ae584 + 0x22ae550);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ae588 + 0x22ae564));
    *pcVar1 = '\x01';
  }
  return param_1;
}


