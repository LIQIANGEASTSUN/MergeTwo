
/* WARNING: Possible PIC construction at 0x031559a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x031559a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03155928(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_031559e0 + 0x3155938);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031559e4 + 0x315594c));
    func_0x01438628(*(undefined4 *)(_UNK_031559e8 + 0x3155958));
    func_0x01438628(*(undefined4 *)(_UNK_031559ec + 0x3155964));
    func_0x01438628(*(undefined4 *)(_UNK_031559f0 + 0x3155970));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_031559f4 + 0x3155988) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_031559f8 + 0x3155998);
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

