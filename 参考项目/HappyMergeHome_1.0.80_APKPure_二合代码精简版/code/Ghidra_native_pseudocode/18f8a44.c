
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01908a44(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01908b88 + 0x1908a5c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01908b8c + 0x1908a70));
    func_0x01438628(*(undefined4 *)(_UNK_01908b90 + 0x1908a7c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01908b94 + 0x1908a90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01908b98 + 0x1908aac));
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x01914f3c(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x024ef228(&uStack_2c,iVar3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uStack_2c,uStack_28,uStack_24,1,0xffffffff,0xffffffff,0);
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

