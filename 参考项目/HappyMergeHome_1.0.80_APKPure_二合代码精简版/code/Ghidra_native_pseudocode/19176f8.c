
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019276f8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019279b0 + 0x1927710);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019279b4 + 0x1927724));
    func_0x01438628(*(undefined4 *)(_UNK_019279b8 + 0x1927730));
    func_0x01438628(*(undefined4 *)(_UNK_019279bc + 0x192773c));
    func_0x01438628(*(undefined4 *)(_UNK_019279c0 + 0x1927748));
    func_0x01438628(*(undefined4 *)(_UNK_019279c4 + 0x1927754));
    func_0x01438628(*(undefined4 *)(_UNK_019279c8 + 0x1927760));
    func_0x01438628(*(undefined4 *)(_UNK_019279cc + 0x192776c));
    func_0x01438628(*(undefined4 *)(_UNK_019279d0 + 0x1927778));
    func_0x01438628(*(undefined4 *)(_UNK_019279d4 + 0x1927784));
    func_0x01438628(*(undefined4 *)(_UNK_019279d8 + 0x1927790));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x975f,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_019279dc + 0x1927800));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_019279e0 + 0x1927814));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_019279e4 + 0x1927838) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019279e8 + 0x1927854));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d6230(iVar1,**(undefined4 **)(_UNK_019279ec + 0x1927874));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_019279f0 + 0x19278a0));
      puVar5 = *(undefined4 **)(_UNK_019279f4 + 0x19278b4);
      puVar7 = *(undefined4 **)(_UNK_019279f8 + 0x19278bc);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_019279fc + 0x1927914));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x975f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292a7bc(iVar1,param_1,0);
  }
  return iVar1;
}

