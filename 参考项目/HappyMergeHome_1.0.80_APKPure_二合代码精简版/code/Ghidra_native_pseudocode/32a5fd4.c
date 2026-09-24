
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b5fd4(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_032b603c + 0x32b5fe4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b6040 + 0x32b5ff8));
    func_0x01438628(*(undefined4 *)(_UNK_032b6044 + 0x32b6004));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_032b6048 + 0x32b601c) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_032b604c + 0x32b602c);
  *puVar3 = 0;
  puVar4 = (undefined4 *)(puVar3 + 0xc);
  *puVar4 = *puVar5;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

