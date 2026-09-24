
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ef7d8(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026ef878 + 0x26ef7f0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ef87c + 0x26ef804));
    func_0x01438628(*(undefined4 *)(_UNK_026ef880 + 0x26ef810));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x40) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026ef884 + 0x26ef830);
  *(char *)(param_1 + 0x40) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026ef888 + 0x26ef850));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

