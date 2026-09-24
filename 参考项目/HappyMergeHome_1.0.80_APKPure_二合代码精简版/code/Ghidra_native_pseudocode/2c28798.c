
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c38798(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02c387d0 + 0x2c387ac);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c387d4 + 0x2c387c0));
    *pcVar1 = '\x01';
  }
  return param_2;
}

