
/* WARNING: Possible PIC construction at 0x03087620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03087624) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03087d94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  undefined4 *puVar6;
  int unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar2 = func_0x02953fd4(0x756f,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0307f35c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar2 + 0x74);
    iVar2 = FUN_030870ac(param_1);
    if (iVar2 <= iVar3) {
      return;
    }
    pcVar5 = (char *)(_UNK_030878a0 + 0x3087544);
    if (*pcVar5 == '\0') {
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
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x02953fd4(0x7572,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_030878d0 + 0x3087634) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030878d4 + 0x3087650));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_030878d8 + 0x3087670));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar2 + 8);
      iVar2 = FUN_0307f35c(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = FUN_03087044(param_1,*(undefined4 *)(iVar2 + 0x74));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b72148(iVar3,uVar7,**(undefined4 **)(_UNK_030878dc + 0x30876d0));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x04cfe6f4(&uStack_40,iVar3,**(undefined4 **)(_UNK_030878e0 + 0x3087708));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar6 = *(undefined4 **)(_UNK_030878e4 + 0x3087724);
        puVar8 = *(undefined4 **)(_UNK_030878e8 + 0x308772c);
        while (iVar1 = func_0x04878f14(&uStack_30,*puVar6), iVar3 = iStack_24, iVar1 != 0) {
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_0307f35c(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            uVar7 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar1,uVar7,*puVar8);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030878ec + 0x30877b0));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b776fc(iVar2,**(undefined4 **)(_UNK_030878f4 + 0x30877d4));
        if (*(int *)(**(int **)(_UNK_030878f8 + 0x30877e8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_0307cfc8();
        if (iVar2 != 0) {
          func_0x030a776c(iVar2,0);
        }
      }
      return;
    }
    iVar2 = func_0x029540a4(0x7572,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x3087624;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x029540a4(0x756f,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x024f56d0(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}

