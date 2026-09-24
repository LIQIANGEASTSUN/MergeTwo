
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032dccf4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_032dd068 + 0x32dcd0c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032dd06c + 0x32dcd20));
    func_0x01438628(*(undefined4 *)(_UNK_032dd070 + 0x32dcd2c));
    func_0x01438628(*(undefined4 *)(_UNK_032dd074 + 0x32dcd38));
    func_0x01438628(*(undefined4 *)(_UNK_032dd078 + 0x32dcd44));
    func_0x01438628(*(undefined4 *)(_UNK_032dd07c + 0x32dcd50));
    func_0x01438628(*(undefined4 *)(_UNK_032dd080 + 0x32dcd5c));
    func_0x01438628(*(undefined4 *)(_UNK_032dd084 + 0x32dcd68));
    func_0x01438628(*(undefined4 *)(_UNK_032dd088 + 0x32dcd74));
    func_0x01438628(*(undefined4 *)(_UNK_032dd08c + 0x32dcd80));
    func_0x01438628(*(undefined4 *)(_UNK_032dd090 + 0x32dcd8c));
    func_0x01438628(*(undefined4 *)(_UNK_032dd094 + 0x32dcd98));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x838c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032dd098 + 0x32dcdfc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032dd09c + 0x32dce18));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032dd0a0 + 0x32dce38));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_032d4694(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_032dc80c(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_032dd0a4 + 0x32dce98));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_032dd0a8 + 0x32dced0));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_032dd0ac + 0x32dceec);
      puVar7 = *(undefined4 **)(_UNK_032dd0b0 + 0x32dcef4);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_032d4694(param_1);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032dd0b4 + 0x32dcf78));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_032dd0bc + 0x32dcf9c));
      if (*(int *)(**(int **)(_UNK_032dd0c0 + 0x32dcfb0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_032d3310();
      if (iVar1 != 0) {
        func_0x032fd528(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x838c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

