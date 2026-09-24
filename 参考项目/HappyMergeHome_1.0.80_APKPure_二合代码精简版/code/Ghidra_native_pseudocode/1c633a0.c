
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c733a0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01c73578 + 0x1c733b4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7357c + 0x1c733c8));
    func_0x01438628(*(undefined4 *)(_UNK_01c73580 + 0x1c733d4));
    func_0x01438628(*(undefined4 *)(_UNK_01c73584 + 0x1c733e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c73588 + 0x1c733ec));
    func_0x01438628(*(undefined4 *)(_UNK_01c7358c + 0x1c733f8));
    func_0x01438628(*(undefined4 *)(_UNK_01c73590 + 0x1c73404));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_0287e3b8 + 0x287e2d8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287e3bc + 0x287e2ec),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287e3c0 + 0x287e3a8));
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_01c73594 + 0x1c7345c) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_01c73598 + 0x1c73478);
  iVar1 = func_0x014e9518(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar8 = *(undefined4 **)(_UNK_01c7359c + 0x1c7349c);
  iVar1 = func_0x036c7bec(iVar1,*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3b8);
  uVar6 = func_0x029f05a0(param_1,0);
  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c735a0 + 0x1c734d0));
  func_0x026aefd0(uVar3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f04dc(iVar1,uVar6,uVar3,**(undefined4 **)(_UNK_01c735a4 + 0x1c73500));
  iVar1 = func_0x014e9518(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3b8);
  uVar6 = func_0x029f05a0(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = **(int **)(_UNK_01c735a8 + 0x1c7356c);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  uVar2 = func_0x04754248(iVar1,uVar6,
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) +
                                                      0x34) + 0x10) + 0x60) + 0x84));
  if ((int)uVar2 < 0) {
    uVar3 = 0;
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
    uVar3 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
  }
  return uVar3;
}

