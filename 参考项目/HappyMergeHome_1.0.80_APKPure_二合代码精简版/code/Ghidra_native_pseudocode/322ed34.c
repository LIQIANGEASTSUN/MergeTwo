
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0323ed34(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_0323f208 + 0x323ed5c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323f20c + 0x323ed74));
    func_0x01438628(*(undefined4 *)(_UNK_0323f210 + 0x323ed80));
    func_0x01438628(*(undefined4 *)(_UNK_0323f214 + 0x323ed8c));
    func_0x01438628(*(undefined4 *)(_UNK_0323f218 + 0x323ed98));
    func_0x01438628(*(undefined4 *)(_UNK_0323f21c + 0x323eda4));
    func_0x01438628(*(undefined4 *)(_UNK_0323f220 + 0x323edb0));
    func_0x01438628(*(undefined4 *)(_UNK_0323f224 + 0x323edbc));
    func_0x01438628(*(undefined4 *)(_UNK_0323f228 + 0x323edc8));
    func_0x01438628(*(undefined4 *)(_UNK_0323f22c + 0x323edd4));
    func_0x01438628(*(undefined4 *)(_UNK_0323f230 + 0x323ede0));
    func_0x01438628(*(undefined4 *)(_UNK_0323f234 + 0x323edec));
    func_0x01438628(*(undefined4 *)(_UNK_0323f238 + 0x323edf8));
    func_0x01438628(*(undefined4 *)(_UNK_0323f23c + 0x323ee04));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3c11,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0323f240 + 0x323ee88));
    func_0x051b0d14(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_0323f244 + 0x323eec0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0323f274();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0323f248 + 0x323ef10),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_0323f24c + 0x323ef34));
    if (*(int *)(**(int **)(_UNK_0323f250 + 0x323ef4c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0323f254 + 0x323ef68));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_0323f258 + 0x323ef9c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0323f25c + 0x323efb8));
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
    iVar2 = func_0x0323f274();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0323f260 + 0x323f0a0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x0323f274();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_0323f264 + 0x323f114) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0323f268 + 0x323f130));
    uVar9 = func_0x0323f274();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0323f26c + 0x323f154));
    func_0x05096384(uVar5,iVar1,**(undefined4 **)(_UNK_0323f270 + 0x323f174),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x0323f274();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3c11,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

