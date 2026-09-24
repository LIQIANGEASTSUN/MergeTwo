
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019273e8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019276a0 + 0x1927400);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019276a4 + 0x1927414));
    func_0x01438628(*(undefined4 *)(_UNK_019276a8 + 0x1927420));
    func_0x01438628(*(undefined4 *)(_UNK_019276ac + 0x192742c));
    func_0x01438628(*(undefined4 *)(_UNK_019276b0 + 0x1927438));
    func_0x01438628(*(undefined4 *)(_UNK_019276b4 + 0x1927444));
    func_0x01438628(*(undefined4 *)(_UNK_019276b8 + 0x1927450));
    func_0x01438628(*(undefined4 *)(_UNK_019276bc + 0x192745c));
    func_0x01438628(*(undefined4 *)(_UNK_019276c0 + 0x1927468));
    func_0x01438628(*(undefined4 *)(_UNK_019276c4 + 0x1927474));
    func_0x01438628(*(undefined4 *)(_UNK_019276c8 + 0x1927480));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x976b,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_019276cc + 0x19274f0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_019276d0 + 0x1927504));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_019276d4 + 0x1927528) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019276d8 + 0x1927544));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d6230(iVar1,**(undefined4 **)(_UNK_019276dc + 0x1927564));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_019276e0 + 0x1927590));
      puVar5 = *(undefined4 **)(_UNK_019276e4 + 0x19275a4);
      puVar7 = *(undefined4 **)(_UNK_019276e8 + 0x19275ac);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_019276ec + 0x1927604));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x976b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292a8c4(iVar1,param_1,0);
  }
  return iVar1;
}

