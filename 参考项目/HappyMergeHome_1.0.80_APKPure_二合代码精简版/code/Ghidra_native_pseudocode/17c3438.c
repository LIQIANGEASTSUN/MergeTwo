
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017d3438(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_017d38cc + 0x17d345c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d38d0 + 0x17d3470));
    func_0x01438628(*(undefined4 *)(_UNK_017d38d4 + 0x17d347c));
    func_0x01438628(*(undefined4 *)(_UNK_017d38d8 + 0x17d3488));
    func_0x01438628(*(undefined4 *)(_UNK_017d38dc + 0x17d3494));
    func_0x01438628(*(undefined4 *)(_UNK_017d38e0 + 0x17d34a0));
    func_0x01438628(*(undefined4 *)(_UNK_017d38e4 + 0x17d34ac));
    func_0x01438628(*(undefined4 *)(_UNK_017d38e8 + 0x17d34b8));
    func_0x01438628(*(undefined4 *)(_UNK_017d38ec + 0x17d34c4));
    func_0x01438628(*(undefined4 *)(_UNK_017d38f0 + 0x17d34d0));
    func_0x01438628(*(undefined4 *)(_UNK_017d38f4 + 0x17d34dc));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8f88,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017d38f8 + 0x17d354c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_017d0b50();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x017d3928(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_017d38fc + 0x17d35b0);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_017d3900 + 0x17d35c4));
        if (*(int *)(**(int **)(_UNK_017d3904 + 0x17d35dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017d3908 + 0x17d35fc));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_017d390c + 0x17d36c8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_017d0b50();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x017d3cec(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_017d3910 + 0x17d3718));
          iVar3 = FUN_017d0b50();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + 1;
          iVar3 = func_0x017d3d58();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x017f42a4(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_017d3914 + 0x17d3644) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_017d3918 + 0x17d3660));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_017d391c + 0x17d37cc),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_017d3920 + 0x17d3804) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_017d3924 + 0x17d3860));
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
    iVar1 = func_0x029540a4(0x8f88,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

