
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c58fd8(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02c59014 + 0x2c58fe8);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c59018 + 0x2c58ffc));
    *pcVar1 = '\x01';
  }
  return **(undefined4 **)(_UNK_02c5901c + 0x2c59010);
}

