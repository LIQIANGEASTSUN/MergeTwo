
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b1de94(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x3825,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3825,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uVar8 = func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar2,0,0);
    return uVar8;
  }
  iVar1 = func_0x01b207b4();
  pcVar4 = (char *)(_UNK_01b20d30 + 0x1b208d4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b20d34 + 0x1b208e8));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d38 + 0x1b208f4));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d3c + 0x1b20900));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d40 + 0x1b2090c));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d44 + 0x1b20918));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d48 + 0x1b20924));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d4c + 0x1b20930));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d50 + 0x1b2093c));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d54 + 0x1b20948));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d58 + 0x1b20954));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d5c + 0x1b20960));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d60 + 0x1b2096c));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d64 + 0x1b20978));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d68 + 0x1b20984));
    func_0x01438628(*(undefined4 *)(_UNK_01b20d6c + 0x1b20990));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x02953fd4(0x3826,0);
  if (iVar6 == 0) {
    if (*(int *)(**(int **)(_UNK_01b20d70 + 0x1b209ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x01b18728();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar1 + 0x24);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    iVar6 = func_0x02f7c754(iVar6,uVar8,0);
    iVar7 = func_0x01b1c550(iVar1);
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar1 + 0x18);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f109c(iVar7,**(undefined4 **)(_UNK_01b20d74 + 0x1b20a64));
      if (iVar7 == 0) {
        if (iVar6 != 0) {
          if (*(int *)(**(int **)(_UNK_01b20d78 + 0x1b20a88) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x02f7c0dc(iVar6,0);
          if ((iVar7 != 0) && (*(char *)(iVar6 + 0x11) == '\0')) {
            return 0;
          }
        }
        uVar5 = *(undefined4 *)(iVar1 + 0x24);
        uVar8 = func_0x024eee28(**(undefined4 **)(_UNK_01b20d80 + 0x1b20adc),uVar5,
                                **(undefined4 **)(_UNK_01b20d7c + 0x1b20ad0),0);
        if (*(int *)(**(int **)(_UNK_01b20d84 + 0x1b20af8) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef174(uVar8,0);
        func_0x026c6cf4(iVar1,**(undefined4 **)(**(int **)(_UNK_01b20d88 + 0x1b20b24) + 0x5c),0);
        uStack_20 = 0;
        func_0x026c6dd0(iVar1,extraout_r1,0,0);
        uStack_20 = 0;
        func_0x026c6ea0(iVar1,extraout_r1_00,0,0);
        func_0x026c6f70(iVar1,0,0);
        func_0x026c6874(iVar1,0,0);
        func_0x026c6b64(iVar1,0,0);
        func_0x026c6aa8(iVar1,0,0);
        func_0x026c6c20(iVar1,0,0);
        func_0x026c6930(iVar1,0,0);
        func_0x026c69ec(iVar1,0,0);
        iVar6 = *(int *)(iVar1 + 0x18);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x024f0570(iVar6,**(undefined4 **)(_UNK_01b20d8c + 0x1b20be8));
        iVar6 = *(int *)(iVar1 + 0x1c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x024f04c8(iVar6,**(undefined4 **)(_UNK_01b20d90 + 0x1b20c0c));
        iVar1 = *(int *)(iVar1 + 0x28);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f0708(iVar1,**(undefined4 **)(_UNK_01b20d94 + 0x1b20c30));
        iVar1 = func_0x015fcde8(uVar5,0);
        uVar2 = 1;
        if (iVar1 == 0) {
          if (*(int *)(**(int **)(_UNK_01b20d98 + 0x1b20c5c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b20d9c + 0x1b20c78));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01b20da0 + 0x1b20c98));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x138);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x024f050c(iVar1,uVar5,**(undefined4 **)(_UNK_01b20da4 + 0x1b20cd0));
          piVar3 = *(int **)(_UNK_01b20da8 + 0x1b20ce4);
          iVar1 = *piVar3;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
            iVar1 = *piVar3;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x14);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x024f0560(iVar1,uVar5,**(undefined4 **)(_UNK_01b20dac + 0x1b20d1c));
        }
      }
    }
    return uVar2;
  }
  iVar6 = func_0x029540a4(0x3826,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,iVar1,0);
  iVar7 = *(int *)(iVar6 + 8);
  uVar8 = *(undefined4 *)(iVar6 + 0xc);
  iVar1 = *(int *)(iVar6 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar2,0,0);
  uVar8 = func_0x024f56e0(&uStack_30,0,0);
  return uVar8;
}

