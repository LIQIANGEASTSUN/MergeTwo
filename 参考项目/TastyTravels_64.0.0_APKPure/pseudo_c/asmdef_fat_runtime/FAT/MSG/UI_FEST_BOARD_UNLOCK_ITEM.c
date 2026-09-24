/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_FEST_BOARD_UNLOCK_ITEM$$.ctor RVA 0x229f0c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022af0c4(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022af10c + 0x22af0d8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022af110 + 0x22af0ec));
    *pcVar1 = '\x01';
  }
  return param_1;
}


