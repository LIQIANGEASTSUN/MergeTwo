
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02be3c9c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02be3e18 + 0x2be3cb4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be3e1c + 0x2be3cc8));
    func_0x01438628(*(undefined4 *)(_UNK_02be3e20 + 0x2be3cd4));
    func_0x01438628(*(undefined4 *)(_UNK_02be3e24 + 0x2be3ce0));
    func_0x01438628(*(undefined4 *)(_UNK_02be3e28 + 0x2be3cec));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0x500b,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02be3e2c + 0x2be3d4c);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar4;
    }
    iVar2 = *(int *)(iVar1 + 0x5c);
    if (*(char *)(iVar2 + 0x10) == '\0') {
      if (*(int *)(**(int **)(_UNK_02be3e34 + 0x2be3dd4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be3e38 + 0x2be3df0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_14 = FUN_02bde358(iVar1,param_1);
    }
    else {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *(int *)(*piVar4 + 0x5c);
      }
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0471d874(iVar1,param_1,&uStack_14,**(undefined4 **)(_UNK_02be3e30 + 0x2be3dac))
      ;
      if (iVar1 == 0) {
        uStack_14 = 0xffffffff;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x500b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = func_0x028e8dc8(iVar1,param_1,0);
  }
  return uStack_14;
}

