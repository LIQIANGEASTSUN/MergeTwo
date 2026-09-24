
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f2254(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_016f2638 + 0x16f226c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f263c + 0x16f2280));
    func_0x01438628(*(undefined4 *)(_UNK_016f2640 + 0x16f228c));
    func_0x01438628(*(undefined4 *)(_UNK_016f2644 + 0x16f2298));
    func_0x01438628(*(undefined4 *)(_UNK_016f2648 + 0x16f22a4));
    func_0x01438628(*(undefined4 *)(_UNK_016f264c + 0x16f22b0));
    func_0x01438628(*(undefined4 *)(_UNK_016f2650 + 0x16f22bc));
    func_0x01438628(*(undefined4 *)(_UNK_016f2654 + 0x16f22c8));
    func_0x01438628(*(undefined4 *)(_UNK_016f2658 + 0x16f22d4));
    func_0x01438628(*(undefined4 *)(_UNK_016f265c + 0x16f22e0));
    func_0x01438628(*(undefined4 *)(_UNK_016f2660 + 0x16f22ec));
    func_0x01438628(*(undefined4 *)(_UNK_016f2664 + 0x16f22f8));
    func_0x01438628(*(undefined4 *)(_UNK_016f2668 + 0x16f2304));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8aa2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8aa2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_016f266c + 0x16f2360) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f2670 + 0x16f237c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_016f2674 + 0x16f239c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 700);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016f2678 + 0x16f23d0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f267c + 0x16f23e8));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_016f2680 + 0x16f2400));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_016f2684 + 0x16f242c);
    puVar8 = *(undefined4 **)(_UNK_016f2688 + 0x16f2434);
    do {
      if (*(int *)(**(int **)(_UNK_016f268c + 0x16f243c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_016f2690 + 0x16f2458));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_016f2694 + 0x16f2478));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 700);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e9678(iVar2,uVar7,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_016f2698 + 0x16f2550));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_016f269c + 0x16f2588) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_016f26a0 + 0x16f25a4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_016f26a4 + 0x16f25c4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 700);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_016f26a8 + 0x16f261c));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

