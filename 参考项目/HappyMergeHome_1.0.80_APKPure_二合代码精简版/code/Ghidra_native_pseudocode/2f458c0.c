
/* WARNING: Possible PIC construction at 0x02f55938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f5593c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f558c0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_02f55978 + 0x2f558d0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f5597c + 0x2f558e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f55980 + 0x2f558f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f55984 + 0x2f558fc));
    func_0x01438628(*(undefined4 *)(_UNK_02f55988 + 0x2f55908));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_02f5598c + 0x2f55920) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_02f55990 + 0x2f55930);
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

