
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_030e3bc8(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_030e3c54 + 0x30e3be0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e3c58 + 0x30e3bf4));
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
  iVar3 = func_0x04cd26d0(iVar3,0,**(undefined4 **)(_UNK_030e3c5c + 0x30e3c3c));
  return iVar1 == iVar3;
}

