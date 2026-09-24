
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0167d5c4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0167d87c + 0x167d5dc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167d880 + 0x167d5f0));
    func_0x01438628(*(undefined4 *)(_UNK_0167d884 + 0x167d5fc));
    func_0x01438628(*(undefined4 *)(_UNK_0167d888 + 0x167d608));
    func_0x01438628(*(undefined4 *)(_UNK_0167d88c + 0x167d614));
    func_0x01438628(*(undefined4 *)(_UNK_0167d890 + 0x167d620));
    func_0x01438628(*(undefined4 *)(_UNK_0167d894 + 0x167d62c));
    func_0x01438628(*(undefined4 *)(_UNK_0167d898 + 0x167d638));
    func_0x01438628(*(undefined4 *)(_UNK_0167d89c + 0x167d644));
    func_0x01438628(*(undefined4 *)(_UNK_0167d8a0 + 0x167d650));
    func_0x01438628(*(undefined4 *)(_UNK_0167d8a4 + 0x167d65c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8792,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0167d8a8 + 0x167d6cc));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0167d8ac + 0x167d6e0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0167d8b0 + 0x167d704) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167d8b4 + 0x167d720));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f12b8(iVar1,**(undefined4 **)(_UNK_0167d8b8 + 0x167d740));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0167d8bc + 0x167d76c));
      puVar5 = *(undefined4 **)(_UNK_0167d8c0 + 0x167d780);
      puVar7 = *(undefined4 **)(_UNK_0167d8c4 + 0x167d788);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0167d8c8 + 0x167d7e0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8792,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02922710(iVar1,param_1,0);
  }
  return iVar1;
}

