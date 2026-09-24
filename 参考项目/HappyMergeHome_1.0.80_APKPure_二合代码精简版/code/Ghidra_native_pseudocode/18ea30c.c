
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018fa30c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_018fa5c4 + 0x18fa324);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fa5c8 + 0x18fa338));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5cc + 0x18fa344));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5d0 + 0x18fa350));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5d4 + 0x18fa35c));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5d8 + 0x18fa368));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5dc + 0x18fa374));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5e0 + 0x18fa380));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5e4 + 0x18fa38c));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5e8 + 0x18fa398));
    func_0x01438628(*(undefined4 *)(_UNK_018fa5ec + 0x18fa3a4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9679,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fa5f0 + 0x18fa414));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018fa5f4 + 0x18fa428));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_018fa5f8 + 0x18fa44c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fa5fc + 0x18fa468));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d7d08(iVar1,**(undefined4 **)(_UNK_018fa600 + 0x18fa488));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_018fa604 + 0x18fa4b4));
      puVar5 = *(undefined4 **)(_UNK_018fa608 + 0x18fa4c8);
      puVar7 = *(undefined4 **)(_UNK_018fa60c + 0x18fa4d0);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018fa610 + 0x18fa528));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9679,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292a4e0(iVar1,param_1,0);
  }
  return iVar1;
}

