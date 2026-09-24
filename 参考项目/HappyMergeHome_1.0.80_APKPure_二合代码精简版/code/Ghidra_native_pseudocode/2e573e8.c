
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e673e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02e67498 + 0x2e67404);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e6749c + 0x2e67418));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b0,0);
  if (iVar1 == 0) {
    uStack_14 = param_2;
    uVar2 = func_0x01524ffc(&uStack_14,0);
    func_0x014e9568(**(undefined4 **)(_UNK_02e674a0 + 0x2e6748c),uVar2,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02873f18(iVar1,param_1,param_2,0);
  }
  return;
}

