/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_MINECART_BOARD_UNLOCK_ITEM$$.ctor RVA 0x229d1a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ad1a0(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ad1e8 + 0x22ad1b4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ad1ec + 0x22ad1c8));
    *pcVar1 = '\x01';
  }
  return param_1;
}


