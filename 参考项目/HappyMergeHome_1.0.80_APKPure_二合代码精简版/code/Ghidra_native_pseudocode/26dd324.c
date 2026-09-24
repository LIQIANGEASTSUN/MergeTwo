
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ed324(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026ed3c4 + 0x26ed33c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ed3c8 + 0x26ed350));
    func_0x01438628(*(undefined4 *)(_UNK_026ed3cc + 0x26ed35c));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x40) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026ed3d0 + 0x26ed37c);
  *(char *)(param_1 + 0x40) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026ed3d4 + 0x26ed39c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

