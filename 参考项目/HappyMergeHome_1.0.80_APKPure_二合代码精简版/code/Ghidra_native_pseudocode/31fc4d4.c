
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0320c4d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_0320c9a8 + 0x320c4fc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320c9ac + 0x320c514));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9b0 + 0x320c520));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9b4 + 0x320c52c));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9b8 + 0x320c538));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9bc + 0x320c544));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9c0 + 0x320c550));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9c4 + 0x320c55c));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9c8 + 0x320c568));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9cc + 0x320c574));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9d0 + 0x320c580));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9d4 + 0x320c58c));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9d8 + 0x320c598));
    func_0x01438628(*(undefined4 *)(_UNK_0320c9dc + 0x320c5a4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3ac7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0320c9e0 + 0x320c628));
    func_0x051b0d14(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_0320c9e4 + 0x320c660) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0320ca14();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0320c9e8 + 0x320c6b0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_0320c9ec + 0x320c6d4));
    if (*(int *)(**(int **)(_UNK_0320c9f0 + 0x320c6ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0320c9f4 + 0x320c708));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_0320c9f8 + 0x320c73c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0320c9fc + 0x320c758));
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
    iVar2 = func_0x0320ca14();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0320ca00 + 0x320c840),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x0320ca14();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_0320ca04 + 0x320c8b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0320ca08 + 0x320c8d0));
    uVar9 = func_0x0320ca14();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0320ca0c + 0x320c8f4));
    func_0x05096384(uVar5,iVar1,**(undefined4 **)(_UNK_0320ca10 + 0x320c914),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x0320ca14();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3ac7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

