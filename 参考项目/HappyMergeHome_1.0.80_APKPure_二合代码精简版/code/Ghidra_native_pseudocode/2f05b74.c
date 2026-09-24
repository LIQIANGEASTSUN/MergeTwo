
/* WARNING: Possible PIC construction at 0x02f15c90: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f15b74(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 uVar6;
  int unaff_r6;
  char *pcVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02f15d1c + 0x2f15b8c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f15d20 + 0x2f15ba0));
    func_0x01438628(*(undefined4 *)(_UNK_02f15d24 + 0x2f15bac));
    func_0x01438628(*(undefined4 *)(_UNK_02f15d28 + 0x2f15bb8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6bee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6bee,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_02f0ab60(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x54);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046c26fc(iVar1,param_2,**(undefined4 **)(_UNK_02f15d2c + 0x2f15c40));
  if (iVar1 == 0) {
    iVar1 = FUN_02f0ab60(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x54);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = 0;
    iVar4 = **(int **)(_UNK_02f15d30 + 0x2f15c8c);
    unaff_lr = 0x2f15c94;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
  }
  else {
    iVar1 = FUN_02f0ab60(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x54);
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar5 = func_0x03b70fac(0,param_2,**(undefined4 **)(_UNK_02f15d38 + 0x2f15cec));
      func_0x014388e4();
    }
    else {
      iVar5 = func_0x03b70fac(iVar1,param_2,**(undefined4 **)(_UNK_02f15d34 + 0x2f15cc8));
    }
    iVar5 = iVar5 + 1;
    iVar4 = **(int **)(_UNK_02f15d3c + 0x2f15d10);
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(int *)((int)register0x00000054 + -0x1c) = iVar5;
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar1,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    uVar6 = func_0x046c23f8(iVar1,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34));
    iVar5 = *(int *)(iVar4 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x20) = uVar6;
    uVar6 = func_0x024f83c4(*(undefined4 *)(*(int *)(iVar5 + 0x60) + 0x20),
                            (undefined1 *)((int)register0x00000054 + -0x20));
    iVar5 = func_0x0515c410((undefined1 *)((int)register0x00000054 + -0x1c),uVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x3c));
    if (iVar5 != 0) {
      return;
    }
    iVar5 = *(int *)((int)register0x00000054 + -0x1c);
  }
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar1,param_2,iVar5,
                  *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x40));
  func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x28));
  return;
}

