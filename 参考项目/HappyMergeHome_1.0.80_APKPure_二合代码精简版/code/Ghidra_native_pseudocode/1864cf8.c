
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01874cf8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01874fb0 + 0x1874d10);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01874fb4 + 0x1874d24));
    func_0x01438628(*(undefined4 *)(_UNK_01874fb8 + 0x1874d30));
    func_0x01438628(*(undefined4 *)(_UNK_01874fbc + 0x1874d3c));
    func_0x01438628(*(undefined4 *)(_UNK_01874fc0 + 0x1874d48));
    func_0x01438628(*(undefined4 *)(_UNK_01874fc4 + 0x1874d54));
    func_0x01438628(*(undefined4 *)(_UNK_01874fc8 + 0x1874d60));
    func_0x01438628(*(undefined4 *)(_UNK_01874fcc + 0x1874d6c));
    func_0x01438628(*(undefined4 *)(_UNK_01874fd0 + 0x1874d78));
    func_0x01438628(*(undefined4 *)(_UNK_01874fd4 + 0x1874d84));
    func_0x01438628(*(undefined4 *)(_UNK_01874fd8 + 0x1874d90));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9380,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01874fdc + 0x1874e00));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01874fe0 + 0x1874e14));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01874fe4 + 0x1874e38) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01874fe8 + 0x1874e54));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d8650(iVar1,**(undefined4 **)(_UNK_01874fec + 0x1874e74));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01874ff0 + 0x1874ea0));
      puVar5 = *(undefined4 **)(_UNK_01874ff4 + 0x1874eb4);
      puVar7 = *(undefined4 **)(_UNK_01874ff8 + 0x1874ebc);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01874ffc + 0x1874f14));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9380,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02928980(iVar1,param_1,0);
  }
  return iVar1;
}

