
/* WARNING: Possible PIC construction at 0x018d368c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x018d3690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018d3614(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_018d36cc + 0x18d3624);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018d36d0 + 0x18d3638));
    func_0x01438628(*(undefined4 *)(_UNK_018d36d4 + 0x18d3644));
    func_0x01438628(*(undefined4 *)(_UNK_018d36d8 + 0x18d3650));
    func_0x01438628(*(undefined4 *)(_UNK_018d36dc + 0x18d365c));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_018d36e0 + 0x18d3674) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_018d36e4 + 0x18d3684);
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

