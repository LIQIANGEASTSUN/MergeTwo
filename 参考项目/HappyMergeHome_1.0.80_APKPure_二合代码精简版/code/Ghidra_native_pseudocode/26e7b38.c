
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f7b38(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f7bf0 + 0x26f7b50);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f7bf4 + 0x26f7b64));
    func_0x01438628(*(undefined4 *)(_UNK_026f7bf8 + 0x26f7b70));
    *pcVar4 = '\x01';
  }
  puVar3 = (undefined4 *)(param_1 + 0x88);
  iVar1 = func_0x024eef64(*puVar3,param_2,0);
  if (iVar1 == 0) {
    return;
  }
  *puVar3 = param_2;
  func_0x014385cc(puVar3,param_2);
  if (*(int *)(**(int **)(_UNK_026f7bfc + 0x26f7bac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026f7c00 + 0x26f7bc8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(uint *)(iVar1 + 0x60);
  *(uint *)(iVar1 + 0x60) = uVar2 + 1;
  *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar2);
  return;
}

