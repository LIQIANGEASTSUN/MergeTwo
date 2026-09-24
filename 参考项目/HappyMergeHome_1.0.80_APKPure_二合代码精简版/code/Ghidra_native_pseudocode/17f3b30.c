
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01803b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_01804004 + 0x1803b58);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01804008 + 0x1803b70));
    func_0x01438628(*(undefined4 *)(_UNK_0180400c + 0x1803b7c));
    func_0x01438628(*(undefined4 *)(_UNK_01804010 + 0x1803b88));
    func_0x01438628(*(undefined4 *)(_UNK_01804014 + 0x1803b94));
    func_0x01438628(*(undefined4 *)(_UNK_01804018 + 0x1803ba0));
    func_0x01438628(*(undefined4 *)(_UNK_0180401c + 0x1803bac));
    func_0x01438628(*(undefined4 *)(_UNK_01804020 + 0x1803bb8));
    func_0x01438628(*(undefined4 *)(_UNK_01804024 + 0x1803bc4));
    func_0x01438628(*(undefined4 *)(_UNK_01804028 + 0x1803bd0));
    func_0x01438628(*(undefined4 *)(_UNK_0180402c + 0x1803bdc));
    func_0x01438628(*(undefined4 *)(_UNK_01804030 + 0x1803be8));
    func_0x01438628(*(undefined4 *)(_UNK_01804034 + 0x1803bf4));
    func_0x01438628(*(undefined4 *)(_UNK_01804038 + 0x1803c00));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a70,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0180403c + 0x1803c84));
    func_0x01811a1c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_01804040 + 0x1803cbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x01804070();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_01804044 + 0x1803d0c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_01804048 + 0x1803d30));
    if (*(int *)(**(int **)(_UNK_0180404c + 0x1803d48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01804050 + 0x1803d64));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_01804054 + 0x1803d98) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01804058 + 0x1803db4));
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
    iVar2 = func_0x01804070();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_0180405c + 0x1803e9c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x01804070();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_01804060 + 0x1803f10) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01804064 + 0x1803f2c));
    uVar9 = func_0x01804070();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01804068 + 0x1803f50));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_0180406c + 0x1803f70),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x01804070();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3a70,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

