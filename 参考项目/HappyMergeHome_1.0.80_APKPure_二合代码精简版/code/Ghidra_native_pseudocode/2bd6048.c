
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02be6048(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02be6118 + 0x2be6068);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be611c + 0x2be607c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d24,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x84);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x046c2c44(iVar1,param_3,
                              *(undefined4 *)
                               (*(int *)(*(int *)(**(int **)(_UNK_02be6120 + 0x2be60fc) + 0x10) +
                                        0x60) + 0x84));
      return ~uVar2 >> 0x1f;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x5d24,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286c924(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

