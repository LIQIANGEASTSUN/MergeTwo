
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032b5114(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_032b5378 + 0x32b512c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b537c + 0x32b5140));
    func_0x01438628(*(undefined4 *)(_UNK_032b5380 + 0x32b514c));
    func_0x01438628(*(undefined4 *)(_UNK_032b5384 + 0x32b5158));
    func_0x01438628(*(undefined4 *)(_UNK_032b5388 + 0x32b5164));
    func_0x01438628(*(undefined4 *)(_UNK_032b538c + 0x32b5170));
    func_0x01438628(*(undefined4 *)(_UNK_032b5390 + 0x32b517c));
    func_0x01438628(*(undefined4 *)(_UNK_032b5394 + 0x32b5188));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x82ac,0);
  if (iVar1 == 0) {
    iVar1 = FUN_032a8ec4(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_032b5398 + 0x32b5208) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b539c + 0x32b5224));
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
        func_0x04cfe6f4(&uStack_28,iVar2,**(undefined4 **)(_UNK_032b53a0 + 0x32b5278));
        puVar5 = *(undefined4 **)(_UNK_032b53a4 + 0x32b5290);
        do {
          iVar2 = func_0x04878f14(&uStack_28,*puVar5);
          iVar4 = iStack_1c;
          if (iVar2 == 0) {
            func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_032b53a8 + 0x32b52e4));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar4 + 8) != iVar1 + 1);
        func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_032b53b4 + 0x32b52c8));
      }
    }
  }
  else {
    iVar4 = func_0x029540a4(0x82ac,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x028b5d70(iVar4,param_1,0);
  }
  return iVar4;
}

