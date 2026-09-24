/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_FEST_BOARD_USE_SPIN_ITEM$$.ctor RVA 0x229f1c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022af1c0(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022af208 + 0x22af1d4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022af20c + 0x22af1e8));
    *pcVar1 = '\x01';
  }
  return param_1;
}


