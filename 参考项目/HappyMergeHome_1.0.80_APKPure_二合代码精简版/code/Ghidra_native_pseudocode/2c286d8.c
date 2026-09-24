
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c386d8(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02c38710 + 0x2c386ec);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c38714 + 0x2c38700));
    *pcVar1 = '\x01';
  }
  return param_2;
}

