
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0308d038(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 auStack_1c [2];
  
  pcVar6 = (char *)(_UNK_0308d174 + 0x308d050);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308d178 + 0x308d064));
    func_0x01438628(*(undefined4 *)(_UNK_0308d17c + 0x308d070));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x75c8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x75c8,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar5 = func_0x024f56f0(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_0307f35c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046c26fc(iVar1,param_2,**(undefined4 **)(_UNK_0308d180 + 0x308d108));
  if (iVar1 != 0) {
    iVar1 = FUN_0307f35c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = **(int **)(_UNK_0308d184 + 0x308d160);
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34);
    uVar2 = func_0x046c2c44(iVar1,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
    if ((int)uVar2 < 0) {
      auStack_1c[0] = param_2;
      uVar5 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                              auStack_1c);
      uVar3 = 0;
      func_0x05187a50(uVar5,0);
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

