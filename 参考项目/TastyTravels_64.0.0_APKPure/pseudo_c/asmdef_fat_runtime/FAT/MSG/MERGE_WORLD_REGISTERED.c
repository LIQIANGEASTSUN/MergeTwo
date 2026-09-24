/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.MERGE_WORLD_REGISTERED$$.ctor RVA 0x229ecc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022aecc4(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022aed0c + 0x22aecd8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022aed10 + 0x22aecec));
    *pcVar1 = '\x01';
  }
  return param_1;
}


