
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fa1f28(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_02fa2160 + 0x2fa1f44);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa2164 + 0x2fa1f58));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2168 + 0x2fa1f64));
    func_0x01438628(*(undefined4 *)(_UNK_02fa216c + 0x2fa1f70));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2170 + 0x2fa1f7c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2174 + 0x2fa1f88));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2178 + 0x2fa1f94));
    func_0x01438628(*(undefined4 *)(_UNK_02fa217c + 0x2fa1fa0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2180 + 0x2fa1fac));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x6f9e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fa2184 + 0x2fa2014));
    func_0x02fa6bcc(iVar1,0);
    if (*(int *)(**(int **)(_UNK_02fa2188 + 0x2fa2030) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa218c + 0x2fa204c));
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
        param_2 = func_0x02fa21a0(param_1);
      }
      iVar4 = func_0x02fa225c(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fa2190 + 0x2fa20e4));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_02fa2194 + 0x2fa2104),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_02fa2198 + 0x2fa211c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_02fa219c + 0x2fa2150));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6f9e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02915800(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

