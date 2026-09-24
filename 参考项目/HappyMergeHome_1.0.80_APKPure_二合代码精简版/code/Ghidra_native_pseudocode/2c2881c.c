
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c3881c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02c3886c + 0x2c3882c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c38870 + 0x2c38840));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c38874 + 0x2c38854));
  FUN_026f7e40(uVar1,0);
  return uVar1;
}

