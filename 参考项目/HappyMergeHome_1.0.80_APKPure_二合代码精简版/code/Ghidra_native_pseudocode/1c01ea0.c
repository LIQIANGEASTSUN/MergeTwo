
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c11ea0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  undefined4 auStack_1c [3];
  
  pcVar4 = (char *)(_UNK_01c11fc0 + 0x1c11eb4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c11fc4 + 0x1c11ec8));
    func_0x01438628(*(undefined4 *)(_UNK_01c11fc8 + 0x1c11ed4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x34e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x34e9,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x024f56f0(&uStack_30,0,0);
    return uVar6;
  }
  uVar6 = FUN_01c0f9c8(param_1);
  iVar1 = FUN_01c0e5e0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0540(iVar1,uVar6,**(undefined4 **)(_UNK_01c11fcc + 0x1c11f64));
  if (iVar1 != 0) {
    iVar1 = FUN_01c0e5e0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = **(int **)(_UNK_01c11fd0 + 0x1c11fac);
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x34);
    uVar2 = func_0x046c2c44(iVar1,uVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x84));
    if ((int)uVar2 < 0) {
      auStack_1c[0] = uVar6;
      uVar6 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38),
                              auStack_1c);
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

