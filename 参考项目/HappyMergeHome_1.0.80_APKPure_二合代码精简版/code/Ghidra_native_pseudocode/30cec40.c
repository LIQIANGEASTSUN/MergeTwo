
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030dec40(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_030dee78 + 0x30dec5c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030dee7c + 0x30dec70));
    func_0x01438628(*(undefined4 *)(_UNK_030dee80 + 0x30dec7c));
    func_0x01438628(*(undefined4 *)(_UNK_030dee84 + 0x30dec88));
    func_0x01438628(*(undefined4 *)(_UNK_030dee88 + 0x30dec94));
    func_0x01438628(*(undefined4 *)(_UNK_030dee8c + 0x30deca0));
    func_0x01438628(*(undefined4 *)(_UNK_030dee90 + 0x30decac));
    func_0x01438628(*(undefined4 *)(_UNK_030dee94 + 0x30decb8));
    func_0x01438628(*(undefined4 *)(_UNK_030dee98 + 0x30decc4));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x7738,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030dee9c + 0x30ded2c));
    func_0x030e38e4(iVar1,0);
    if (*(int *)(**(int **)(_UNK_030deea0 + 0x30ded48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030deea4 + 0x30ded64));
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
        param_2 = func_0x030deeb8(param_1);
      }
      iVar4 = func_0x030def74(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_030deea8 + 0x30dedfc));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_030deeac + 0x30dee1c),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_030deeb0 + 0x30dee34));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_030deeb4 + 0x30dee68));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7738,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02919b7c(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

