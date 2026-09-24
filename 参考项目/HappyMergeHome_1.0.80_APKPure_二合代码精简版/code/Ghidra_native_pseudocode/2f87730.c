
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f97730(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  undefined4 auStack_1c [2];
  
  pcVar6 = (char *)(_UNK_02f9781c + 0x2f97744);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f97820 + 0x2f97758));
    func_0x01438628(*(undefined4 *)(_UNK_02f97824 + 0x2f97764));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6f7d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6f7d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028bc390 + 0x28bc2b0);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028bc394 + 0x28bc2c4),param_1,0);
      *pcVar6 = '\x01';
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3);
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028bc398 + 0x28bc380));
    return uVar7;
  }
  if (*(int *)(**(int **)(_UNK_02f97828 + 0x2f977bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9782c + 0x2f977d8));
  iVar5 = FUN_02f967a0(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_029b1044 + 0x29b0f70);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029b1048 + 0x29b0f84),uVar7,0);
    func_0x01438628(*(undefined4 *)(_UNK_029b104c + 0x29b0f90));
    *pcVar6 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x111f,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x111f,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0289b0e4 + 0x289aff0);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0289b0e8 + 0x289b004),iVar1,uVar7,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar1,0);
    func_0x01523a2c(&uStack_38,uVar7,0);
    iVar4 = *(int *)(iVar5 + 8);
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
    uVar7 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0289b0ec + 0x289b0d4));
    return uVar7;
  }
  iVar5 = *(int *)(iVar1 + 0x40);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x046ccb14(iVar5,uVar7,**(undefined4 **)(_UNK_029b1050 + 0x29b1000));
  if (iVar5 != 0) {
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = **(int **)(_UNK_029b1054 + 0x29b1030);
    uVar2 = func_0x046cd0dc(iVar1,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x84));
    if ((int)uVar2 < 0) {
      auStack_1c[0] = uVar7;
      uVar7 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38),
                              auStack_1c);
      uVar3 = 0;
      func_0x05187a50(uVar7,0);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x034a8a64();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x034a8c14();
      }
      uVar3 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
    }
    return uVar3;
  }
  return 0;
}

