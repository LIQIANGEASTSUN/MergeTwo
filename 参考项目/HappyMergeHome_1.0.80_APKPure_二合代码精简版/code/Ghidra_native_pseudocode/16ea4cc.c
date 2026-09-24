
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016fa4cc(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_016fa534 + 0x16fa4dc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016fa538 + 0x16fa4f0));
    func_0x01438628(*(undefined4 *)(_UNK_016fa53c + 0x16fa4fc));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_016fa540 + 0x16fa514) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_016fa544 + 0x16fa524);
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

