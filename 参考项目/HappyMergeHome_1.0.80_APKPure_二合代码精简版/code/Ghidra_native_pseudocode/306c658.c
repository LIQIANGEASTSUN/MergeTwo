
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0307c658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0307caec + 0x307c67c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307caf0 + 0x307c690));
    func_0x01438628(*(undefined4 *)(_UNK_0307caf4 + 0x307c69c));
    func_0x01438628(*(undefined4 *)(_UNK_0307caf8 + 0x307c6a8));
    func_0x01438628(*(undefined4 *)(_UNK_0307cafc + 0x307c6b4));
    func_0x01438628(*(undefined4 *)(_UNK_0307cb00 + 0x307c6c0));
    func_0x01438628(*(undefined4 *)(_UNK_0307cb04 + 0x307c6cc));
    func_0x01438628(*(undefined4 *)(_UNK_0307cb08 + 0x307c6d8));
    func_0x01438628(*(undefined4 *)(_UNK_0307cb0c + 0x307c6e4));
    func_0x01438628(*(undefined4 *)(_UNK_0307cb10 + 0x307c6f0));
    func_0x01438628(*(undefined4 *)(_UNK_0307cb14 + 0x307c6fc));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7551,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0307cb18 + 0x307c76c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03078444();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0307cb48(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0307cb1c + 0x307c7d0);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0307cb20 + 0x307c7e4));
        if (*(int *)(**(int **)(_UNK_0307cb24 + 0x307c7fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0307cb28 + 0x307c81c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0307cb2c + 0x307c8e8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03078444();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x0307cf5c(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0307cb30 + 0x307c938));
          iVar3 = FUN_03078444();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x0307cfc8();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x030968d8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0307cb34 + 0x307c864) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0307cb38 + 0x307c880));
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
        func_0x020257a4(iVar3,0x2f4,uVar2,**(undefined4 **)(_UNK_0307cb3c + 0x307c9ec),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0307cb40 + 0x307ca24) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0307cb44 + 0x307ca80));
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
    iVar1 = func_0x029540a4(0x7551,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

