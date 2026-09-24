
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ef580(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026ef634 + 0x26ef59c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ef638 + 0x26ef5b0));
    func_0x01438628(*(undefined4 *)(_UNK_026ef63c + 0x26ef5bc));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x28) != param_3 || *(int *)(param_1 + 0x2c) != param_4) {
    piVar1 = *(int **)(_UNK_026ef640 + 0x26ef5e8);
    *(int *)(param_1 + 0x28) = param_3;
    *(int *)(param_1 + 0x2c) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026ef644 + 0x26ef60c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

