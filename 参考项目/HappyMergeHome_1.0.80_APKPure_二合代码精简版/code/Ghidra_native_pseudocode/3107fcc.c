
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03117fcc(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_03118204 + 0x3117fe8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03118208 + 0x3117ffc));
    func_0x01438628(*(undefined4 *)(_UNK_0311820c + 0x3118008));
    func_0x01438628(*(undefined4 *)(_UNK_03118210 + 0x3118014));
    func_0x01438628(*(undefined4 *)(_UNK_03118214 + 0x3118020));
    func_0x01438628(*(undefined4 *)(_UNK_03118218 + 0x311802c));
    func_0x01438628(*(undefined4 *)(_UNK_0311821c + 0x3118038));
    func_0x01438628(*(undefined4 *)(_UNK_03118220 + 0x3118044));
    func_0x01438628(*(undefined4 *)(_UNK_03118224 + 0x3118050));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x78b0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03118228 + 0x31180b8));
    func_0x0311c3f4(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0311822c + 0x31180d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03118230 + 0x31180f0));
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
        param_2 = func_0x03118244(param_1);
      }
      iVar4 = func_0x03118300(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03118234 + 0x3118188));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_03118238 + 0x31181a8),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_0311823c + 0x31181c0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_03118240 + 0x31181f4));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x78b0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291a824(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

