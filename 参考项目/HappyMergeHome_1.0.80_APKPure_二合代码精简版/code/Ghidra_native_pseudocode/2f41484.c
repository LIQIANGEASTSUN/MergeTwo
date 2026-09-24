
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f51484(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_02f515c4 + 0x2f5149c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f515c8 + 0x2f514b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f515cc + 0x2f514bc));
    func_0x01438628(*(undefined4 *)(_UNK_02f515d0 + 0x2f514c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f515d4 + 0x2f514d4));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x6e2c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f515d8 + 0x2f51534) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f515dc + 0x2f51550));
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
      uVar3 = FUN_02f503ac(param_1);
      iVar2 = FUN_02f512dc(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_02f515e0 + 0x2f515b0));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6e2c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02914b40(iVar1,param_1,0);
  }
  return iVar2;
}

