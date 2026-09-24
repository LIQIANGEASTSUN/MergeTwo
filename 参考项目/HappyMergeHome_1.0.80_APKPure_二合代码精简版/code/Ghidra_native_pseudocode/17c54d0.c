
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017d54d0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_017d5788 + 0x17d54e8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d578c + 0x17d54fc));
    func_0x01438628(*(undefined4 *)(_UNK_017d5790 + 0x17d5508));
    func_0x01438628(*(undefined4 *)(_UNK_017d5794 + 0x17d5514));
    func_0x01438628(*(undefined4 *)(_UNK_017d5798 + 0x17d5520));
    func_0x01438628(*(undefined4 *)(_UNK_017d579c + 0x17d552c));
    func_0x01438628(*(undefined4 *)(_UNK_017d57a0 + 0x17d5538));
    func_0x01438628(*(undefined4 *)(_UNK_017d57a4 + 0x17d5544));
    func_0x01438628(*(undefined4 *)(_UNK_017d57a8 + 0x17d5550));
    func_0x01438628(*(undefined4 *)(_UNK_017d57ac + 0x17d555c));
    func_0x01438628(*(undefined4 *)(_UNK_017d57b0 + 0x17d5568));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8f9c,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017d57b4 + 0x17d55d8));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_017d57b8 + 0x17d55ec));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_017d57bc + 0x17d5610) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d57c0 + 0x17d562c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036db338(iVar1,**(undefined4 **)(_UNK_017d57c4 + 0x17d564c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_017d57c8 + 0x17d5678));
      puVar5 = *(undefined4 **)(_UNK_017d57cc + 0x17d568c);
      puVar7 = *(undefined4 **)(_UNK_017d57d0 + 0x17d5694);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017d57d4 + 0x17d56ec));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8f9c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02926c4c(iVar1,param_1,0);
  }
  return iVar1;
}

