
/* WARNING: Possible PIC construction at 0x02fa68c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02fa68c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa684c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_02fa6904 + 0x2fa685c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa6908 + 0x2fa6870));
    func_0x01438628(*(undefined4 *)(_UNK_02fa690c + 0x2fa687c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6910 + 0x2fa6888));
    func_0x01438628(*(undefined4 *)(_UNK_02fa6914 + 0x2fa6894));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_02fa6918 + 0x2fa68ac) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_02fa691c + 0x2fa68bc);
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

