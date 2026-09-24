
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c78274(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02c784ac + 0x2c7828c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c784b0 + 0x2c782a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c784b4 + 0x2c782ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c784b8 + 0x2c782b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c784bc + 0x2c782c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c784c0 + 0x2c782d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c784c4 + 0x2c782dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c784c8 + 0x2c782e8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6044,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6044,0);
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
    func_0x01523a1c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c784cc + 0x2c78344) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(param_1,0,0);
  if (iVar1 != 0 || param_2 != 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c784d0 + 0x2c78380) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c784d4 + 0x2c7839c));
  uVar4 = FUN_02c6b6f0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02be316c(iVar1,uVar4,0);
  iVar1 = **(int **)(**(int **)(_UNK_02c784d8 + 0x2c783d8) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02c3d868(iVar1,0);
  if (iVar1 != 0) {
    FUN_02beb760(iVar1,0);
  }
  iVar3 = **(int **)(_UNK_02c784dc + 0x2c78414);
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar3);
    iVar1 = *(int *)(iVar3 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar4 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02c784e0 + 0x2c78474) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02c784e0 + 0x2c78474));
  }
  uVar2 = **(undefined4 **)(_UNK_02c784e4 + 0x2c784a4);
  iVar1 = func_0x02953fd4(0x53,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x029540a4(0x53,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,uVar4,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,uVar2,0);
  func_0x01523a6c(&uStack_38,uVar4,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}

