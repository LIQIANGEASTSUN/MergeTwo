
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01837d3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_018381d0 + 0x1837d60);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018381d4 + 0x1837d74));
    func_0x01438628(*(undefined4 *)(_UNK_018381d8 + 0x1837d80));
    func_0x01438628(*(undefined4 *)(_UNK_018381dc + 0x1837d8c));
    func_0x01438628(*(undefined4 *)(_UNK_018381e0 + 0x1837d98));
    func_0x01438628(*(undefined4 *)(_UNK_018381e4 + 0x1837da4));
    func_0x01438628(*(undefined4 *)(_UNK_018381e8 + 0x1837db0));
    func_0x01438628(*(undefined4 *)(_UNK_018381ec + 0x1837dbc));
    func_0x01438628(*(undefined4 *)(_UNK_018381f0 + 0x1837dc8));
    func_0x01438628(*(undefined4 *)(_UNK_018381f4 + 0x1837dd4));
    func_0x01438628(*(undefined4 *)(_UNK_018381f8 + 0x1837de0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x91f9,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018381fc + 0x1837e50) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01833590();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0183822c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01838200 + 0x1837eb4);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01838204 + 0x1837ec8));
        if (*(int *)(**(int **)(_UNK_01838208 + 0x1837ee0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0183820c + 0x1837f00));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_01838210 + 0x1837fcc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01833590();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x01838640(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01838214 + 0x183801c));
          iVar3 = FUN_01833590();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x018386ac();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x018512cc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01838218 + 0x1837f48) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0183821c + 0x1837f64));
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
        func_0x020257a4(iVar3,0x2a7,uVar2,**(undefined4 **)(_UNK_01838220 + 0x18380d0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_01838224 + 0x1838108) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01838228 + 0x1838164));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6d;
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
    iVar1 = func_0x029540a4(0x91f9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

