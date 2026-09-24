
/* WARNING: Possible PIC construction at 0x030e35dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x030e35e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030e3564(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_030e361c + 0x30e3574);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e3620 + 0x30e3588));
    func_0x01438628(*(undefined4 *)(_UNK_030e3624 + 0x30e3594));
    func_0x01438628(*(undefined4 *)(_UNK_030e3628 + 0x30e35a0));
    func_0x01438628(*(undefined4 *)(_UNK_030e362c + 0x30e35ac));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_030e3630 + 0x30e35c4) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_030e3634 + 0x30e35d4);
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

