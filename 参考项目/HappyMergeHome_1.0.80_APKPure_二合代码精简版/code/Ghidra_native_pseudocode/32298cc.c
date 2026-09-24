
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032398cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_03239d60 + 0x32398f0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03239d64 + 0x3239904));
    func_0x01438628(*(undefined4 *)(_UNK_03239d68 + 0x3239910));
    func_0x01438628(*(undefined4 *)(_UNK_03239d6c + 0x323991c));
    func_0x01438628(*(undefined4 *)(_UNK_03239d70 + 0x3239928));
    func_0x01438628(*(undefined4 *)(_UNK_03239d74 + 0x3239934));
    func_0x01438628(*(undefined4 *)(_UNK_03239d78 + 0x3239940));
    func_0x01438628(*(undefined4 *)(_UNK_03239d7c + 0x323994c));
    func_0x01438628(*(undefined4 *)(_UNK_03239d80 + 0x3239958));
    func_0x01438628(*(undefined4 *)(_UNK_03239d84 + 0x3239964));
    func_0x01438628(*(undefined4 *)(_UNK_03239d88 + 0x3239970));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7f91,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03239d8c + 0x32399e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032356b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03239dbc(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_03239d90 + 0x3239a44);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03239d94 + 0x3239a58));
        if (*(int *)(**(int **)(_UNK_03239d98 + 0x3239a70) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03239d9c + 0x3239a90));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_03239da0 + 0x3239b5c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x0323a1d0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03239da4 + 0x3239bac));
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x0323a23c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03266d7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_03239da8 + 0x3239ad8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03239dac + 0x3239af4));
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
        func_0x020257a4(iVar3,0x358,uVar2,**(undefined4 **)(_UNK_03239db0 + 0x3239c60),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03239db4 + 0x3239c98) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_03239db8 + 0x3239cf4));
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
    iVar1 = func_0x029540a4(0x7f91,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

