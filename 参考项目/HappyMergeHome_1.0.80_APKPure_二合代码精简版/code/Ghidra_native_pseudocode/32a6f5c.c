
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b6f5c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_032b709c + 0x32b6f74);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b70a0 + 0x32b6f88));
    func_0x01438628(*(undefined4 *)(_UNK_032b70a4 + 0x32b6f94));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032b70a8 + 0x32b6fa8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032b70ac + 0x32b6fc4));
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x032b70b0(iVar3);
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

