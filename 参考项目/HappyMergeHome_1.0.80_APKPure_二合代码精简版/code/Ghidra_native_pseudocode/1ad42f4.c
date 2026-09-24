
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae42f4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01ae43cc + 0x1ae430c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae43d0 + 0x1ae4320));
    func_0x01438628(*(undefined4 *)(_UNK_01ae43d4 + 0x1ae432c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae43d8 + 0x1ae4338));
    *pcVar3 = '\x01';
  }
  piVar1 = *(int **)(_UNK_01ae43dc + 0x1ae4350);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x029f4038(param_1,0);
  uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01ae43e0 + 0x1ae4380));
  func_0x0152e3ec(uVar2,param_1,**(undefined4 **)(_UNK_01ae43e4 + 0x1ae439c),0);
  func_0x02e596a8(0x3f800000,uVar2,0,1,0,0,0);
  return;
}

