
/* WARNING: Possible PIC construction at 0x02c78c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c78c18) */
/* WARNING: Removing unreachable block (ram,0x02c78c4c) */
/* WARNING: Removing unreachable block (ram,0x02c78c50) */
/* WARNING: Removing unreachable block (ram,0x02c78c6c) */
/* WARNING: Removing unreachable block (ram,0x02c78c70) */
/* WARNING: Removing unreachable block (ram,0x02c78c8c) */
/* WARNING: Removing unreachable block (ram,0x02c78c90) */
/* WARNING: Removing unreachable block (ram,0x02c78c9c) */
/* WARNING: Removing unreachable block (ram,0x02c78ca0) */
/* WARNING: Removing unreachable block (ram,0x02c78ccc) */
/* WARNING: Removing unreachable block (ram,0x02c78cd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c78ac8(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_02c78cf8 + 0x2c78ae0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c78cfc + 0x2c78af4));
    func_0x01438628(*(undefined4 *)(_UNK_02c78d00 + 0x2c78b00));
    func_0x01438628(*(undefined4 *)(_UNK_02c78d04 + 0x2c78b0c));
    func_0x01438628(*(undefined4 *)(_UNK_02c78d08 + 0x2c78b18));
    *pcVar4 = '\x01';
  }
  FUN_02c6dff0(param_1,0,**(undefined4 **)(_UNK_02c78d0c + 0x2c78b34),0,0);
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x014e94d8(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar5,0,0);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x014e94d8(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar5,0,0);
  FUN_02c6ffa4(param_1,0);
  iVar5 = **(int **)(**(int **)(_UNK_02c78d10 + 0x2c78bd4) + 0x5c);
  uVar3 = FUN_02c771d0(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x02e76744(iVar5,uVar3,0);
  puVar6 = (undefined4 *)(param_1 + 0x88);
  *puVar6 = uVar3;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar6 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

