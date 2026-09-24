
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03282668(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
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
  
  pcVar6 = (char *)(_UNK_03282834 + 0x3282680);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03282838 + 0x3282694));
    func_0x01438628(*(undefined4 *)(_UNK_0328283c + 0x32826a0));
    func_0x01438628(*(undefined4 *)(_UNK_03282840 + 0x32826ac));
    func_0x01438628(*(undefined4 *)(_UNK_03282844 + 0x32826b8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1434,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1434,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = FUN_03275bc8(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x3c);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(undefined4 *)(param_2 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x046b50c0(iVar2,uVar5,**(undefined4 **)(_UNK_03282848 + 0x3282750));
  if (iVar2 == 0) {
    iVar2 = FUN_03275bc8(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(undefined4 *)(param_2 + 8);
    iVar4 = *(int *)(iVar2 + 0x3c);
    iVar2 = **(int **)(**(int **)(_UNK_0328284c + 0x3282784) + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02e61f28(iVar2,0x65,0);
    iVar7 = *(int *)(param_2 + 0x20);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x03b70700(iVar4,uVar5,iVar2 < iVar7,**(undefined4 **)(_UNK_03282850 + 0x32827e4));
  }
  iVar2 = FUN_03275bc8(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar4 = **(int **)(_UNK_03282854 + 0x3282828);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34);
  uVar1 = func_0x046b5608(iVar2,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
  if ((int)uVar1 < 0) {
    uVar5 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                            &stack0xffffffe4);
    uVar1 = 0;
    func_0x05187a50(uVar5,0);
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
      func_0x034a8c14();
    }
    uVar1 = (uint)(*(char *)(iVar2 + uVar1 * 0x10 + 0x1c) != '\0');
  }
  return uVar1;
}

