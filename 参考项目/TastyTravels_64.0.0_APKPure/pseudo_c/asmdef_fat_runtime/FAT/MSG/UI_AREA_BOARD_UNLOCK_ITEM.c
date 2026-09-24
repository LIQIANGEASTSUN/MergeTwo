/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_AREA_BOARD_UNLOCK_ITEM$$.ctor RVA 0x229e6a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ae6a4(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ae6ec + 0x22ae6b8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ae6f0 + 0x22ae6cc));
    *pcVar1 = '\x01';
  }
  return param_1;
}


