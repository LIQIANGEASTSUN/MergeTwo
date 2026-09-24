
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03151c0c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_03151d4c + 0x3151c24);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03151d50 + 0x3151c38));
    func_0x01438628(*(undefined4 *)(_UNK_03151d54 + 0x3151c44));
    func_0x01438628(*(undefined4 *)(_UNK_03151d58 + 0x3151c50));
    func_0x01438628(*(undefined4 *)(_UNK_03151d5c + 0x3151c5c));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x7a3f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03151d60 + 0x3151cbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03151d64 + 0x3151cd8));
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
      uVar3 = FUN_03150c90(param_1);
      iVar2 = FUN_03151a64(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_03151d68 + 0x3151d38));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7a3f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291b810(iVar1,param_1,0);
  }
  return iVar2;
}

