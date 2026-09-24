
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c53624(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
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
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02c539a0 + 0x2c5363c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c539a4 + 0x2c53650));
    func_0x01438628(*(undefined4 *)(_UNK_02c539a8 + 0x2c5365c));
    func_0x01438628(*(undefined4 *)(_UNK_02c539ac + 0x2c53668));
    func_0x01438628(*(undefined4 *)(_UNK_02c539b0 + 0x2c53674));
    func_0x01438628(*(undefined4 *)(_UNK_02c539b4 + 0x2c53680));
    func_0x01438628(*(undefined4 *)(_UNK_02c539b8 + 0x2c5368c));
    func_0x01438628(*(undefined4 *)(_UNK_02c539bc + 0x2c53698));
    func_0x01438628(*(undefined4 *)(_UNK_02c539c0 + 0x2c536a4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f5c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f5c,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_02c539c4 + 0x2c53700) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024ef144(uVar6,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  func_0x02c53c40(param_1,0);
  iVar1 = **(int **)(**(int **)(_UNK_02c539c8 + 0x2c53780) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02c3d868(iVar1);
  piVar7 = *(int **)(_UNK_02c539cc + 0x2c537ac);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x388);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c539d0 + 0x2c537d0),1);
  uStack_1c = 0;
  iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02c539d4 + 0x2c537f0),&uStack_1c);
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar4 != 0) && (iVar2 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if (piVar7[3] == 0) {
    func_0x014388e8();
  }
  piVar7[4] = iVar4;
  func_0x014385cc(piVar7 + 4,iVar4);
  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c539d8 + 0x2c53864));
  func_0x0298fd74(uVar3,uVar6,piVar7,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02bf0b68(iVar1,uVar3,0);
  if (*(int *)(**(int **)(_UNK_02c539dc + 0x2c538a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c539e0 + 0x2c538c0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = FUN_02be0a54(iVar1,0,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  FUN_02c53134(param_1);
  iVar1 = func_0x030b119c(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x030bd0a0(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x030b119c(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x030bd838(iVar1,0);
  }
  iVar1 = func_0x02b3dda0(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b4cf0c(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x02b3dda0(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b4c94c(iVar1,0);
  }
  func_0x02c53ef8(param_1);
  return;
}

