
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016c32e8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_016c3428 + 0x16c3300);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c342c + 0x16c3314));
    func_0x01438628(*(undefined4 *)(_UNK_016c3430 + 0x16c3320));
    func_0x01438628(*(undefined4 *)(_UNK_016c3434 + 0x16c332c));
    func_0x01438628(*(undefined4 *)(_UNK_016c3438 + 0x16c3338));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x8948,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016c343c + 0x16c3398) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016c3440 + 0x16c33b4));
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
      uVar3 = FUN_016c2210(param_1);
      iVar2 = FUN_016c3140(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_016c3444 + 0x16c3414));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8948,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02923804(iVar1,param_1,0);
  }
  return iVar2;
}

