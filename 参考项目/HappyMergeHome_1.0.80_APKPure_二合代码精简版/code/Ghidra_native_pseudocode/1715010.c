
/* WARNING: Possible PIC construction at 0x01725088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0172508c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01725010(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_017250c8 + 0x1725020);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017250cc + 0x1725034));
    func_0x01438628(*(undefined4 *)(_UNK_017250d0 + 0x1725040));
    func_0x01438628(*(undefined4 *)(_UNK_017250d4 + 0x172504c));
    func_0x01438628(*(undefined4 *)(_UNK_017250d8 + 0x1725058));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_017250dc + 0x1725070) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_017250e0 + 0x1725080);
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

