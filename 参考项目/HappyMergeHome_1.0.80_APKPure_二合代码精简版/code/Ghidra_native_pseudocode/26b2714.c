
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026c2714(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026c27b4 + 0x26c272c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026c27b8 + 0x26c2740));
    func_0x01438628(*(undefined4 *)(_UNK_026c27bc + 0x26c274c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026c27c0 + 0x26c276c);
  *(int *)(param_1 + 8) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026c27c4 + 0x26c278c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

