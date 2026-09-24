
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c58f90(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02c58fcc + 0x2c58fa0);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c58fd0 + 0x2c58fb4));
    *pcVar1 = '\x01';
  }
  return **(undefined4 **)(_UNK_02c58fd4 + 0x2c58fc8);
}

