
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be5d18(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int iVar5;
  undefined4 unaff_r6;
  int *piVar6;
  int unaff_r7;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_02be5eac + 0x2be5d38);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be5eb0 + 0x2be5d4c));
    func_0x01438628(*(undefined4 *)(_UNK_02be5eb4 + 0x2be5d58));
    func_0x01438628(*(undefined4 *)(_UNK_02be5eb8 + 0x2be5d64));
    func_0x01438628(*(undefined4 *)(_UNK_02be5ebc + 0x2be5d70));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d23,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5d23,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x028834e8(iVar2,param_1,param_2,param_3);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(param_2 + 0x84);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x046c26fc(iVar2,param_3,**(undefined4 **)(_UNK_02be5ec0 + 0x2be5df8));
  iVar5 = *(int *)(param_2 + 0x84);
  if (iVar5 == 0) {
    func_0x014388e4();
    if (iVar2 == 0) goto LAB_02be5e88;
    iVar2 = func_0x03b70fac(0,param_3,**(undefined4 **)(_UNK_02be5ec4 + 0x2be5e54));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_02be5e88:
      iVar2 = **(int **)(_UNK_02be5ed0 + 0x2be5e9c);
      if (iVar5 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar5,param_3,1,
                      *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24));
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x03b70fac(iVar5,param_3,**(undefined4 **)(_UNK_02be5ec8 + 0x2be5e28));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_02be5ecc + 0x2be5e78);
  iStack_1c = unaff_r7;
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar5,param_3,
                          *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar5 == 0) {
      func_0x024f83d4();
    }
    uStack_20 = func_0x046c23f8(iVar5,param_3,
                                *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x34));
    uVar4 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x20),
                            &uStack_20);
    iVar2 = func_0x0515c410(&iStack_1c,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x3c));
    unaff_r7 = iStack_1c;
    if (iVar2 != 0) {
      return;
    }
  }
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar5,param_3,unaff_r7,
                  *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x40));
  uVar4 = *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x28);
  unaff_lr = 0x3b710c8;
  unaff_r4 = iVar5;
  unaff_r6 = param_3;
  register0x00000054 = (BADSPACEBASE *)&uStack_20;
SUB_03b70bb0:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  pcVar7 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
  if (*pcVar7 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),uVar4);
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
    *pcVar7 = '\x01';
  }
  piVar6 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar8 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar2 = func_0x04e4a028(*puVar8);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  cVar1 = *(char *)(iVar5 + 0x30);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar8);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  if (*(char *)(iVar5 + 0x31) != '\0') {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar8);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

