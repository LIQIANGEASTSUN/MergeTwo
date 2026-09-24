
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02c38acc(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)(_UNK_02c38b78 + 0x2c38ae4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c38b7c + 0x2c38af8));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = FUN_02baef1c(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x03b7661c(iVar3,uVar1,**(undefined4 **)(_UNK_02c38b80 + 0x2c38b60));
  return iVar4 == iVar3;
}

