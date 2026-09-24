
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0269ed28(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0269edc8 + 0x269ed40);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0269edcc + 0x269ed54));
    func_0x01438628(*(undefined4 *)(_UNK_0269edd0 + 0x269ed60));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x44) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_0269edd4 + 0x269ed80);
  *(int *)(param_1 + 0x44) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0269edd8 + 0x269eda0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

