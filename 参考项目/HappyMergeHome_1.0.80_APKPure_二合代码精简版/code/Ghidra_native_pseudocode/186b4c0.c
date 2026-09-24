
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0187b4c0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0187b80c + 0x187b4d8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187b810 + 0x187b4ec));
    func_0x01438628(*(undefined4 *)(_UNK_0187b814 + 0x187b4f8));
    func_0x01438628(*(undefined4 *)(_UNK_0187b818 + 0x187b504));
    func_0x01438628(*(undefined4 *)(_UNK_0187b81c + 0x187b510));
    func_0x01438628(*(undefined4 *)(_UNK_0187b820 + 0x187b51c));
    func_0x01438628(*(undefined4 *)(_UNK_0187b824 + 0x187b528));
    func_0x01438628(*(undefined4 *)(_UNK_0187b828 + 0x187b534));
    func_0x01438628(*(undefined4 *)(_UNK_0187b82c + 0x187b540));
    func_0x01438628(*(undefined4 *)(_UNK_0187b830 + 0x187b54c));
    func_0x01438628(*(undefined4 *)(_UNK_0187b834 + 0x187b558));
    func_0x01438628(*(undefined4 *)(_UNK_0187b838 + 0x187b564));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x939d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0187b83c + 0x187b5c8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0187b840 + 0x187b5e4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0187b844 + 0x187b604));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x1c,**(undefined4 **)(_UNK_0187b848 + 0x187b63c));
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_40,iVar4,**(undefined4 **)(_UNK_0187b84c + 0x187b674));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar6 = *(undefined4 **)(_UNK_0187b850 + 0x187b690);
      puVar7 = *(undefined4 **)(_UNK_0187b854 + 0x187b698);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar6), iVar4 = iStack_24, iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar4 + 8)) {
          iVar2 = FUN_01873864(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          uVar5 = *(undefined4 *)(iVar4 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar2,uVar5,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0187b858 + 0x187b71c));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_0187b860 + 0x187b740));
      if (*(int *)(**(int **)(_UNK_0187b864 + 0x187b754) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_018725d4();
      if (iVar1 != 0) {
        func_0x01899d58(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x939d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

