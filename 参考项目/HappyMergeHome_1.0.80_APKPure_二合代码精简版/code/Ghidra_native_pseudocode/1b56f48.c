
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b66f48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_01b67398 + 0x1b66f6c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b6739c + 0x1b66f80));
    func_0x01438628(*(undefined4 *)(_UNK_01b673a0 + 0x1b66f8c));
    func_0x01438628(*(undefined4 *)(_UNK_01b673a4 + 0x1b66f98));
    func_0x01438628(*(undefined4 *)(_UNK_01b673a8 + 0x1b66fa4));
    func_0x01438628(*(undefined4 *)(_UNK_01b673ac + 0x1b66fb0));
    func_0x01438628(*(undefined4 *)(_UNK_01b673b0 + 0x1b66fbc));
    func_0x01438628(*(undefined4 *)(_UNK_01b673b4 + 0x1b66fc8));
    func_0x01438628(*(undefined4 *)(_UNK_01b673b8 + 0x1b66fd4));
    func_0x01438628(*(undefined4 *)(_UNK_01b673bc + 0x1b66fe0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0xa6d2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b56e3c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_01b5e794(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01b673c0 + 0x1b67098);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01b673c4 + 0x1b670ac));
        if (*(int *)(**(int **)(_UNK_01b673c8 + 0x1b670c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01b673cc + 0x1b670e4));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          iVar3 = FUN_01b56e3c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01b5bae4(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01b673d0 + 0x1b671e4));
          iVar3 = FUN_01b56e3c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + 1;
          iVar3 = FUN_01b5b6f8();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01b75d1c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01b673d4 + 0x1b6712c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01b673d8 + 0x1b67148));
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
        func_0x020257a4(iVar3,0x2f0,uVar2,**(undefined4 **)(_UNK_01b673dc + 0x1b67298),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_01b673e0 + 0x1b672d0) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01b673e4 + 0x1b6732c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x78;
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
    iVar1 = func_0x029540a4(0xa6d2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

