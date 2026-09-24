
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c6c224(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01c6c2fc + 0x1c6c240);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c6c300 + 0x1c6c254));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0xad03,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f064c(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01c6c304 + 0x1c6c2e8));
  }
  else {
    iVar1 = func_0x029540a4(0xad03,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = func_0x02936728(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}

