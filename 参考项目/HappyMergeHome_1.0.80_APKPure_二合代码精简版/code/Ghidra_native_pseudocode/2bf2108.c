
/* WARNING: Possible PIC construction at 0x02c02228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0226c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c0222c) */
/* WARNING: Removing unreachable block (ram,0x02c02234) */
/* WARNING: Removing unreachable block (ram,0x02c02240) */
/* WARNING: Removing unreachable block (ram,0x02c02244) */
/* WARNING: Removing unreachable block (ram,0x02c0225c) */
/* WARNING: Removing unreachable block (ram,0x02c02260) */
/* WARNING: Removing unreachable block (ram,0x02c02270) */
/* WARNING: Removing unreachable block (ram,0x02c0227c) */
/* WARNING: Removing unreachable block (ram,0x02c02280) */
/* WARNING: Removing unreachable block (ram,0x02c0228c) */
/* WARNING: Removing unreachable block (ram,0x02c02298) */
/* WARNING: Removing unreachable block (ram,0x02c0229c) */
/* WARNING: Removing unreachable block (ram,0x02c022b4) */
/* WARNING: Removing unreachable block (ram,0x02c022b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c02108(int param_1,int param_2)

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
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02c022d4 + 0x2c02120);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c022d8 + 0x2c02134));
    func_0x01438628(*(undefined4 *)(_UNK_02c022dc + 0x2c02140));
    func_0x01438628(*(undefined4 *)(_UNK_02c022e0 + 0x2c0214c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfb5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfb5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0289516c + 0x2895078);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02895170 + 0x289508c),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
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
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02895174 + 0x289515c));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar5 = func_0x02c3f4b4(param_2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,uVar5,**(undefined4 **)(_UNK_02c022e4 + 0x2c021d8));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xd4);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x02c3f4b4(param_2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = **(int **)(_UNK_02c022e8 + 0x2c02228);
    iStack_30 = param_2;
    iStack_2c = param_1;
    iStack_28 = iVar1;
    uStack_24 = uVar5;
    uVar2 = func_0x046cd0dc(iVar1,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
    if ((int)uVar2 < 0) {
      uStack_34 = uVar5;
      uVar5 = func_0x034a8ad8(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                              &uStack_34);
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

