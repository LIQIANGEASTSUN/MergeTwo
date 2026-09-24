
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a23a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_017a283c + 0x17a23cc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a2840 + 0x17a23e0));
    func_0x01438628(*(undefined4 *)(_UNK_017a2844 + 0x17a23ec));
    func_0x01438628(*(undefined4 *)(_UNK_017a2848 + 0x17a23f8));
    func_0x01438628(*(undefined4 *)(_UNK_017a284c + 0x17a2404));
    func_0x01438628(*(undefined4 *)(_UNK_017a2850 + 0x17a2410));
    func_0x01438628(*(undefined4 *)(_UNK_017a2854 + 0x17a241c));
    func_0x01438628(*(undefined4 *)(_UNK_017a2858 + 0x17a2428));
    func_0x01438628(*(undefined4 *)(_UNK_017a285c + 0x17a2434));
    func_0x01438628(*(undefined4 *)(_UNK_017a2860 + 0x17a2440));
    func_0x01438628(*(undefined4 *)(_UNK_017a2864 + 0x17a244c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8e70,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017a2868 + 0x17a24bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0179d7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_017a18d8(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_017a286c + 0x17a2520);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_017a2870 + 0x17a2534));
        if (*(int *)(**(int **)(_UNK_017a2874 + 0x17a254c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017a2878 + 0x17a256c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_017a287c + 0x17a2638) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0179d7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_017a1cec(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_017a2880 + 0x17a2688));
          iVar3 = FUN_0179d7ec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_017a1d58();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x017b8068(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_017a2884 + 0x17a25b4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_017a2888 + 0x17a25d0));
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
        func_0x020257a4(iVar3,0x2a1,uVar2,**(undefined4 **)(_UNK_017a288c + 0x17a273c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_017a2890 + 0x17a2774) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_017a2894 + 0x17a27d0));
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
    iVar1 = func_0x029540a4(0x8e70,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

