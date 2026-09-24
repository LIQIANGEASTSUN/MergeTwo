
/* WARNING: Possible PIC construction at 0x03284e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03284e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03284df0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_03284e80 + 0x3284e00);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03284e84 + 0x3284e14));
    func_0x01438628(*(undefined4 *)(_UNK_03284e88 + 0x3284e20));
    func_0x01438628(*(undefined4 *)(_UNK_03284e8c + 0x3284e2c));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_03284e90 + 0x3284e44) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_03284e94 + 0x3284e54);
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

