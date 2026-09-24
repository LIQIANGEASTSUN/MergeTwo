
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018f8270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_018f8704 + 0x18f8294);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f8708 + 0x18f82a8));
    func_0x01438628(*(undefined4 *)(_UNK_018f870c + 0x18f82b4));
    func_0x01438628(*(undefined4 *)(_UNK_018f8710 + 0x18f82c0));
    func_0x01438628(*(undefined4 *)(_UNK_018f8714 + 0x18f82cc));
    func_0x01438628(*(undefined4 *)(_UNK_018f8718 + 0x18f82d8));
    func_0x01438628(*(undefined4 *)(_UNK_018f871c + 0x18f82e4));
    func_0x01438628(*(undefined4 *)(_UNK_018f8720 + 0x18f82f0));
    func_0x01438628(*(undefined4 *)(_UNK_018f8724 + 0x18f82fc));
    func_0x01438628(*(undefined4 *)(_UNK_018f8728 + 0x18f8308));
    func_0x01438628(*(undefined4 *)(_UNK_018f872c + 0x18f8314));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x9665,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018f8730 + 0x18f8384) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_018f5b04();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x018f8760(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_018f8734 + 0x18f83e8);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_018f8738 + 0x18f83fc));
        if (*(int *)(**(int **)(_UNK_018f873c + 0x18f8414) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018f8740 + 0x18f8434));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_018f8744 + 0x18f8500) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_018f5b04();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x018f8b24(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_018f8748 + 0x18f8550));
          iVar3 = FUN_018f5b04();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + 1;
          iVar3 = func_0x018f8b90();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x019196d8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_018f874c + 0x18f847c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018f8750 + 0x18f8498));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_018f8754 + 0x18f8604),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_018f8758 + 0x18f863c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_018f875c + 0x18f8698));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x46;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x9665,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

