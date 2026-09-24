
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3f424(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02c3f4a0 + 0x2c3f438);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3f4a4 + 0x2c3f44c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f4a8 + 0x2c3f458));
    *pcVar2 = '\x01';
  }
  piVar1 = *(int **)(_UNK_02c3f4ac + 0x2c3f470);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  return param_1;
}

