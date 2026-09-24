
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01906a14(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01906c74 + 0x1906a2c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01906c78 + 0x1906a40));
    func_0x01438628(*(undefined4 *)(_UNK_01906c7c + 0x1906a4c));
    func_0x01438628(*(undefined4 *)(_UNK_01906c80 + 0x1906a58));
    func_0x01438628(*(undefined4 *)(_UNK_01906c84 + 0x1906a64));
    func_0x01438628(*(undefined4 *)(_UNK_01906c88 + 0x1906a70));
    func_0x01438628(*(undefined4 *)(_UNK_01906c8c + 0x1906a7c));
    func_0x01438628(*(undefined4 *)(_UNK_01906c90 + 0x1906a88));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x1d57,0);
  if (iVar1 == 0) {
    iVar1 = FUN_018faa04(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01906c94 + 0x1906b08) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01906c98 + 0x1906b24));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        iVar1 = FUN_019014c4(param_1);
        func_0x0152da0c(&uStack_28,iVar2,**(undefined4 **)(_UNK_01906c9c + 0x1906b78));
        puVar4 = *(undefined4 **)(_UNK_01906ca0 + 0x1906b8c);
        do {
          iVar2 = func_0x015109ec(&uStack_28,*puVar4);
          iVar5 = iStack_1c;
          if (iVar2 == 0) {
            func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_01906ca4 + 0x1906be0));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar5 + 8) != iVar1);
        func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_01906cb0 + 0x1906bc4));
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x1d57,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x028b4718(iVar5,param_1,0);
  }
  return iVar5;
}

