
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031ba2dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_031ba7b0 + 0x31ba304);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031ba7b4 + 0x31ba31c));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7b8 + 0x31ba328));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7bc + 0x31ba334));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7c0 + 0x31ba340));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7c4 + 0x31ba34c));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7c8 + 0x31ba358));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7cc + 0x31ba364));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7d0 + 0x31ba370));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7d4 + 0x31ba37c));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7d8 + 0x31ba388));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7dc + 0x31ba394));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7e0 + 0x31ba3a0));
    func_0x01438628(*(undefined4 *)(_UNK_031ba7e4 + 0x31ba3ac));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3aa9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031ba7e8 + 0x31ba430));
    func_0x031c87ec(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_031ba7ec + 0x31ba468) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x031ba81c();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_031ba7f0 + 0x31ba4b8),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_031ba7f4 + 0x31ba4dc));
    if (*(int *)(**(int **)(_UNK_031ba7f8 + 0x31ba4f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031ba7fc + 0x31ba510));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_031ba800 + 0x31ba544) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031ba804 + 0x31ba560));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x029a6fa8(iVar4,param_1,0);
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
    iVar2 = func_0x031ba81c();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_031ba808 + 0x31ba648),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x031ba81c();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_031ba80c + 0x31ba6bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031ba810 + 0x31ba6d8));
    uVar9 = func_0x031ba81c();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031ba814 + 0x31ba6fc));
    func_0x05096384(uVar5,iVar1,**(undefined4 **)(_UNK_031ba818 + 0x31ba71c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x031ba81c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3aa9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

