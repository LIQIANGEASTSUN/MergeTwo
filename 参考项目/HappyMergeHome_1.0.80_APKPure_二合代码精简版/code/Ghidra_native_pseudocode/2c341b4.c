
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c441b4(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)(_UNK_02c44264 + 0x2c441c8);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c44268 + 0x2c441dc));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02bf6cf8(iVar2,uVar3,0);
  if (*(int *)(**(int **)(_UNK_02c4426c + 0x2c44214) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x018f5b04(0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x018f901c(iVar2,0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(undefined1 *)(iVar2 + 0xa8) = 0;
  return;
}

