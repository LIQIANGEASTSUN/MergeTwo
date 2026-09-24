
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032d2084(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_032d2538 + 0x32d20a8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d253c + 0x32d20bc));
    func_0x01438628(*(undefined4 *)(_UNK_032d2540 + 0x32d20c8));
    func_0x01438628(*(undefined4 *)(_UNK_032d2544 + 0x32d20d4));
    func_0x01438628(*(undefined4 *)(_UNK_032d2548 + 0x32d20e0));
    func_0x01438628(*(undefined4 *)(_UNK_032d254c + 0x32d20ec));
    func_0x01438628(*(undefined4 *)(_UNK_032d2550 + 0x32d20f8));
    func_0x01438628(*(undefined4 *)(_UNK_032d2554 + 0x32d2104));
    func_0x01438628(*(undefined4 *)(_UNK_032d2558 + 0x32d2110));
    func_0x01438628(*(undefined4 *)(_UNK_032d255c + 0x32d211c));
    func_0x01438628(*(undefined4 *)(_UNK_032d2560 + 0x32d2128));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x83a1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032d2564 + 0x32d219c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = 0;
    iVar1 = func_0x032d2dac(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x032d2e90(iVar1,param_3,0);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_032d2568 + 0x32d2208);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_032d256c + 0x32d221c));
        if (*(int *)(**(int **)(_UNK_032d2570 + 0x32d2234) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032d2574 + 0x32d2254));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_032d2578 + 0x32d2320) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x032d2dac(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x032d32a4(iVar3,0);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_032d257c + 0x32d2378));
          iVar3 = func_0x032d2dac(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x032d3310(0);
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x033004b8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_032d2580 + 0x32d229c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032d2584 + 0x32d22b8));
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
        uVar2 = func_0x0515c4b0(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x2bf,uVar2,**(undefined4 **)(_UNK_032d2588 + 0x32d2434),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_032d258c + 0x32d246c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_032d2590 + 0x32d24c8));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6f;
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
    iVar1 = func_0x029540a4(0x83a1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

