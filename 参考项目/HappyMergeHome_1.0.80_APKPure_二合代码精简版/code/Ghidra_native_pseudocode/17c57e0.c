
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017d57e0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_017d5a98 + 0x17d57f8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d5a9c + 0x17d580c));
    func_0x01438628(*(undefined4 *)(_UNK_017d5aa0 + 0x17d5818));
    func_0x01438628(*(undefined4 *)(_UNK_017d5aa4 + 0x17d5824));
    func_0x01438628(*(undefined4 *)(_UNK_017d5aa8 + 0x17d5830));
    func_0x01438628(*(undefined4 *)(_UNK_017d5aac + 0x17d583c));
    func_0x01438628(*(undefined4 *)(_UNK_017d5ab0 + 0x17d5848));
    func_0x01438628(*(undefined4 *)(_UNK_017d5ab4 + 0x17d5854));
    func_0x01438628(*(undefined4 *)(_UNK_017d5ab8 + 0x17d5860));
    func_0x01438628(*(undefined4 *)(_UNK_017d5abc + 0x17d586c));
    func_0x01438628(*(undefined4 *)(_UNK_017d5ac0 + 0x17d5878));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8f8a,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017d5ac4 + 0x17d58e8));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_017d5ac8 + 0x17d58fc));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_017d5acc + 0x17d5920) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d5ad0 + 0x17d593c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036db338(iVar1,**(undefined4 **)(_UNK_017d5ad4 + 0x17d595c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_017d5ad8 + 0x17d5988));
      puVar5 = *(undefined4 **)(_UNK_017d5adc + 0x17d599c);
      puVar7 = *(undefined4 **)(_UNK_017d5ae0 + 0x17d59a4);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017d5ae4 + 0x17d59fc));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8f8a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02926b44(iVar1,param_1,0);
  }
  return iVar1;
}

