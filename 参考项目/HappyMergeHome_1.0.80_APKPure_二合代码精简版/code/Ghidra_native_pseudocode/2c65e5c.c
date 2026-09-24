
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c75e5c(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  undefined4 extraout_r1_08;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
  pcVar3 = (char *)(_UNK_02c762bc + 0x2c75e74);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c762c0 + 0x2c75e88));
    func_0x01438628(*(undefined4 *)(_UNK_02c762c4 + 0x2c75e94));
    func_0x01438628(*(undefined4 *)(_UNK_02c762c8 + 0x2c75ea0));
    func_0x01438628(*(undefined4 *)(_UNK_02c762cc + 0x2c75eac));
    func_0x01438628(*(undefined4 *)(_UNK_02c762d0 + 0x2c75eb8));
    func_0x01438628(*(undefined4 *)(_UNK_02c762d4 + 0x2c75ec4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5fff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5fff,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puStack_30 = (undefined4 *)0x0;
    func_0x024f56c0(&puStack_48,0,0);
    puStack_30 = puStack_48;
    puStack_2c = (undefined4 *)uStack_44;
    puStack_28 = (undefined4 *)uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&puStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c762d8 + 0x2c75f20) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02c762dc + 0x2c75f3c);
  iVar1 = func_0x014e9518(*puVar8);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar6 = FUN_02c6b6f0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bad204(iVar1,uVar2,uVar6,0);
  iVar5 = func_0x014e9518(*puVar8);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02bd1624(iVar5,0);
  piVar11 = (int *)(param_1 + 0x80);
  *piVar11 = iVar5;
  func_0x014385cc(piVar11,iVar5);
  iVar5 = *piVar11;
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 8);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_026f6b3c(iVar5,uVar6,0);
  iVar5 = *piVar11;
  uVar6 = extraout_r1;
  if (iVar5 == 0) {
    func_0x014388e4();
    uVar6 = extraout_r1_00;
  }
  uStack_38 = 0;
  FUN_026f7088(iVar5,uVar6,*(undefined4 *)(iVar5 + 0x30),*(undefined4 *)(iVar5 + 0x34));
  iVar5 = *piVar11;
  uVar6 = *(undefined4 *)(iVar1 + 0x28);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_026f6f10(iVar5,uVar6,0);
  iVar5 = *piVar11;
  uVar6 = *(undefined4 *)(iVar1 + 0x3c);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar9 = 0;
  FUN_026f7160(iVar5,uVar6,0);
  iVar5 = *piVar11;
  uVar6 = *(undefined4 *)(iVar1 + 0x40);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  puStack_30 = (undefined4 *)(iVar1 + 0x18);
  puStack_2c = (undefined4 *)(iVar1 + 0x20);
  puStack_28 = (undefined4 *)(iVar1 + 0x48);
  FUN_026f721c(iVar5,uVar6,0);
  puVar8 = *(undefined4 **)(_UNK_02c762e0 + 0x2c76098);
  puVar12 = *(undefined4 **)(_UNK_02c762e4 + 0x2c760a0);
  uVar6 = extraout_r1_01;
  while( true ) {
    iVar5 = *(int *)(iVar1 + 0x38);
    if (iVar5 == 0) {
      func_0x014388e4();
      uVar6 = extraout_r1_02;
    }
    iVar4 = *piVar11;
    if (*(int *)(iVar5 + 0xc) <= iVar9) break;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar1 + 0x38);
    iVar5 = *(int *)(iVar4 + 0x38);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x03b7661c(iVar7,iVar9,*puVar8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x03b75ba0(iVar5,uVar6,*puVar12);
    iVar9 = iVar9 + 1;
    uVar6 = extraout_r1_03;
  }
  uVar2 = *puStack_30;
  uVar10 = puStack_30[1];
  if (iVar4 == 0) {
    func_0x014388e4();
    uVar6 = extraout_r1_04;
  }
  uStack_38 = 0;
  FUN_026f6d70(iVar4,uVar6,uVar2,uVar10);
  iVar5 = *piVar11;
  uVar2 = *puStack_2c;
  uVar10 = puStack_2c[1];
  uVar6 = extraout_r1_05;
  if (iVar5 == 0) {
    func_0x014388e4();
    uVar6 = extraout_r1_06;
  }
  uStack_38 = 0;
  FUN_026f6e40(iVar5,uVar6,uVar2,uVar10);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *piVar11;
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_026f6bf8(iVar1,uVar6,0);
  iVar1 = *piVar11;
  uVar10 = *puStack_28;
  uVar2 = puStack_28[1];
  uVar6 = extraout_r1_07;
  if (iVar1 == 0) {
    func_0x014388e4();
    uVar6 = extraout_r1_08;
  }
  uStack_38 = 0;
  FUN_026f72d8(iVar1,uVar6,uVar10,uVar2);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,0,0);
  FUN_02c6ffa4(param_1,0);
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,0,0);
  FUN_02c6dd30(param_1,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,1,0);
  uStack_38 = 0;
  FUN_02c6dff0(param_1,0,**(undefined4 **)(_UNK_02c762e8 + 0x2c762a8),0);
  return;
}

