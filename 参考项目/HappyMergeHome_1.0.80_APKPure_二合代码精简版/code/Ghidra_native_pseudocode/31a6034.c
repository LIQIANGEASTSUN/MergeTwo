
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031b6034(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_031b64c8 + 0x31b6058);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b64cc + 0x31b606c));
    func_0x01438628(*(undefined4 *)(_UNK_031b64d0 + 0x31b6078));
    func_0x01438628(*(undefined4 *)(_UNK_031b64d4 + 0x31b6084));
    func_0x01438628(*(undefined4 *)(_UNK_031b64d8 + 0x31b6090));
    func_0x01438628(*(undefined4 *)(_UNK_031b64dc + 0x31b609c));
    func_0x01438628(*(undefined4 *)(_UNK_031b64e0 + 0x31b60a8));
    func_0x01438628(*(undefined4 *)(_UNK_031b64e4 + 0x31b60b4));
    func_0x01438628(*(undefined4 *)(_UNK_031b64e8 + 0x31b60c0));
    func_0x01438628(*(undefined4 *)(_UNK_031b64ec + 0x31b60cc));
    func_0x01438628(*(undefined4 *)(_UNK_031b64f0 + 0x31b60d8));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(32000,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031b64f4 + 0x31b6148) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_031b08c8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_031b5564(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_031b64f8 + 0x31b61ac);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_031b64fc + 0x31b61c0));
        if (*(int *)(**(int **)(_UNK_031b6500 + 0x31b61d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031b6504 + 0x31b61f8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_031b6508 + 0x31b62c4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_031b08c8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_031b5978(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_031b650c + 0x31b6314));
          iVar3 = FUN_031b08c8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_031b59e4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x031ce5a0(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_031b6510 + 0x31b6240) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031b6514 + 0x31b625c));
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
        uVar2 = func_0x0515c4b0(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x29a,uVar2,**(undefined4 **)(_UNK_031b6518 + 0x31b63c8),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_031b651c + 0x31b6400) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_031b6520 + 0x31b645c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6b;
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
    iVar1 = func_0x029540a4(32000,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

