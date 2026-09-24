
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aeae3c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int unaff_r6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_01aeaf38 + 0x1aeae54);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeaf3c + 0x1aeae68));
    func_0x01438628(*(undefined4 *)(_UNK_01aeaf40 + 0x1aeae74));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0xa4b1,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01ae9a14(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
      unaff_r6 = iVar2;
    }
    if (iVar2 != 0 && iVar1 != 0) {
      uVar3 = FUN_01ae9aec(param_1);
      iVar5 = FUN_01aeacf0(param_1,uVar3,&uStack_11);
      if (iVar5 == 0) {
        iVar5 = func_0x0152983c(unaff_r6,*(int *)(unaff_r6 + 0xc) + -1,
                                **(undefined4 **)(_UNK_01aeaf44 + 0x1aeaf24));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xa4b1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02933b84(iVar1,param_1,0);
  }
  return iVar5;
}

