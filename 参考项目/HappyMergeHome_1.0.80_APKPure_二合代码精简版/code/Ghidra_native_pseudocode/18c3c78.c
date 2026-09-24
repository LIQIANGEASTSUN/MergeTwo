
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_018d3c78(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_018d3d04 + 0x18d3c90);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018d3d08 + 0x18d3ca4));
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
  iVar3 = func_0x024f0530(iVar3,0,**(undefined4 **)(_UNK_018d3d0c + 0x18d3cec));
  return iVar1 == iVar3;
}

