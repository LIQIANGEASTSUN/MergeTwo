
/* WARNING: Possible PIC construction at 0x02f15770: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f15650(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 uVar7;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02f157fc + 0x2f15664);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f15800 + 0x2f15678));
    func_0x01438628(*(undefined4 *)(_UNK_02f15804 + 0x2f15684));
    func_0x01438628(*(undefined4 *)(_UNK_02f15808 + 0x2f15690));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6c7f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6c7f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  uVar7 = FUN_02f12f44(param_1);
  iVar1 = FUN_02f0ab60(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046c26fc(iVar1,uVar7,**(undefined4 **)(_UNK_02f1580c + 0x2f15720));
  if (iVar1 == 0) {
    iVar1 = FUN_02f0ab60(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = 0;
    iVar4 = **(int **)(_UNK_02f15810 + 0x2f1576c);
    unaff_lr = 0x2f15774;
    unaff_r4 = param_1;
    unaff_r5 = uVar7;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
  }
  else {
    iVar1 = FUN_02f0ab60(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar5 = func_0x03b70fac(0,uVar7,**(undefined4 **)(_UNK_02f15818 + 0x2f157cc));
      func_0x014388e4();
    }
    else {
      iVar5 = func_0x03b70fac(iVar1,uVar7,**(undefined4 **)(_UNK_02f15814 + 0x2f157a8));
    }
    iVar5 = iVar5 + 1;
    iVar4 = **(int **)(_UNK_02f1581c + 0x2f157f0);
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
  iVar2 = func_0x046c26fc(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    uVar3 = func_0x046c23f8(iVar1,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34));
    iVar5 = *(int *)(iVar4 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
    uVar3 = func_0x024f83c4(*(undefined4 *)(*(int *)(iVar5 + 0x60) + 0x20),
                            (undefined1 *)((int)register0x00000054 + -0x20));
    iVar5 = func_0x0515c410((undefined1 *)((int)register0x00000054 + -0x1c),uVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x3c));
    if (iVar5 != 0) {
      return;
    }
    iVar5 = *(int *)((int)register0x00000054 + -0x1c);
  }
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar1,uVar7,iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x40))
  ;
  func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x28));
  return;
}

