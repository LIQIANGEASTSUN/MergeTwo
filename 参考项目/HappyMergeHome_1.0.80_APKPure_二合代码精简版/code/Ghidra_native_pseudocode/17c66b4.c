
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017d66b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar5 = (char *)(_UNK_017d6aa8 + 0x17d66dc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d6aac + 0x17d66f4));
    func_0x01438628(*(undefined4 *)(_UNK_017d6ab0 + 0x17d6700));
    func_0x01438628(*(undefined4 *)(_UNK_017d6ab4 + 0x17d670c));
    func_0x01438628(*(undefined4 *)(_UNK_017d6ab8 + 0x17d6718));
    func_0x01438628(*(undefined4 *)(_UNK_017d6abc + 0x17d6724));
    func_0x01438628(*(undefined4 *)(_UNK_017d6ac0 + 0x17d6730));
    func_0x01438628(*(undefined4 *)(_UNK_017d6ac4 + 0x17d673c));
    func_0x01438628(*(undefined4 *)(_UNK_017d6ac8 + 0x17d6748));
    func_0x01438628(*(undefined4 *)(_UNK_017d6acc + 0x17d6754));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a55,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017d6ad0 + 0x17d67d4));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_017d6ad4 + 0x17d680c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x017d6af4();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_017d6ad8 + 0x17d685c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_017d6adc + 0x17d6880));
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
    iVar2 = func_0x017d6af4();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_017d6ae0 + 0x17d6930),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x017d6af4();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_017d6ae4 + 0x17d69ac) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017d6ae8 + 0x17d69c8));
    uVar3 = func_0x017d6af4();
    uVar6 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_017d6aec + 0x17d69f0));
    func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(_UNK_017d6af0 + 0x17d6a10),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar3,param_2,param_3,0,uVar6,uVar8,uVar7,param_6,param_5,0x3f000000,0,
                    uVar4,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x017d6af4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3a55,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

