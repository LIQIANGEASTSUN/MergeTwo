/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_BOARD_ITEM_SPEEDUP_TIP$$.ctor RVA 0x229b6b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ab6b8(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ab700 + 0x22ab6cc);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ab704 + 0x22ab6e0));
    *pcVar1 = '\x01';
  }
  return param_1;
}


