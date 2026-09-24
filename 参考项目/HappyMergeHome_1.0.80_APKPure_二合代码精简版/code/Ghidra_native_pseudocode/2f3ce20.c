
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f4ce20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02f4d194 + 0x2f4ce38);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4d198 + 0x2f4ce4c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d19c + 0x2f4ce58));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1a0 + 0x2f4ce64));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1a4 + 0x2f4ce70));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1a8 + 0x2f4ce7c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1ac + 0x2f4ce88));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1b0 + 0x2f4ce94));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1b4 + 0x2f4cea0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1b8 + 0x2f4ceac));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1bc + 0x2f4ceb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d1c0 + 0x2f4cec4));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6dd8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f4d1c4 + 0x2f4cf28) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4d1c8 + 0x2f4cf44));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f4d1cc + 0x2f4cf64));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_02f44c50(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02f4c938(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_02f4d1d0 + 0x2f4cfc4));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_02f4d1d4 + 0x2f4cffc));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_02f4d1d8 + 0x2f4d018);
      puVar7 = *(undefined4 **)(_UNK_02f4d1dc + 0x2f4d020);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_02f44c50(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar2 = *(undefined4 *)(iVar6 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f4d1e0 + 0x2f4d0a4));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_02f4d1e8 + 0x2f4d0c8));
      if (*(int *)(**(int **)(_UNK_02f4d1ec + 0x2f4d0dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_02f428bc();
      if (iVar1 != 0) {
        func_0x02f6d060(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6dd8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

