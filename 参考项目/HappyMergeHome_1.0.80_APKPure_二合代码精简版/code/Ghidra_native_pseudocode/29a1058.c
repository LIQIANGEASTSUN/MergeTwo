
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029b1058(int param_1,undefined4 param_2)

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
  
  pcVar6 = (char *)(_UNK_029b113c + 0x29b1070);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029b1140 + 0x29b1084));
    func_0x01438628(*(undefined4 *)(_UNK_029b1144 + 0x29b1090));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x418,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x418,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02876c10 + 0x2876b1c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02876c14 + 0x2876b30),param_1,param_2,0);
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
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02876c18 + 0x2876c00));
    return uVar5;
  }
  if ((*(int *)(param_1 + 0x44) != 0) &&
     (iVar1 = func_0x046ccb14(*(int *)(param_1 + 0x44),param_2,
                              **(undefined4 **)(_UNK_029b1148 + 0x29b10f8)), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = **(int **)(_UNK_029b114c + 0x29b1128);
    uVar2 = func_0x046cd0dc(iVar1,param_2,
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

