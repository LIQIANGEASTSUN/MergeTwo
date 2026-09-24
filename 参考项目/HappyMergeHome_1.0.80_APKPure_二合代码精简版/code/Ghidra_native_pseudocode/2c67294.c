
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c77294(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02c774f4 + 0x2c772ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c774f8 + 0x2c772c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c774fc + 0x2c772cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c77500 + 0x2c772d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c77504 + 0x2c772e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c77508 + 0x2c772f0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x603d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x603d,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (-1 < *(int *)(param_1 + 0x78)) {
    if (*(int *)(**(int **)(_UNK_02c7750c + 0x2c77358) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c77510 + 0x2c77374));
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    uVar5 = FUN_02c6b6f0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02be2d0c(iVar1,uVar2,uVar5,0);
    if (iVar1 != 0) {
      uVar5 = func_0x02e8de70(iVar1,0);
      uStack_20 = 1;
      FUN_02c6dff0(param_1,1,uVar5,0);
      return;
    }
    uStack_20 = 0;
    FUN_02c6dff0(param_1,0,**(undefined4 **)(_UNK_02c77514 + 0x2c773f8),0);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
    FUN_02c6ffa4(param_1,0);
    iVar1 = **(int **)(**(int **)(_UNK_02c77518 + 0x2c77494) + 0x5c);
    uVar5 = FUN_02c771d0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x02e76744(iVar1,uVar5,0);
    *(undefined4 *)(param_1 + 0x88) = uVar5;
    func_0x014385cc();
  }
  (*(code *)&UNK_05d3fb3c)(param_1,**(undefined4 **)(_UNK_02c7751c + 0x2c774e4),0);
  return;
}

