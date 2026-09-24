
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016b7d6c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_016b8024 + 0x16b7d84);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b8028 + 0x16b7d98));
    func_0x01438628(*(undefined4 *)(_UNK_016b802c + 0x16b7da4));
    func_0x01438628(*(undefined4 *)(_UNK_016b8030 + 0x16b7db0));
    func_0x01438628(*(undefined4 *)(_UNK_016b8034 + 0x16b7dbc));
    func_0x01438628(*(undefined4 *)(_UNK_016b8038 + 0x16b7dc8));
    func_0x01438628(*(undefined4 *)(_UNK_016b803c + 0x16b7dd4));
    func_0x01438628(*(undefined4 *)(_UNK_016b8040 + 0x16b7de0));
    func_0x01438628(*(undefined4 *)(_UNK_016b8044 + 0x16b7dec));
    func_0x01438628(*(undefined4 *)(_UNK_016b8048 + 0x16b7df8));
    func_0x01438628(*(undefined4 *)(_UNK_016b804c + 0x16b7e04));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x88e1,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016b8050 + 0x16b7e74));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016b8054 + 0x16b7e88));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_016b8058 + 0x16b7eac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b805c + 0x16b7ec8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f130c(iVar1,**(undefined4 **)(_UNK_016b8060 + 0x16b7ee8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016b8064 + 0x16b7f14));
      puVar5 = *(undefined4 **)(_UNK_016b8068 + 0x16b7f28);
      puVar7 = *(undefined4 **)(_UNK_016b806c + 0x16b7f30);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016b8070 + 0x16b7f88));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x88e1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029231a8(iVar1,param_1,0);
  }
  return iVar1;
}

