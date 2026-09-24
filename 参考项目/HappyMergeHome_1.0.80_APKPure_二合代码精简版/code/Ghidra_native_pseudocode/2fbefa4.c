
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fcefa4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02fcf438 + 0x2fcefc8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fcf43c + 0x2fcefdc));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf440 + 0x2fcefe8));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf444 + 0x2fceff4));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf448 + 0x2fcf000));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf44c + 0x2fcf00c));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf450 + 0x2fcf018));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf454 + 0x2fcf024));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf458 + 0x2fcf030));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf45c + 0x2fcf03c));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf460 + 0x2fcf048));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x70f7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fcf464 + 0x2fcf0b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02fc8d20();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02fcd424(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02fcf468 + 0x2fcf11c);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02fcf46c + 0x2fcf130));
        if (*(int *)(**(int **)(_UNK_02fcf470 + 0x2fcf148) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fcf474 + 0x2fcf168));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02fcf478 + 0x2fcf234) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02fc8d20();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02fcd838(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02fcf47c + 0x2fcf284));
          iVar3 = FUN_02fc8d20();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_02fcd8a4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02fe71b0(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02fcf480 + 0x2fcf1b0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fcf484 + 0x2fcf1cc));
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
        func_0x020257a4(iVar3,0x313,uVar2,**(undefined4 **)(_UNK_02fcf488 + 0x2fcf338),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02fcf48c + 0x2fcf370) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02fcf490 + 0x2fcf3cc));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x7d;
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
    iVar1 = func_0x029540a4(0x70f7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

