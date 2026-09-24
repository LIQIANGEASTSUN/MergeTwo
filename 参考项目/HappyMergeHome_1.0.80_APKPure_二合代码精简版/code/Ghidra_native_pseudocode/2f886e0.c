
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f986e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_02f98bb4 + 0x2f98708);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f98bb8 + 0x2f98720));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bbc + 0x2f9872c));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bc0 + 0x2f98738));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bc4 + 0x2f98744));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bc8 + 0x2f98750));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bcc + 0x2f9875c));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bd0 + 0x2f98768));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bd4 + 0x2f98774));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bd8 + 0x2f98780));
    func_0x01438628(*(undefined4 *)(_UNK_02f98bdc + 0x2f9878c));
    func_0x01438628(*(undefined4 *)(_UNK_02f98be0 + 0x2f98798));
    func_0x01438628(*(undefined4 *)(_UNK_02f98be4 + 0x2f987a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f98be8 + 0x2f987b0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b6c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f98bec + 0x2f98834));
    func_0x02fa7258(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_02f98bf0 + 0x2f9886c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x02f98c20();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_02f98bf4 + 0x2f988bc),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_02f98bf8 + 0x2f988e0));
    if (*(int *)(**(int **)(_UNK_02f98bfc + 0x2f988f8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f98c00 + 0x2f98914));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_02f98c04 + 0x2f98948) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f98c08 + 0x2f98964));
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
    iVar2 = func_0x02f98c20();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_02f98c0c + 0x2f98a4c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x02f98c20();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_02f98c10 + 0x2f98ac0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f98c14 + 0x2f98adc));
    uVar9 = func_0x02f98c20();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f98c18 + 0x2f98b00));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_02f98c1c + 0x2f98b20),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x02f98c20();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b6c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

