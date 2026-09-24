
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f6e40(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f6ef4 + 0x26f6e5c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f6ef8 + 0x26f6e70));
    func_0x01438628(*(undefined4 *)(_UNK_026f6efc + 0x26f6e7c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) != param_3 || *(int *)(param_1 + 0x24) != param_4) {
    piVar1 = *(int **)(_UNK_026f6f00 + 0x26f6ea8);
    *(int *)(param_1 + 0x20) = param_3;
    *(int *)(param_1 + 0x24) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f6f04 + 0x26f6ecc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

