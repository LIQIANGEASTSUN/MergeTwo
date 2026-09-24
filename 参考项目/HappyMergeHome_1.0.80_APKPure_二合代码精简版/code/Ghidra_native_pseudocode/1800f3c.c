
/* WARNING: Possible PIC construction at 0x01810fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01810fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01810f3c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01810ff4 + 0x1810f4c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01810ff8 + 0x1810f60));
    func_0x01438628(*(undefined4 *)(_UNK_01810ffc + 0x1810f6c));
    func_0x01438628(*(undefined4 *)(_UNK_01811000 + 0x1810f78));
    func_0x01438628(*(undefined4 *)(_UNK_01811004 + 0x1810f84));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_01811008 + 0x1810f9c) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_0181100c + 0x1810fac);
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

