
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f2120(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f21c0 + 0x26f2138);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f21c4 + 0x26f214c));
    func_0x01438628(*(undefined4 *)(_UNK_026f21c8 + 0x26f2158));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x60) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f21cc + 0x26f2178);
  *(char *)(param_1 + 0x60) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f21d0 + 0x26f2198));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

