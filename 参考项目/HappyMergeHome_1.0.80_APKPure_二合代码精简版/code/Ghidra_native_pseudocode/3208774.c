
/* WARNING: Possible PIC construction at 0x032187e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032187e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03218774(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_03218804 + 0x3218784);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03218808 + 0x3218798));
    func_0x01438628(*(undefined4 *)(_UNK_0321880c + 0x32187a4));
    func_0x01438628(*(undefined4 *)(_UNK_03218810 + 0x32187b0));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_03218814 + 0x32187c8) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_03218818 + 0x32187d8);
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

