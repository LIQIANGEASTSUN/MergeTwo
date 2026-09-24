
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2d774(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02f2d808 + 0x2f2d788);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2d80c + 0x2f2d79c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d810 + 0x2f2d7a8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02f2d814 + 0x2f2d7bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2d818 + 0x2f2d7d8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,0xf,0);
  *(undefined1 *)(param_1 + 0x52) = 1;
  return;
}

