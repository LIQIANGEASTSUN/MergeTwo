
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f55b20(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_02f55b88 + 0x2f55b30);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f55b8c + 0x2f55b44));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02f55b90 + 0x2f55b58);
  uVar3 = func_0x014388d4(*piVar5);
  func_0x024eeca8(uVar3,0);
  **(undefined4 **)(*piVar5 + 0x5c) = uVar3;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + (*(uint *)(*piVar5 + 0x5c) >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar5 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

