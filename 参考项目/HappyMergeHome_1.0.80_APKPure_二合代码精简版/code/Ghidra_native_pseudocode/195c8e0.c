
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0196c8e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_0196ca20 + 0x196c8f8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196ca24 + 0x196c90c));
    func_0x01438628(*(undefined4 *)(_UNK_0196ca28 + 0x196c918));
    func_0x01438628(*(undefined4 *)(_UNK_0196ca2c + 0x196c924));
    func_0x01438628(*(undefined4 *)(_UNK_0196ca30 + 0x196c930));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x9949,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0196ca34 + 0x196c990) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0196ca38 + 0x196c9ac));
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
      uVar3 = FUN_0196b808(param_1);
      iVar2 = FUN_0196c738(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_0196ca3c + 0x196ca0c));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x9949,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0292bbc8(iVar1,param_1,0);
  }
  return iVar2;
}

