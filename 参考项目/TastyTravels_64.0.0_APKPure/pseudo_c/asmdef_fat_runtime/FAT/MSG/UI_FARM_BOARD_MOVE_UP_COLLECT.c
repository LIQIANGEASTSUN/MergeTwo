/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MSG.UI_FARM_BOARD_MOVE_UP_COLLECT$$.ctor RVA 0x229dc64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022adc64(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_022adcac + 0x22adc78);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022adcb0 + 0x22adc8c));
    *pcVar1 = '\x01';
  }
  return param_1;
}


