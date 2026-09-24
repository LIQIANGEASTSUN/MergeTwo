
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03041418(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_030418ac + 0x304143c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030418b0 + 0x3041450));
    func_0x01438628(*(undefined4 *)(_UNK_030418b4 + 0x304145c));
    func_0x01438628(*(undefined4 *)(_UNK_030418b8 + 0x3041468));
    func_0x01438628(*(undefined4 *)(_UNK_030418bc + 0x3041474));
    func_0x01438628(*(undefined4 *)(_UNK_030418c0 + 0x3041480));
    func_0x01438628(*(undefined4 *)(_UNK_030418c4 + 0x304148c));
    func_0x01438628(*(undefined4 *)(_UNK_030418c8 + 0x3041498));
    func_0x01438628(*(undefined4 *)(_UNK_030418cc + 0x30414a4));
    func_0x01438628(*(undefined4 *)(_UNK_030418d0 + 0x30414b0));
    func_0x01438628(*(undefined4 *)(_UNK_030418d4 + 0x30414bc));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x73bd,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030418d8 + 0x304152c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0303cc6c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03041908(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_030418dc + 0x3041590);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_030418e0 + 0x30415a4));
        if (*(int *)(**(int **)(_UNK_030418e4 + 0x30415bc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030418e8 + 0x30415dc));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_030418ec + 0x30416a8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0303cc6c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03041d1c(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_030418f0 + 0x30416f8));
          iVar3 = FUN_0303cc6c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x03041d88();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0305b144(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_030418f4 + 0x3041624) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030418f8 + 0x3041640));
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
        func_0x020257a4(iVar3,0x2e6,uVar2,**(undefined4 **)(_UNK_030418fc + 0x30417ac),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03041900 + 0x30417e4) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_03041904 + 50600000));
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
    iVar1 = func_0x029540a4(0x73bd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

