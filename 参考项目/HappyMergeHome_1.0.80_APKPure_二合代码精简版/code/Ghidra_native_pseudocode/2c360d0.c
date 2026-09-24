
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c460d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_02c461c8 + 0x2c460e8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c461cc + 0x2c460fc));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024ef308(param_2,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x024ef308(iVar3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024ef854(iVar1,uVar2,0);
  if (param_2 == 0) {
    func_0x014388e4();
    func_0x03639cdc(0,**(undefined4 **)(_UNK_02c461d4 + 0x2c4618c));
    func_0x014388e4();
  }
  else {
    func_0x03639cdc(param_2,**(undefined4 **)(_UNK_02c461d0 + 0x2c46170));
  }
  iVar1 = func_0x024f0ef8(param_2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

