
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a02a80(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02a02af0 + 0x2a02a98);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a02af4 + 0x2a02aac));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cd2d7c)(iVar1,uVar2,**(undefined4 **)(_UNK_02a02af8 + 0x2a02ae4));
  return;
}

