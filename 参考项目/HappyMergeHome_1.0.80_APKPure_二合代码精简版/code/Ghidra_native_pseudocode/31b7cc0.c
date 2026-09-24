
/* WARNING: Possible PIC construction at 0x031c7d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x031c7d3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031c7cc0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_031c7d78 + 0x31c7cd0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c7d7c + 0x31c7ce4));
    func_0x01438628(*(undefined4 *)(_UNK_031c7d80 + 0x31c7cf0));
    func_0x01438628(*(undefined4 *)(_UNK_031c7d84 + 0x31c7cfc));
    func_0x01438628(*(undefined4 *)(_UNK_031c7d88 + 0x31c7d08));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_031c7d8c + 0x31c7d20) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_031c7d90 + 0x31c7d30);
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

