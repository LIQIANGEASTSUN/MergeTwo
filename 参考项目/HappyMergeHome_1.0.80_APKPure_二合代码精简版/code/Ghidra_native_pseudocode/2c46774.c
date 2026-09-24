
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c56774(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 auStack_1c [2];
  
  pcVar7 = (char *)(_UNK_02c5684c + 0x2c5678c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c56850 + 0x2c567a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c56854 + 0x2c567ac));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f39,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f39,0);
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
    uVar6 = func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02c56858 + 0x2c56808) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5685c + 0x2c56824));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_029a7094 + 0x29a6fc0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029a7098 + 0x29a6fd4),param_2,0);
    func_0x01438628(*(undefined4 *)(_UNK_029a709c + 0x29a6fe0));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x489,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x489,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_0287959c + 0x28794a8);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028795a0 + 0x28794bc),iVar1,param_2,0);
      *pcVar7 = '\x01';
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028795a4 + 0x287958c));
    return uVar6;
  }
  iVar4 = *(int *)(iVar1 + 0x38);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x046ccb14(iVar4,param_2,**(undefined4 **)(_UNK_029a70a0 + 0x29a7050));
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = **(int **)(_UNK_029a70a4 + 0x29a7080);
    uVar2 = func_0x046cd0dc(iVar1,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
    if ((int)uVar2 < 0) {
      auStack_1c[0] = param_2;
      uVar6 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
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

