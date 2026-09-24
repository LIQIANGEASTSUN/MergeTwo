
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300c3d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_0300c8ac + 0x300c400);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300c8b0 + 0x300c418));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8b4 + 0x300c424));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8b8 + 0x300c430));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8bc + 0x300c43c));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8c0 + 0x300c448));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8c4 + 0x300c454));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8c8 + 0x300c460));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8cc + 0x300c46c));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8d0 + 0x300c478));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8d4 + 0x300c484));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8d8 + 0x300c490));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8dc + 0x300c49c));
    func_0x01438628(*(undefined4 *)(_UNK_0300c8e0 + 0x300c4a8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3ba8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0300c8e4 + 0x300c52c));
    func_0x0301af4c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_0300c8e8 + 0x300c564) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0300c918();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0300c8ec + 0x300c5b4),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_0300c8f0 + 0x300c5d8));
    if (*(int *)(**(int **)(_UNK_0300c8f4 + 0x300c5f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0300c8f8 + 0x300c60c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_0300c8fc + 0x300c640) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0300c900 + 0x300c65c));
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
    iVar2 = func_0x0300c918();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0300c904 + 0x300c744),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x0300c918();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_0300c908 + 0x300c7b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0300c90c + 0x300c7d4));
    uVar9 = func_0x0300c918();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0300c910 + 0x300c7f8));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_0300c914 + 0x300c818),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x0300c918();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3ba8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

