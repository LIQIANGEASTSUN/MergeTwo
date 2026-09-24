
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_016fa9a0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_016faa2c + 0x16fa9b8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016faa30 + 0x16fa9cc));
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
  iVar3 = func_0x024f0530(iVar3,0,**(undefined4 **)(_UNK_016faa34 + 0x16faa14));
  return iVar1 == iVar3;
}

