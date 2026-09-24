
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0318a2bc(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_0318a4f4 + 0x318a2d8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318a4f8 + 0x318a2ec));
    func_0x01438628(*(undefined4 *)(_UNK_0318a4fc + 0x318a2f8));
    func_0x01438628(*(undefined4 *)(_UNK_0318a500 + 0x318a304));
    func_0x01438628(*(undefined4 *)(_UNK_0318a504 + 0x318a310));
    func_0x01438628(*(undefined4 *)(_UNK_0318a508 + 0x318a31c));
    func_0x01438628(*(undefined4 *)(_UNK_0318a50c + 0x318a328));
    func_0x01438628(*(undefined4 *)(_UNK_0318a510 + 0x318a334));
    func_0x01438628(*(undefined4 *)(_UNK_0318a514 + 0x318a340));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x7bba,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0318a518 + 0x318a3a8));
    func_0x0318e76c(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0318a51c + 0x318a3c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0318a520 + 0x318a3e0));
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
        param_2 = func_0x0318a534(param_1);
      }
      iVar4 = func_0x0318a5f0(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0318a524 + 0x318a478));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_0318a528 + 0x318a498),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_0318a52c + 0x318a4b0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0318a530 + 0x318a4e4));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7bba,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291c27c(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

