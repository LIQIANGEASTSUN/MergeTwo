
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0307f35c(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0307fa54 + 0x307f374);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307fa58 + 0x307f388));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa5c + 0x307f394));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa60 + 0x307f3a0));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa64 + 0x307f3ac));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa68 + 0x307f3b8));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa6c + 0x307f3c4));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa70 + 0x307f3d0));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa74 + 0x307f3dc));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa78 + 0x307f3e8));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa7c + 0x307f3f4));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa80 + 0x307f400));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa84 + 0x307f40c));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa88 + 0x307f418));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa8c + 0x307f424));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa90 + 0x307f430));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa94 + 0x307f43c));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa98 + 0x307f448));
    func_0x01438628(*(undefined4 *)(_UNK_0307fa9c + 0x307f454));
    func_0x01438628(*(undefined4 *)(_UNK_0307faa0 + 0x307f460));
    func_0x01438628(*(undefined4 *)(_UNK_0307faa4 + 0x307f46c));
    func_0x01438628(*(undefined4 *)(_UNK_0307faa8 + 0x307f478));
    func_0x01438628(*(undefined4 *)(_UNK_0307faac + 0x307f484));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x150d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0307fab0 + 0x307f4e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0307fab4 + 0x307f504));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0307fab8 + 0x307f524));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 900);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0307fabc + 0x307f56c));
    if (iVar3 == 0) {
      func_0x0307fb08(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0307fac0 + 0x307f590));
      FUN_026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0307fac4 + 0x307f5ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0307fac8 + 0x307f5c8));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026cf428(iVar3,uVar2,0);
      iVar4 = func_0x0307fb70(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0307fb70(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0307facc + 0x307f66c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0307fad0 + 0x307f688);
        puVar9 = *(undefined4 **)(_UNK_0307fad4 + 0x307f690);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0307fca8(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_0307fad8 + 0x307f70c));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0307fae0 + 0x307f74c));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0307fae4 + 0x307f764);
      puVar9 = *(undefined4 **)(_UNK_0307fae8 + 0x307f76c);
      while( true ) {
        iVar7 = func_0x0307fb70(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0307fb70(param_1);
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
        FUN_026ced30(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x1c),0);
        FUN_026cee00(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0307faf0 + 0x307f84c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0307faf4 + 0x307f868));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0307faf8 + 0x307f8a4);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_0307fafc + 0x307f8e4));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0307fb00 + 0x307f97c));
      func_0x0307fd64(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_0307fb04 + 0x307f9b8));
  }
  else {
    iVar1 = func_0x029540a4(0x150d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}

