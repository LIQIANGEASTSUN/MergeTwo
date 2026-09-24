
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0323b134(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0323b5c8 + 0x323b158);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323b5cc + 0x323b16c));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5d0 + 0x323b178));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5d4 + 0x323b184));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5d8 + 0x323b190));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5dc + 0x323b19c));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5e0 + 0x323b1a8));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5e4 + 0x323b1b4));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5e8 + 0x323b1c0));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5ec + 0x323b1cc));
    func_0x01438628(*(undefined4 *)(_UNK_0323b5f0 + 0x323b1d8));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7fcb,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0323b5f4 + 0x323b248) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032356b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03239dbc(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0323b5f8 + 0x323b2ac);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0323b5fc + 0x323b2c0));
        if (*(int *)(**(int **)(_UNK_0323b600 + 0x323b2d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0323b604 + 0x323b2f8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0323b608 + 0x323b3c4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0323a1d0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0323b60c + 0x323b414));
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0323a23c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03266d7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0323b610 + 0x323b340) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0323b614 + 0x323b35c));
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
        func_0x020257a4(iVar3,0x358,uVar2,**(undefined4 **)(_UNK_0323b618 + 0x323b4c8),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0323b61c + 0x323b500) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0323b620 + 0x323b55c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x86;
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
    iVar1 = func_0x029540a4(0x7fcb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

