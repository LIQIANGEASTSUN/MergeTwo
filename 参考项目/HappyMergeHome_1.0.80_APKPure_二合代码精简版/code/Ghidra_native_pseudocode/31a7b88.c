
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031b7b88(int param_1)

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
  
  pcVar5 = (char *)(_UNK_031b8280 + 0x31b7ba0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b8284 + 0x31b7bb4));
    func_0x01438628(*(undefined4 *)(_UNK_031b8288 + 0x31b7bc0));
    func_0x01438628(*(undefined4 *)(_UNK_031b828c + 0x31b7bcc));
    func_0x01438628(*(undefined4 *)(_UNK_031b8290 + 0x31b7bd8));
    func_0x01438628(*(undefined4 *)(_UNK_031b8294 + 0x31b7be4));
    func_0x01438628(*(undefined4 *)(_UNK_031b8298 + 0x31b7bf0));
    func_0x01438628(*(undefined4 *)(_UNK_031b829c + 0x31b7bfc));
    func_0x01438628(*(undefined4 *)(_UNK_031b82a0 + 0x31b7c08));
    func_0x01438628(*(undefined4 *)(_UNK_031b82a4 + 0x31b7c14));
    func_0x01438628(*(undefined4 *)(_UNK_031b82a8 + 0x31b7c20));
    func_0x01438628(*(undefined4 *)(_UNK_031b82ac + 0x31b7c2c));
    func_0x01438628(*(undefined4 *)(_UNK_031b82b0 + 0x31b7c38));
    func_0x01438628(*(undefined4 *)(_UNK_031b82b4 + 0x31b7c44));
    func_0x01438628(*(undefined4 *)(_UNK_031b82b8 + 0x31b7c50));
    func_0x01438628(*(undefined4 *)(_UNK_031b82bc + 0x31b7c5c));
    func_0x01438628(*(undefined4 *)(_UNK_031b82c0 + 0x31b7c68));
    func_0x01438628(*(undefined4 *)(_UNK_031b82c4 + 0x31b7c74));
    func_0x01438628(*(undefined4 *)(_UNK_031b82c8 + 0x31b7c80));
    func_0x01438628(*(undefined4 *)(_UNK_031b82cc + 0x31b7c8c));
    func_0x01438628(*(undefined4 *)(_UNK_031b82d0 + 0x31b7c98));
    func_0x01438628(*(undefined4 *)(_UNK_031b82d4 + 0x31b7ca4));
    func_0x01438628(*(undefined4 *)(_UNK_031b82d8 + 0x31b7cb0));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x179b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031b82dc + 0x31b7d14) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031b82e0 + 0x31b7d30));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_031b82e4 + 0x31b7d50));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x308);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_031b82e8 + 0x31b7d98));
    if (iVar3 == 0) {
      func_0x031b8334(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031b82ec + 0x31b7dbc));
      func_0x026f15d8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_031b82f0 + 0x31b7dd8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_031b82f4 + 0x31b7df4));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026f12d8(iVar3,uVar2,0);
      iVar4 = func_0x031b839c(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x031b839c(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_031b82f8 + 0x31b7e98));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_031b82fc + 0x31b7eb4);
        puVar9 = *(undefined4 **)(_UNK_031b8300 + 0x31b7ebc);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x031b84d4(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_031b8304 + 0x31b7f38));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_031b830c + 0x31b7f78));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_031b8310 + 0x31b7f90);
      puVar9 = *(undefined4 **)(_UNK_031b8314 + 0x31b7f98);
      while( true ) {
        iVar7 = func_0x031b839c(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x031b839c(param_1);
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
        func_0x026f0be0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026f0cb0(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_031b831c + 0x31b8078) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031b8320 + 0x31b8094));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_031b8324 + 0x31b80d0);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_031b8328 + 0x31b8110));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_031b832c + 0x31b81a8));
      func_0x031b8590(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_031b8330 + 0x31b81e4));
  }
  else {
    iVar1 = func_0x029540a4(0x179b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a8c5c(iVar1,param_1,0);
  }
  return;
}

