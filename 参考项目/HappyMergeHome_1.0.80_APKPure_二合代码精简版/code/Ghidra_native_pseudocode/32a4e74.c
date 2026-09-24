
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032b4e74(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_032b50d4 + 0x32b4e8c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b50d8 + 0x32b4ea0));
    func_0x01438628(*(undefined4 *)(_UNK_032b50dc + 0x32b4eac));
    func_0x01438628(*(undefined4 *)(_UNK_032b50e0 + 0x32b4eb8));
    func_0x01438628(*(undefined4 *)(_UNK_032b50e4 + 0x32b4ec4));
    func_0x01438628(*(undefined4 *)(_UNK_032b50e8 + 0x32b4ed0));
    func_0x01438628(*(undefined4 *)(_UNK_032b50ec + 0x32b4edc));
    func_0x01438628(*(undefined4 *)(_UNK_032b50f0 + 0x32b4ee8));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x1f15,0);
  if (iVar1 == 0) {
    iVar1 = FUN_032a8ec4(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_032b50f4 + 0x32b4f68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b50f8 + 0x32b4f84));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        iVar1 = FUN_032af974(param_1);
        func_0x04cfe6f4(&uStack_28,iVar2,**(undefined4 **)(_UNK_032b50fc + 0x32b4fd8));
        puVar4 = *(undefined4 **)(_UNK_032b5100 + 0x32b4fec);
        do {
          iVar2 = func_0x04878f14(&uStack_28,*puVar4);
          iVar5 = iStack_1c;
          if (iVar2 == 0) {
            func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_032b5104 + 0x32b5040));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar5 + 8) != iVar1);
        func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_032b5110 + 0x32b5024));
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x1f15,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x028b5d70(iVar5,param_1,0);
  }
  return iVar5;
}

