
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c85da4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01c85f80 + 0x1c85dc4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c85f84 + 0x1c85ddc));
    func_0x01438628(*(undefined4 *)(_UNK_01c85f88 + 0x1c85de8));
    func_0x01438628(*(undefined4 *)(_UNK_01c85f8c + 0x1c85df4));
    func_0x01438628(*(undefined4 *)(_UNK_01c85f90 + 0x1c85e00));
    func_0x01438628(*(undefined4 *)(_UNK_01c85f94 + 0x1c85e0c));
    func_0x01438628(*(undefined4 *)(_UNK_01c85f98 + 0x1c85e18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1d9a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c85f9c + 0x1c85e8c));
    func_0x01c88214(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar2 = FUN_01c81224(param_1);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01c85fa0 + 0x1c85ec8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01c85fa4 + 0x1c85ee4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c85fa8 + 0x1c85f04));
      func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_01c85fac + 0x1c85f24),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0618(iVar2,uVar3,**(undefined4 **)(_UNK_01c85fb0 + 0x1c85f48));
      if (iVar1 != 0) {
        FUN_01c85744(param_1,*(undefined4 *)(iVar1 + 0xc),param_3,param_4,param_5,1);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x1d9a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

