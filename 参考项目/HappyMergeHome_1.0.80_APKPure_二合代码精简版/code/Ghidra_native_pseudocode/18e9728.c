
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018f9728(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_018f99e8 + 0x18f9740);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f99ec + 0x18f9754));
    func_0x01438628(*(undefined4 *)(_UNK_018f99f0 + 0x18f9760));
    func_0x01438628(*(undefined4 *)(_UNK_018f99f4 + 0x18f976c));
    func_0x01438628(*(undefined4 *)(_UNK_018f99f8 + 0x18f9778));
    func_0x01438628(*(undefined4 *)(_UNK_018f99fc + 0x18f9784));
    func_0x01438628(*(undefined4 *)(_UNK_018f9a00 + 0x18f9790));
    func_0x01438628(*(undefined4 *)(_UNK_018f9a04 + 0x18f979c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x427,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x427,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0287722c + 0x287714c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02877230 + 0x2877160),param_1,0);
      *pcVar5 = '\x01';
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02877234 + 0x287721c));
    return uVar7;
  }
  if (*(int *)(**(int **)(_UNK_018f9a08 + 0x18f97f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018f9a0c + 0x18f9814));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018f9a10 + 0x18f9834));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2b4);
  uVar7 = func_0x029f05a0(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x024eede4(iVar1,uVar7,**(undefined4 **)(_UNK_018f9a14 + 0x18f987c));
  if (iVar6 == 0) {
    func_0x018fa17c(param_1);
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_018f9a18 + 0x18f98a0));
    func_0x026ef080(iVar6,0);
    iVar2 = func_0x018fa1d4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x026eebfc(iVar6,uVar7,0);
    uVar9 = func_0x029f3fe4(param_1,0);
    if ((int)uVar9 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar6 == 0) {
        func_0x014388e4();
        uStack_28 = 0;
        func_0x026ee440(0,extraout_r1_00,uVar7,uVar4);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = *(undefined4 *)(param_1 + 0x24);
        func_0x014388e4();
        uVar7 = extraout_r1_01;
      }
      else {
        uStack_28 = 0;
        func_0x026ee440(iVar6,(int)((ulonglong)uVar9 >> 0x20),uVar7,uVar4);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = *(undefined4 *)(param_1 + 0x24);
        uVar7 = extraout_r1;
      }
      uStack_28 = 0;
      func_0x026ee510(iVar6,uVar7,uVar8,uVar4);
    }
    uVar7 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0ea4(iVar1,uVar7,iVar6,**(undefined4 **)(_UNK_018f9a1c + 0x18f99a4));
  }
  uVar7 = func_0x029f05a0(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_018f9a20 + 0x18f99d8);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x04754248(iVar1,uVar7,
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) +
                                                      0x34) + 0x10) + 0x60) + 0x84));
  if ((int)uVar3 < 0) {
    uVar4 = 0;
    func_0x05187a50(uVar7,0);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar3) {
      func_0x034a8c14();
    }
    uVar4 = *(undefined4 *)(iVar1 + uVar3 * 0x10 + 0x1c);
  }
  return uVar4;
}

