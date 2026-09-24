
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4bde4(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02b4c0f4 + 0x2b4bdfc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4c0f8 + 0x2b4be10));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c0fc + 0x2b4be1c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c100 + 0x2b4be28));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c104 + 0x2b4be34));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c108 + 0x2b4be40));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x87a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x87a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_02b3ebc0(param_1);
  if (iVar1 == 0) {
    uVar5 = 0;
    iVar1 = func_0x029f3fe4(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02b4c10c + 0x2b4bec8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02b4c110 + 0x2b4bee4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x020e9710(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar1 + 0x11c);
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4c114 + 0x2b4bf28));
      func_0x026a1b4c(iVar1,0);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 < 1) {
        iVar3 = 0x65;
      }
      if (iVar1 == 0) {
        func_0x014388e4();
        func_0x026a181c(0,uVar5,0);
        uVar5 = *(undefined4 *)(param_1 + 0x18);
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        func_0x014388e4();
        uStack_28 = 0;
        func_0x026a18f8(0,extraout_r1_01,uVar5,uVar2);
        uVar5 = *(undefined4 *)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        func_0x014388e4();
        uStack_28 = 0;
        func_0x026a19c8(0,extraout_r1_02,uVar2,uVar5);
        func_0x014388e4();
      }
      else {
        func_0x026a181c(iVar1,uVar5,0);
        uStack_28 = 0;
        func_0x026a18f8(iVar1,extraout_r1,*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c));
        uStack_28 = 0;
        func_0x026a19c8(iVar1,extraout_r1_00,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24));
      }
      func_0x026a1a98(iVar1,iVar3,0);
      iVar3 = func_0x02b4ed88();
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar3,uVar5,iVar1,**(undefined4 **)(_UNK_02b4c118 + 0x2b4c018));
      if (*(int *)(**(int **)(_UNK_02b4c11c + 0x2b4c02c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x02b40cf0();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar1 + 0x20);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02b41090(iVar3,uVar5);
      iVar1 = FUN_02b3dda0();
      uVar5 = FUN_02b4985c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = FUN_02b49db4(iVar1,uVar5);
      *(undefined4 *)(param_1 + 0x44) = uVar5;
      iVar1 = FUN_02b3dda0();
      uVar5 = FUN_02b3e290(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = FUN_02b49db4(iVar1,uVar5);
      *(undefined4 *)(param_1 + 0x48) = uVar5;
      uVar5 = FUN_02b4a6f4(param_1);
      *(undefined4 *)(param_1 + 0x40) = uVar5;
      uVar2 = FUN_02b3df18(param_1);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
  }
  return uVar5;
}

