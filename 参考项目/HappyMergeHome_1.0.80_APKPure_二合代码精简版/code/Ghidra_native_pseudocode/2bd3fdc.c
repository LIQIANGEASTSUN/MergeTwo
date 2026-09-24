
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02be3fdc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_02be40a8 + 0x2be3ff0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be40ac + 0x2be4004));
    func_0x01438628(*(undefined4 *)(_UNK_02be40b0 + 0x2be4010));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5011,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5011,0);
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
    func_0x01523a2c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2);
    iVar1 = func_0x024f56f0(&uStack_30,0,0);
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_02be40b4 + 0x2be4068) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be40b8 + 0x2be4084));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02bde7ec + 0x2bde718);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bde7f0 + 0x2bde72c));
    func_0x01438628(*(undefined4 *)(_UNK_02bde7f4 + 0x2bde738));
    *pcVar5 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x5012,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x5012,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar1,0);
    func_0x01523a2c(&uStack_38,param_1,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
    iVar1 = func_0x024f56f0(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = func_0x03600048(*(undefined4 *)(iVar1 + 0x14),param_1,
                          **(undefined4 **)(_UNK_02bde7f8 + 0x2bde798));
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x4c);
    iVar4 = *(int *)(iVar1 + 0x50);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar1 + 0x34);
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    return (iVar4 - iVar1) - *(int *)(iVar7 + 0xc);
  }
  return -1;
}

