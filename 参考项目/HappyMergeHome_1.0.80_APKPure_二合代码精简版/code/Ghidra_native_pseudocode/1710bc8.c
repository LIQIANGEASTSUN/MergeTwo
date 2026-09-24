
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01720bc8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_01720d08 + 0x1720be0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01720d0c + 0x1720bf4));
    func_0x01438628(*(undefined4 *)(_UNK_01720d10 + 0x1720c00));
    func_0x01438628(*(undefined4 *)(_UNK_01720d14 + 0x1720c0c));
    func_0x01438628(*(undefined4 *)(_UNK_01720d18 + 0x1720c18));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x8ba0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01720d1c + 0x1720c78) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01720d20 + 0x1720c94));
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
      uVar3 = FUN_0171f7f0(param_1);
      iVar2 = FUN_01720a20(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_01720d24 + 0x1720cf4));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8ba0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02924ba8(iVar1,param_1,0);
  }
  return iVar2;
}

