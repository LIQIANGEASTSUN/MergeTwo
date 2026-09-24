
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e3a1c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_017e3b60 + 0x17e3a34);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e3b64 + 0x17e3a48));
    func_0x01438628(*(undefined4 *)(_UNK_017e3b68 + 0x17e3a54));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017e3b6c + 0x17e3a68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017e3b70 + 0x17e3a84));
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x017efb08(iVar3,0);
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

