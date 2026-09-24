
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017e1c58(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_017e1ebc + 0x17e1c70);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e1ec0 + 0x17e1c84));
    func_0x01438628(*(undefined4 *)(_UNK_017e1ec4 + 0x17e1c90));
    func_0x01438628(*(undefined4 *)(_UNK_017e1ec8 + 0x17e1c9c));
    func_0x01438628(*(undefined4 *)(_UNK_017e1ecc + 0x17e1ca8));
    func_0x01438628(*(undefined4 *)(_UNK_017e1ed0 + 0x17e1cb4));
    func_0x01438628(*(undefined4 *)(_UNK_017e1ed4 + 0x17e1cc0));
    func_0x01438628(*(undefined4 *)(_UNK_017e1ed8 + 0x17e1ccc));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8fce,0);
  if (iVar1 == 0) {
    iVar1 = FUN_017d5bc8(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_017e1edc + 0x17e1d4c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017e1ee0 + 0x17e1d68));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        iVar1 = FUN_017dc678(param_1);
        func_0x0152da0c(&uStack_28,iVar2,**(undefined4 **)(_UNK_017e1ee4 + 0x17e1dbc));
        puVar5 = *(undefined4 **)(_UNK_017e1ee8 + 0x17e1dd4);
        do {
          iVar2 = func_0x015109ec(&uStack_28,*puVar5);
          iVar4 = iStack_1c;
          if (iVar2 == 0) {
            func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_017e1eec + 0x17e1e28));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar4 + 8) != iVar1 + 1);
        func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_017e1ef8 + 0x17e1e0c));
      }
    }
  }
  else {
    iVar4 = func_0x029540a4(0x8fce,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x028b5b74(iVar4,param_1,0);
  }
  return iVar4;
}

