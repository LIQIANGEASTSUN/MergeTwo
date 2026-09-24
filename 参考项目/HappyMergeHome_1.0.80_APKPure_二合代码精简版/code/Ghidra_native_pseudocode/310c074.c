
/* WARNING: Possible PIC construction at 0x0311c0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0311c0f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0311c074(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0311c12c + 0x311c084);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311c130 + 0x311c098));
    func_0x01438628(*(undefined4 *)(_UNK_0311c134 + 0x311c0a4));
    func_0x01438628(*(undefined4 *)(_UNK_0311c138 + 0x311c0b0));
    func_0x01438628(*(undefined4 *)(_UNK_0311c13c + 0x311c0bc));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_0311c140 + 0x311c0d4) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_0311c144 + 0x311c0e4);
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

