
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ee1afc(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x14);
  *puVar3 = param_2;
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

