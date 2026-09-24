
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f6014(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f60b4 + 0x26f602c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f60b8 + 0x26f6040));
    func_0x01438628(*(undefined4 *)(_UNK_026f60bc + 0x26f604c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f60c0 + 0x26f606c);
  *(int *)(param_1 + 0x18) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f60c4 + 0x26f608c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

