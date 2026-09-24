
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030160f8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_03016238 + 0x3016110);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0301623c + 0x3016124));
    func_0x01438628(*(undefined4 *)(_UNK_03016240 + 0x3016130));
    func_0x01438628(*(undefined4 *)(_UNK_03016244 + 0x301613c));
    func_0x01438628(*(undefined4 *)(_UNK_03016248 + 0x3016148));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x72a5,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0301624c + 0x30161a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03016250 + 0x30161c4));
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
      uVar3 = FUN_03014d20(param_1);
      iVar2 = FUN_03015f50(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_03016254 + 0x3016224));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x72a5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291759c(iVar1,param_1,0);
  }
  return iVar2;
}

