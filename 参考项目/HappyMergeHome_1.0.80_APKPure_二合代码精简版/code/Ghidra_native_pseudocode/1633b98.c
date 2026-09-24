
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01643b98(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01643e50 + 0x1643bb0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01643e54 + 0x1643bc4));
    func_0x01438628(*(undefined4 *)(_UNK_01643e58 + 0x1643bd0));
    func_0x01438628(*(undefined4 *)(_UNK_01643e5c + 0x1643bdc));
    func_0x01438628(*(undefined4 *)(_UNK_01643e60 + 0x1643be8));
    func_0x01438628(*(undefined4 *)(_UNK_01643e64 + 0x1643bf4));
    func_0x01438628(*(undefined4 *)(_UNK_01643e68 + 0x1643c00));
    func_0x01438628(*(undefined4 *)(_UNK_01643e6c + 0x1643c0c));
    func_0x01438628(*(undefined4 *)(_UNK_01643e70 + 0x1643c18));
    func_0x01438628(*(undefined4 *)(_UNK_01643e74 + 0x1643c24));
    func_0x01438628(*(undefined4 *)(_UNK_01643e78 + 0x1643c30));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x85d1,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01643e7c + 0x1643ca0));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01643e80 + 0x1643cb4));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01643e84 + 0x1643cd8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01643e88 + 0x1643cf4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f1070(iVar1,**(undefined4 **)(_UNK_01643e8c + 0x1643d14));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01643e90 + 0x1643d40));
      puVar5 = *(undefined4 **)(_UNK_01643e94 + 0x1643d54);
      puVar7 = *(undefined4 **)(_UNK_01643e98 + 0x1643d5c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01643e9c + 0x1643db4));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x85d1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02921648(iVar1,param_1,0);
  }
  return iVar1;
}

