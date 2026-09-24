
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0168d670(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_0168d6fc + 0x168d688);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168d700 + 0x168d69c));
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
  iVar3 = func_0x024f0530(iVar3,0,**(undefined4 **)(_UNK_0168d704 + 0x168d6e4));
  return iVar1 == iVar3;
}

