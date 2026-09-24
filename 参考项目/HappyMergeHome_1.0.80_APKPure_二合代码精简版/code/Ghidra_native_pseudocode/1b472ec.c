
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b572ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01b573c8 + 0x1b57304);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b573cc + 0x1b57318));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0x607,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01523adc(*(undefined4 *)(param_1 + 0x10),0);
    uVar2 = 0;
    if (iVar1 == 0) {
      iVar1 = FUN_01b57128();
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024eee78(iVar1,uVar2,&uStack_14,**(undefined4 **)(_UNK_01b573d0 + 0x1b573b0));
      uVar2 = uStack_14;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x607,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0287ec80(iVar1,param_1,0);
  }
  return uVar2;
}

