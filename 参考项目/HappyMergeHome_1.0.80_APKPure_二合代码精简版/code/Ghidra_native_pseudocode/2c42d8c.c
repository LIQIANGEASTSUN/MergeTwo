
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c52d8c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
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
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02c52f18 + 0x2c52da4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c52f1c + 0x2c52db8));
    func_0x01438628(*(undefined4 *)(_UNK_02c52f20 + 0x2c52dc4));
    func_0x01438628(*(undefined4 *)(_UNK_02c52f24 + 0x2c52dd0));
    func_0x01438628(*(undefined4 *)(_UNK_02c52f28 + 0x2c52ddc));
    func_0x01438628(*(undefined4 *)(_UNK_02c52f2c + 0x2c52de8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f4b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f4b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028fcc9c + 0x28fcba8);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028fcca0 + 0x28fcbbc),param_1,param_2,0);
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
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028fcca4 + 0x28fcc8c));
    return uVar5;
  }
  piVar7 = (int *)(param_1 + 0xfc);
  iVar1 = *piVar7;
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c52f30 + 0x2c52e54));
    func_0x04721f44(iVar1,**(undefined4 **)(_UNK_02c52f34 + 0x2c52e68));
    *piVar7 = iVar1;
    func_0x014385cc(piVar7,iVar1);
    iVar1 = *piVar7;
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar1 = 0;
    }
  }
  iVar1 = func_0x04722c90(iVar1,param_2,**(undefined4 **)(_UNK_02c52f38 + 0x2c52ea0));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xfc);
    uVar5 = func_0x02c53f54(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04722a44(iVar1,param_2,uVar5,**(undefined4 **)(_UNK_02c52f3c + 0x2c52ee4));
  }
  iVar1 = *piVar7;
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar4 = **(int **)(_UNK_02c52f40 + 0x2c52f0c);
  uVar2 = func_0x04723258(iVar1,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
  if ((int)uVar2 < 0) {
    uStack_1c = param_2;
    uVar5 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                            &uStack_1c);
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

