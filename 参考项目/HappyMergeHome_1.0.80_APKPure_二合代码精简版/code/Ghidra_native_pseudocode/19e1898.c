
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f1898(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_019f18f8 + 0x19f18a8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f18fc + 0x19f18bc));
    func_0x01438628(*(undefined4 *)(_UNK_019f1900 + 0x19f18c8));
    *pcVar4 = '\x01';
  }
  puVar3 = (undefined4 *)(*(int *)(**(int **)(_UNK_019f1904 + 0x19f18dc) + 0x5c) + 4);
  *puVar3 = **(undefined4 **)(_UNK_019f1908 + 0x19f18ec);
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

