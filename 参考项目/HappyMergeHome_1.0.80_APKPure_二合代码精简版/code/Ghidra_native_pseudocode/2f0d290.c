
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1d290(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_02f1d2f0 + 0x2f1d2a0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1d2f4 + 0x2f1d2b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d2f8 + 0x2f1d2c0));
    *pcVar4 = '\x01';
  }
  puVar3 = (undefined4 *)(*(int *)(**(int **)(_UNK_02f1d2fc + 0x2f1d2d4) + 0x5c) + 4);
  *puVar3 = **(undefined4 **)(_UNK_02f1d300 + 0x2f1d2e4);
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

