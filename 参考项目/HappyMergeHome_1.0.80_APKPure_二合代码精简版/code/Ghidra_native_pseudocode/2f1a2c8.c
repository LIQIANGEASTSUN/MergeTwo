
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2a2c8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02f2a614 + 0x2f2a2e0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2a618 + 0x2f2a2f4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a61c + 0x2f2a300));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a620 + 0x2f2a30c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a624 + 0x2f2a318));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a628 + 0x2f2a324));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a62c + 0x2f2a330));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a630 + 0x2f2a33c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a634 + 0x2f2a348));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a638 + 0x2f2a354));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a63c + 0x2f2a360));
    func_0x01438628(*(undefined4 *)(_UNK_02f2a640 + 0x2f2a36c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6d16,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f2a644 + 0x2f2a3d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2a648 + 0x2f2a3ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f2a64c + 0x2f2a40c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar1,0xe,**(undefined4 **)(_UNK_02f2a650 + 0x2f2a444));
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar4,**(undefined4 **)(_UNK_02f2a654 + 0x2f2a47c));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar6 = *(undefined4 **)(_UNK_02f2a658 + 0x2f2a498);
      puVar7 = *(undefined4 **)(_UNK_02f2a65c + 0x2f2a4a0);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar4 = iStack_24, iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar4 + 8)) {
          iVar2 = FUN_02f23d18(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          uVar5 = *(undefined4 *)(iVar4 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar2,uVar5,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f2a660 + 0x2f2a524));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_02f2a668 + 0x2f2a548));
      if (*(int *)(**(int **)(_UNK_02f2a66c + 0x2f2a55c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_02f22a90();
      if (iVar1 != 0) {
        func_0x02f37464(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6d16,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

