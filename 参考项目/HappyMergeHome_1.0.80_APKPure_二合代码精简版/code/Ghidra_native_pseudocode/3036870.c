
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03046870(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_03046d44 + 0x3046898);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03046d48 + 0x30468b0));
    func_0x01438628(*(undefined4 *)(_UNK_03046d4c + 0x30468bc));
    func_0x01438628(*(undefined4 *)(_UNK_03046d50 + 0x30468c8));
    func_0x01438628(*(undefined4 *)(_UNK_03046d54 + 0x30468d4));
    func_0x01438628(*(undefined4 *)(_UNK_03046d58 + 0x30468e0));
    func_0x01438628(*(undefined4 *)(_UNK_03046d5c + 0x30468ec));
    func_0x01438628(*(undefined4 *)(_UNK_03046d60 + 0x30468f8));
    func_0x01438628(*(undefined4 *)(_UNK_03046d64 + 0x3046904));
    func_0x01438628(*(undefined4 *)(_UNK_03046d68 + 0x3046910));
    func_0x01438628(*(undefined4 *)(_UNK_03046d6c + 0x304691c));
    func_0x01438628(*(undefined4 *)(_UNK_03046d70 + 0x3046928));
    func_0x01438628(*(undefined4 *)(_UNK_03046d74 + 0x3046934));
    func_0x01438628(*(undefined4 *)(_UNK_03046d78 + 0x3046940));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b4e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03046d7c + 0x30469c4));
    func_0x03054f08(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_03046d80 + 0x30469fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x03046db0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_03046d84 + 0x3046a4c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_03046d88 + 0x3046a70));
    if (*(int *)(**(int **)(_UNK_03046d8c + 0x3046a88) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03046d90 + 0x3046aa4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_03046d94 + 0x3046ad8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03046d98 + 0x3046af4));
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
    iVar2 = func_0x03046db0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_03046d9c + 0x3046bdc),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x03046db0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_03046da0 + 0x3046c50) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03046da4 + 0x3046c6c));
    uVar9 = func_0x03046db0();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03046da8 + 0x3046c90));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_03046dac + 0x3046cb0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x03046db0();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b4e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

