
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019270d8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01927390 + 0x19270f0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01927394 + 0x1927104));
    func_0x01438628(*(undefined4 *)(_UNK_01927398 + 0x1927110));
    func_0x01438628(*(undefined4 *)(_UNK_0192739c + 0x192711c));
    func_0x01438628(*(undefined4 *)(_UNK_019273a0 + 0x1927128));
    func_0x01438628(*(undefined4 *)(_UNK_019273a4 + 0x1927134));
    func_0x01438628(*(undefined4 *)(_UNK_019273a8 + 0x1927140));
    func_0x01438628(*(undefined4 *)(_UNK_019273ac + 0x192714c));
    func_0x01438628(*(undefined4 *)(_UNK_019273b0 + 0x1927158));
    func_0x01438628(*(undefined4 *)(_UNK_019273b4 + 0x1927164));
    func_0x01438628(*(undefined4 *)(_UNK_019273b8 + 0x1927170));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9795,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_019273bc + 0x19271e0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_019273c0 + 0x19271f4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_019273c4 + 0x1927218) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019273c8 + 0x1927234));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d6230(iVar1,**(undefined4 **)(_UNK_019273cc + 0x1927254));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_019273d0 + 0x1927280));
      puVar5 = *(undefined4 **)(_UNK_019273d4 + 0x1927294);
      puVar7 = *(undefined4 **)(_UNK_019273d8 + 0x192729c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_019273dc + 0x19272f4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9795,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292aad4(iVar1,param_1,0);
  }
  return iVar1;
}

