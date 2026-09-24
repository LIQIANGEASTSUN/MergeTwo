
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016f0010(int param_1)

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
  
  pcVar3 = (char *)(_UNK_016f02c8 + 0x16f0028);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f02cc + 0x16f003c));
    func_0x01438628(*(undefined4 *)(_UNK_016f02d0 + 0x16f0048));
    func_0x01438628(*(undefined4 *)(_UNK_016f02d4 + 0x16f0054));
    func_0x01438628(*(undefined4 *)(_UNK_016f02d8 + 0x16f0060));
    func_0x01438628(*(undefined4 *)(_UNK_016f02dc + 0x16f006c));
    func_0x01438628(*(undefined4 *)(_UNK_016f02e0 + 0x16f0078));
    func_0x01438628(*(undefined4 *)(_UNK_016f02e4 + 0x16f0084));
    func_0x01438628(*(undefined4 *)(_UNK_016f02e8 + 0x16f0090));
    func_0x01438628(*(undefined4 *)(_UNK_016f02ec + 0x16f009c));
    func_0x01438628(*(undefined4 *)(_UNK_016f02f0 + 0x16f00a8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8a65,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f02f4 + 0x16f0118));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016f02f8 + 0x16f012c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_016f02fc + 0x16f0150) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f0300 + 0x16f016c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dde10(iVar1,**(undefined4 **)(_UNK_016f0304 + 0x16f018c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016f0308 + 0x16f01b8));
      puVar5 = *(undefined4 **)(_UNK_016f030c + 0x16f01cc);
      puVar7 = *(undefined4 **)(_UNK_016f0310 + 0x16f01d4);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016f0314 + 0x16f022c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8a65,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02923f58(iVar1,param_1,0);
  }
  return iVar1;
}

