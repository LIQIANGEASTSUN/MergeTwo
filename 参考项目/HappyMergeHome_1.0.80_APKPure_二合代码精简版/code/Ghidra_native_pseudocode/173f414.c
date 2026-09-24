
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0174f414(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0174f6cc + 0x174f42c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174f6d0 + 0x174f440));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6d4 + 0x174f44c));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6d8 + 0x174f458));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6dc + 0x174f464));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6e0 + 0x174f470));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6e4 + 0x174f47c));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6e8 + 0x174f488));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6ec + 0x174f494));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6f0 + 0x174f4a0));
    func_0x01438628(*(undefined4 *)(_UNK_0174f6f4 + 0x174f4ac));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8cfd,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0174f6f8 + 0x174f51c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0174f6fc + 0x174f530));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0174f700 + 0x174f554) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0174f704 + 0x174f570));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dc6f8(iVar1,**(undefined4 **)(_UNK_0174f708 + 0x174f590));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0174f70c + 0x174f5bc));
      puVar5 = *(undefined4 **)(_UNK_0174f710 + 0x174f5d0);
      puVar7 = *(undefined4 **)(_UNK_0174f714 + 0x174f5d8);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0174f718 + 0x174f630));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8cfd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02925404(iVar1,param_1,0);
  }
  return iVar1;
}

