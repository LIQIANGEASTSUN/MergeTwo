
/* WARNING: Possible PIC construction at 0x01bb3528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01bb352c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bb34c4(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01bb354c + 0x1bb34d4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bb3550 + 0x1bb34e8));
    func_0x01438628(*(undefined4 *)(_UNK_01bb3554 + 0x1bb34f4));
    func_0x01438628(*(undefined4 *)(_UNK_01bb3558 + 0x1bb3500));
    *pcVar4 = '\x01';
  }
  puVar3 = (undefined4 *)(*(int *)(**(int **)(_UNK_01bb355c + 0x1bb3514) + 0x5c) + 8);
  *puVar3 = **(undefined4 **)(_UNK_01bb3560 + 0x1bb3524);
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

