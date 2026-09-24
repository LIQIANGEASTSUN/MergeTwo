
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031e9ea8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
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
  
  pcVar4 = (char *)(_UNK_031e9fc0 + 0x31e9ebc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e9fc4 + 0x31e9ed0));
    func_0x01438628(*(undefined4 *)(_UNK_031e9fc8 + 0x31e9edc));
    func_0x01438628(*(undefined4 *)(_UNK_031e9fcc + 0x31e9ee8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x331b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x331b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028cd888 + 0x28cd7a8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028cd88c + 0x28cd7bc),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
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
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028cd890 + 0x28cd878));
    return uVar6;
  }
  iVar1 = FUN_031e6094(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar1 + 0xc);
  iVar1 = FUN_031e7908(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if ((int)uVar5 < *(int *)(iVar1 + 0xc)) {
    iVar1 = FUN_031e7908(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x05187824(0,uVar5,**(undefined4 **)(_UNK_031e9fd0 + 0x31e9fac));
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x034a8c14();
    }
    return *(undefined4 *)(iVar1 + uVar5 * 4 + 0x10);
  }
  return 0;
}

