
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01688bc4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_01688d04 + 0x1688bdc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01688d08 + 0x1688bf0));
    func_0x01438628(*(undefined4 *)(_UNK_01688d0c + 0x1688bfc));
    func_0x01438628(*(undefined4 *)(_UNK_01688d10 + 0x1688c08));
    func_0x01438628(*(undefined4 *)(_UNK_01688d14 + 0x1688c14));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x87bb,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01688d18 + 0x1688c74) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01688d1c + 0x1688c90));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x2c);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_016877ec(param_1);
      iVar2 = FUN_01688a1c(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_01688d20 + 0x1688cf0));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x87bb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02922b5c(iVar1,param_1,0);
  }
  return iVar2;
}

