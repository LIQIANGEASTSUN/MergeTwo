
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f41f4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02f423e0 + 0x2f41f70);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f423e4 + 0x2f41f84));
    func_0x01438628(*(undefined4 *)(_UNK_02f423e8 + 0x2f41f90));
    func_0x01438628(*(undefined4 *)(_UNK_02f423ec + 0x2f41f9c));
    func_0x01438628(*(undefined4 *)(_UNK_02f423f0 + 0x2f41fa8));
    func_0x01438628(*(undefined4 *)(_UNK_02f423f4 + 0x2f41fb4));
    func_0x01438628(*(undefined4 *)(_UNK_02f423f8 + 0x2f41fc0));
    func_0x01438628(*(undefined4 *)(_UNK_02f423fc + 0x2f41fcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f42400 + 0x2f41fd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f42404 + 0x2f41fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02f42408 + 0x2f41ff0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6db7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f4240c + 0x2f42060) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f3dd38();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02f4243c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02f42410 + 0x2f420c4);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f42414 + 0x2f420d8));
        if (*(int *)(**(int **)(_UNK_02f42418 + 0x2f420f0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4241c + 0x2f42110));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f42420 + 0x2f421dc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f3dd38();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02f42850(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f42424 + 0x2f4222c));
          iVar3 = FUN_02f3dd38();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x02f428bc();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02f5c1cc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02f42428 + 0x2f42158) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4242c + 0x2f42174));
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
        func_0x020257a4(iVar3,0x2f4,uVar2,**(undefined4 **)(_UNK_02f42430 + 0x2f422e0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f42434 + 0x2f42318) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f42438 + 0x2f42374));
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
    iVar1 = func_0x029540a4(0x6db7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

