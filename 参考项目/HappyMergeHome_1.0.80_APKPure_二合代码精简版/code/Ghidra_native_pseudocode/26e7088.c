
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f7088(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f713c + 0x26f70a4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f7140 + 0x26f70b8));
    func_0x01438628(*(undefined4 *)(_UNK_026f7144 + 0x26f70c4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x30) != param_3 || *(int *)(param_1 + 0x34) != param_4) {
    piVar1 = *(int **)(_UNK_026f7148 + 0x26f70f0);
    *(int *)(param_1 + 0x30) = param_3;
    *(int *)(param_1 + 0x34) = param_4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f714c + 0x26f7114));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar2 + 0x60);
    *(uint *)(iVar2 + 0x60) = uVar3 + 1;
    *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  }
  return;
}

