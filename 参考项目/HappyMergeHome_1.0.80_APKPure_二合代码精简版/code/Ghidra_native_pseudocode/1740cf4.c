
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01750cf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_017511c8 + 0x1750d1c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017511cc + 0x1750d34));
    func_0x01438628(*(undefined4 *)(_UNK_017511d0 + 0x1750d40));
    func_0x01438628(*(undefined4 *)(_UNK_017511d4 + 0x1750d4c));
    func_0x01438628(*(undefined4 *)(_UNK_017511d8 + 0x1750d58));
    func_0x01438628(*(undefined4 *)(_UNK_017511dc + 0x1750d64));
    func_0x01438628(*(undefined4 *)(_UNK_017511e0 + 0x1750d70));
    func_0x01438628(*(undefined4 *)(_UNK_017511e4 + 0x1750d7c));
    func_0x01438628(*(undefined4 *)(_UNK_017511e8 + 0x1750d88));
    func_0x01438628(*(undefined4 *)(_UNK_017511ec + 0x1750d94));
    func_0x01438628(*(undefined4 *)(_UNK_017511f0 + 0x1750da0));
    func_0x01438628(*(undefined4 *)(_UNK_017511f4 + 0x1750dac));
    func_0x01438628(*(undefined4 *)(_UNK_017511f8 + 0x1750db8));
    func_0x01438628(*(undefined4 *)(_UNK_017511fc + 0x1750dc4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3bb7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01751200 + 0x1750e48));
    func_0x0177af64(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_01751204 + 0x1750e80) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x01751234();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_01751208 + 0x1750ed0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_0175120c + 0x1750ef4));
    if (*(int *)(**(int **)(_UNK_01751210 + 0x1750f0c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01751214 + 0x1750f28));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_01751218 + 0x1750f5c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0175121c + 0x1750f78));
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
    iVar2 = func_0x01751234();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_01751220 + 0x1751060),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x01751234();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_01751224 + 0x17510d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01751228 + 0x17510f0));
    uVar9 = func_0x01751234();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0175122c + 0x1751114));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_01751230 + 0x1751134),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x01751234();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3bb7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

