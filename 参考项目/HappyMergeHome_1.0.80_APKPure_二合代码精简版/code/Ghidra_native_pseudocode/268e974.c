
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0269e974(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0269ea14 + 0x269e98c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0269ea18 + 0x269e9a0));
    func_0x01438628(*(undefined4 *)(_UNK_0269ea1c + 0x269e9ac));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x2c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_0269ea20 + 0x269e9cc);
  *(int *)(param_1 + 0x2c) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0269ea24 + 0x269e9ec));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

