
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3531c(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(_UNK_02c353c4 + 0x2c35330);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c353c8 + 0x2c35344));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014e94d8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar2,0,0);
  iVar2 = func_0x03633ce4(*(undefined4 *)(param_1 + 0x44),0,
                          **(undefined4 **)(_UNK_02c353cc + 0x2c35398));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_0600faf8)(iVar2,0x3f800000,0);
  return;
}

