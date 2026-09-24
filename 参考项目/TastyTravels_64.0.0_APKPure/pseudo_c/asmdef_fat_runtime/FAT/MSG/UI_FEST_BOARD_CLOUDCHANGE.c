/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_FEST_BOARD_CLOUDCHANGE$$.ctor RVA 0x229f118 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022af118(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022af160 + 0x22af12c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022af164 + 0x22af140));
    *pcVar1 = '\x01';
  }
  return param_1;
}


