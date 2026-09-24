
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01716ea8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_0171737c + 0x1716ed0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01717380 + 0x1716ee8));
    func_0x01438628(*(undefined4 *)(_UNK_01717384 + 0x1716ef4));
    func_0x01438628(*(undefined4 *)(_UNK_01717388 + 0x1716f00));
    func_0x01438628(*(undefined4 *)(_UNK_0171738c + 0x1716f0c));
    func_0x01438628(*(undefined4 *)(_UNK_01717390 + 0x1716f18));
    func_0x01438628(*(undefined4 *)(_UNK_01717394 + 0x1716f24));
    func_0x01438628(*(undefined4 *)(_UNK_01717398 + 0x1716f30));
    func_0x01438628(*(undefined4 *)(_UNK_0171739c + 0x1716f3c));
    func_0x01438628(*(undefined4 *)(_UNK_017173a0 + 0x1716f48));
    func_0x01438628(*(undefined4 *)(_UNK_017173a4 + 0x1716f54));
    func_0x01438628(*(undefined4 *)(_UNK_017173a8 + 0x1716f60));
    func_0x01438628(*(undefined4 *)(_UNK_017173ac + 0x1716f6c));
    func_0x01438628(*(undefined4 *)(_UNK_017173b0 + 0x1716f78));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3be4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017173b4 + 0x1716ffc));
    func_0x01725a1c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_017173b8 + 0x1717034) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x017173e8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_017173bc + 0x1717084),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_017173c0 + 0x17170a8));
    if (*(int *)(**(int **)(_UNK_017173c4 + 0x17170c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017173c8 + 0x17170dc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_017173cc + 0x1717110) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_017173d0 + 0x171712c));
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
    iVar2 = func_0x017173e8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_017173d4 + 0x1717214),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x017173e8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_017173d8 + 0x1717288) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017173dc + 0x17172a4));
    uVar9 = func_0x017173e8();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017173e0 + 0x17172c8));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_017173e4 + 0x17172e8),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x017173e8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3be4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

