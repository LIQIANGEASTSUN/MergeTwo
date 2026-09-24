
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fe818(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_029fec64 + 0x29fe840);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fec68 + 0x29fe858));
    func_0x01438628(*(undefined4 *)(_UNK_029fec6c + 0x29fe864));
    func_0x01438628(*(undefined4 *)(_UNK_029fec70 + 0x29fe870));
    func_0x01438628(*(undefined4 *)(_UNK_029fec74 + 0x29fe87c));
    func_0x01438628(*(undefined4 *)(_UNK_029fec78 + 0x29fe888));
    func_0x01438628(*(undefined4 *)(_UNK_029fec7c + 0x29fe894));
    func_0x01438628(*(undefined4 *)(_UNK_029fec80 + 0x29fe8a0));
    func_0x01438628(*(undefined4 *)(_UNK_029fec84 + 0x29fe8ac));
    func_0x01438628(*(undefined4 *)(_UNK_029fec88 + 0x29fe8b8));
    func_0x01438628(*(undefined4 *)(_UNK_029fec8c + 0x29fe8c4));
    func_0x01438628(*(undefined4 *)(_UNK_029fec90 + 0x29fe8d0));
    func_0x01438628(*(undefined4 *)(_UNK_029fec94 + 0x29fe8dc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2641,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029fec98 + 0x29fe960));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_029fec9c + 0x29fe998) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x029fecc8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_029feca0 + 0x29fe9e8),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_029feca4 + 0x29fea0c));
    if (*(int *)(**(int **)(_UNK_029feca8 + 0x29fea24) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_029fecac + 0x29fea40));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_029fecb0 + 0x29fea70) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_029fecb4 + 0x29fea8c));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_029a6fa8(iVar4,param_1,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x024f0e8c(iVar3,uVar8,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar2,uVar8,0);
    if (param_4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_4,0);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    iVar2 = func_0x029fecc8();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_029fecb8 + 0x29feb68) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_029fecbc + 0x29feb84));
    uVar8 = func_0x029fecc8();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    uVar9 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_029fecc0 + 0x29febac));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_029fecc4 + 0x29febcc),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar8,param_2,param_3,0,uVar7,uVar10,uVar9,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x029fecc8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x2641,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

