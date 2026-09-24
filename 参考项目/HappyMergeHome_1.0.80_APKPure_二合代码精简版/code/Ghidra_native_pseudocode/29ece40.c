
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fce40(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_029fce98 + 0x29fce54);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fce9c + 0x29fce68));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_029fcea0 + 0x29fce7c) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar1 = (char *)(_UNK_029f4090 + 0x29f404c);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029f4094 + 0x29f4060));
    *pcVar1 = '\x01';
  }
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(_UNK_029f4098 + 0x29f4074);
  func_0x014385cc();
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

