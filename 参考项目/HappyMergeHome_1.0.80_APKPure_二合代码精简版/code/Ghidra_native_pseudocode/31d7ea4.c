
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031e7ea4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_031e807c + 0x31e7ec4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e8080 + 0x31e7edc));
    func_0x01438628(*(undefined4 *)(_UNK_031e8084 + 0x31e7ee8));
    func_0x01438628(*(undefined4 *)(_UNK_031e8088 + 0x31e7ef4));
    func_0x01438628(*(undefined4 *)(_UNK_031e808c + 0x31e7f00));
    func_0x01438628(*(undefined4 *)(_UNK_031e8090 + 0x31e7f0c));
    func_0x01438628(*(undefined4 *)(_UNK_031e8094 + 0x31e7f18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3307,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031e8098 + 0x31e7f84));
    func_0x051b0d14(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 8),param_2);
    iVar2 = FUN_031e67bc(param_1);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_031e809c + 0x31e7fcc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031e80a0 + 0x31e7fe8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x24);
      uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031e80a4 + 0x31e8008));
      func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_031e80a8 + 0x31e8028),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x04cfe1c0(iVar2,uVar3,**(undefined4 **)(_UNK_031e80ac + 0x31e804c));
      if (iVar1 != 0) {
        func_0x031e80b8(param_1,*(undefined4 *)(iVar1 + 0xc),param_3,param_4,param_5);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3307,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869c88(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

