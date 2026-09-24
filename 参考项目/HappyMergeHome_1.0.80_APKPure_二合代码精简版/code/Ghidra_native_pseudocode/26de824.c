
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026ee824(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026ee8c4 + 0x26ee83c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ee8c8 + 0x26ee850));
    func_0x01438628(*(undefined4 *)(_UNK_026ee8cc + 0x26ee85c));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x41) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026ee8d0 + 0x26ee87c);
  *(char *)(param_1 + 0x41) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026ee8d4 + 0x26ee89c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

