
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b1d650(int *param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01b1dc58 + 0x1b1d668);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc5c + 0x1b1d67c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc60 + 0x1b1d688));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc64 + 0x1b1d694));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc68 + 0x1b1d6a0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc6c + 0x1b1d6ac));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc70 + 0x1b1d6b8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc74 + 0x1b1d6c4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc78 + 0x1b1d6d0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc7c + 0x1b1d6dc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc80 + 0x1b1d6e8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc84 + 0x1b1d6f4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc88 + 0x1b1d700));
    func_0x01438628(*(undefined4 *)(_UNK_01b1dc8c + 0x1b1d70c));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar3 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x10f7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b18c14(param_1);
    if (iVar1 == 0) {
      uVar3 = 0;
      iVar1 = func_0x029f3fe4(param_1,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_01b1dc90 + 0x1b1d7a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e96a8(**(undefined4 **)(_UNK_01b1dc94 + 0x1b1d7bc));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020e9710(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x11c);
        iVar1 = func_0x01b207b4();
        iVar4 = param_1[4];
        if (iVar5 < 1) {
          iVar5 = 0x65;
        }
        if (iVar1 == 0) {
          func_0x014388e4();
          func_0x026c6cf4(0,iVar4,0);
          iVar4 = param_1[6];
          iVar7 = param_1[7];
          func_0x014388e4();
          func_0x026c6dd0(0,extraout_r1_01,iVar4,iVar7,0);
          iVar4 = param_1[8];
          iVar7 = param_1[9];
          func_0x014388e4();
          func_0x026c6ea0(0,extraout_r1_02,iVar4,iVar7,0);
          func_0x014388e4();
          func_0x026c6f70(0,iVar5,0);
          func_0x014388e4();
          func_0x026c6aa8(0,0,0);
          func_0x014388e4();
          func_0x026c6b64(0,0,0);
          func_0x014388e4();
          func_0x026c6874(0,0,0);
          func_0x014388e4();
          func_0x026c6c20(0,0,0);
          func_0x014388e4();
          func_0x026c6930(0,0,0);
          func_0x014388e4();
          func_0x026c69ec(0,0,0);
          func_0x014388e4();
        }
        else {
          func_0x026c6cf4(iVar1,iVar4,0);
          func_0x026c6dd0(iVar1,extraout_r1,param_1[6],param_1[7],0);
          func_0x026c6ea0(iVar1,extraout_r1_00,param_1[8],param_1[9],0);
          func_0x026c6f70(iVar1,iVar5,0);
          func_0x026c6aa8(iVar1,0,0);
          func_0x026c6b64(iVar1,0,0);
          func_0x026c6874(iVar1,0,0);
          func_0x026c6c20(iVar1,0,0);
          func_0x026c6930(iVar1,0,0);
          func_0x026c69ec(iVar1,0,0);
        }
        iVar4 = *(int *)(iVar1 + 0x18);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024f0570(iVar4,**(undefined4 **)(_UNK_01b1dc98 + 0x1b1d9b8));
        iVar4 = *(int *)(iVar1 + 0x1c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_01b1dc9c + 0x1b1d9dc));
        iVar4 = *(int *)(iVar1 + 0x28);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024f0708(iVar4,**(undefined4 **)(_UNK_01b1dca0 + 0x1b1da00));
        if (*(int *)(**(int **)(_UNK_01b1dca4 + 0x1b1da14) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x029f0e84(0);
        iVar5 = param_1[4];
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x029f2fd4(iVar4,iVar5,0);
        if (((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) &&
           (iVar4 = (**(code **)(*param_1 + 0x188))
                              (param_1,param_1[4],iVar4,*(undefined4 *)(*param_1 + 0x18c)),
           iVar4 != 0)) {
          func_0x0152da0c(&uStack_30,iVar4,**(undefined4 **)(_UNK_01b1dca8 + 0x1b1da9c));
          puVar6 = *(undefined4 **)(_UNK_01b1dcac + 0x1b1dab0);
          puVar8 = *(undefined4 **)(_UNK_01b1dcb0 + 0x1b1dab8);
          while (iVar4 = func_0x015109ec(&uStack_30,*puVar6), iVar4 != 0) {
            iVar4 = *(int *)(iVar1 + 0x28);
            uVar3 = func_0x029f9a84(uStack_24,0);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x024f0f08(iVar4,uVar3,*puVar8);
          }
          func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01b1dcb4 + 0x1b1db08));
        }
        if (*(int *)(**(int **)(_UNK_01b1dcbc + 0x1b1db1c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x01b18728();
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x01b18ca8(iVar4,iVar1);
        iVar1 = FUN_01b188f4();
        uVar3 = FUN_01b1b124(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_01b1b67c(iVar1,uVar3);
        param_1[0x11] = iVar1;
        iVar1 = FUN_01b188f4();
        uVar3 = FUN_01b1bb7c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_01b1b67c(iVar1,uVar3);
        param_1[0x12] = iVar1;
        iVar1 = FUN_01b1c094(param_1);
        param_1[0x10] = iVar1;
        iVar1 = FUN_01b1b764(param_1);
        uVar3 = 1;
        param_1[0xf] = iVar1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x10f7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02869630(iVar1,param_1,0);
  }
  return uVar3;
}

