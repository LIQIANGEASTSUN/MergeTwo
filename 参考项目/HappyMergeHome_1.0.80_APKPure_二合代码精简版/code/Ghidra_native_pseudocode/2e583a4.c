
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e683a4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02e683ec + 0x2e683b8);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e683f0 + 0x2e683cc));
    *pcVar1 = '\x01';
  }
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)0x51b0d14)(param_1,0);
  return;
}

