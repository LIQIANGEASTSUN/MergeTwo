
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0323d444(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0323d6fc + 0x323d45c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323d700 + 0x323d470));
    func_0x01438628(*(undefined4 *)(_UNK_0323d704 + 0x323d47c));
    func_0x01438628(*(undefined4 *)(_UNK_0323d708 + 0x323d488));
    func_0x01438628(*(undefined4 *)(_UNK_0323d70c + 0x323d494));
    func_0x01438628(*(undefined4 *)(_UNK_0323d710 + 0x323d4a0));
    func_0x01438628(*(undefined4 *)(_UNK_0323d714 + 0x323d4ac));
    func_0x01438628(*(undefined4 *)(_UNK_0323d718 + 0x323d4b8));
    func_0x01438628(*(undefined4 *)(_UNK_0323d71c + 0x323d4c4));
    func_0x01438628(*(undefined4 *)(_UNK_0323d720 + 0x323d4d0));
    func_0x01438628(*(undefined4 *)(_UNK_0323d724 + 0x323d4dc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7fd8,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0323d728 + 0x323d54c));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0323d72c + 0x323d560));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0323d730 + 0x323d584) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0323d734 + 0x323d5a0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e3558(iVar1,**(undefined4 **)(_UNK_0323d738 + 0x323d5c0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0323d73c + 0x323d5ec));
      puVar5 = *(undefined4 **)(_UNK_0323d740 + 0x323d600);
      puVar7 = *(undefined4 **)(_UNK_0323d744 + 0x323d608);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0323d748 + 0x323d660));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7fd8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291e76c(iVar1,param_1,0);
  }
  return iVar1;
}

