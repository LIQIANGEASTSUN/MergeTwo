
/* WARNING: Possible PIC construction at 0x032e5fe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032e5fe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e5f6c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_032e6024 + 0x32e5f7c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e6028 + 0x32e5f90));
    func_0x01438628(*(undefined4 *)(_UNK_032e602c + 0x32e5f9c));
    func_0x01438628(*(undefined4 *)(_UNK_032e6030 + 0x32e5fa8));
    func_0x01438628(*(undefined4 *)(_UNK_032e6034 + 0x32e5fb4));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_032e6038 + 0x32e5fcc) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_032e603c + 0x32e5fdc);
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

