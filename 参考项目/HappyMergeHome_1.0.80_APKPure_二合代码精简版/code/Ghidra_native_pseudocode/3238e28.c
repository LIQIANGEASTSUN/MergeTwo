
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03248e28(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_03248f68 + 0x3248e40);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03248f6c + 0x3248e54));
    func_0x01438628(*(undefined4 *)(_UNK_03248f70 + 0x3248e60));
    func_0x01438628(*(undefined4 *)(_UNK_03248f74 + 0x3248e6c));
    func_0x01438628(*(undefined4 *)(_UNK_03248f78 + 0x3248e78));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x8006,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03248f7c + 0x3248ed8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03248f80 + 0x3248ef4));
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
      uVar3 = FUN_03247d48(param_1);
      iVar2 = FUN_03248c80(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_03248f84 + 0x3248f54));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8006,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291ebb8(iVar1,param_1,0);
  }
  return iVar2;
}

