
/* WARNING: Possible PIC construction at 0x02c78e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c78e6c) */
/* WARNING: Removing unreachable block (ram,0x02c78ea0) */
/* WARNING: Removing unreachable block (ram,0x02c78ea4) */
/* WARNING: Removing unreachable block (ram,0x02c78ec0) */
/* WARNING: Removing unreachable block (ram,0x02c78ec4) */
/* WARNING: Removing unreachable block (ram,0x02c78ee0) */
/* WARNING: Removing unreachable block (ram,0x02c78ee4) */
/* WARNING: Removing unreachable block (ram,0x02c78ef0) */
/* WARNING: Removing unreachable block (ram,0x02c78ef4) */
/* WARNING: Removing unreachable block (ram,0x02c78f20) */
/* WARNING: Removing unreachable block (ram,0x02c78f24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c78d1c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_02c78f4c + 0x2c78d34);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c78f50 + 0x2c78d48));
    func_0x01438628(*(undefined4 *)(_UNK_02c78f54 + 0x2c78d54));
    func_0x01438628(*(undefined4 *)(_UNK_02c78f58 + 0x2c78d60));
    func_0x01438628(*(undefined4 *)(_UNK_02c78f5c + 0x2c78d6c));
    *pcVar4 = '\x01';
  }
  FUN_02c6dff0(param_1,0,**(undefined4 **)(_UNK_02c78f60 + 0x2c78d88),0,0);
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x014e94d8(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar5,0,0);
  iVar5 = *(int *)(param_1 + 0x60);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x014e94d8(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar5,0,0);
  FUN_02c6ffa4(param_1,0);
  iVar5 = **(int **)(**(int **)(_UNK_02c78f64 + 0x2c78e28) + 0x5c);
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

