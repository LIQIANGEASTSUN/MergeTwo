
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03042c80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_03043114 + 0x3042ca4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03043118 + 0x3042cb8));
    func_0x01438628(*(undefined4 *)(_UNK_0304311c + 0x3042cc4));
    func_0x01438628(*(undefined4 *)(_UNK_03043120 + 0x3042cd0));
    func_0x01438628(*(undefined4 *)(_UNK_03043124 + 0x3042cdc));
    func_0x01438628(*(undefined4 *)(_UNK_03043128 + 0x3042ce8));
    func_0x01438628(*(undefined4 *)(_UNK_0304312c + 0x3042cf4));
    func_0x01438628(*(undefined4 *)(_UNK_03043130 + 0x3042d00));
    func_0x01438628(*(undefined4 *)(_UNK_03043134 + 0x3042d0c));
    func_0x01438628(*(undefined4 *)(_UNK_03043138 + 0x3042d18));
    func_0x01438628(*(undefined4 *)(_UNK_0304313c + 0x3042d24));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7403,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03043140 + 0x3042d94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0303cc6c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03041908(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_03043144 + 0x3042df8);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03043148 + 0x3042e0c));
        if (*(int *)(**(int **)(_UNK_0304314c + 0x3042e24) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03043150 + 0x3042e44));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_03043154 + 0x3042f10) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0303cc6c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_03041d1c(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03043158 + 0x3042f60));
          iVar3 = FUN_0303cc6c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_03041d88();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0305b144(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0304315c + 0x3042e8c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03043160 + 0x3042ea8));
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
        func_0x020257a4(iVar3,0x2e6,uVar2,**(undefined4 **)(_UNK_03043164 + 0x3043014),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03043168 + 0x304304c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0304316c + 0x30430a8));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x77;
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
    iVar1 = func_0x029540a4(0x7403,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

