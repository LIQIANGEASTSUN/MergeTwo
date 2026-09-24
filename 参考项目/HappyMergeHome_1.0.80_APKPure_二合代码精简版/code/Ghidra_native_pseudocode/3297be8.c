
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032a7be8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_032a7ea8 + 0x32a7c00);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a7eac + 0x32a7c14));
    func_0x01438628(*(undefined4 *)(_UNK_032a7eb0 + 0x32a7c20));
    func_0x01438628(*(undefined4 *)(_UNK_032a7eb4 + 0x32a7c2c));
    func_0x01438628(*(undefined4 *)(_UNK_032a7eb8 + 0x32a7c38));
    func_0x01438628(*(undefined4 *)(_UNK_032a7ebc + 0x32a7c44));
    func_0x01438628(*(undefined4 *)(_UNK_032a7ec0 + 0x32a7c50));
    func_0x01438628(*(undefined4 *)(_UNK_032a7ec4 + 0x32a7c5c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x41f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x41f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0287722c + 0x287714c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02877230 + 0x2877160),param_1,0);
      *pcVar6 = '\x01';
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02877234 + 0x287721c));
    return uVar7;
  }
  if (*(int *)(**(int **)(_UNK_032a7ec8 + 0x32a7cb8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032a7ecc + 0x32a7cd4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032a7ed0 + 0x32a7cf4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 600);
  uVar7 = func_0x029f05a0(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x04753c80(iVar1,uVar7,**(undefined4 **)(_UNK_032a7ed4 + 0x32a7d3c));
  if (iVar5 == 0) {
    func_0x032a863c(param_1);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032a7ed8 + 0x32a7d60));
    func_0x026ef080(iVar5,0);
    iVar2 = func_0x032a8694(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x026eebfc(iVar5,uVar7,0);
    uVar9 = func_0x029f3fe4(param_1,0);
    if ((int)uVar9 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar5 == 0) {
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
        func_0x026ee440(iVar5,(int)((ulonglong)uVar9 >> 0x20),uVar7,uVar4);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = *(undefined4 *)(param_1 + 0x24);
        uVar7 = extraout_r1;
      }
      uStack_28 = 0;
      func_0x026ee510(iVar5,uVar7,uVar8,uVar4);
    }
    uVar7 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73a64(iVar1,uVar7,iVar5,**(undefined4 **)(_UNK_032a7edc + 0x32a7e64));
  }
  uVar7 = func_0x029f05a0(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = **(int **)(_UNK_032a7ee0 + 0x32a7e98);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x04754248(iVar1,uVar7,
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) +
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

