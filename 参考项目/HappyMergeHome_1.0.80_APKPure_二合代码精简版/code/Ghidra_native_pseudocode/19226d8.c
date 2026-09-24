
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019326d8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_01932818 + 0x19326f0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0193281c + 0x1932704));
    func_0x01438628(*(undefined4 *)(_UNK_01932820 + 0x1932710));
    func_0x01438628(*(undefined4 *)(_UNK_01932824 + 0x193271c));
    func_0x01438628(*(undefined4 *)(_UNK_01932828 + 0x1932728));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x97be,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0193282c + 0x1932788) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01932830 + 0x19327a4));
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
      uVar3 = FUN_01931300(param_1);
      iVar2 = FUN_01932530(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_01932834 + 0x1932804));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x97be,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0292af20(iVar1,param_1,0);
  }
  return iVar2;
}

