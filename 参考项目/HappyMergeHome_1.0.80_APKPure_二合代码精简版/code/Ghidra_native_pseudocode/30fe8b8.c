
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310e8b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_0310ed8c + 0x310e8e0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310ed90 + 0x310e8f8));
    func_0x01438628(*(undefined4 *)(_UNK_0310ed94 + 0x310e904));
    func_0x01438628(*(undefined4 *)(_UNK_0310ed98 + 0x310e910));
    func_0x01438628(*(undefined4 *)(_UNK_0310ed9c + 0x310e91c));
    func_0x01438628(*(undefined4 *)(_UNK_0310eda0 + 0x310e928));
    func_0x01438628(*(undefined4 *)(_UNK_0310eda4 + 0x310e934));
    func_0x01438628(*(undefined4 *)(_UNK_0310eda8 + 0x310e940));
    func_0x01438628(*(undefined4 *)(_UNK_0310edac + 0x310e94c));
    func_0x01438628(*(undefined4 *)(_UNK_0310edb0 + 0x310e958));
    func_0x01438628(*(undefined4 *)(_UNK_0310edb4 + 0x310e964));
    func_0x01438628(*(undefined4 *)(_UNK_0310edb8 + 0x310e970));
    func_0x01438628(*(undefined4 *)(_UNK_0310edbc + 0x310e97c));
    func_0x01438628(*(undefined4 *)(_UNK_0310edc0 + 0x310e988));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b3f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0310edc4 + 0x310ea0c));
    func_0x0311ca80(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_0310edc8 + 0x310ea44) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0310edf8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0310edcc + 0x310ea94),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_0310edd0 + 0x310eab8));
    if (*(int *)(**(int **)(_UNK_0310edd4 + 0x310ead0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0310edd8 + 0x310eaec));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_0310eddc + 0x310eb20) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0310ede0 + 0x310eb3c));
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
    iVar2 = func_0x0310edf8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0310ede4 + 0x310ec24),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x0310edf8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_0310ede8 + 0x310ec98) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0310edec + 0x310ecb4));
    uVar9 = func_0x0310edf8();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0310edf0 + 0x310ecd8));
    func_0x05096384(uVar5,iVar1,**(undefined4 **)(_UNK_0310edf4 + 0x310ecf8),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x0310edf8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b3f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

