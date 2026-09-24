
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c81224(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01c812e4 + 0x1c81238);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c812e8 + 0x1c8124c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5dd,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x029f09c0(param_1,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_01c812ec + 0x1c812bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar4 = (char *)(_UNK_02c35e20 + 0x2c35d24);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c35e24 + 0x2c35d38),0);
    func_0x01438628(*(undefined4 *)(_UNK_02c35e28 + 0x2c35d44));
    func_0x01438628(*(undefined4 *)(_UNK_02c35e2c + 0x2c35d50));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x17b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x17b,0);
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
    func_0x01523a2c(&uStack_30,0x55,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_02c35e30 + 0x2c35da8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c35e34 + 0x2c35dc4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029ca78c(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02c35e38 + 0x2c35df8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x02c35e3c(0x55);
  return (uint)(iVar5 <= iVar1);
}

