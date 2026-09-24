
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01643578(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01643830 + 0x1643590);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01643834 + 0x16435a4));
    func_0x01438628(*(undefined4 *)(_UNK_01643838 + 0x16435b0));
    func_0x01438628(*(undefined4 *)(_UNK_0164383c + 0x16435bc));
    func_0x01438628(*(undefined4 *)(_UNK_01643840 + 0x16435c8));
    func_0x01438628(*(undefined4 *)(_UNK_01643844 + 0x16435d4));
    func_0x01438628(*(undefined4 *)(_UNK_01643848 + 0x16435e0));
    func_0x01438628(*(undefined4 *)(_UNK_0164384c + 0x16435ec));
    func_0x01438628(*(undefined4 *)(_UNK_01643850 + 0x16435f8));
    func_0x01438628(*(undefined4 *)(_UNK_01643854 + 0x1643604));
    func_0x01438628(*(undefined4 *)(_UNK_01643858 + 0x1643610));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8616,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0164385c + 0x1643680));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01643860 + 0x1643694));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01643864 + 0x16436b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01643868 + 0x16436d4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f1070(iVar1,**(undefined4 **)(_UNK_0164386c + 0x16436f4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01643870 + 0x1643720));
      puVar5 = *(undefined4 **)(_UNK_01643874 + 0x1643734);
      puVar7 = *(undefined4 **)(_UNK_01643878 + 0x164373c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0164387c + 0x1643794));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8616,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02921960(iVar1,param_1,0);
  }
  return iVar1;
}

