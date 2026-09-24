
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c387d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02c38810 + 0x2c387ec);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c38814 + 0x2c38800));
    *pcVar1 = '\x01';
  }
  return param_3;
}

