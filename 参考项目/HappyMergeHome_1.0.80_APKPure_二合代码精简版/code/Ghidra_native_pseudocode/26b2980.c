
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026c2980(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026c2a20 + 0x26c2998);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026c2a24 + 0x26c29ac));
    func_0x01438628(*(undefined4 *)(_UNK_026c2a28 + 0x26c29b8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026c2a2c + 0x26c29d8);
  *(int *)(param_1 + 0x24) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026c2a30 + 0x26c29f8));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

