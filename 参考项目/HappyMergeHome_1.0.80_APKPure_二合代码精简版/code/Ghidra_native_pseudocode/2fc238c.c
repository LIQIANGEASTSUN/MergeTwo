
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd238c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_02fd2860 + 0x2fd23b4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd2864 + 0x2fd23cc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2868 + 0x2fd23d8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd286c + 0x2fd23e4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2870 + 0x2fd23f0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2874 + 0x2fd23fc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2878 + 0x2fd2408));
    func_0x01438628(*(undefined4 *)(_UNK_02fd287c + 0x2fd2414));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2880 + 0x2fd2420));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2884 + 0x2fd242c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2888 + 0x2fd2438));
    func_0x01438628(*(undefined4 *)(_UNK_02fd288c + 0x2fd2444));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2890 + 0x2fd2450));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2894 + 0x2fd245c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b99,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd2898 + 0x2fd24e0));
    func_0x02fe13d0(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_02fd289c + 0x2fd2518) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x02fd28cc();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_02fd28a0 + 0x2fd2568),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_02fd28a4 + 0x2fd258c));
    if (*(int *)(**(int **)(_UNK_02fd28a8 + 0x2fd25a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd28ac + 0x2fd25c0));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_02fd28b0 + 0x2fd25f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd28b4 + 0x2fd2610));
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
    iVar2 = func_0x02fd28cc();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_02fd28b8 + 0x2fd26f8),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x02fd28cc();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_02fd28bc + 0x2fd276c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd28c0 + 0x2fd2788));
    uVar9 = func_0x02fd28cc();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fd28c4 + 0x2fd27ac));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_02fd28c8 + 0x2fd27cc),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x02fd28cc();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b99,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

