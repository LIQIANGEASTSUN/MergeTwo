
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ee440(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026ee4f4 + 0x26ee45c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ee4f8 + 0x26ee470));
    func_0x01438628(*(undefined4 *)(_UNK_026ee4fc + 0x26ee47c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) != param_3 || *(int *)(param_1 + 0x24) != param_4) {
    piVar1 = *(int **)(_UNK_026ee500 + 0x26ee4a8);
    *(int *)(param_1 + 0x20) = param_3;
    *(int *)(param_1 + 0x24) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026ee504 + 0x26ee4cc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

