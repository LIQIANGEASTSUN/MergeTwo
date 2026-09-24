
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f6fcc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f706c + 0x26f6fe4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f7070 + 0x26f6ff8));
    func_0x01438628(*(undefined4 *)(_UNK_026f7074 + 0x26f7004));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x2c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f7078 + 0x26f7024);
  *(int *)(param_1 + 0x2c) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f707c + 0x26f7044));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

