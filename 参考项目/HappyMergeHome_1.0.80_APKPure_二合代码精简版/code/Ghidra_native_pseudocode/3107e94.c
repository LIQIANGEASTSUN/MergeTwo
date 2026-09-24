
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03117e94(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_03117fb4 + 0x3117ea8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03117fb8 + 0x3117ebc));
    func_0x01438628(*(undefined4 *)(_UNK_03117fbc + 0x3117ec8));
    func_0x01438628(*(undefined4 *)(_UNK_03117fc0 + 0x3117ed4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x78af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x78af,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024f56f0(&uStack_30,0,0);
    return uVar6;
  }
  piVar5 = *(int **)(_UNK_03117fc4 + 0x3117f2c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_03117fc8 + 0x3117f48);
  iVar1 = func_0x04e4a028(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

