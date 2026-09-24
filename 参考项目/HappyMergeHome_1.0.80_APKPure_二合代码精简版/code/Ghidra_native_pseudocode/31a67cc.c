
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031b67cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_031b6c60 + 0x31b67f0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b6c64 + 0x31b6804));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c68 + 0x31b6810));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c6c + 0x31b681c));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c70 + 0x31b6828));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c74 + 0x31b6834));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c78 + 0x31b6840));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c7c + 0x31b684c));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c80 + 0x31b6858));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c84 + 0x31b6864));
    func_0x01438628(*(undefined4 *)(_UNK_031b6c88 + 0x31b6870));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7d04,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031b6c8c + 0x31b68e0) + 0x74) == 0) {
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
      piVar8 = *(int **)(_UNK_031b6c90 + 0x31b6944);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_031b6c94 + 0x31b6958));
        if (*(int *)(**(int **)(_UNK_031b6c98 + 0x31b6970) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031b6c9c + 0x31b6990));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_031b6ca0 + 0x31b6a5c) + 0x74) == 0) {
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
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_031b6ca4 + 0x31b6aac));
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
          if (*(int *)(**(int **)(_UNK_031b6ca8 + 0x31b69d8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031b6cac + 0x31b69f4));
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
        func_0x020257a4(iVar3,0x29a,uVar2,**(undefined4 **)(_UNK_031b6cb0 + 0x31b6b60),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_031b6cb4 + 0x31b6b98) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_031b6cb8 + 0x31b6bf4));
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
    iVar1 = func_0x029540a4(0x7d04,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

