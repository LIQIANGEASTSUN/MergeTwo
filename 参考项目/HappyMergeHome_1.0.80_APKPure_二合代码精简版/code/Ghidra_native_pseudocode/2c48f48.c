
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c58f48(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02c58f84 + 0x2c58f58);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c58f88 + 0x2c58f6c));
    *pcVar1 = '\x01';
  }
  return **(undefined4 **)(_UNK_02c58f8c + 0x2c58f80);
}

