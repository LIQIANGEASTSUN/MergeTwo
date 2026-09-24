
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017e19b8(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_017e1c18 + 0x17e19d0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e1c1c + 0x17e19e4));
    func_0x01438628(*(undefined4 *)(_UNK_017e1c20 + 0x17e19f0));
    func_0x01438628(*(undefined4 *)(_UNK_017e1c24 + 0x17e19fc));
    func_0x01438628(*(undefined4 *)(_UNK_017e1c28 + 0x17e1a08));
    func_0x01438628(*(undefined4 *)(_UNK_017e1c2c + 0x17e1a14));
    func_0x01438628(*(undefined4 *)(_UNK_017e1c30 + 0x17e1a20));
    func_0x01438628(*(undefined4 *)(_UNK_017e1c34 + 0x17e1a2c));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x1e6e,0);
  if (iVar1 == 0) {
    iVar1 = FUN_017d5bc8(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_017e1c38 + 0x17e1aac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017e1c3c + 0x17e1ac8));
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
        func_0x0152da0c(&uStack_28,iVar2,**(undefined4 **)(_UNK_017e1c40 + 0x17e1b1c));
        puVar4 = *(undefined4 **)(_UNK_017e1c44 + 0x17e1b30);
        do {
          iVar2 = func_0x015109ec(&uStack_28,*puVar4);
          iVar5 = iStack_1c;
          if (iVar2 == 0) {
            func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_017e1c48 + 0x17e1b84));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar5 + 8) != iVar1);
        func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_017e1c54 + 0x17e1b68));
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x1e6e,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x028b5b74(iVar5,param_1,0);
  }
  return iVar5;
}

