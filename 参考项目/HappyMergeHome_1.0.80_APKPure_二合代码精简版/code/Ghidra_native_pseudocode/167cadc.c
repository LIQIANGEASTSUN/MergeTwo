
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168cadc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int iVar5;
  undefined4 unaff_r6;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int unaff_r7;
  undefined4 *puVar9;
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
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  pcVar6 = (char *)(_UNK_0168cc98 + 0x168caf4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168cc9c + 0x168cb08));
    func_0x01438628(*(undefined4 *)(_UNK_0168cca0 + 0x168cb14));
    func_0x01438628(*(undefined4 *)(_UNK_0168cca4 + 0x168cb20));
    func_0x01438628(*(undefined4 *)(_UNK_0168cca8 + 0x168cb2c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2c53,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2c53,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar2 = FUN_0167c750(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x74);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0540(iVar2,param_2,**(undefined4 **)(_UNK_0168ccac + 0x168cbc4));
  iVar5 = FUN_0167c750(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x74);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x18);
  if (iVar5 == 0) {
    func_0x014388e4();
    if (iVar2 == 0) goto LAB_0168cc78;
    iVar2 = func_0x024f05d4(0,param_2,**(undefined4 **)(_UNK_0168ccb0 + 0x168cc48));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_0168cc78:
      iVar2 = **(int **)(_UNK_0168ccbc + 0x168cc8c);
      iStack_18 = unaff_r4;
      if (iVar5 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar5,param_2,1,
                      *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24));
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x024f05d4(iVar5,param_2,**(undefined4 **)(_UNK_0168ccb4 + 0x168cc1c));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_0168ccb8 + 0x168cc6c);
  iStack_1c = unaff_r7;
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar5,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar5 == 0) {
      func_0x024f83d4();
    }
    uStack_20 = func_0x046c23f8(iVar5,param_2,
                                *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x34));
    uVar7 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x20),
                            &uStack_20);
    iVar2 = func_0x0515c410(&iStack_1c,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x3c));
    unaff_r7 = iStack_1c;
    if (iVar2 != 0) {
      return;
    }
  }
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar5,param_2,unaff_r7,
                  *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x40));
  uVar7 = *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x28);
  unaff_lr = 0x3b710c8;
  iStack_18 = iVar5;
  unaff_r6 = param_2;
  register0x00000054 = (BADSPACEBASE *)&uStack_20;
SUB_03b70bb0:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = iStack_18;
  pcVar6 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
  if (*pcVar6 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),uVar7);
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar9 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar2 = func_0x04e4a028(*puVar9);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  cVar1 = *(char *)(iVar5 + 0x30);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  if (*(char *)(iVar5 + 0x31) != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

