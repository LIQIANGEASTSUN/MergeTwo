
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_032e66c8(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_032e6754 + 0x32e66e0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e6758 + 0x32e66f4));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x04cd26d0(iVar3,0,**(undefined4 **)(_UNK_032e675c + 0x32e673c));
  return iVar1 == iVar3;
}

