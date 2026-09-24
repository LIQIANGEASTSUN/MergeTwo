
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f121c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f12bc + 0x26f1234);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f12c0 + 0x26f1248));
    func_0x01438628(*(undefined4 *)(_UNK_026f12c4 + 0x26f1254));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x5c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f12c8 + 0x26f1274);
  *(int *)(param_1 + 0x5c) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f12cc + 0x26f1294));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

