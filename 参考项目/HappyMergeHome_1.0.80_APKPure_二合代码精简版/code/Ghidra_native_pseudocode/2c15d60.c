
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c25d60(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02c25ed8 + 0x2c25d74);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c25edc + 0x2c25d88));
    func_0x01438628(*(undefined4 *)(_UNK_02c25ee0 + 0x2c25d94));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xd52,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0xd52,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  iVar3 = FUN_02c1969c(param_1);
  if (((iVar3 == -1) || (*(int *)(param_1 + 0x110) + 1U < 2)) || (*(int *)(param_1 + 0x1c) == 0)) {
    return 0;
  }
  piVar9 = *(int **)(_UNK_02c25ee4 + 0x2c25e20);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02c25ee8 + 0x2c25e3c);
  iVar3 = func_0x014e9518(*puVar8);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02be5cb0(iVar3,uVar7,0);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 0xc);
  }
  if (iVar5 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x11c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) == 3) {
      return 0;
    }
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(*puVar8);
  iVar5 = *(int *)(param_1 + 0x11c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x02953fd4(0xd55,0,0);
  if (iVar2 == 0) {
    if (iVar5 == 0) {
      return 0;
    }
    return (uint)((*(uint *)(iVar5 + 0xc) & 0xfffffffd) == 1);
  }
  iVar2 = func_0x029540a4(0xd55,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,iVar5,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,iVar3,0);
  func_0x01523a6c(&uStack_38,iVar5,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
  uVar1 = func_0x024f56e0(&uStack_38,0,0);
  return uVar1;
}

