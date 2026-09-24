
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0307e6c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0307eb5c + 0x307e6ec);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307eb60 + 0x307e700));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb64 + 0x307e70c));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb68 + 0x307e718));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb6c + 0x307e724));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb70 + 0x307e730));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb74 + 0x307e73c));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb78 + 0x307e748));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb7c + 0x307e754));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb80 + 0x307e760));
    func_0x01438628(*(undefined4 *)(_UNK_0307eb84 + 0x307e76c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x758f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0307eb88 + 0x307e7dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03078444();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0307cb48(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0307eb8c + 0x307e840);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0307eb90 + 0x307e854));
        if (*(int *)(**(int **)(_UNK_0307eb94 + 0x307e86c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0307eb98 + 0x307e88c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0307eb9c + 0x307e958) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03078444();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0307cf5c(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0307eba0 + 0x307e9a8));
          iVar3 = FUN_03078444();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0307cfc8();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x030968d8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0307eba4 + 0x307e8d4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0307eba8 + 0x307e8f0));
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
        func_0x020257a4(iVar3,0x2f4,uVar2,**(undefined4 **)(_UNK_0307ebac + 0x307ea5c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0307ebb0 + 0x307ea94) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0307ebb4 + 0x307eaf0));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x79;
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
    iVar1 = func_0x029540a4(0x758f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

