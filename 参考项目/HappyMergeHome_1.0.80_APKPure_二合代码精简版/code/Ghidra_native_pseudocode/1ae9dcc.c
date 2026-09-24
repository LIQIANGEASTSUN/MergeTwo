
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01af9dcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_01afa238 + 0x1af9df0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01afa23c + 0x1af9e04));
    func_0x01438628(*(undefined4 *)(_UNK_01afa240 + 0x1af9e10));
    func_0x01438628(*(undefined4 *)(_UNK_01afa244 + 0x1af9e1c));
    func_0x01438628(*(undefined4 *)(_UNK_01afa248 + 0x1af9e28));
    func_0x01438628(*(undefined4 *)(_UNK_01afa24c + 0x1af9e34));
    func_0x01438628(*(undefined4 *)(_UNK_01afa250 + 0x1af9e40));
    func_0x01438628(*(undefined4 *)(_UNK_01afa254 + 0x1af9e4c));
    func_0x01438628(*(undefined4 *)(_UNK_01afa258 + 0x1af9e58));
    func_0x01438628(*(undefined4 *)(_UNK_01afa25c + 0x1af9e64));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0xa502,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = FUN_01ae4230(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_01aeead8(iVar1,param_3,0);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01afa260 + 0x1af9f28);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01afa264 + 0x1af9f3c));
        if (*(int *)(**(int **)(_UNK_01afa268 + 0x1af9f54) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01afa26c + 0x1af9f74));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          iVar3 = FUN_01ae4230(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01aebe28(iVar3,0);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01afa270 + 0x1afa07c));
          iVar3 = FUN_01ae4230(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
          iVar3 = FUN_01aebaa4(0);
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01af99a0(iVar3);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01afa274 + 0x1af9fbc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01afa278 + 0x1af9fd8));
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
        func_0x020257a4(iVar3,0x2f0,uVar2,**(undefined4 **)(_UNK_01afa27c + 0x1afa134),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_01afa280 + 0x1afa16c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01afa284 + 0x1afa1c8));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x78;
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
    iVar1 = func_0x029540a4(0xa502,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

