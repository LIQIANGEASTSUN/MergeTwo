
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0308752c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_030878a0 + 0x3087544);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030878a4 + 0x3087558));
    func_0x01438628(*(undefined4 *)(_UNK_030878a8 + 0x3087564));
    func_0x01438628(*(undefined4 *)(_UNK_030878ac + 0x3087570));
    func_0x01438628(*(undefined4 *)(_UNK_030878b0 + 0x308757c));
    func_0x01438628(*(undefined4 *)(_UNK_030878b4 + 0x3087588));
    func_0x01438628(*(undefined4 *)(_UNK_030878b8 + 0x3087594));
    func_0x01438628(*(undefined4 *)(_UNK_030878bc + 0x30875a0));
    func_0x01438628(*(undefined4 *)(_UNK_030878c0 + 0x30875ac));
    func_0x01438628(*(undefined4 *)(_UNK_030878c4 + 0x30875b8));
    func_0x01438628(*(undefined4 *)(_UNK_030878c8 + 0x30875c4));
    func_0x01438628(*(undefined4 *)(_UNK_030878cc + 0x30875d0));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7572,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030878d0 + 0x3087634) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030878d4 + 0x3087650));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_030878d8 + 0x3087670));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_0307f35c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_03087044(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_030878dc + 0x30876d0));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_030878e0 + 0x3087708));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_030878e4 + 0x3087724);
      puVar7 = *(undefined4 **)(_UNK_030878e8 + 0x308772c);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_0307f35c(param_1);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030878ec + 0x30877b0));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_030878f4 + 0x30877d4));
      if (*(int *)(**(int **)(_UNK_030878f8 + 0x30877e8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0307cfc8();
      if (iVar1 != 0) {
        func_0x030a776c(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7572,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

