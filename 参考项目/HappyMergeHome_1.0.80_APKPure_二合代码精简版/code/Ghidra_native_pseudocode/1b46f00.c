
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b56f00(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01b56fd0 + 0x1b56f18);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b56fd4 + 0x1b56f2c));
    func_0x01438628(*(undefined4 *)(_UNK_01b56fd8 + 0x1b56f38));
    func_0x01438628(*(undefined4 *)(_UNK_01b56fdc + 0x1b56f44));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01b56fe0 + 0x1b56f58) + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x029f4038(param_1,0);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b56fe4 + 0x1b56f84));
  func_0x0152e3ec(uVar1,param_1,**(undefined4 **)(_UNK_01b56fe8 + 0x1b56fa0),0);
  func_0x02e596a8(0x3f800000,uVar1,0,1,0,0,0);
  return;
}

