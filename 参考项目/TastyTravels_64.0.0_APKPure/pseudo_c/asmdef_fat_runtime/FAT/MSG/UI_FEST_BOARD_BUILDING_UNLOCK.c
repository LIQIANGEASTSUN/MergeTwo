/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_FEST_BOARD_BUILDING_UNLOCK$$.ctor RVA 0x229f16c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022af16c(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022af1b4 + 0x22af180);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022af1b8 + 0x22af194));
    *pcVar1 = '\x01';
  }
  return param_1;
}


