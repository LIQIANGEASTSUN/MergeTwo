
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d2ca4(int param_1)

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
  
  pcVar5 = (char *)(_UNK_030d339c + 0x30d2cbc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d33a0 + 0x30d2cd0));
    func_0x01438628(*(undefined4 *)(_UNK_030d33a4 + 0x30d2cdc));
    func_0x01438628(*(undefined4 *)(_UNK_030d33a8 + 0x30d2ce8));
    func_0x01438628(*(undefined4 *)(_UNK_030d33ac + 0x30d2cf4));
    func_0x01438628(*(undefined4 *)(_UNK_030d33b0 + 0x30d2d00));
    func_0x01438628(*(undefined4 *)(_UNK_030d33b4 + 0x30d2d0c));
    func_0x01438628(*(undefined4 *)(_UNK_030d33b8 + 0x30d2d18));
    func_0x01438628(*(undefined4 *)(_UNK_030d33bc + 0x30d2d24));
    func_0x01438628(*(undefined4 *)(_UNK_030d33c0 + 0x30d2d30));
    func_0x01438628(*(undefined4 *)(_UNK_030d33c4 + 0x30d2d3c));
    func_0x01438628(*(undefined4 *)(_UNK_030d33c8 + 0x30d2d48));
    func_0x01438628(*(undefined4 *)(_UNK_030d33cc + 0x30d2d54));
    func_0x01438628(*(undefined4 *)(_UNK_030d33d0 + 0x30d2d60));
    func_0x01438628(*(undefined4 *)(_UNK_030d33d4 + 0x30d2d6c));
    func_0x01438628(*(undefined4 *)(_UNK_030d33d8 + 0x30d2d78));
    func_0x01438628(*(undefined4 *)(_UNK_030d33dc + 0x30d2d84));
    func_0x01438628(*(undefined4 *)(_UNK_030d33e0 + 0x30d2d90));
    func_0x01438628(*(undefined4 *)(_UNK_030d33e4 + 0x30d2d9c));
    func_0x01438628(*(undefined4 *)(_UNK_030d33e8 + 0x30d2da8));
    func_0x01438628(*(undefined4 *)(_UNK_030d33ec + 0x30d2db4));
    func_0x01438628(*(undefined4 *)(_UNK_030d33f0 + 0x30d2dc0));
    func_0x01438628(*(undefined4 *)(_UNK_030d33f4 + 0x30d2dcc));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xf3f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030d33f8 + 0x30d2e30) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d33fc + 0x30d2e4c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_030d3400 + 0x30d2e6c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x388);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_030d3404 + 0x30d2eb4));
    if (iVar3 == 0) {
      func_0x030d3450(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_030d3408 + 0x30d2ed8));
      FUN_026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_030d340c + 0x30d2ef4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_030d3410 + 0x30d2f10));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026efba8(iVar3,uVar2,0);
      iVar4 = func_0x030d34b8(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x030d34b8(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_030d3414 + 0x30d2fb4));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_030d3418 + 0x30d2fd0);
        puVar9 = *(undefined4 **)(_UNK_030d341c + 0x30d2fd8);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x030d35f0(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_030d3420 + 0x30d3054));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_030d3428 + 0x30d3094));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_030d342c + 0x30d30ac);
      puVar9 = *(undefined4 **)(_UNK_030d3430 + 0x30d30b4);
      while( true ) {
        iVar7 = func_0x030d34b8(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x030d34b8(param_1);
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
      if (*(int *)(**(int **)(_UNK_030d3438 + 0x30d3194) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030d343c + 0x30d31b0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_030d3440 + 0x30d31ec);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_030d3444 + 0x30d322c));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_030d3448 + 0x30d32c4));
      func_0x030d36ac(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_030d344c + 0x30d3300));
  }
  else {
    iVar1 = func_0x029540a4(0xf3f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

