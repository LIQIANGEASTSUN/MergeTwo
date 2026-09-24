
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01961234(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019614ec + 0x196124c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019614f0 + 0x1961260));
    func_0x01438628(*(undefined4 *)(_UNK_019614f4 + 0x196126c));
    func_0x01438628(*(undefined4 *)(_UNK_019614f8 + 0x1961278));
    func_0x01438628(*(undefined4 *)(_UNK_019614fc + 0x1961284));
    func_0x01438628(*(undefined4 *)(_UNK_01961500 + 0x1961290));
    func_0x01438628(*(undefined4 *)(_UNK_01961504 + 0x196129c));
    func_0x01438628(*(undefined4 *)(_UNK_01961508 + 0x19612a8));
    func_0x01438628(*(undefined4 *)(_UNK_0196150c + 0x19612b4));
    func_0x01438628(*(undefined4 *)(_UNK_01961510 + 0x19612c0));
    func_0x01438628(*(undefined4 *)(_UNK_01961514 + 0x19612cc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x98e2,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01961518 + 0x196133c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0196151c + 0x1961350));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01961520 + 0x1961374) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01961524 + 0x1961390));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d5598(iVar1,**(undefined4 **)(_UNK_01961528 + 0x19613b0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0196152c + 0x19613dc));
      puVar5 = *(undefined4 **)(_UNK_01961530 + 0x19613f0);
      puVar7 = *(undefined4 **)(_UNK_01961534 + 0x19613f8);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01961538 + 0x1961450));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x98e2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292b56c(iVar1,param_1,0);
  }
  return iVar1;
}

