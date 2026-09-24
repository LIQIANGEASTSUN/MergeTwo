
/* WARNING: Possible PIC construction at 0x0175f284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0175f288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0175f20c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0175f2c4 + 0x175f21c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0175f2c8 + 0x175f230));
    func_0x01438628(*(undefined4 *)(_UNK_0175f2cc + 0x175f23c));
    func_0x01438628(*(undefined4 *)(_UNK_0175f2d0 + 0x175f248));
    func_0x01438628(*(undefined4 *)(_UNK_0175f2d4 + 0x175f254));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined1 **)(**(int **)(_UNK_0175f2d8 + 0x175f26c) + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_0175f2dc + 0x175f27c);
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

