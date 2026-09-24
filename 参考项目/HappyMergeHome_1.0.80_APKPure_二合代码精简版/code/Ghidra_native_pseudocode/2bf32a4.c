
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c032a4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar4 = (char *)(_UNK_02c035e8 + 0x2c032bc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c035ec + 0x2c032d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c035f0 + 0x2c032dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c035f4 + 0x2c032e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c035f8 + 0x2c032f4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ed5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ed5,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_38,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02c035fc + 0x2c03350) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c03600 + 0x2c0336c));
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + param_2 * 4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x02c3f4b4(iVar3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar6,0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) != 99) {
      return 0;
    }
    piVar8 = *(int **)(_UNK_02c03604 + 0x2c033f8);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_02c03608 + 0x2c03414);
    iVar1 = func_0x014e9518(*puVar9);
    iVar3 = *(int *)(param_1 + 0x44);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar3 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar3 = *(int *)(iVar3 + param_2 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar3 + 0x1c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02be5cb0(iVar1,uVar6,0);
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x44);
      uVar7 = *(uint *)(param_1 + 0xb0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar7) {
        func_0x014388e8();
      }
      iVar3 = *(int *)(iVar3 + uVar7 * 4 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02c3f4b4(iVar3,0);
      iVar1 = func_0x02b53c1c(iVar1,uVar6,0);
      if (iVar1 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar9);
        iVar3 = *(int *)(param_1 + 0x44);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar3 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        iVar3 = *(int *)(iVar3 + param_2 * 4 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(param_1 + 0x44);
        uVar7 = *(uint *)(param_1 + 0xb0);
        uVar6 = *(undefined4 *)(iVar3 + 0x11c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar7) {
          func_0x014388e8();
        }
        iVar3 = *(int *)(iVar5 + uVar7 * 4 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x02c3f4b4(iVar3,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02be6048(iVar1,uVar6,uVar2,0);
        if (iVar1 == 0) {
          func_0x02c0360c(param_1,param_2);
          return 1;
        }
      }
    }
    FUN_02c02b84(param_1,param_2);
    return 1;
  }
  return 0;
}

