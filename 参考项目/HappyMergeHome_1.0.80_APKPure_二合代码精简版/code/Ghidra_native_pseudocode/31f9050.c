
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03209050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_032094e4 + 0x3209074);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032094e8 + 0x3209088));
    func_0x01438628(*(undefined4 *)(_UNK_032094ec + 0x3209094));
    func_0x01438628(*(undefined4 *)(_UNK_032094f0 + 0x32090a0));
    func_0x01438628(*(undefined4 *)(_UNK_032094f4 + 0x32090ac));
    func_0x01438628(*(undefined4 *)(_UNK_032094f8 + 0x32090b8));
    func_0x01438628(*(undefined4 *)(_UNK_032094fc + 0x32090c4));
    func_0x01438628(*(undefined4 *)(_UNK_03209500 + 0x32090d0));
    func_0x01438628(*(undefined4 *)(_UNK_03209504 + 0x32090dc));
    func_0x01438628(*(undefined4 *)(_UNK_03209508 + 0x32090e8));
    func_0x01438628(*(undefined4 *)(_UNK_0320950c + 0x32090f4));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7e77,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03209510 + 0x3209164) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03204330();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03208580(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_03209514 + 0x32091c8);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03209518 + 0x32091dc));
        if (*(int *)(**(int **)(_UNK_0320951c + 0x32091f4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03209520 + 0x3209214));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_03209524 + 0x32092e0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03204330();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_03208994(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03209528 + 0x3209330));
          iVar3 = FUN_03204330();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_03208a00();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0321dcec(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0320952c + 0x320925c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03209530 + 0x3209278));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_03209534 + 0x32093e4),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03209538 + 0x320941c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0320953c + 0x3209478));
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
    iVar1 = func_0x029540a4(0x7e77,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

