
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0307dec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0307e354 + 0x307dee4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307e358 + 0x307def8));
    func_0x01438628(*(undefined4 *)(_UNK_0307e35c + 0x307df04));
    func_0x01438628(*(undefined4 *)(_UNK_0307e360 + 0x307df10));
    func_0x01438628(*(undefined4 *)(_UNK_0307e364 + 0x307df1c));
    func_0x01438628(*(undefined4 *)(_UNK_0307e368 + 0x307df28));
    func_0x01438628(*(undefined4 *)(_UNK_0307e36c + 0x307df34));
    func_0x01438628(*(undefined4 *)(_UNK_0307e370 + 0x307df40));
    func_0x01438628(*(undefined4 *)(_UNK_0307e374 + 0x307df4c));
    func_0x01438628(*(undefined4 *)(_UNK_0307e378 + 0x307df58));
    func_0x01438628(*(undefined4 *)(_UNK_0307e37c + 0x307df64));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x758b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0307e380 + 0x307dfd4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03078444();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0307cb48(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0307e384 + 0x307e038);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0307e388 + 0x307e04c));
        if (*(int *)(**(int **)(_UNK_0307e38c + 0x307e064) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0307e390 + 0x307e084));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0307e394 + 0x307e150) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03078444();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0307cf5c(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0307e398 + 0x307e1a0));
          iVar3 = FUN_03078444();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0307cfc8();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x030968d8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0307e39c + 0x307e0cc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0307e3a0 + 0x307e0e8));
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
        func_0x020257a4(iVar3,0x2f4,uVar2,**(undefined4 **)(_UNK_0307e3a4 + 0x307e254),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0307e3a8 + 0x307e28c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0307e3ac + 0x307e2e8));
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
    iVar1 = func_0x029540a4(0x758b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

