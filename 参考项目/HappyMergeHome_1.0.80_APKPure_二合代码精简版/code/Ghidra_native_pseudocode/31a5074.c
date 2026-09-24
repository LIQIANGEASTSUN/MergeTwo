
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031b5074(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_031b5508 + 0x31b5098);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b550c + 0x31b50ac));
    func_0x01438628(*(undefined4 *)(_UNK_031b5510 + 0x31b50b8));
    func_0x01438628(*(undefined4 *)(_UNK_031b5514 + 0x31b50c4));
    func_0x01438628(*(undefined4 *)(_UNK_031b5518 + 0x31b50d0));
    func_0x01438628(*(undefined4 *)(_UNK_031b551c + 0x31b50dc));
    func_0x01438628(*(undefined4 *)(_UNK_031b5520 + 0x31b50e8));
    func_0x01438628(*(undefined4 *)(_UNK_031b5524 + 0x31b50f4));
    func_0x01438628(*(undefined4 *)(_UNK_031b5528 + 0x31b5100));
    func_0x01438628(*(undefined4 *)(_UNK_031b552c + 0x31b510c));
    func_0x01438628(*(undefined4 *)(_UNK_031b5530 + 0x31b5118));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7cca,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031b5534 + 0x31b5188) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_031b08c8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x031b5564(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_031b5538 + 0x31b51ec);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_031b553c + 0x31b5200));
        if (*(int *)(**(int **)(_UNK_031b5540 + 0x31b5218) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031b5544 + 0x31b5238));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_031b5548 + 0x31b5304) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_031b08c8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x031b5978(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_031b554c + 0x31b5354));
          iVar3 = FUN_031b08c8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x031b59e4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x031ce5a0(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_031b5550 + 0x31b5280) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031b5554 + 0x31b529c));
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
        func_0x020257a4(iVar3,0x29a,uVar2,**(undefined4 **)(_UNK_031b5558 + 0x31b5408),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_031b555c + 0x31b5440) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_031b5560 + 0x31b549c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6b;
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
    iVar1 = func_0x029540a4(0x7cca,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

