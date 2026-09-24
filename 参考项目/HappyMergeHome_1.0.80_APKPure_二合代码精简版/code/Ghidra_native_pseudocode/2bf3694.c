
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c03694(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
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
  
  pcVar3 = (char *)(_UNK_02c038b0 + 0x2c036ac);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c038b4 + 0x2c036c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c038b8 + 0x2c036cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c038bc + 0x2c036d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c038c0 + 0x2c036e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ed7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ed7,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_38,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02c038c4 + 0x2c03740) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c038c8 + 0x2c0375c));
  iVar5 = *(int *)(param_1 + 0x44);
  uVar7 = *(uint *)(param_1 + 0xb0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar7) {
    func_0x014388e8();
  }
  iVar5 = *(int *)(iVar5 + uVar7 * 4 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x02c3f4b4(iVar5,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar6,0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) != 0x10) {
      return 0;
    }
    piVar8 = *(int **)(_UNK_02c038cc + 0x2c037ec);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar4 = *(undefined4 **)(_UNK_02c038d0 + 0x2c03808);
    iVar1 = func_0x014e9518(*puVar4);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd1400(iVar1,param_2,uVar6,0);
    if (iVar1 == 0) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar4);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bd158c(iVar1,param_2,uVar6,0);
      if (iVar1 != 0) {
        FUN_02c0360c(param_1,param_2);
        return 1;
      }
    }
    FUN_02c02b84(param_1,param_2);
    return 1;
  }
  return 0;
}

