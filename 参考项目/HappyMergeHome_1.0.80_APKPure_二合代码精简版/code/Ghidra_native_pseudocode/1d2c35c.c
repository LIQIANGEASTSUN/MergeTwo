
/* WARNING: Possible PIC construction at 0x01d3c4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d3c4c4) */
/* WARNING: Removing unreachable block (ram,0x01d3c544) */
/* WARNING: Removing unreachable block (ram,0x01d3c4d0) */
/* WARNING: Removing unreachable block (ram,0x01d3c4e4) */
/* WARNING: Removing unreachable block (ram,0x01d3c4e8) */
/* WARNING: Removing unreachable block (ram,0x01d3c4f4) */
/* WARNING: Removing unreachable block (ram,0x01d3c4f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01d3c35c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_r7;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_01d3c54c + 0x1d3c374);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3c550 + 0x1d3c388));
    func_0x01438628(*(undefined4 *)(_UNK_01d3c554 + 0x1d3c394));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xb39a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xb39a,0);
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
    uVar6 = func_0x024f56f0(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = FUN_01d3a9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar8 = *(undefined4 **)(_UNK_01d3c558 + 0x1d3c420);
  iVar1 = func_0x024f0540(iVar1,param_2,*puVar8);
  if (iVar1 != 0) {
    iVar1 = FUN_01d3a9c0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0540(iVar1,param_2,*puVar8);
    if (iVar1 == 0) {
      iVar1 = FUN_01d3a9c0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar4 = **(int **)(_UNK_01d3c560 + 0x1d3c534);
    }
    else {
      unaff_r6 = FUN_01d3c24c(param_1,param_2);
      iVar1 = FUN_01d3a9c0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar4 = **(int **)(_UNK_01d3c55c + 0x1d3c4c0);
      unaff_lr = 0x1d3c4c4;
      unaff_r4 = param_2;
      unaff_r5 = param_1;
      unaff_r7 = iVar1;
      register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
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
    *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
    *puVar8 = uVar7;
    *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
    *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
    uVar2 = func_0x046c2c44(iVar1,param_2,
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
  return 0;
}

