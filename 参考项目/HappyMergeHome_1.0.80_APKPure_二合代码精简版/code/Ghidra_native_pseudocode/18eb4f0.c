
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fb4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar5 = (char *)(_UNK_018fb8e4 + 0x18fb518);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fb8e8 + 0x18fb530));
    func_0x01438628(*(undefined4 *)(_UNK_018fb8ec + 0x18fb53c));
    func_0x01438628(*(undefined4 *)(_UNK_018fb8f0 + 0x18fb548));
    func_0x01438628(*(undefined4 *)(_UNK_018fb8f4 + 0x18fb554));
    func_0x01438628(*(undefined4 *)(_UNK_018fb8f8 + 0x18fb560));
    func_0x01438628(*(undefined4 *)(_UNK_018fb8fc + 0x18fb56c));
    func_0x01438628(*(undefined4 *)(_UNK_018fb900 + 0x18fb578));
    func_0x01438628(*(undefined4 *)(_UNK_018fb904 + 0x18fb584));
    func_0x01438628(*(undefined4 *)(_UNK_018fb908 + 0x18fb590));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a8b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fb90c + 0x18fb610));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_018fb910 + 0x18fb648) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x018fb930();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_018fb914 + 0x18fb698),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_018fb918 + 0x18fb6bc));
    uVar3 = func_0x02e67a04(param_1,0,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar2,uVar3,0);
    if (param_4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_4,0);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    iVar2 = func_0x018fb930();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_018fb91c + 0x18fb76c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x018fb930();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_018fb920 + 0x18fb7e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018fb924 + 0x18fb804));
    uVar3 = func_0x018fb930();
    uVar6 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_018fb928 + 0x18fb82c));
    func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(_UNK_018fb92c + 0x18fb84c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar3,param_2,param_3,0,uVar6,uVar8,uVar7,param_6,param_5,0x3f000000,0,
                    uVar4,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x018fb930();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3a8b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

