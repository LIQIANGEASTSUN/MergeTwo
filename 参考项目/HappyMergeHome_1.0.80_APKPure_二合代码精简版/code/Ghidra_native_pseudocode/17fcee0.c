
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0180cee0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_0180d118 + 0x180cefc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0180d11c + 0x180cf10));
    func_0x01438628(*(undefined4 *)(_UNK_0180d120 + 0x180cf1c));
    func_0x01438628(*(undefined4 *)(_UNK_0180d124 + 0x180cf28));
    func_0x01438628(*(undefined4 *)(_UNK_0180d128 + 0x180cf34));
    func_0x01438628(*(undefined4 *)(_UNK_0180d12c + 0x180cf40));
    func_0x01438628(*(undefined4 *)(_UNK_0180d130 + 0x180cf4c));
    func_0x01438628(*(undefined4 *)(_UNK_0180d134 + 0x180cf58));
    func_0x01438628(*(undefined4 *)(_UNK_0180d138 + 0x180cf64));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x90e8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0180d13c + 0x180cfcc));
    func_0x01811390(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0180d140 + 0x180cfe8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0180d144 + 0x180d004));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x0180d158(param_1);
      }
      iVar4 = func_0x0180d214(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0180d148 + 0x180d09c));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_0180d14c + 0x180d0bc),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_0180d150 + 0x180d0d4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0180d154 + 0x180d108));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x90e8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02927240(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

