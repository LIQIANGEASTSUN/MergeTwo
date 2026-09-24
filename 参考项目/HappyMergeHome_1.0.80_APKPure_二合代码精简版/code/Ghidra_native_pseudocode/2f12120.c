
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f22120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02f225b4 + 0x2f22144);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f225b8 + 0x2f22158));
    func_0x01438628(*(undefined4 *)(_UNK_02f225bc + 0x2f22164));
    func_0x01438628(*(undefined4 *)(_UNK_02f225c0 + 0x2f22170));
    func_0x01438628(*(undefined4 *)(_UNK_02f225c4 + 0x2f2217c));
    func_0x01438628(*(undefined4 *)(_UNK_02f225c8 + 0x2f22188));
    func_0x01438628(*(undefined4 *)(_UNK_02f225cc + 0x2f22194));
    func_0x01438628(*(undefined4 *)(_UNK_02f225d0 + 0x2f221a0));
    func_0x01438628(*(undefined4 *)(_UNK_02f225d4 + 0x2f221ac));
    func_0x01438628(*(undefined4 *)(_UNK_02f225d8 + 0x2f221b8));
    func_0x01438628(*(undefined4 *)(_UNK_02f225dc + 0x2f221c4));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6cf4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f225e0 + 0x2f22234) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f1f154();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02f22610(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02f225e4 + 0x2f22298);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f225e8 + 0x2f222ac));
        if (*(int *)(**(int **)(_UNK_02f225ec + 0x2f222c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f225f0 + 0x2f222e4));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f225f4 + 0x2f223b0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f1f154();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02f22a24(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f225f8 + 0x2f22400));
          iVar3 = FUN_02f1f154();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x02f22a90();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02f38f48(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02f225fc + 0x2f2232c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f22600 + 0x2f22348));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_02f22604 + 0x2f224b4),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f22608 + 0x2f224ec) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f2260c + 0x2f22548));
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
    iVar1 = func_0x029540a4(0x6cf4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

