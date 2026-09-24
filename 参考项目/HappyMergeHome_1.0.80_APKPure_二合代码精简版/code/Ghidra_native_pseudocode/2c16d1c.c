
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c26d1c(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
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
  
  pcVar6 = (char *)(_UNK_02c272b4 + 0x2c26d38);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c272b8 + 0x2c26d4c));
    func_0x01438628(*(undefined4 *)(_UNK_02c272bc + 0x2c26d58));
    func_0x01438628(*(undefined4 *)(_UNK_02c272c0 + 0x2c26d64));
    func_0x01438628(*(undefined4 *)(_UNK_02c272c4 + 0x2c26d70));
    func_0x01438628(*(undefined4 *)(_UNK_02c272c8 + 0x2c26d7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c272cc + 0x2c26d88));
    func_0x01438628(*(undefined4 *)(_UNK_02c272d0 + 0x2c26d94));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xd56,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xd56,0);
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
    func_0x01523a1c(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar8,uVar10,&uStack_38,uVar4,0,0);
    return;
  }
  piVar11 = *(int **)(_UNK_02c272d4 + 0x2c26df4);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c272d8 + 0x2c26e10);
  iVar2 = func_0x014e9518(*puVar12);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar7 = 0;
  uVar3 = func_0x02c4af88(iVar2,uVar10,0);
  iVar2 = func_0x014e9518(*puVar12);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x02c4aa30(iVar2,uVar10,0);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_02c272dc + 0x2c26e80) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c272e0 + 0x2c26e9c));
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = 0;
    iVar2 = FUN_02bd496c(iVar2,uVar10,0);
    if (iVar2 != 0) {
      uVar7 = uVar3 ^ 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014e94d8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar2,(uVar7 ^ 1) & param_2,0);
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = func_0x014e94d8(*(int *)(param_1 + 0x24),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,uVar7 & param_2,0);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014e94d8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar2,0,0);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(*puVar12);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  bVar1 = 0;
  iVar2 = func_0x02c4a818(iVar2,uVar10,0);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_02c272e4 + 0x2c26fd8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c272e8 + 0x2c26ff4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    bVar1 = func_0x02e7975c(iVar2,0);
  }
  iVar2 = func_0x01cc105c(0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x01cc4b60(iVar2,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01cca620(0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x01ccd794(iVar2,0);
    if (iVar2 != 0) goto LAB_02c27070;
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    bVar9 = 0;
    iVar2 = func_0x014e94d8(iVar2,0);
    if (param_2 != 0) {
      bVar9 = (bVar1 ^ 1) & *(char *)(param_1 + 0x11a) != '\0';
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    bVar5 = 0;
    func_0x014e94e8(iVar2,bVar9,0);
    if (*(int *)(param_1 + 0x5c) != 0) {
      iVar2 = func_0x014e94d8(*(int *)(param_1 + 0x5c),0);
      if (param_2 != 0) {
        bVar5 = *(byte *)(param_1 + 0x11a);
      }
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar2,bVar5 & bVar1,0);
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar2 = func_0x014e94d8(*(int *)(param_1 + 0xbc),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar2,0,0);
    }
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_02c27274;
    iVar2 = func_0x014e94d8(*(int *)(param_1 + 0xc0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    bVar9 = 0;
  }
  else {
LAB_02c27070:
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    if (*(int *)(param_1 + 0x5c) != 0) {
      iVar2 = func_0x014e94d8(*(int *)(param_1 + 0x5c),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar2,0,0);
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      bVar9 = 0;
      iVar2 = func_0x014e94d8(*(int *)(param_1 + 0xbc),0);
      if (param_2 != 0) {
        bVar9 = (bVar1 ^ 1) & *(char *)(param_1 + 0x11a) != '\0';
      }
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar2,bVar9,0);
    }
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_02c27274;
    bVar9 = 0;
    iVar2 = func_0x014e94d8(*(int *)(param_1 + 0xc0),0);
    if (param_2 != 0) {
      bVar9 = *(byte *)(param_1 + 0x11a);
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    bVar9 = bVar9 & bVar1;
  }
  func_0x014e94e8(iVar2,bVar9,0);
LAB_02c27274:
  if (param_2 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05cf7be8)(iVar2,**(undefined4 **)(_UNK_02c272ec + 0x2c272a4),0);
  return;
}

