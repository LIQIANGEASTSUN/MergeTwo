/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.ON_USE_SPEED_UP_ITEM$$.ctor RVA 0x229c400 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ac400(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ac448 + 0x22ac414);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ac44c + 0x22ac428));
    *pcVar1 = '\x01';
  }
  return param_1;
}


