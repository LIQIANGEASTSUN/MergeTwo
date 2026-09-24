
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016b848c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_016b874c + 0x16b84a4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b8750 + 0x16b84b8));
    func_0x01438628(*(undefined4 *)(_UNK_016b8754 + 0x16b84c4));
    func_0x01438628(*(undefined4 *)(_UNK_016b8758 + 0x16b84d0));
    func_0x01438628(*(undefined4 *)(_UNK_016b875c + 0x16b84dc));
    func_0x01438628(*(undefined4 *)(_UNK_016b8760 + 0x16b84e8));
    func_0x01438628(*(undefined4 *)(_UNK_016b8764 + 0x16b84f4));
    func_0x01438628(*(undefined4 *)(_UNK_016b8768 + 0x16b8500));
    func_0x01438628(*(undefined4 *)(_UNK_016b876c + 0x16b850c));
    func_0x01438628(*(undefined4 *)(_UNK_016b8770 + 0x16b8518));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x183d,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016b8774 + 0x16b858c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016b8778 + 0x16b85a0));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_016b877c + 0x16b85c4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b8780 + 0x16b85e0));
      iVar2 = FUN_016b73fc(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016b8784 + 0x16b863c));
        puVar6 = *(undefined4 **)(_UNK_016b8788 + 0x16b8650);
        puVar7 = *(undefined4 **)(_UNK_016b878c + 0x16b8658);
        while (iVar2 = func_0x015109ec(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f1078(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016b8790 + 0x16b86b0));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x183d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

