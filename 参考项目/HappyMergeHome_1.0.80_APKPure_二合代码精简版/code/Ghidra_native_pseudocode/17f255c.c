
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0180255c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01802814 + 0x1802574);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01802818 + 0x1802588));
    func_0x01438628(*(undefined4 *)(_UNK_0180281c + 0x1802594));
    func_0x01438628(*(undefined4 *)(_UNK_01802820 + 0x18025a0));
    func_0x01438628(*(undefined4 *)(_UNK_01802824 + 0x18025ac));
    func_0x01438628(*(undefined4 *)(_UNK_01802828 + 0x18025b8));
    func_0x01438628(*(undefined4 *)(_UNK_0180282c + 0x18025c4));
    func_0x01438628(*(undefined4 *)(_UNK_01802830 + 0x18025d0));
    func_0x01438628(*(undefined4 *)(_UNK_01802834 + 0x18025dc));
    func_0x01438628(*(undefined4 *)(_UNK_01802838 + 0x18025e8));
    func_0x01438628(*(undefined4 *)(_UNK_0180283c + 0x18025f4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x908f,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01802840 + 0x1802664));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01802844 + 0x1802678));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01802848 + 0x180269c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0180284c + 0x18026b8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d9e20(iVar1,**(undefined4 **)(_UNK_01802850 + 0x18026d8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01802854 + 0x1802704));
      puVar5 = *(undefined4 **)(_UNK_01802858 + 0x1802718);
      puVar7 = *(undefined4 **)(_UNK_0180285c + 0x1802720);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01802860 + 0x1802778));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x908f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02926f28(iVar1,param_1,0);
  }
  return iVar1;
}

