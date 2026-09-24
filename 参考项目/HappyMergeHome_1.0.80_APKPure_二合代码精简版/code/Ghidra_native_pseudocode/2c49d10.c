
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c59d10(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar2 = (char *)(_UNK_02c59dfc + 0x2c59d24);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c59e00 + 0x2c59d38));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0xb4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 0;
    iVar4 = func_0x024f0ef8(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar4,0,0);
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02c59e04 + 0x2c59d68);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = func_0x014388d4(*puVar1);
      func_0x024ef218(uVar3,0x40000000,0);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar3);
      uVar3 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar3;
}

