
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018c199c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_018c1e30 + 0x18c19c0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c1e34 + 0x18c19d4));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e38 + 0x18c19e0));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e3c + 0x18c19ec));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e40 + 0x18c19f8));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e44 + 0x18c1a04));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e48 + 0x18c1a10));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e4c + 0x18c1a1c));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e50 + 0x18c1a28));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e54 + 0x18c1a34));
    func_0x01438628(*(undefined4 *)(_UNK_018c1e58 + 0x18c1a40));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x94f4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018c1e5c + 0x18c1ab0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_018bd08c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x018c1e8c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_018c1e60 + 0x18c1b14);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_018c1e64 + 0x18c1b28));
        if (*(int *)(**(int **)(_UNK_018c1e68 + 0x18c1b40) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018c1e6c + 0x18c1b60));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_018c1e70 + 0x18c1c2c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_018bd08c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x018c22a0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_018c1e74 + 0x18c1c7c));
          iVar3 = FUN_018bd08c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x018c230c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x018d9e9c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_018c1e78 + 0x18c1ba8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018c1e7c + 0x18c1bc4));
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
        func_0x020257a4(iVar3,0x2cf,uVar2,**(undefined4 **)(_UNK_018c1e80 + 0x18c1d30),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_018c1e84 + 0x18c1d68) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_018c1e88 + 0x18c1dc4));
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
    iVar1 = func_0x029540a4(0x94f4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

