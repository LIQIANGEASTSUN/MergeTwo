
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dacf20(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_01dad0ec + 0x1dacf38);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01dad0f0 + 0x1dacf4c));
    func_0x01438628(*(undefined4 *)(_UNK_01dad0f4 + 0x1dacf58));
    func_0x01438628(*(undefined4 *)(_UNK_01dad0f8 + 0x1dacf64));
    func_0x01438628(*(undefined4 *)(_UNK_01dad0fc + 0x1dacf70));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x131b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x131b,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar2 = func_0x024f56e0(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = FUN_01da70cc(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f1110(iVar1,uVar6,**(undefined4 **)(_UNK_01dad100 + 0x1dad008));
  if (iVar1 == 0) {
    iVar1 = FUN_01da70cc(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(param_2 + 8);
    iVar4 = *(int *)(iVar1 + 0x3c);
    iVar1 = **(int **)(**(int **)(_UNK_01dad104 + 0x1dad03c) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02e61f28(iVar1,0x65,0);
    iVar7 = *(int *)(param_2 + 0x28);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x03b70700(iVar4,uVar6,iVar1 < iVar7,**(undefined4 **)(_UNK_01dad108 + 0x1dad09c));
  }
  iVar1 = FUN_01da70cc(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar4 = **(int **)(_UNK_01dad10c + 0x1dad0e0);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34);
  uVar2 = func_0x046b5608(iVar1,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
  if ((int)uVar2 < 0) {
    uVar6 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                            &stack0xffffffe4);
    uVar2 = 0;
    func_0x05187a50(uVar6,0);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x034a8c14();
    }
    uVar2 = (uint)(*(char *)(iVar1 + uVar2 * 0x10 + 0x1c) != '\0');
  }
  return uVar2;
}

