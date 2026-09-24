
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017155c8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01715880 + 0x17155e0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01715884 + 0x17155f4));
    func_0x01438628(*(undefined4 *)(_UNK_01715888 + 0x1715600));
    func_0x01438628(*(undefined4 *)(_UNK_0171588c + 0x171560c));
    func_0x01438628(*(undefined4 *)(_UNK_01715890 + 0x1715618));
    func_0x01438628(*(undefined4 *)(_UNK_01715894 + 0x1715624));
    func_0x01438628(*(undefined4 *)(_UNK_01715898 + 0x1715630));
    func_0x01438628(*(undefined4 *)(_UNK_0171589c + 0x171563c));
    func_0x01438628(*(undefined4 *)(_UNK_017158a0 + 0x1715648));
    func_0x01438628(*(undefined4 *)(_UNK_017158a4 + 0x1715654));
    func_0x01438628(*(undefined4 *)(_UNK_017158a8 + 0x1715660));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8b77,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017158ac + 0x17156d0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_017158b0 + 0x17156e4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_017158b4 + 0x1715708) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017158b8 + 0x1715724));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dd390(iVar1,**(undefined4 **)(_UNK_017158bc + 0x1715744));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_017158c0 + 0x1715770));
      puVar5 = *(undefined4 **)(_UNK_017158c4 + 0x1715784);
      puVar7 = *(undefined4 **)(_UNK_017158c8 + 0x171578c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017158cc + 0x17157e4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8b77,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292475c(iVar1,param_1,0);
  }
  return iVar1;
}

