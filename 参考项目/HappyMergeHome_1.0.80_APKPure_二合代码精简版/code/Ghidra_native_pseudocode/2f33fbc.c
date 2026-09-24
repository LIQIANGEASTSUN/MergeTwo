
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f43fbc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02f44450 + 0x2f43fe0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f44454 + 0x2f43ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02f44458 + 0x2f44000));
    func_0x01438628(*(undefined4 *)(_UNK_02f4445c + 0x2f4400c));
    func_0x01438628(*(undefined4 *)(_UNK_02f44460 + 0x2f44018));
    func_0x01438628(*(undefined4 *)(_UNK_02f44464 + 0x2f44024));
    func_0x01438628(*(undefined4 *)(_UNK_02f44468 + 0x2f44030));
    func_0x01438628(*(undefined4 *)(_UNK_02f4446c + 0x2f4403c));
    func_0x01438628(*(undefined4 *)(_UNK_02f44470 + 0x2f44048));
    func_0x01438628(*(undefined4 *)(_UNK_02f44474 + 0x2f44054));
    func_0x01438628(*(undefined4 *)(_UNK_02f44478 + 0x2f44060));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6df5,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f4447c + 0x2f440d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f3dd38();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f4243c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02f44480 + 0x2f44134);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f44484 + 0x2f44148));
        if (*(int *)(**(int **)(_UNK_02f44488 + 0x2f44160) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4448c + 0x2f44180));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f44490 + 0x2f4424c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f3dd38();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02f42850(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f44494 + 0x2f4429c));
          iVar3 = FUN_02f3dd38();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_02f428bc();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02f5c1cc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02f44498 + 0x2f441c8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4449c + 0x2f441e4));
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
        func_0x020257a4(iVar3,0x2f4,uVar2,**(undefined4 **)(_UNK_02f444a0 + 0x2f44350),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f444a4 + 0x2f44388) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f444a8 + 0x2f443e4));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x79;
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
    iVar1 = func_0x029540a4(0x6df5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

