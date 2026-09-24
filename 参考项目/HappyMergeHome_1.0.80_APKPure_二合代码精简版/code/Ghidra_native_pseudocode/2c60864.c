
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c70864(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02c70994 + 0x2c70884);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c70998 + 0x2c70898));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x601b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,1,0);
    func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02c7099c + 0x2c70980),0,0x3f800000,0);
  }
  else {
    iVar1 = func_0x029540a4(0x601b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

