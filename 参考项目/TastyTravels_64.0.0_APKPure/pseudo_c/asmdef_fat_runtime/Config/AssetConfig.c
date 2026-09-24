/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== Config.AssetConfig$$get_Key RVA 0x28aa0c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ba0c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_028ba130 + 0x28ba0d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ba134 + 0x28ba0e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0467229c(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar1 != 0) {
    uVar2 = func_0x0467272c(**(undefined4 **)(_UNK_028ba138 + 0x28ba114),
                            *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    return uVar2;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== Config.AssetConfig$$set_Key RVA 0x28aa13c =====

void FUN_028ba13c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== Config.AssetConfig$$.ctor RVA 0x28aa144 =====

void FUN_028ba144(void)

{
  return;
}


