
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0195e40c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0195e8a0 + 0x195e430);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0195e8a4 + 0x195e444));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8a8 + 0x195e450));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8ac + 0x195e45c));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8b0 + 0x195e468));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8b4 + 0x195e474));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8b8 + 0x195e480));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8bc + 0x195e48c));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8c0 + 0x195e498));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8c4 + 0x195e4a4));
    func_0x01438628(*(undefined4 *)(_UNK_0195e8c8 + 0x195e4b0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x990a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0195e8cc + 0x195e520) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01959198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0195d89c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0195e8d0 + 0x195e584);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0195e8d4 + 0x195e598));
        if (*(int *)(**(int **)(_UNK_0195e8d8 + 0x195e5b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0195e8dc + 0x195e5d0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0195e8e0 + 0x195e69c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01959198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0195dcb0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0195e8e4 + 0x195e6ec));
          iVar3 = FUN_01959198();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0195dd1c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01977628(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0195e8e8 + 0x195e618) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0195e8ec + 0x195e634));
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
        func_0x020257a4(iVar3,0x336,uVar2,**(undefined4 **)(_UNK_0195e8f0 + 0x195e7a0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0195e8f4 + 0x195e7d8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0195e8f8 + 0x195e834));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x82;
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
    iVar1 = func_0x029540a4(0x990a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

