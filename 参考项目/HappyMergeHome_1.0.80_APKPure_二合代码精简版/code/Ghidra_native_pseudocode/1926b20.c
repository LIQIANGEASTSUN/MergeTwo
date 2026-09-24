
/* WARNING: Possible PIC construction at 0x01936b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01936b9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01936b20(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01936bd8 + 0x1936b30);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01936bdc + 0x1936b44));
    func_0x01438628(*(undefined4 *)(_UNK_01936be0 + 0x1936b50));
    func_0x01438628(*(undefined4 *)(_UNK_01936be4 + 0x1936b5c));
    func_0x01438628(*(undefined4 *)(_UNK_01936be8 + 0x1936b68));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_01936bec + 0x1936b80) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_01936bf0 + 0x1936b90);
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

