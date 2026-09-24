
/* WARNING: Possible PIC construction at 0x0324d2f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0324d2f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0324d27c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0324d334 + 0x324d28c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0324d338 + 0x324d2a0));
    func_0x01438628(*(undefined4 *)(_UNK_0324d33c + 0x324d2ac));
    func_0x01438628(*(undefined4 *)(_UNK_0324d340 + 0x324d2b8));
    func_0x01438628(*(undefined4 *)(_UNK_0324d344 + 0x324d2c4));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_0324d348 + 0x324d2dc) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_0324d34c + 0x324d2ec);
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

