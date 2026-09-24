
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b49680(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02b497a0 + 0x2b49698);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b497a4 + 0x2b496ac));
    func_0x01438628(*(undefined4 *)(_UNK_02b497a8 + 0x2b496b8));
    func_0x01438628(*(undefined4 *)(_UNK_02b497ac + 0x2b496c4));
    func_0x01438628(*(undefined4 *)(_UNK_02b497b0 + 0x2b496d0));
    func_0x01438628(*(undefined4 *)(_UNK_02b497b4 + 0x2b496dc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b497b8 + 0x2b496f0));
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_02b497bc + 0x2b49704));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x50),uVar1);
  if (*(int *)(**(int **)(_UNK_02b497c0 + 0x2b49728) + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x029f4038(param_1,0);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b497c4 + 0x2b49754));
  func_0x0152e3ec(uVar1,param_1,**(undefined4 **)(_UNK_02b497c8 + 0x2b49770),0);
  func_0x02e596a8(0x3f800000,uVar1,0,1,0,0,0);
  return;
}

