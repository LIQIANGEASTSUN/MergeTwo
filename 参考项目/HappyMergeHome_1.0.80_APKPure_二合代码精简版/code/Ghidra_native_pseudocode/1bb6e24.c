
/* WARNING: Possible PIC construction at 0x01bc6e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01bc6e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc6e24(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01bc6eac + 0x1bc6e34);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc6eb0 + 0x1bc6e48));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6eb4 + 0x1bc6e54));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6eb8 + 0x1bc6e60));
    *pcVar4 = '\x01';
  }
  puVar3 = (undefined4 *)(*(int *)(**(int **)(_UNK_01bc6ebc + 0x1bc6e74) + 0x5c) + 8);
  *puVar3 = **(undefined4 **)(_UNK_01bc6ec0 + 0x1bc6e84);
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

