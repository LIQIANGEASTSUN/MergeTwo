
/* WARNING: Possible PIC construction at 0x01883334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01883338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018832bc(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01883374 + 0x18832cc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01883378 + 0x18832e0));
    func_0x01438628(*(undefined4 *)(_UNK_0188337c + 0x18832ec));
    func_0x01438628(*(undefined4 *)(_UNK_01883380 + 0x18832f8));
    func_0x01438628(*(undefined4 *)(_UNK_01883384 + 0x1883304));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_01883388 + 0x188331c) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_0188338c + 0x188332c);
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

