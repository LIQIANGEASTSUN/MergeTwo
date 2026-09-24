
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0190157c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_019017d4 + 0x1901598);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019017d8 + 0x19015ac));
    func_0x01438628(*(undefined4 *)(_UNK_019017dc + 0x19015b8));
    func_0x01438628(*(undefined4 *)(_UNK_019017e0 + 0x19015c4));
    func_0x01438628(*(undefined4 *)(_UNK_019017e4 + 0x19015d0));
    func_0x01438628(*(undefined4 *)(_UNK_019017e8 + 0x19015dc));
    func_0x01438628(*(undefined4 *)(_UNK_019017ec + 0x19015e8));
    func_0x01438628(*(undefined4 *)(_UNK_019017f0 + 0x19015f4));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x471,0);
  if (iVar1 == 0) {
    iVar1 = FUN_018faa04(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_019017f4 + 0x1901678) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019017f8 + 0x1901694));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        func_0x0152da0c(&uStack_28,iVar2,**(undefined4 **)(_UNK_019017fc + 0x19016d8));
        puVar4 = *(undefined4 **)(_UNK_01901800 + 0x19016ec);
        do {
          iVar1 = func_0x015109ec(&uStack_28,*puVar4);
          iVar5 = iStack_1c;
          if (iVar1 == 0) {
            func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_01901804 + 0x1901740));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar5 + 8) != param_2);
        func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_01901810 + 0x1901724));
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x471,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02878cf0(iVar5,param_1,param_2,0);
  }
  return iVar5;
}

