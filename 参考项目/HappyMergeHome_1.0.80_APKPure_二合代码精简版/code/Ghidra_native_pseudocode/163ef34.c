
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0164ef34(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_0164f074 + 0x164ef4c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164f078 + 0x164ef60));
    func_0x01438628(*(undefined4 *)(_UNK_0164f07c + 0x164ef6c));
    func_0x01438628(*(undefined4 *)(_UNK_0164f080 + 0x164ef78));
    func_0x01438628(*(undefined4 *)(_UNK_0164f084 + 0x164ef84));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x8644,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0164f088 + 0x164efe4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0164f08c + 0x164f000));
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
      uVar3 = FUN_0164de5c(param_1);
      iVar2 = FUN_0164ed8c(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_0164f090 + 0x164f060));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8644,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02921dac(iVar1,param_1,0);
  }
  return iVar2;
}

