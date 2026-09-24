
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ef960(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026efa14 + 0x26ef97c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026efa18 + 0x26ef990));
    func_0x01438628(*(undefined4 *)(_UNK_026efa1c + 0x26ef99c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x50) != param_3 || *(int *)(param_1 + 0x54) != param_4) {
    piVar1 = *(int **)(_UNK_026efa20 + 0x26ef9c8);
    *(int *)(param_1 + 0x50) = param_3;
    *(int *)(param_1 + 0x54) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026efa24 + 0x26ef9ec));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

