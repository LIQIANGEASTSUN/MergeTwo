/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_MINI_BOARD_MULTI_UNLOCK_ITEM$$.ctor RVA 0x229ced0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022aced0(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022acf18 + 0x22acee4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022acf1c + 0x22acef8));
    *pcVar1 = '\x01';
  }
  return param_1;
}


