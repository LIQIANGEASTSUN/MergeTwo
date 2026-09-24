
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c12b20(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01c12b80 + 0x1c12b30);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c12b84 + 0x1c12b44));
    func_0x01438628(*(undefined4 *)(_UNK_01c12b88 + 0x1c12b50));
    *pcVar4 = '\x01';
  }
  puVar3 = (undefined4 *)(*(int *)(**(int **)(_UNK_01c12b8c + 0x1c12b64) + 0x5c) + 8);
  *puVar3 = **(undefined4 **)(_UNK_01c12b90 + 0x1c12b74);
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

