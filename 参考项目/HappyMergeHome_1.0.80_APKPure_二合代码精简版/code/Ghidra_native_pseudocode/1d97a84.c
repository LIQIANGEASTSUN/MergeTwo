
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01da7a84(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01da7d3c + 0x1da7a9c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da7d40 + 0x1da7ab0));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d44 + 0x1da7abc));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d48 + 0x1da7ac8));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d4c + 0x1da7ad4));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d50 + 0x1da7ae0));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d54 + 0x1da7aec));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d58 + 0x1da7af8));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d5c + 0x1da7b04));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d60 + 0x1da7b10));
    func_0x01438628(*(undefined4 *)(_UNK_01da7d64 + 0x1da7b1c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x3ed5,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01da7d68 + 0x1da7b8c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01da7d6c + 0x1da7ba0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01da7d70 + 0x1da7bc4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01da7d74 + 0x1da7be0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d6cb8(iVar1,**(undefined4 **)(_UNK_01da7d78 + 0x1da7c00));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01da7d7c + 0x1da7c2c));
      puVar5 = *(undefined4 **)(_UNK_01da7d80 + 0x1da7c40);
      puVar7 = *(undefined4 **)(_UNK_01da7d84 + 0x1da7c48);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01da7d88 + 0x1da7ca0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x3ed5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028d6790(iVar1,param_1,0);
  }
  return iVar1;
}

