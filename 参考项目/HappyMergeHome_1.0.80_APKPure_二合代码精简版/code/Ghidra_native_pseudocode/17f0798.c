
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01800798(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_01800c2c + 0x18007bc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01800c30 + 0x18007d0));
    func_0x01438628(*(undefined4 *)(_UNK_01800c34 + 0x18007dc));
    func_0x01438628(*(undefined4 *)(_UNK_01800c38 + 0x18007e8));
    func_0x01438628(*(undefined4 *)(_UNK_01800c3c + 0x18007f4));
    func_0x01438628(*(undefined4 *)(_UNK_01800c40 + 0x1800800));
    func_0x01438628(*(undefined4 *)(_UNK_01800c44 + 0x180080c));
    func_0x01438628(*(undefined4 *)(_UNK_01800c48 + 0x1800818));
    func_0x01438628(*(undefined4 *)(_UNK_01800c4c + 0x1800824));
    func_0x01438628(*(undefined4 *)(_UNK_01800c50 + 0x1800830));
    func_0x01438628(*(undefined4 *)(_UNK_01800c54 + 0x180083c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x90b8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01800c58 + 0x18008ac) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_017faff8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_017ffcc8(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01800c5c + 0x1800910);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01800c60 + 0x1800924));
        if (*(int *)(**(int **)(_UNK_01800c64 + 0x180093c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01800c68 + 0x180095c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_01800c6c + 0x1800a28) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_017faff8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_018000dc(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01800c70 + 0x1800a78));
          iVar3 = FUN_017faff8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_01800148();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0181793c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01800c74 + 0x18009a4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01800c78 + 0x18009c0));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_01800c7c + 0x1800b2c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_01800c80 + 0x1800b64) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01800c84 + 0x1800bc0));
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
    iVar1 = func_0x029540a4(0x90b8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

