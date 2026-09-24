
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bade6c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
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
  
  pcVar6 = (char *)(_UNK_02bae0e8 + 0x2bade88);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bae0ec + 0x2bade9c));
    func_0x01438628(*(undefined4 *)(_UNK_02bae0f0 + 0x2badea8));
    func_0x01438628(*(undefined4 *)(_UNK_02bae0f4 + 0x2badeb4));
    func_0x01438628(*(undefined4 *)(_UNK_02bae0f8 + 0x2badec0));
    func_0x01438628(*(undefined4 *)(_UNK_02bae0fc + 0x2badecc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cc6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cc6,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  FUN_02badc08(param_1,0);
  iVar1 = FUN_02baddd0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_026f6324(iVar1,*(int *)(iVar1 + 0x38) + 1,0);
  iVar1 = FUN_02baddd0(param_1);
  if (*(int *)(**(int **)(_UNK_02bae100 + 0x2badf70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bae104 + 0x2badf8c));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar7,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x014e6e04((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
  uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_28 = 0;
  FUN_026f63e0(iVar1,uVar8,(int)uVar9,uVar8);
  iVar1 = FUN_02baddd0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046c26fc(iVar1,param_2,**(undefined4 **)(_UNK_02bae108 + 0x2bae024));
  iVar7 = FUN_02baddd0(param_1);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x48);
  if (iVar1 == 0) {
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar1 = 1;
    piVar2 = *(int **)(_UNK_02bae114 + 0x2bae0d8);
  }
  else {
    iVar1 = FUN_02baddd0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x48);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b70fac(iVar1,param_2,**(undefined4 **)(_UNK_02bae10c + 0x2bae08c));
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar1 = iVar1 + 1;
    piVar2 = *(int **)(_UNK_02bae110 + 0x2bae0b8);
  }
  iVar5 = *piVar2;
  if (iVar7 == 0) {
    func_0x024f83d4();
  }
  iVar3 = func_0x046c26fc(iVar7,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  if (iVar3 != 0) {
    if (iVar7 == 0) {
      func_0x024f83d4();
    }
    func_0x046c23f8(iVar7,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x34));
    uVar8 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x20),
                            &stack0xffffffe0);
    iVar3 = func_0x0515c410(&stack0xffffffe4,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x3c));
    if (iVar3 != 0) {
      return;
    }
  }
  if (iVar7 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar7,param_2,iVar1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x40));
  func_0x03b70bb0(iVar7,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x28));
  return;
}

