
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03081ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar6 = (char *)(_UNK_03081f84 + 0x3081ad8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03081f88 + 0x3081af0));
    func_0x01438628(*(undefined4 *)(_UNK_03081f8c + 0x3081afc));
    func_0x01438628(*(undefined4 *)(_UNK_03081f90 + 0x3081b08));
    func_0x01438628(*(undefined4 *)(_UNK_03081f94 + 0x3081b14));
    func_0x01438628(*(undefined4 *)(_UNK_03081f98 + 0x3081b20));
    func_0x01438628(*(undefined4 *)(_UNK_03081f9c + 0x3081b2c));
    func_0x01438628(*(undefined4 *)(_UNK_03081fa0 + 0x3081b38));
    func_0x01438628(*(undefined4 *)(_UNK_03081fa4 + 0x3081b44));
    func_0x01438628(*(undefined4 *)(_UNK_03081fa8 + 0x3081b50));
    func_0x01438628(*(undefined4 *)(_UNK_03081fac + 0x3081b5c));
    func_0x01438628(*(undefined4 *)(_UNK_03081fb0 + 0x3081b68));
    func_0x01438628(*(undefined4 *)(_UNK_03081fb4 + 0x3081b74));
    func_0x01438628(*(undefined4 *)(_UNK_03081fb8 + 0x3081b80));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b7b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03081fbc + 0x3081c04));
    func_0x03090af8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_03081fc0 + 0x3081c3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x03081ff0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_03081fc4 + 0x3081c8c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_03081fc8 + 0x3081cb0));
    if (*(int *)(**(int **)(_UNK_03081fcc + 0x3081cc8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03081fd0 + 0x3081ce4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_03081fd4 + 0x3081d18) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03081fd8 + 0x3081d34));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_029a6fa8(iVar4,param_1,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024f0e8c(iVar3,uVar9,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar2,uVar9,0);
    if (param_4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_4,0);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    iVar2 = func_0x03081ff0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_03081fdc + 0x3081e1c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x03081ff0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_03081fe0 + 0x3081e90) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03081fe4 + 0x3081eac));
    uVar9 = func_0x03081ff0();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03081fe8 + 0x3081ed0));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_03081fec + 0x3081ef0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x03081ff0();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b7b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

