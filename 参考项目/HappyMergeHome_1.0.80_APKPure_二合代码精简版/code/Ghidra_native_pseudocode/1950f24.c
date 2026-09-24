
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01960f24(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019611dc + 0x1960f3c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019611e0 + 0x1960f50));
    func_0x01438628(*(undefined4 *)(_UNK_019611e4 + 0x1960f5c));
    func_0x01438628(*(undefined4 *)(_UNK_019611e8 + 0x1960f68));
    func_0x01438628(*(undefined4 *)(_UNK_019611ec + 0x1960f74));
    func_0x01438628(*(undefined4 *)(_UNK_019611f0 + 0x1960f80));
    func_0x01438628(*(undefined4 *)(_UNK_019611f4 + 0x1960f8c));
    func_0x01438628(*(undefined4 *)(_UNK_019611f8 + 0x1960f98));
    func_0x01438628(*(undefined4 *)(_UNK_019611fc + 0x1960fa4));
    func_0x01438628(*(undefined4 *)(_UNK_01961200 + 0x1960fb0));
    func_0x01438628(*(undefined4 *)(_UNK_01961204 + 0x1960fbc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x991b,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01961208 + 0x196102c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0196120c + 0x1961040));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01961210 + 0x1961064) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01961214 + 0x1961080));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d5598(iVar1,**(undefined4 **)(_UNK_01961218 + 0x19610a0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0196121c + 0x19610cc));
      puVar5 = *(undefined4 **)(_UNK_01961220 + 0x19610e0);
      puVar7 = *(undefined4 **)(_UNK_01961224 + 0x19610e8);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01961228 + 0x1961140));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x991b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292b77c(iVar1,param_1,0);
  }
  return iVar1;
}

