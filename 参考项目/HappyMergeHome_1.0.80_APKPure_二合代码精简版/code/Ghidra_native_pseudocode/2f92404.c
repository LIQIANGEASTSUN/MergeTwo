
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fa2404(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_02fa2544 + 0x2fa241c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa2548 + 0x2fa2430));
    func_0x01438628(*(undefined4 *)(_UNK_02fa254c + 0x2fa243c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2550 + 0x2fa2448));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2554 + 0x2fa2454));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x6fa4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fa2558 + 0x2fa24b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa255c + 0x2fa24d0));
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
      uVar3 = FUN_02fa102c(param_1);
      iVar2 = FUN_02fa225c(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_02fa2560 + 0x2fa2530));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6fa4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02915b44(iVar1,param_1,0);
  }
  return iVar2;
}

