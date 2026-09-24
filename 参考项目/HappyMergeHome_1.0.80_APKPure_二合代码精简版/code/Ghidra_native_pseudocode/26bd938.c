
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026cd938(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026cd9ec + 0x26cd954);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026cd9f0 + 0x26cd968));
    func_0x01438628(*(undefined4 *)(_UNK_026cd9f4 + 0x26cd974));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x28) != param_3 || *(int *)(param_1 + 0x2c) != param_4) {
    piVar1 = *(int **)(_UNK_026cd9f8 + 0x26cd9a0);
    *(int *)(param_1 + 0x28) = param_3;
    *(int *)(param_1 + 0x2c) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026cd9fc + 0x26cd9c4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

