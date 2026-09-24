
/* WARNING: Possible PIC construction at 0x01c11df0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c11cd0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  int unaff_r6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_01c11e7c + 0x1c11ce4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c11e80 + 0x1c11cf8));
    func_0x01438628(*(undefined4 *)(_UNK_01c11e84 + 0x1c11d04));
    func_0x01438628(*(undefined4 *)(_UNK_01c11e88 + 0x1c11d10));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3521,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3521,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  uVar7 = FUN_01c0f9c8(param_1);
  iVar1 = FUN_01c0e5e0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0540(iVar1,uVar7,**(undefined4 **)(_UNK_01c11e8c + 0x1c11da0));
  if (iVar1 == 0) {
    iVar1 = FUN_01c0e5e0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = 0;
    iVar3 = **(int **)(_UNK_01c11e90 + 0x1c11dec);
    unaff_lr = 0x1c11df4;
    unaff_r4 = param_1;
    unaff_r5 = uVar7;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
  }
  else {
    iVar1 = FUN_01c0e5e0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar6 = func_0x03b70fac(0,uVar7,**(undefined4 **)(_UNK_01c11e98 + 0x1c11e4c));
      func_0x014388e4();
    }
    else {
      iVar6 = func_0x03b70fac(iVar1,uVar7,**(undefined4 **)(_UNK_01c11e94 + 0x1c11e28));
    }
    iVar6 = iVar6 + 1;
    iVar3 = **(int **)(_UNK_01c11e9c + 0x1c11e70);
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(int *)((int)register0x00000054 + -0x1c) = iVar6;
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    uVar4 = func_0x046c23f8(iVar1,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x34));
    iVar6 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x20) = uVar4;
    uVar4 = func_0x024f83c4(*(undefined4 *)(*(int *)(iVar6 + 0x60) + 0x20),
                            (undefined1 *)((int)register0x00000054 + -0x20));
    iVar6 = func_0x0515c410((undefined1 *)((int)register0x00000054 + -0x1c),uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
    if (iVar6 != 0) {
      return;
    }
    iVar6 = *(int *)((int)register0x00000054 + -0x1c);
  }
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar1,uVar7,iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x40))
  ;
  func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x28));
  return;
}

