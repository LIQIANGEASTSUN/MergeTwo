
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01906cb4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01906f18 + 0x1906ccc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01906f1c + 0x1906ce0));
    func_0x01438628(*(undefined4 *)(_UNK_01906f20 + 0x1906cec));
    func_0x01438628(*(undefined4 *)(_UNK_01906f24 + 0x1906cf8));
    func_0x01438628(*(undefined4 *)(_UNK_01906f28 + 0x1906d04));
    func_0x01438628(*(undefined4 *)(_UNK_01906f2c + 0x1906d10));
    func_0x01438628(*(undefined4 *)(_UNK_01906f30 + 0x1906d1c));
    func_0x01438628(*(undefined4 *)(_UNK_01906f34 + 0x1906d28));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x96ac,0);
  if (iVar1 == 0) {
    iVar1 = FUN_018faa04(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01906f38 + 0x1906da8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01906f3c + 0x1906dc4));
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
        func_0x0152da0c(&uStack_28,iVar2,**(undefined4 **)(_UNK_01906f40 + 0x1906e18));
        puVar5 = *(undefined4 **)(_UNK_01906f44 + 0x1906e30);
        do {
          iVar2 = func_0x015109ec(&uStack_28,*puVar5);
          iVar4 = iStack_1c;
          if (iVar2 == 0) {
            func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_01906f48 + 0x1906e84));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar4 + 8) != iVar1 + 1);
        func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_01906f54 + 0x1906e68));
      }
    }
  }
  else {
    iVar4 = func_0x029540a4(0x96ac,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x028b4718(iVar4,param_1,0);
  }
  return iVar4;
}

