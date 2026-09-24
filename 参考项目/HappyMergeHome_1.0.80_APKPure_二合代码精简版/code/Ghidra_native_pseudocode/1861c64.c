
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01871c64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_018720f8 + 0x1871c88);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018720fc + 0x1871c9c));
    func_0x01438628(*(undefined4 *)(_UNK_01872100 + 0x1871ca8));
    func_0x01438628(*(undefined4 *)(_UNK_01872104 + 0x1871cb4));
    func_0x01438628(*(undefined4 *)(_UNK_01872108 + 0x1871cc0));
    func_0x01438628(*(undefined4 *)(_UNK_0187210c + 0x1871ccc));
    func_0x01438628(*(undefined4 *)(_UNK_01872110 + 0x1871cd8));
    func_0x01438628(*(undefined4 *)(_UNK_01872114 + 0x1871ce4));
    func_0x01438628(*(undefined4 *)(_UNK_01872118 + 0x1871cf0));
    func_0x01438628(*(undefined4 *)(_UNK_0187211c + 0x1871cfc));
    func_0x01438628(*(undefined4 *)(_UNK_01872120 + 0x1871d08));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x937e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01872124 + 0x1871d78) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0186d4b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x01872154(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01872128 + 0x1871ddc);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0187212c + 0x1871df0));
        if (*(int *)(**(int **)(_UNK_01872130 + 0x1871e08) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01872134 + 0x1871e28));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_01872138 + 0x1871ef4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0186d4b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x01872568(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0187213c + 0x1871f44));
          iVar3 = FUN_0186d4b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x018725d4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01889cbc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01872140 + 0x1871e70) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01872144 + 0x1871e8c));
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
        func_0x020257a4(iVar3,0x286,uVar2,**(undefined4 **)(_UNK_01872148 + 0x1871ff8),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0187214c + 0x1872030) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01872150 + 0x187208c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x69;
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
    iVar1 = func_0x029540a4(0x937e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

