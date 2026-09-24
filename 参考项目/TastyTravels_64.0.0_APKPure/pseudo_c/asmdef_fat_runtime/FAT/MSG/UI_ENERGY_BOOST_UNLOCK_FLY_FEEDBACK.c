/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_ENERGY_BOOST_UNLOCK_FLY_FEEDBACK$$.ctor RVA 0x229d504 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022ad504(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022ad54c + 0x22ad518);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022ad550 + 0x22ad52c));
    *pcVar1 = '\x01';
  }
  return param_1;
}


