
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0195f41c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0195f8b0 + 0x195f440);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0195f8b4 + 0x195f454));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8b8 + 0x195f460));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8bc + 0x195f46c));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8c0 + 0x195f478));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8c4 + 0x195f484));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8c8 + 0x195f490));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8cc + 0x195f49c));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8d0 + 0x195f4a8));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8d4 + 0x195f4b4));
    func_0x01438628(*(undefined4 *)(_UNK_0195f8d8 + 0x195f4c0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x9912,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0195f8dc + 0x195f530) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01959198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0195d89c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0195f8e0 + 0x195f594);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0195f8e4 + 0x195f5a8));
        if (*(int *)(**(int **)(_UNK_0195f8e8 + 0x195f5c0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0195f8ec + 0x195f5e0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0195f8f0 + 0x195f6ac) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01959198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0195dcb0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0195f8f4 + 0x195f6fc));
          iVar3 = FUN_01959198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0195dd1c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01977628(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0195f8f8 + 0x195f628) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0195f8fc + 0x195f644));
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
        func_0x020257a4(iVar3,0x336,uVar2,**(undefined4 **)(_UNK_0195f900 + 0x195f7b0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0195f904 + 0x195f7e8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0195f908 + 0x195f844));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x82;
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
    iVar1 = func_0x029540a4(0x9912,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

