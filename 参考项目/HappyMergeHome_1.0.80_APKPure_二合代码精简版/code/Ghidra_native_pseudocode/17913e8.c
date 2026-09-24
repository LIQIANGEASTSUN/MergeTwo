
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a13e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_017a187c + 0x17a140c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a1880 + 0x17a1420));
    func_0x01438628(*(undefined4 *)(_UNK_017a1884 + 0x17a142c));
    func_0x01438628(*(undefined4 *)(_UNK_017a1888 + 0x17a1438));
    func_0x01438628(*(undefined4 *)(_UNK_017a188c + 0x17a1444));
    func_0x01438628(*(undefined4 *)(_UNK_017a1890 + 0x17a1450));
    func_0x01438628(*(undefined4 *)(_UNK_017a1894 + 0x17a145c));
    func_0x01438628(*(undefined4 *)(_UNK_017a1898 + 0x17a1468));
    func_0x01438628(*(undefined4 *)(_UNK_017a189c + 0x17a1474));
    func_0x01438628(*(undefined4 *)(_UNK_017a18a0 + 0x17a1480));
    func_0x01438628(*(undefined4 *)(_UNK_017a18a4 + 0x17a148c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8e3d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017a18a8 + 0x17a14fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0179d7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x017a18d8(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_017a18ac + 0x17a1560);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_017a18b0 + 0x17a1574));
        if (*(int *)(**(int **)(_UNK_017a18b4 + 0x17a158c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017a18b8 + 0x17a15ac));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_017a18bc + 0x17a1678) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0179d7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x017a1cec(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_017a18c0 + 0x17a16c8));
          iVar3 = FUN_0179d7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x017a1d58();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x017b8068(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_017a18c4 + 0x17a15f4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_017a18c8 + 0x17a1610));
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
        func_0x020257a4(iVar3,0x2a1,uVar2,**(undefined4 **)(_UNK_017a18cc + 0x17a177c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_017a18d0 + 0x17a17b4) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_017a18d4 + 0x17a1810));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6c;
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
    iVar1 = func_0x029540a4(0x8e3d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

