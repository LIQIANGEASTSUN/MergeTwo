/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.ON_USE_JOKER_ITEM_UPGRADE$$.ctor RVA 0x229c3ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ac3ac(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ac3f4 + 0x22ac3c0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ac3f8 + 0x22ac3d4));
    *pcVar1 = '\x01';
  }
  return param_1;
}


