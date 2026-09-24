
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c28968(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02c291ac + 0x2c28980);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c291b0 + 0x2c28994));
    func_0x01438628(*(undefined4 *)(_UNK_02c291b4 + 0x2c289a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c291b8 + 0x2c289ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c291bc + 0x2c289b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c291c0 + 0x2c289c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c291c4 + 0x2c289d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c291c8 + 0x2c289dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c291cc + 0x2c289e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c291d0 + 0x2c289f4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d6e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d6e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  uVar2 = FUN_02c1cde8(param_1);
  func_0x02c291f8(param_1);
  func_0x02c293d4(param_1);
  func_0x02c295e8(param_1);
  func_0x02c2985c(param_1);
  func_0x02c29a38(param_1);
  func_0x02c29cac(param_1);
  func_0x02c29e88(param_1);
  func_0x02c2a0fc(param_1);
  func_0x02c2a370(param_1);
  func_0x02c2a54c(param_1);
  func_0x02c2a728(param_1);
  func_0x02c2a93c(param_1);
  func_0x02c2ab18(param_1);
  func_0x02c2acf4(param_1);
  func_0x02c2aed0(param_1);
  func_0x02c2b0ac(param_1);
  func_0x02c2b288(param_1);
  func_0x02c2b464(param_1);
  func_0x02c2b640(param_1);
  func_0x02c2b81c(param_1);
  func_0x02c2ba30(param_1);
  func_0x02c2bc0c(param_1);
  func_0x02c2bde8(param_1);
  func_0x02c2bfc4(param_1);
  func_0x02c2c1a0(param_1);
  func_0x02c2c37c(param_1);
  func_0x02c2c558(param_1);
  func_0x02c2c734(param_1);
  func_0x02c2c910(param_1);
  func_0x02c2caec(param_1);
  func_0x02c2ccc8(param_1);
  func_0x02c2cea4(param_1);
  func_0x02c2d080(param_1);
  func_0x02c2d25c(param_1);
  func_0x02c2d474(param_1);
  if (uVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    iVar5 = FUN_02c195e4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,iVar5 == 0,0);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x40),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  iVar5 = FUN_02c195e4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,iVar5 == 2,0);
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  iVar5 = FUN_02c195e4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = 0;
  func_0x014e94e8(iVar1,iVar5 == 6,0);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  iVar5 = FUN_02c195e4(param_1);
  if (iVar5 != -1) {
    iVar5 = FUN_02c195e4(param_1);
    uVar8 = 0;
    if (iVar5 != 6) {
      uVar8 = 1;
    }
  }
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,uVar8,0);
  if (*(int *)(**(int **)(_UNK_02c291d4 + 0x2c28d38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c291d8 + 0x2c28d54));
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = 0;
  iVar1 = func_0x02c4a818(iVar1,uVar8,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02c291dc + 0x2c28d94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c291e0 + 0x2c28db0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x02e7975c(iVar1,0);
  }
  iVar1 = func_0x01cc105c(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01cc4b60(iVar1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01cca620(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = uVar2 & 1;
    uVar3 = func_0x01ccd794(iVar1,0);
    if ((uVar3 ^ 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = uVar2 & (uVar3 ^ 1);
      bVar7 = false;
      iVar1 = func_0x014e94d8(iVar1,0);
      if (*(char *)(param_1 + 0x11a) != '\0') {
        iVar5 = *(int *)(param_1 + 0x11c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        bVar7 = uVar9 == 0 && *(int *)(iVar5 + 0xc) == 1;
      }
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      func_0x014e94e8(iVar1,bVar7,0);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x5c),0);
        if (*(char *)(param_1 + 0x11a) != '\0') {
          iVar5 = *(int *)(param_1 + 0x11c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar3 = (uint)(*(int *)(iVar5 + 0xc) == 1);
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar1,uVar3 & uVar9,0);
      }
      if (*(int *)(param_1 + 0xbc) != 0) {
        iVar1 = func_0x014e94d8(*(int *)(param_1 + 0xbc),0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar1,0,0);
      }
      if (*(int *)(param_1 + 0xc0) != 0) {
        iVar1 = func_0x014e94d8(*(int *)(param_1 + 0xc0),0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar1,0,0);
      }
      goto joined_r0x02c29104;
    }
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,0,0);
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x5c),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar2 = uVar2 & 1;
    bVar7 = false;
    iVar1 = func_0x014e94d8(*(int *)(param_1 + 0xbc),0);
    if (*(char *)(param_1 + 0x11a) != '\0') {
      iVar5 = *(int *)(param_1 + 0x11c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      bVar7 = uVar9 == 0 && *(int *)(iVar5 + 0xc) == 1;
    }
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,bVar7,0);
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar3 = 0;
    iVar1 = func_0x014e94d8(*(int *)(param_1 + 0xc0),0);
    if (*(char *)(param_1 + 0x11a) != '\0') {
      iVar5 = *(int *)(param_1 + 0x11c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar3 = (uint)(*(int *)(iVar5 + 0xc) == 1);
    }
    uVar2 = uVar2 & 1;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,uVar3 & uVar9,0);
  }
joined_r0x02c29104:
  if (uVar2 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0xd0);
    uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02c291e4 + 0x2c29120));
    func_0x0152e3ec(uVar8,param_1,**(undefined4 **)(_UNK_02c291e8 + 0x2c29144),0);
    if (*(int *)(**(int **)(_UNK_02c291ec + 0x2c29158) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_28 = 1;
    uStack_24 = 0;
    uVar8 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_02c291f4 + 0x2c29184),
                            **(undefined4 **)(_UNK_02c291f0 + 0x2c29178),uVar8);
    (*(code *)&UNK_05d3fe88)(param_1,uVar8,0);
    return;
  }
  return;
}

