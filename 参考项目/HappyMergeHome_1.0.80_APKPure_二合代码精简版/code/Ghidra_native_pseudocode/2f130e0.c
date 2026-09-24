
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f230e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02f23574 + 0x2f23104);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f23578 + 0x2f23118));
    func_0x01438628(*(undefined4 *)(_UNK_02f2357c + 0x2f23124));
    func_0x01438628(*(undefined4 *)(_UNK_02f23580 + 0x2f23130));
    func_0x01438628(*(undefined4 *)(_UNK_02f23584 + 0x2f2313c));
    func_0x01438628(*(undefined4 *)(_UNK_02f23588 + 0x2f23148));
    func_0x01438628(*(undefined4 *)(_UNK_02f2358c + 0x2f23154));
    func_0x01438628(*(undefined4 *)(_UNK_02f23590 + 0x2f23160));
    func_0x01438628(*(undefined4 *)(_UNK_02f23594 + 0x2f2316c));
    func_0x01438628(*(undefined4 *)(_UNK_02f23598 + 0x2f23178));
    func_0x01438628(*(undefined4 *)(_UNK_02f2359c + 0x2f23184));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6d29,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f235a0 + 0x2f231f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f1f154();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f22610(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02f235a4 + 0x2f23258);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f235a8 + 0x2f2326c));
        if (*(int *)(**(int **)(_UNK_02f235ac + 0x2f23284) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f235b0 + 0x2f232a4));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f235b4 + 0x2f23370) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f1f154();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02f22a24(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f235b8 + 0x2f233c0));
          iVar3 = FUN_02f1f154();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_02f22a90();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02f38f48(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02f235bc + 0x2f232ec) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f235c0 + 0x2f23308));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_02f235c4 + 0x2f23474),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f235c8 + 0x2f234ac) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f235cc + 0x2f23508));
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
    iVar1 = func_0x029540a4(0x6d29,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

