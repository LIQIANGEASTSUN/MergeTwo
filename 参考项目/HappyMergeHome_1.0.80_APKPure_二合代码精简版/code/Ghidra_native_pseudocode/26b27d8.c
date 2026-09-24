
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026c27d8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026c288c + 0x26c27f4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026c2890 + 0x26c2808));
    func_0x01438628(*(undefined4 *)(_UNK_026c2894 + 0x26c2814));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) != param_3 || *(int *)(param_1 + 0x14) != param_4) {
    piVar1 = *(int **)(_UNK_026c2898 + 0x26c2840);
    *(int *)(param_1 + 0x10) = param_3;
    *(int *)(param_1 + 0x14) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026c289c + 0x26c2864));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

