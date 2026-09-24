
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01846e2c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_01846f6c + 0x1846e44);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01846f70 + 0x1846e58));
    func_0x01438628(*(undefined4 *)(_UNK_01846f74 + 0x1846e64));
    func_0x01438628(*(undefined4 *)(_UNK_01846f78 + 0x1846e70));
    func_0x01438628(*(undefined4 *)(_UNK_01846f7c + 0x1846e7c));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x926c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01846f80 + 0x1846edc) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01846f84 + 0x1846ef8));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x38);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_01845d54(param_1);
      iVar2 = FUN_01846c84(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_01846f88 + 0x1846f58));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x926c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02928334(iVar1,param_1,0);
  }
  return iVar2;
}

