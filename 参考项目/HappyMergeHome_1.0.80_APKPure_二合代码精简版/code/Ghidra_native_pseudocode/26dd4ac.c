
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ed4ac(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026ed560 + 0x26ed4c8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ed564 + 0x26ed4dc));
    func_0x01438628(*(undefined4 *)(_UNK_026ed568 + 0x26ed4e8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x50) != param_3 || *(int *)(param_1 + 0x54) != param_4) {
    piVar1 = *(int **)(_UNK_026ed56c + 0x26ed514);
    *(int *)(param_1 + 0x50) = param_3;
    *(int *)(param_1 + 0x54) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026ed570 + 0x26ed538));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

