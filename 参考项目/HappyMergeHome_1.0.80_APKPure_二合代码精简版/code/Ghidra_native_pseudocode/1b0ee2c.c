
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1ee2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01b1f008 + 0x1b1ee4c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1f00c + 0x1b1ee64));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f010 + 0x1b1ee70));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f014 + 0x1b1ee7c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f018 + 0x1b1ee88));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f01c + 0x1b1ee94));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f020 + 0x1b1eea0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3833,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1f024 + 0x1b1ef0c));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 8),param_2);
    iVar2 = FUN_01b1e048(param_1,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01b1f028 + 0x1b1ef58) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b1f02c + 0x1b1ef74));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01b1f030 + 0x1b1ef94));
      func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_01b1f034 + 0x1b1efb4),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0618(iVar2,uVar3,**(undefined4 **)(_UNK_01b1f038 + 0x1b1efd8));
      if (iVar1 != 0) {
        func_0x01b1f044(param_1,*(undefined4 *)(iVar1 + 0xc),param_3,param_4,param_5);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3833,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869c88(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

