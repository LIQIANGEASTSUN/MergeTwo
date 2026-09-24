
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f50fa8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_02f511e0 + 0x2f50fc4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f511e4 + 0x2f50fd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f511e8 + 0x2f50fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02f511ec + 0x2f50ff0));
    func_0x01438628(*(undefined4 *)(_UNK_02f511f0 + 0x2f50ffc));
    func_0x01438628(*(undefined4 *)(_UNK_02f511f4 + 0x2f51008));
    func_0x01438628(*(undefined4 *)(_UNK_02f511f8 + 0x2f51014));
    func_0x01438628(*(undefined4 *)(_UNK_02f511fc + 0x2f51020));
    func_0x01438628(*(undefined4 *)(_UNK_02f51200 + 0x2f5102c));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x6e26,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f51204 + 0x2f51094));
    func_0x02f55d60(iVar1,0);
    if (*(int *)(**(int **)(_UNK_02f51208 + 0x2f510b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f5120c + 0x2f510cc));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x38);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x02f51220(param_1);
      }
      iVar4 = func_0x02f512dc(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f51210 + 0x2f51164));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_02f51214 + 0x2f51184),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_02f51218 + 0x2f5119c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_02f5121c + 0x2f511d0));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6e26,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029147fc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

