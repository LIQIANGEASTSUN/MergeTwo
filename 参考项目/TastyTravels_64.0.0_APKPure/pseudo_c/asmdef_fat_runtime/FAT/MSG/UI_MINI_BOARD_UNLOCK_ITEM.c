/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_MINI_BOARD_UNLOCK_ITEM$$.ctor RVA 0x229ce7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ace7c(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022acec4 + 0x22ace90);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022acec8 + 0x22acea4));
    *pcVar1 = '\x01';
  }
  return param_1;
}


