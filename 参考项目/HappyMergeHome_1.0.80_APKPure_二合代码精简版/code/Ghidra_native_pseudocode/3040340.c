
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03050340(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_03050578 + 0x305035c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0305057c + 0x3050370));
    func_0x01438628(*(undefined4 *)(_UNK_03050580 + 0x305037c));
    func_0x01438628(*(undefined4 *)(_UNK_03050584 + 0x3050388));
    func_0x01438628(*(undefined4 *)(_UNK_03050588 + 0x3050394));
    func_0x01438628(*(undefined4 *)(_UNK_0305058c + 0x30503a0));
    func_0x01438628(*(undefined4 *)(_UNK_03050590 + 0x30503ac));
    func_0x01438628(*(undefined4 *)(_UNK_03050594 + 0x30503b8));
    func_0x01438628(*(undefined4 *)(_UNK_03050598 + 0x30503c4));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x7438,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0305059c + 0x305042c));
    func_0x0305487c(iVar1,0);
    if (*(int *)(**(int **)(_UNK_030505a0 + 0x3050448) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030505a4 + 0x3050464));
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
        param_2 = func_0x030505b8(param_1);
      }
      iVar4 = func_0x03050674(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_030505a8 + 0x30504fc));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_030505ac + 0x305051c),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_030505b0 + 0x3050534));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_030505b4 + 0x3050568));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7438,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291801c(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

