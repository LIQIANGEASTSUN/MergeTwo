
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031e6a20(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_031e6af0 + 0x31e6a38);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e6af4 + 0x31e6a4c));
    func_0x01438628(*(undefined4 *)(_UNK_031e6af8 + 0x31e6a58));
    func_0x01438628(*(undefined4 *)(_UNK_031e6afc + 0x31e6a64));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_031e6b00 + 0x31e6a78) + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x029f4038(param_1,0);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031e6b04 + 0x31e6aa4));
  func_0x05096384(uVar1,param_1,**(undefined4 **)(_UNK_031e6b08 + 0x31e6ac0),0);
  func_0x02e596a8(0x3f800000,uVar1,0,1,0,0,0);
  return;
}

