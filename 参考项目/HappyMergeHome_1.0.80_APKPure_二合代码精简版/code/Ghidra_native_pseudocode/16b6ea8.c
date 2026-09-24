
/* WARNING: Possible PIC construction at 0x016c6f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016c6f24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c6ea8(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_016c6f60 + 0x16c6eb8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c6f64 + 0x16c6ecc));
    func_0x01438628(*(undefined4 *)(_UNK_016c6f68 + 0x16c6ed8));
    func_0x01438628(*(undefined4 *)(_UNK_016c6f6c + 0x16c6ee4));
    func_0x01438628(*(undefined4 *)(_UNK_016c6f70 + 0x16c6ef0));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_016c6f74 + 0x16c6f08) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_016c6f78 + 0x16c6f18);
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

