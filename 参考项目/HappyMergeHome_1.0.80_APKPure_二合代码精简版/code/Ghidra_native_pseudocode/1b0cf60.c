
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01b1cf60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_10;
  pcVar7 = (char *)(_UNK_01b1d4ac + 0x1b1cf88);
  uStack_38 = param_9;
  uStack_28 = param_12;
  uStack_30 = param_2;
  uStack_2c = param_3;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1d4b0 + 0x1b1cfc4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1d4b4 + 0x1b1cfd0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1d4b8 + 0x1b1cfdc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1d4bc + 0x1b1cfe8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1d4c0 + 0x1b1cff4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1d4c4 + 0x1b1d000));
    func_0x01438628(*(undefined4 *)(_UNK_01b1d4c8 + 0x1b1d00c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x381a,0);
  uVar3 = uStack_28;
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x381a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_40 = param_13;
    uStack_3c = 0;
    uStack_48 = param_11;
    uStack_44 = uStack_28;
    uVar3 = func_0x028ba094(iVar2,param_1,uStack_30,uStack_2c,param_5,param_6,param_7,param_8,
                            uStack_38,uStack_34);
    return uVar3;
  }
  uStack_40 = param_13;
  uStack_3c = 0;
  uStack_48 = param_11;
  uStack_44 = uStack_28;
  func_0x029f063c(param_1,uStack_30,uStack_2c);
  if (*(int *)(**(int **)(_UNK_01b1d4cc + 0x1b1d0ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b1d4d0 + 0x1b1d108));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x02090ff8(iVar2,uVar3,0);
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  iVar2 = FUN_01b18c14(param_1);
  if (((iVar2 == 0) && (iVar2 = func_0x01b1d4ec(), iVar2 == 0)) &&
     (iVar2 = func_0x01b1d650(param_1), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  func_0x01b1dcc4(param_1);
  iVar2 = FUN_01b18c14(param_1);
  if (iVar2 != 0) {
    uVar10 = FUN_01b18c14(param_1);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar2 = param_1[6];
    iVar9 = param_1[7];
    if ((int)uVar10 == 0) {
      func_0x014388e4();
      uVar3 = extraout_r1;
    }
    func_0x026c6dd0((int)uVar10,uVar3,iVar2,iVar9,0);
    uVar10 = FUN_01b18c14(param_1);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar2 = param_1[8];
    iVar9 = param_1[9];
    if ((int)uVar10 == 0) {
      func_0x014388e4();
      uVar3 = extraout_r1_00;
    }
    func_0x026c6ea0((int)uVar10,uVar3,iVar2,iVar9,0);
    if (*(int *)(**(int **)(_UNK_01b1d4d4 + 0x1b1d200) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x01b18728();
    uVar3 = FUN_01b18c14(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01b18ca8(iVar2,uVar3);
    iVar2 = func_0x01b18728();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x01b18b70(iVar2);
    if (iVar2 != 0) {
      iVar9 = FUN_01b188f4();
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar3 = FUN_01b19378(iVar9);
      if (*(int *)(**(int **)(_UNK_01b1d4d8 + 0x1b1d290) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar3 = func_0x024f05c4(uVar3,0);
      func_0x026a8cb8(iVar2,uVar3,0);
      uVar10 = FUN_01b18c14(param_1);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar9 = (int)uVar10;
      if (iVar9 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1_01;
      }
      func_0x026a8e5c(iVar2,uVar3,*(undefined4 *)(iVar9 + 0x38),*(undefined4 *)(iVar9 + 0x3c),0);
      uVar10 = FUN_01b18c14(param_1);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar9 = (int)uVar10;
      if (iVar9 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1_02;
      }
      func_0x026a8d8c(iVar2,uVar3,*(undefined4 *)(iVar9 + 0x30),*(undefined4 *)(iVar9 + 0x34),0);
    }
    iVar2 = FUN_01b188f4();
    uVar3 = FUN_01b1b124(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_01b1b67c(iVar2,uVar3);
    param_1[0x11] = iVar2;
    iVar2 = FUN_01b188f4();
    uVar3 = FUN_01b1bb7c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_01b1b67c(iVar2,uVar3);
    param_1[0x12] = iVar2;
    iVar2 = FUN_01b1c094(param_1);
    param_1[0x10] = iVar2;
    iVar2 = FUN_01b1b764(param_1);
    param_1[0xf] = iVar2;
  }
  uVar1 = FUN_01b1aebc(param_1);
  *(undefined1 *)((int)param_1 + 0x5d) = uVar1;
  uVar3 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  uVar3 = func_0x014e9568(**(undefined4 **)(_UNK_01b1d4dc + 0x1b1d3c0),uVar3,0);
  iVar9 = **(int **)(_UNK_01b1d4e0 + 0x1b1d3d4);
  iVar2 = *(int *)(iVar9 + 0x1c);
  if (iVar2 == 0) {
    func_0x014909d8(iVar9);
    iVar2 = *(int *)(iVar9 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x0149097c();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar2 + 0x5c);
  if (*(int *)(**(int **)(_UNK_01b1d4e4 + 0x1b1d434) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_01b1d4e4 + 0x1b1d434));
  }
  func_0x026794a8(uVar3,uVar8,0);
  if (*(int *)(**(int **)(_UNK_01b1d4e8 + 0x1b1d46c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x01b18728();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x02f7d38c(iVar2,0);
  iVar2 = func_0x02953fd4(0x3825,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01b207b4();
    pcVar7 = (char *)(_UNK_01b20d30 + 0x1b208d4);
    if (*pcVar7 == '\0') {
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
      *pcVar7 = '\x01';
    }
    iVar9 = func_0x02953fd4(0x3826,0);
    if (iVar9 == 0) {
      if (*(int *)(**(int **)(_UNK_01b20d70 + 0x1b209ec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x01b18728();
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(iVar2 + 0x24);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar8 = 0;
      iVar9 = func_0x02f7c754(iVar9,uVar3,0);
      iVar6 = func_0x01b1c550(iVar2);
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar2 + 0x18);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f109c(iVar6,**(undefined4 **)(_UNK_01b20d74 + 0x1b20a64));
        if (iVar6 == 0) {
          if (iVar9 != 0) {
            if (*(int *)(**(int **)(_UNK_01b20d78 + 0x1b20a88) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x02f7c0dc(iVar9,0);
            if ((iVar6 != 0) && (*(char *)(iVar9 + 0x11) == '\0')) {
              return 0;
            }
          }
          uVar5 = *(undefined4 *)(iVar2 + 0x24);
          uVar3 = func_0x024eee28(**(undefined4 **)(_UNK_01b20d80 + 0x1b20adc),uVar5,
                                  **(undefined4 **)(_UNK_01b20d7c + 0x1b20ad0),0);
          if (*(int *)(**(int **)(_UNK_01b20d84 + 0x1b20af8) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef174(uVar3,0);
          func_0x026c6cf4(iVar2,**(undefined4 **)(**(int **)(_UNK_01b20d88 + 0x1b20b24) + 0x5c),0);
          func_0x026c6dd0(iVar2,extraout_r1_03,0,0);
          func_0x026c6ea0(iVar2,extraout_r1_04,0,0);
          func_0x026c6f70(iVar2,0,0);
          func_0x026c6874(iVar2,0,0);
          func_0x026c6b64(iVar2,0,0);
          func_0x026c6aa8(iVar2,0,0);
          func_0x026c6c20(iVar2,0,0);
          func_0x026c6930(iVar2,0,0);
          func_0x026c69ec(iVar2,0,0);
          iVar9 = *(int *)(iVar2 + 0x18);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f0570(iVar9,**(undefined4 **)(_UNK_01b20d8c + 0x1b20be8));
          iVar9 = *(int *)(iVar2 + 0x1c);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f04c8(iVar9,**(undefined4 **)(_UNK_01b20d90 + 0x1b20c0c));
          iVar2 = *(int *)(iVar2 + 0x28);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f0708(iVar2,**(undefined4 **)(_UNK_01b20d94 + 0x1b20c30));
          iVar2 = func_0x015fcde8(uVar5,0);
          uVar8 = 1;
          if (iVar2 == 0) {
            if (*(int *)(**(int **)(_UNK_01b20d98 + 0x1b20c5c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b20d9c + 0x1b20c78));
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_01b20da0 + 0x1b20c98));
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x138);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar2,uVar5,**(undefined4 **)(_UNK_01b20da4 + 0x1b20cd0));
            piVar4 = *(int **)(_UNK_01b20da8 + 0x1b20ce4);
            iVar2 = *piVar4;
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x014387a4();
              iVar2 = *piVar4;
            }
            iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x14);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x024f0560(iVar2,uVar5,**(undefined4 **)(_UNK_01b20dac + 0x1b20d1c));
          }
        }
      }
      return uVar8;
    }
    iVar9 = func_0x029540a4(0x3826,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,iVar2,0);
    iVar6 = *(int *)(iVar9 + 8);
    uVar3 = *(undefined4 *)(iVar9 + 0xc);
    iVar2 = *(int *)(iVar9 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar8 = 2;
    if (iVar2 == 0) {
      uVar8 = 1;
    }
    func_0x024f56d0(iVar6,uVar3,&uStack_30,uVar8,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  iVar2 = func_0x029540a4(0x3825,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar8 = 2;
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  uVar3 = func_0x024f56d0(iVar9,uVar3,&uStack_30,uVar8,0,0);
  return uVar3;
}

