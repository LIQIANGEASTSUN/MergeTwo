
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032d6e88(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_032d735c + 0x32d6eb0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d7360 + 0x32d6ec8));
    func_0x01438628(*(undefined4 *)(_UNK_032d7364 + 0x32d6ed4));
    func_0x01438628(*(undefined4 *)(_UNK_032d7368 + 0x32d6ee0));
    func_0x01438628(*(undefined4 *)(_UNK_032d736c + 0x32d6eec));
    func_0x01438628(*(undefined4 *)(_UNK_032d7370 + 0x32d6ef8));
    func_0x01438628(*(undefined4 *)(_UNK_032d7374 + 0x32d6f04));
    func_0x01438628(*(undefined4 *)(_UNK_032d7378 + 0x32d6f10));
    func_0x01438628(*(undefined4 *)(_UNK_032d737c + 0x32d6f1c));
    func_0x01438628(*(undefined4 *)(_UNK_032d7380 + 0x32d6f28));
    func_0x01438628(*(undefined4 *)(_UNK_032d7384 + 0x32d6f34));
    func_0x01438628(*(undefined4 *)(_UNK_032d7388 + 0x32d6f40));
    func_0x01438628(*(undefined4 *)(_UNK_032d738c + 0x32d6f4c));
    func_0x01438628(*(undefined4 *)(_UNK_032d7390 + 0x32d6f58));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b12,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032d7394 + 0x32d6fdc));
    func_0x051b0d14(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_032d7398 + 0x32d7014) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x032d73c8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_032d739c + 0x32d7064),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_032d73a0 + 0x32d7088));
    if (*(int *)(**(int **)(_UNK_032d73a4 + 0x32d70a0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032d73a8 + 0x32d70bc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_032d73ac + 0x32d70f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032d73b0 + 0x32d710c));
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
    iVar2 = func_0x032d73c8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_032d73b4 + 0x32d71f4),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x032d73c8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_032d73b8 + 0x32d7268) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032d73bc + 0x32d7284));
    uVar9 = func_0x032d73c8();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032d73c0 + 0x32d72a8));
    func_0x05096384(uVar5,iVar1,**(undefined4 **)(_UNK_032d73c4 + 0x32d72c8),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x032d73c8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b12,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

