
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0174d104(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0174d598 + 0x174d128);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174d59c + 0x174d13c));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5a0 + 0x174d148));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5a4 + 0x174d154));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5a8 + 0x174d160));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5ac + 0x174d16c));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5b0 + 0x174d178));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5b4 + 0x174d184));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5b8 + 0x174d190));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5bc + 0x174d19c));
    func_0x01438628(*(undefined4 *)(_UNK_0174d5c0 + 0x174d1a8));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8cf0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0174d5c4 + 0x174d218) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01747688();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0174bd8c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0174d5c8 + 0x174d27c);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0174d5cc + 0x174d290));
        if (*(int *)(**(int **)(_UNK_0174d5d0 + 0x174d2a8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0174d5d4 + 0x174d2c8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0174d5d8 + 0x174d394) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01747688();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0174c1a0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0174d5dc + 0x174d3e4));
          iVar3 = FUN_01747688();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0174c20c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01780d44(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0174d5e0 + 0x174d310) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0174d5e4 + 0x174d32c));
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
        func_0x020257a4(iVar3,0x322,uVar2,**(undefined4 **)(_UNK_0174d5e8 + 0x174d498),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0174d5ec + 0x174d4d0) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0174d5f0 + 0x174d52c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x7f;
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
    iVar1 = func_0x029540a4(0x8cf0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

