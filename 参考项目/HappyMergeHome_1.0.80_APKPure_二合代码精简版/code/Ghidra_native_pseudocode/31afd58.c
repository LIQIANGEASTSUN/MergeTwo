
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031bfd58(int param_1)

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
  
  pcVar4 = (char *)(_UNK_031c00cc + 0x31bfd70);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c00d0 + 0x31bfd84));
    func_0x01438628(*(undefined4 *)(_UNK_031c00d4 + 0x31bfd90));
    func_0x01438628(*(undefined4 *)(_UNK_031c00d8 + 0x31bfd9c));
    func_0x01438628(*(undefined4 *)(_UNK_031c00dc + 0x31bfda8));
    func_0x01438628(*(undefined4 *)(_UNK_031c00e0 + 0x31bfdb4));
    func_0x01438628(*(undefined4 *)(_UNK_031c00e4 + 0x31bfdc0));
    func_0x01438628(*(undefined4 *)(_UNK_031c00e8 + 0x31bfdcc));
    func_0x01438628(*(undefined4 *)(_UNK_031c00ec + 0x31bfdd8));
    func_0x01438628(*(undefined4 *)(_UNK_031c00f0 + 0x31bfde4));
    func_0x01438628(*(undefined4 *)(_UNK_031c00f4 + 0x31bfdf0));
    func_0x01438628(*(undefined4 *)(_UNK_031c00f8 + 0x31bfdfc));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7ceb,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031c00fc + 0x31bfe60) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031c0100 + 0x31bfe7c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_031c0104 + 0x31bfe9c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_031b7b88(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_031bf870(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_031c0108 + 0x31bfefc));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_031c010c + 0x31bff34));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_031c0110 + 0x31bff50);
      puVar7 = *(undefined4 **)(_UNK_031c0114 + 0x31bff58);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_031b7b88(param_1);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_031c0118 + 0x31bffdc));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_031c0120 + 0x31c0000));
      if (*(int *)(**(int **)(_UNK_031c0124 + 0x31c0014) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_031b59e4();
      if (iVar1 != 0) {
        func_0x031debb4(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7ceb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

