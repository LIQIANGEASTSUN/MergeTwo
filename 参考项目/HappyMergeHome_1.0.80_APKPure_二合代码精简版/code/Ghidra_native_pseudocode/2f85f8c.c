
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f95f8c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_02f96684 + 0x2f95fa4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f96688 + 0x2f95fb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9668c + 0x2f95fc4));
    func_0x01438628(*(undefined4 *)(_UNK_02f96690 + 0x2f95fd0));
    func_0x01438628(*(undefined4 *)(_UNK_02f96694 + 0x2f95fdc));
    func_0x01438628(*(undefined4 *)(_UNK_02f96698 + 0x2f95fe8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9669c + 0x2f95ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02f966a0 + 0x2f96000));
    func_0x01438628(*(undefined4 *)(_UNK_02f966a4 + 0x2f9600c));
    func_0x01438628(*(undefined4 *)(_UNK_02f966a8 + 0x2f96018));
    func_0x01438628(*(undefined4 *)(_UNK_02f966ac + 0x2f96024));
    func_0x01438628(*(undefined4 *)(_UNK_02f966b0 + 0x2f96030));
    func_0x01438628(*(undefined4 *)(_UNK_02f966b4 + 0x2f9603c));
    func_0x01438628(*(undefined4 *)(_UNK_02f966b8 + 0x2f96048));
    func_0x01438628(*(undefined4 *)(_UNK_02f966bc + 0x2f96054));
    func_0x01438628(*(undefined4 *)(_UNK_02f966c0 + 0x2f96060));
    func_0x01438628(*(undefined4 *)(_UNK_02f966c4 + 0x2f9606c));
    func_0x01438628(*(undefined4 *)(_UNK_02f966c8 + 0x2f96078));
    func_0x01438628(*(undefined4 *)(_UNK_02f966cc + 0x2f96084));
    func_0x01438628(*(undefined4 *)(_UNK_02f966d0 + 0x2f96090));
    func_0x01438628(*(undefined4 *)(_UNK_02f966d4 + 0x2f9609c));
    func_0x01438628(*(undefined4 *)(_UNK_02f966d8 + 0x2f960a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f966dc + 0x2f960b4));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xf28,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f966e0 + 0x2f96118) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f966e4 + 0x2f96134));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f966e8 + 0x2f96154));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x380);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_02f966ec + 0x2f9619c));
    if (iVar3 == 0) {
      func_0x02f96738(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f966f0 + 0x2f961c0));
      FUN_026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_02f966f4 + 0x2f961dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_02f966f8 + 0x2f961f8));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026efba8(iVar3,uVar2,0);
      iVar4 = func_0x02f967a0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x02f967a0(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_02f966fc + 0x2f9629c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_02f96700 + 0x2f962b8);
        puVar9 = *(undefined4 **)(_UNK_02f96704 + 0x2f962c0);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x02f968d8(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02f96708 + 0x2f9633c));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_02f96710 + 0x2f9637c));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_02f96714 + 0x2f96394);
      puVar9 = *(undefined4 **)(_UNK_02f96718 + 0x2f9639c);
      while( true ) {
        iVar7 = func_0x02f967a0(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x02f967a0(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cd26d0(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        FUN_026ef4b0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x1c),0);
        FUN_026ef580(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_02f96720 + 0x2f9647c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f96724 + 0x2f96498));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_02f96728 + 0x2f964d4);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_02f9672c + 0x2f96514));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_02f96730 + 0x2f965ac));
      func_0x02f96994(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_02f96734 + 0x2f965e8));
  }
  else {
    iVar1 = func_0x029540a4(0xf28,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

