
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f15f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_016f1ac4 + 0x16f1618);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f1ac8 + 0x16f1630));
    func_0x01438628(*(undefined4 *)(_UNK_016f1acc + 0x16f163c));
    func_0x01438628(*(undefined4 *)(_UNK_016f1ad0 + 0x16f1648));
    func_0x01438628(*(undefined4 *)(_UNK_016f1ad4 + 0x16f1654));
    func_0x01438628(*(undefined4 *)(_UNK_016f1ad8 + 0x16f1660));
    func_0x01438628(*(undefined4 *)(_UNK_016f1adc + 0x16f166c));
    func_0x01438628(*(undefined4 *)(_UNK_016f1ae0 + 0x16f1678));
    func_0x01438628(*(undefined4 *)(_UNK_016f1ae4 + 0x16f1684));
    func_0x01438628(*(undefined4 *)(_UNK_016f1ae8 + 0x16f1690));
    func_0x01438628(*(undefined4 *)(_UNK_016f1aec + 0x16f169c));
    func_0x01438628(*(undefined4 *)(_UNK_016f1af0 + 0x16f16a8));
    func_0x01438628(*(undefined4 *)(_UNK_016f1af4 + 0x16f16b4));
    func_0x01438628(*(undefined4 *)(_UNK_016f1af8 + 0x16f16c0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3ab8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f1afc + 0x16f1744));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_016f1b00 + 0x16f177c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x016f1b30();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_016f1b04 + 0x16f17cc),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_016f1b08 + 0x16f17f0));
    if (*(int *)(**(int **)(_UNK_016f1b0c + 0x16f1808) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016f1b10 + 0x16f1824));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_016f1b14 + 0x16f1858) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016f1b18 + 0x16f1874));
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
    iVar2 = func_0x016f1b30();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_016f1b1c + 0x16f195c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x016f1b30();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_016f1b20 + 0x16f19d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016f1b24 + 0x16f19ec));
    uVar9 = func_0x016f1b30();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016f1b28 + 0x16f1a10));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_016f1b2c + 0x16f1a30),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x016f1b30();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3ab8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

