
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c5e58(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_018c632c + 0x18c5e80);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c6330 + 0x18c5e98));
    func_0x01438628(*(undefined4 *)(_UNK_018c6334 + 0x18c5ea4));
    func_0x01438628(*(undefined4 *)(_UNK_018c6338 + 0x18c5eb0));
    func_0x01438628(*(undefined4 *)(_UNK_018c633c + 0x18c5ebc));
    func_0x01438628(*(undefined4 *)(_UNK_018c6340 + 0x18c5ec8));
    func_0x01438628(*(undefined4 *)(_UNK_018c6344 + 0x18c5ed4));
    func_0x01438628(*(undefined4 *)(_UNK_018c6348 + 0x18c5ee0));
    func_0x01438628(*(undefined4 *)(_UNK_018c634c + 0x18c5eec));
    func_0x01438628(*(undefined4 *)(_UNK_018c6350 + 0x18c5ef8));
    func_0x01438628(*(undefined4 *)(_UNK_018c6354 + 0x18c5f04));
    func_0x01438628(*(undefined4 *)(_UNK_018c6358 + 0x18c5f10));
    func_0x01438628(*(undefined4 *)(_UNK_018c635c + 0x18c5f1c));
    func_0x01438628(*(undefined4 *)(_UNK_018c6360 + 0x18c5f28));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b21,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018c6364 + 0x18c5fac));
    func_0x018d4020(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_018c6368 + 0x18c5fe4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x018c6398();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_018c636c + 0x18c6034),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_018c6370 + 0x18c6058));
    if (*(int *)(**(int **)(_UNK_018c6374 + 0x18c6070) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018c6378 + 0x18c608c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_018c637c + 0x18c60c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018c6380 + 0x18c60dc));
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
    iVar2 = func_0x018c6398();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_018c6384 + 0x18c61c4),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x018c6398();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_018c6388 + 0x18c6238) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018c638c + 0x18c6254));
    uVar9 = func_0x018c6398();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018c6390 + 0x18c6278));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_018c6394 + 0x18c6298),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x018c6398();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b21,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

