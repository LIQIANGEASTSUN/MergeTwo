
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030d1efc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_030d2390 + 0x30d1f20);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d2394 + 0x30d1f34));
    func_0x01438628(*(undefined4 *)(_UNK_030d2398 + 0x30d1f40));
    func_0x01438628(*(undefined4 *)(_UNK_030d239c + 0x30d1f4c));
    func_0x01438628(*(undefined4 *)(_UNK_030d23a0 + 0x30d1f58));
    func_0x01438628(*(undefined4 *)(_UNK_030d23a4 + 0x30d1f64));
    func_0x01438628(*(undefined4 *)(_UNK_030d23a8 + 0x30d1f70));
    func_0x01438628(*(undefined4 *)(_UNK_030d23ac + 0x30d1f7c));
    func_0x01438628(*(undefined4 *)(_UNK_030d23b0 + 0x30d1f88));
    func_0x01438628(*(undefined4 *)(_UNK_030d23b4 + 0x30d1f94));
    func_0x01438628(*(undefined4 *)(_UNK_030d23b8 + 0x30d1fa0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x770b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030d23bc + 0x30d2010) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_030ccbc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_030d142c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_030d23c0 + 0x30d2074);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_030d23c4 + 0x30d2088));
        if (*(int *)(**(int **)(_UNK_030d23c8 + 0x30d20a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030d23cc + 0x30d20c0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_030d23d0 + 0x30d218c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_030ccbc4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_030d1840(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_030d23d4 + 0x30d21dc));
          iVar3 = FUN_030ccbc4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_030d18ac();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x030e9dec(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_030d23d8 + 0x30d2108) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030d23dc + 0x30d2124));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_030d23e0 + 0x30d2290),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_030d23e4 + 0x30d22c8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_030d23e8 + 0x30d2324));
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
    iVar1 = func_0x029540a4(0x770b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

