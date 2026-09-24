
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01641a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_01641f04 + 0x1641a94);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01641f08 + 0x1641aa8));
    func_0x01438628(*(undefined4 *)(_UNK_01641f0c + 0x1641ab4));
    func_0x01438628(*(undefined4 *)(_UNK_01641f10 + 0x1641ac0));
    func_0x01438628(*(undefined4 *)(_UNK_01641f14 + 0x1641acc));
    func_0x01438628(*(undefined4 *)(_UNK_01641f18 + 0x1641ad8));
    func_0x01438628(*(undefined4 *)(_UNK_01641f1c + 0x1641ae4));
    func_0x01438628(*(undefined4 *)(_UNK_01641f20 + 0x1641af0));
    func_0x01438628(*(undefined4 *)(_UNK_01641f24 + 0x1641afc));
    func_0x01438628(*(undefined4 *)(_UNK_01641f28 + 0x1641b08));
    func_0x01438628(*(undefined4 *)(_UNK_01641f2c + 0x1641b14));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x860d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01641f30 + 0x1641b84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0163b7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0163fef0(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01641f34 + 0x1641be8);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01641f38 + 0x1641bfc));
        if (*(int *)(**(int **)(_UNK_01641f3c + 0x1641c14) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01641f40 + 0x1641c34));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_01641f44 + 0x1641d00) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0163b7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01640304(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01641f48 + 0x1641d50));
          iVar3 = FUN_0163b7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_01640370();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01659c7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01641f4c + 0x1641c7c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01641f50 + 0x1641c98));
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
        func_0x020257a4(iVar3,0x344,uVar2,**(undefined4 **)(_UNK_01641f54 + 0x1641e04),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_01641f58 + 0x1641e3c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01641f5c + 0x1641e98));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x84;
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
    iVar1 = func_0x029540a4(0x860d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

