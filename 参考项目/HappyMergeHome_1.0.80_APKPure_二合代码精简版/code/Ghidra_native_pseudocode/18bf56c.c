
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018cf56c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_018cf7a4 + 0x18cf588);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cf7a8 + 0x18cf59c));
    func_0x01438628(*(undefined4 *)(_UNK_018cf7ac + 0x18cf5a8));
    func_0x01438628(*(undefined4 *)(_UNK_018cf7b0 + 0x18cf5b4));
    func_0x01438628(*(undefined4 *)(_UNK_018cf7b4 + 0x18cf5c0));
    func_0x01438628(*(undefined4 *)(_UNK_018cf7b8 + 0x18cf5cc));
    func_0x01438628(*(undefined4 *)(_UNK_018cf7bc + 0x18cf5d8));
    func_0x01438628(*(undefined4 *)(_UNK_018cf7c0 + 0x18cf5e4));
    func_0x01438628(*(undefined4 *)(_UNK_018cf7c4 + 0x18cf5f0));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x954f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018cf7c8 + 0x18cf658));
    func_0x018d3994(iVar1,0);
    if (*(int *)(**(int **)(_UNK_018cf7cc + 0x18cf674) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018cf7d0 + 0x18cf690));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x2c);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x018cf7e4(param_1);
      }
      iVar4 = func_0x018cf8a0(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018cf7d4 + 0x18cf728));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_018cf7d8 + 0x18cf748),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_018cf7dc + 0x18cf760));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_018cf7e0 + 0x18cf794));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x954f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02929b50(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

