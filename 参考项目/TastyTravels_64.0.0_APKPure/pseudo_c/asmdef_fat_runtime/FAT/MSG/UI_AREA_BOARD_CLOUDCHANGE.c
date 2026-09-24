/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_AREA_BOARD_CLOUDCHANGE$$.ctor RVA 0x229e6f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ae6f8(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ae740 + 0x22ae70c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ae744 + 0x22ae720));
    *pcVar1 = '\x01';
  }
  return param_1;
}


