
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d53f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_030d58cc + 0x30d5420);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d58d0 + 0x30d5438));
    func_0x01438628(*(undefined4 *)(_UNK_030d58d4 + 0x30d5444));
    func_0x01438628(*(undefined4 *)(_UNK_030d58d8 + 0x30d5450));
    func_0x01438628(*(undefined4 *)(_UNK_030d58dc + 0x30d545c));
    func_0x01438628(*(undefined4 *)(_UNK_030d58e0 + 0x30d5468));
    func_0x01438628(*(undefined4 *)(_UNK_030d58e4 + 0x30d5474));
    func_0x01438628(*(undefined4 *)(_UNK_030d58e8 + 0x30d5480));
    func_0x01438628(*(undefined4 *)(_UNK_030d58ec + 0x30d548c));
    func_0x01438628(*(undefined4 *)(_UNK_030d58f0 + 0x30d5498));
    func_0x01438628(*(undefined4 *)(_UNK_030d58f4 + 0x30d54a4));
    func_0x01438628(*(undefined4 *)(_UNK_030d58f8 + 0x30d54b0));
    func_0x01438628(*(undefined4 *)(_UNK_030d58fc + 0x30d54bc));
    func_0x01438628(*(undefined4 *)(_UNK_030d5900 + 0x30d54c8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b8a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d5904 + 0x30d554c));
    func_0x030e3f70(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_030d5908 + 0x30d5584) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x030d5938();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_030d590c + 0x30d55d4),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_030d5910 + 0x30d55f8));
    if (*(int *)(**(int **)(_UNK_030d5914 + 0x30d5610) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030d5918 + 0x30d562c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_030d591c + 0x30d5660) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030d5920 + 0x30d567c));
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
    iVar2 = func_0x030d5938();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_030d5924 + 0x30d5764),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x030d5938();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_030d5928 + 0x30d57d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030d592c + 0x30d57f4));
    uVar9 = func_0x030d5938();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_030d5930 + 0x30d5818));
    func_0x05096384(uVar5,iVar1,**(undefined4 **)(_UNK_030d5934 + 0x30d5838),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x030d5938();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b8a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

