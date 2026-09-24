
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019ee7d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_019ee9fc + 0x19ee7ec);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019eea00 + 0x19ee800));
    func_0x01438628(*(undefined4 *)(_UNK_019eea04 + 0x19ee80c));
    func_0x01438628(*(undefined4 *)(_UNK_019eea08 + 0x19ee818));
    func_0x01438628(*(undefined4 *)(_UNK_019eea0c + 0x19ee824));
    func_0x01438628(*(undefined4 *)(_UNK_019eea10 + 0x19ee830));
    func_0x01438628(*(undefined4 *)(_UNK_019eea14 + 0x19ee83c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x36ef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x36ef,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x024f56f0(&uStack_38,0,0);
    return uVar7;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_019eea18 + 0x19ee898));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar5 = FUN_019e8374(param_1,param_2);
  if (*(int *)(**(int **)(_UNK_019eea1c + 0x19ee8d4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019eea20 + 0x19ee8f0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_019eea24 + 0x19ee910));
  uVar4 = 0;
  func_0x024f0614(uVar7,iVar1,**(undefined4 **)(_UNK_019eea28 + 0x19ee934),0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0618(iVar2,uVar7,**(undefined4 **)(_UNK_019eea2c + 0x19ee958));
  if (iVar2 != 0) {
    iVar3 = func_0x019eea38(param_1,*(undefined4 *)(iVar1 + 8));
    if (iVar3 == 0) {
      if (iVar5 == 0) {
        func_0x014388e4();
      }
    }
    else {
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar5 + 0xc) == '\0') {
        func_0x019eeb98(param_1,*(undefined4 *)(iVar1 + 8));
        func_0x026c20d4(iVar5,1,0);
      }
    }
    if (*(char *)(iVar5 + 0xc) != '\0') {
      uVar4 = 3;
      if (*(int *)(iVar5 + 8) < *(int *)(iVar2 + 0x18)) {
        uVar7 = 2;
        if (*(int *)(iVar5 + 8) < 1) {
          uVar7 = 1;
        }
        return uVar7;
      }
    }
  }
  return uVar4;
}

