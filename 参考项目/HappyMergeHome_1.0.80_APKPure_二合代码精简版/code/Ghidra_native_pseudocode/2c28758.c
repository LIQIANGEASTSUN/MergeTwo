
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c38758(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02c38790 + 0x2c3876c);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c38794 + 0x2c38780));
    *pcVar1 = '\x01';
  }
  return param_2;
}

