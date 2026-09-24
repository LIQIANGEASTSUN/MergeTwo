
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01872c24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_018730b8 + 0x1872c48);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018730bc + 0x1872c5c));
    func_0x01438628(*(undefined4 *)(_UNK_018730c0 + 0x1872c68));
    func_0x01438628(*(undefined4 *)(_UNK_018730c4 + 0x1872c74));
    func_0x01438628(*(undefined4 *)(_UNK_018730c8 + 0x1872c80));
    func_0x01438628(*(undefined4 *)(_UNK_018730cc + 0x1872c8c));
    func_0x01438628(*(undefined4 *)(_UNK_018730d0 + 0x1872c98));
    func_0x01438628(*(undefined4 *)(_UNK_018730d4 + 0x1872ca4));
    func_0x01438628(*(undefined4 *)(_UNK_018730d8 + 0x1872cb0));
    func_0x01438628(*(undefined4 *)(_UNK_018730dc + 0x1872cbc));
    func_0x01438628(*(undefined4 *)(_UNK_018730e0 + 0x1872cc8));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x93b1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018730e4 + 0x1872d38) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0186d4b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_01872154(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_018730e8 + 0x1872d9c);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_018730ec + 0x1872db0));
        if (*(int *)(**(int **)(_UNK_018730f0 + 0x1872dc8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018730f4 + 0x1872de8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_018730f8 + 0x1872eb4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0186d4b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01872568(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_018730fc + 0x1872f04));
          iVar3 = FUN_0186d4b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_018725d4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01889cbc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01873100 + 0x1872e30) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01873104 + 0x1872e4c));
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
        func_0x020257a4(iVar3,0x286,uVar2,**(undefined4 **)(_UNK_01873108 + 0x1872fb8),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0187310c + 0x1872ff0) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01873110 + 0x187304c));
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
    iVar1 = func_0x029540a4(0x93b1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

