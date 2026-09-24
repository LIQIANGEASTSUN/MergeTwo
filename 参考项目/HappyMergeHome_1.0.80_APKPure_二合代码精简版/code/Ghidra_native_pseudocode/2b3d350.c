
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4d350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_02b4d52c + 0x2b4d370);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4d530 + 0x2b4d388));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d534 + 0x2b4d394));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d538 + 0x2b4d3a0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d53c + 0x2b4d3ac));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d540 + 0x2b4d3b8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d544 + 0x2b4d3c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2ef4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4d548 + 0x2b4d430));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 8),param_2);
    iVar2 = FUN_02b4c698(param_1,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02b4d54c + 0x2b4d47c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b4d550 + 0x2b4d498));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x28);
      uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02b4d554 + 0x2b4d4b8));
      func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_02b4d558 + 0x2b4d4d8),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0618(iVar2,uVar3,**(undefined4 **)(_UNK_02b4d55c + 0x2b4d4fc));
      if (iVar1 != 0) {
        func_0x02b4d568(param_1,*(undefined4 *)(iVar1 + 0xc),param_3,param_4,param_5);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2ef4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869c88(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

