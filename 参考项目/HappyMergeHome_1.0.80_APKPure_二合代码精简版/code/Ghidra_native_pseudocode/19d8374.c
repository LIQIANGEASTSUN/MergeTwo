
/* WARNING: Possible PIC construction at 0x019e84f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019e8550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019e84fc) */
/* WARNING: Removing unreachable block (ram,0x019e8508) */
/* WARNING: Removing unreachable block (ram,0x019e850c) */
/* WARNING: Removing unreachable block (ram,0x019e8530) */
/* WARNING: Removing unreachable block (ram,0x019e8534) */
/* WARNING: Removing unreachable block (ram,0x019e8540) */
/* WARNING: Removing unreachable block (ram,0x019e8544) */
/* WARNING: Removing unreachable block (ram,0x019e8554) */
/* WARNING: Removing unreachable block (ram,0x019e8560) */
/* WARNING: Removing unreachable block (ram,0x019e8564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019e8374(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  int unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_019e85b8 + 0x19e838c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019e85bc + 0x19e83a0));
    func_0x01438628(*(undefined4 *)(_UNK_019e85c0 + 0x19e83ac));
    func_0x01438628(*(undefined4 *)(_UNK_019e85c4 + 0x19e83b8));
    func_0x01438628(*(undefined4 *)(_UNK_019e85c8 + 0x19e83c4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x36f2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x36f2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028d1b74 + 0x28d1a80);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028d1b78 + 0x28d1a94),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028d1b7c + 0x28d1b64));
    return uVar6;
  }
  iVar1 = func_0x019edb58(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0584(iVar1,param_2,**(undefined4 **)(_UNK_019e85cc + 0x19e844c));
  if (iVar1 == 0) {
    iVar1 = func_0x019edb58(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_019e85d0 + 0x19e8480));
    func_0x026c2188(uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f1500(iVar1,param_2,uVar6,**(undefined4 **)(_UNK_019e85d4 + 0x19e84b4));
    iVar1 = func_0x019edb58(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    unaff_r7 = *(int **)(_UNK_019e85d8 + 0x19e84f8);
    iVar4 = *unaff_r7;
    unaff_lr = 0x19e84fc;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
  }
  else {
    iVar1 = func_0x019edb58(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = **(int **)(_UNK_019e85dc + 0x19e85ac);
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r5;
  puVar8 = (undefined4 *)((int)register0x00000054 + -0x10);
  *puVar8 = unaff_r4;
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34);
  uVar6 = *puVar8;
  uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
  uVar7 = *(undefined4 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r7;
  *puVar8 = uVar7;
  *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
  *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
  uVar2 = func_0x046cd0dc(iVar1,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
  if ((int)uVar2 < 0) {
    iVar1 = *(int *)(iVar4 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x1c) = param_2;
    uVar6 = func_0x034a8ad8(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x38),
                            (undefined1 *)((int)register0x00000054 + -0x1c));
    uVar3 = 0;
    func_0x05187a50(uVar6,0);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x034a8c14();
    }
    uVar3 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
  }
  return uVar3;
}

