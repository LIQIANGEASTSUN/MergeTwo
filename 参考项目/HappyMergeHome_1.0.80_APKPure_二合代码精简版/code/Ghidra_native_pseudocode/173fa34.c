
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0174fa34(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0174fcec + 0x174fa4c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174fcf0 + 0x174fa60));
    func_0x01438628(*(undefined4 *)(_UNK_0174fcf4 + 0x174fa6c));
    func_0x01438628(*(undefined4 *)(_UNK_0174fcf8 + 0x174fa78));
    func_0x01438628(*(undefined4 *)(_UNK_0174fcfc + 0x174fa84));
    func_0x01438628(*(undefined4 *)(_UNK_0174fd00 + 0x174fa90));
    func_0x01438628(*(undefined4 *)(_UNK_0174fd04 + 0x174fa9c));
    func_0x01438628(*(undefined4 *)(_UNK_0174fd08 + 0x174faa8));
    func_0x01438628(*(undefined4 *)(_UNK_0174fd0c + 0x174fab4));
    func_0x01438628(*(undefined4 *)(_UNK_0174fd10 + 0x174fac0));
    func_0x01438628(*(undefined4 *)(_UNK_0174fd14 + 0x174facc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8cb8,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0174fd18 + 0x174fb3c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_0174fd1c + 0x174fb50));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0174fd20 + 0x174fb74) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0174fd24 + 0x174fb90));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dc6f8(iVar1,**(undefined4 **)(_UNK_0174fd28 + 0x174fbb0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0174fd2c + 0x174fbdc));
      puVar5 = *(undefined4 **)(_UNK_0174fd30 + 0x174fbf0);
      puVar7 = *(undefined4 **)(_UNK_0174fd34 + 0x174fbf8);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0174fd38 + 0x174fc50));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8cb8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029250ec(iVar1,param_1,0);
  }
  return iVar1;
}

