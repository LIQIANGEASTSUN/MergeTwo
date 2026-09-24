
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032d4694(int param_1)

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
  
  pcVar5 = (char *)(_UNK_032d4d8c + 0x32d46ac);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d4d90 + 0x32d46c0));
    func_0x01438628(*(undefined4 *)(_UNK_032d4d94 + 0x32d46cc));
    func_0x01438628(*(undefined4 *)(_UNK_032d4d98 + 0x32d46d8));
    func_0x01438628(*(undefined4 *)(_UNK_032d4d9c + 0x32d46e4));
    func_0x01438628(*(undefined4 *)(_UNK_032d4da0 + 0x32d46f0));
    func_0x01438628(*(undefined4 *)(_UNK_032d4da4 + 0x32d46fc));
    func_0x01438628(*(undefined4 *)(_UNK_032d4da8 + 0x32d4708));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dac + 0x32d4714));
    func_0x01438628(*(undefined4 *)(_UNK_032d4db0 + 0x32d4720));
    func_0x01438628(*(undefined4 *)(_UNK_032d4db4 + 0x32d472c));
    func_0x01438628(*(undefined4 *)(_UNK_032d4db8 + 0x32d4738));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dbc + 0x32d4744));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dc0 + 0x32d4750));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dc4 + 0x32d475c));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dc8 + 0x32d4768));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dcc + 0x32d4774));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dd0 + 0x32d4780));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dd4 + 0x32d478c));
    func_0x01438628(*(undefined4 *)(_UNK_032d4dd8 + 0x32d4798));
    func_0x01438628(*(undefined4 *)(_UNK_032d4ddc + 0x32d47a4));
    func_0x01438628(*(undefined4 *)(_UNK_032d4de0 + 0x32d47b0));
    func_0x01438628(*(undefined4 *)(_UNK_032d4de4 + 0x32d47bc));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1801,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032d4de8 + 0x32d4820) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d4dec + 0x32d483c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032d4df0 + 0x32d485c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x32c);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_032d4df4 + 0x32d48a4));
    if (iVar3 == 0) {
      func_0x032d4e40(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032d4df8 + 0x32d48c8));
      func_0x026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_032d4dfc + 0x32d48e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_032d4e00 + 0x32d4900));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026cf428(iVar3,uVar2,0);
      iVar4 = func_0x032d4ea8(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x032d4ea8(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_032d4e04 + 0x32d49a4));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_032d4e08 + 0x32d49c0);
        puVar9 = *(undefined4 **)(_UNK_032d4e0c + 0x32d49c8);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x032d4fe0(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_032d4e10 + 0x32d4a44));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_032d4e18 + 0x32d4a84));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_032d4e1c + 0x32d4a9c);
      puVar9 = *(undefined4 **)(_UNK_032d4e20 + 0x32d4aa4);
      while( true ) {
        iVar7 = func_0x032d4ea8(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x032d4ea8(param_1);
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
        func_0x026ced30(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026cee00(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_032d4e28 + 0x32d4b84) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032d4e2c + 0x32d4ba0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_032d4e30 + 0x32d4bdc);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_032d4e34 + 0x32d4c1c));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_032d4e38 + 0x32d4cb4));
      func_0x032d509c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_032d4e3c + 0x32d4cf0));
  }
  else {
    iVar1 = func_0x029540a4(0x1801,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}

