
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c047ec(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
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
  
  pcVar3 = (char *)(_UNK_02c04b40 + 0x2c04804);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c04b44 + 0x2c04818));
    func_0x01438628(*(undefined4 *)(_UNK_02c04b48 + 0x2c04824));
    func_0x01438628(*(undefined4 *)(_UNK_02c04b4c + 0x2c04830));
    func_0x01438628(*(undefined4 *)(_UNK_02c04b50 + 0x2c0483c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5edb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5edb,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  uVar6 = *(uint *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar6) {
    func_0x014388e8();
  }
  iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c3f4b4(iVar1,0);
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar4 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar4 = *(int *)(iVar4 + param_2 * 4 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x02c3f4b4(iVar4,0);
  if (iVar1 != iVar4) {
    return 0;
  }
  piVar8 = *(int **)(_UNK_02c04b54 + 0x2c0492c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_02c04b58 + 0x2c04948);
  iVar1 = func_0x014e9518(*puVar7);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bd1400(iVar1,param_2,uVar5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3f4b4(iVar1,0);
    if (iVar1 != -1) {
      if (*(int *)(**(int **)(_UNK_02c04b5c + 0x2c049d0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c04b60 + 0x2c049ec));
      iVar4 = *(int *)(param_1 + 0x44);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar4 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      iVar4 = *(int *)(iVar4 + param_2 * 4 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02c3f4b4(iVar4,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029a6fa8(iVar1,uVar5,0);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != 2)) {
LAB_02c04b28:
        FUN_02c0360c(param_1,param_2);
        return 1;
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar7);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bad204(iVar1,param_2,uVar5,0);
      iVar4 = func_0x014e9518(*puVar7);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_1 + 0xb0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_02bad204(iVar4,uVar5,uVar2,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x28) < 1) {
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar4 + 0x28) < 1) goto LAB_02c04b28;
      }
    }
  }
  FUN_02c02b84(param_1,param_2);
  return 1;
}

