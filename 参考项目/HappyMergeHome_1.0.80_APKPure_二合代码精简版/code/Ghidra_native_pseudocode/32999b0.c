
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032a99b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar5 = (char *)(_UNK_032a9da4 + 0x32a99d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a9da8 + 0x32a99f0));
    func_0x01438628(*(undefined4 *)(_UNK_032a9dac + 0x32a99fc));
    func_0x01438628(*(undefined4 *)(_UNK_032a9db0 + 0x32a9a08));
    func_0x01438628(*(undefined4 *)(_UNK_032a9db4 + 0x32a9a14));
    func_0x01438628(*(undefined4 *)(_UNK_032a9db8 + 0x32a9a20));
    func_0x01438628(*(undefined4 *)(_UNK_032a9dbc + 0x32a9a2c));
    func_0x01438628(*(undefined4 *)(_UNK_032a9dc0 + 0x32a9a38));
    func_0x01438628(*(undefined4 *)(_UNK_032a9dc4 + 0x32a9a44));
    func_0x01438628(*(undefined4 *)(_UNK_032a9dc8 + 0x32a9a50));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a61,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032a9dcc + 0x32a9ad0));
    func_0x032b6a40(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_032a9dd0 + 0x32a9b08) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x032a9df0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_032a9dd4 + 0x32a9b58),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_032a9dd8 + 0x32a9b7c));
    uVar3 = func_0x02e67a04(param_1,0,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar2,uVar3,0);
    if (param_4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_4,0);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    iVar2 = func_0x032a9df0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_032a9ddc + 0x32a9c2c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x032a9df0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_032a9de0 + 0x32a9ca8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032a9de4 + 0x32a9cc4));
    uVar3 = func_0x032a9df0();
    uVar6 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_032a9de8 + 0x32a9cec));
    func_0x05096384(uVar4,iVar1,**(undefined4 **)(_UNK_032a9dec + 0x32a9d0c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar3,param_2,param_3,0,uVar6,uVar8,uVar7,param_6,param_5,0x3f000000,0,
                    uVar4,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x032a9df0();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3a61,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

