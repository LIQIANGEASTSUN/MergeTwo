
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026eefcc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026ef06c + 0x26eefe4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ef070 + 0x26eeff8));
    func_0x01438628(*(undefined4 *)(_UNK_026ef074 + 0x26ef004));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x8c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026ef078 + 0x26ef024);
  *(int *)(param_1 + 0x8c) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026ef07c + 0x26ef044));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

