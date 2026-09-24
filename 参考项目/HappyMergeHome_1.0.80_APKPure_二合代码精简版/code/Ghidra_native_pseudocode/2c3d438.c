
/* WARNING: Possible PIC construction at 0x02c4d55c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c4d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c4d5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c4d604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c4d63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c4d674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c4d6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c4d6e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c4d6b0) */
/* WARNING: Removing unreachable block (ram,0x02c4d678) */
/* WARNING: Removing unreachable block (ram,0x02c4d640) */
/* WARNING: Removing unreachable block (ram,0x02c4d608) */
/* WARNING: Removing unreachable block (ram,0x02c4d5d0) */
/* WARNING: Removing unreachable block (ram,0x02c4d598) */
/* WARNING: Removing unreachable block (ram,0x02c4d560) */
/* WARNING: Removing unreachable block (ram,0x02c4d6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c4d438(void)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_02c4d724 + 0x2c4d448);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4d728 + 0x2c4d45c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d72c + 0x2c4d468));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d730 + 0x2c4d474));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d734 + 0x2c4d480));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d738 + 0x2c4d48c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d73c + 0x2c4d498));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d740 + 0x2c4d4a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d744 + 0x2c4d4b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d748 + 0x2c4d4bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d74c + 0x2c4d4c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d750 + 0x2c4d4d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d754 + 0x2c4d4e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d758 + 0x2c4d4ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d75c + 0x2c4d4f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d760 + 0x2c4d504));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d764 + 0x2c4d510));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d768 + 0x2c4d51c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d76c + 0x2c4d528));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02c4d770 + 0x2c4d53c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_02c4d774 + 0x2c4d54c);
  uVar3 = *(uint *)(*piVar5 + 0x5c);
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + (uVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

