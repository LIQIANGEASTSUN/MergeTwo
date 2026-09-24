
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0328011c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_032805c8 + 0x3280138);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032805cc + 0x328014c));
    func_0x01438628(*(undefined4 *)(_UNK_032805d0 + 0x3280158));
    func_0x01438628(*(undefined4 *)(_UNK_032805d4 + 0x3280164));
    func_0x01438628(*(undefined4 *)(_UNK_032805d8 + 0x3280170));
    func_0x01438628(*(undefined4 *)(_UNK_032805dc + 0x328017c));
    func_0x01438628(*(undefined4 *)(_UNK_032805e0 + 0x3280188));
    func_0x01438628(*(undefined4 *)(_UNK_032805e4 + 0x3280194));
    func_0x01438628(*(undefined4 *)(_UNK_032805e8 + 0x32801a0));
    func_0x01438628(*(undefined4 *)(_UNK_032805ec + 0x32801ac));
    func_0x01438628(*(undefined4 *)(_UNK_032805f0 + 0x32801b8));
    func_0x01438628(*(undefined4 *)(_UNK_032805f4 + 0x32801c4));
    func_0x01438628(*(undefined4 *)(_UNK_032805f8 + 0x32801d0));
    func_0x01438628(*(undefined4 *)(_UNK_032805fc + 0x32801dc));
    func_0x01438628(*(undefined4 *)(_UNK_03280600 + 0x32801e8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8133,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8133,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_03280604 + 0x3280248) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03280608 + 0x3280264));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0328060c + 0x3280284));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,0x2c,**(undefined4 **)(_UNK_03280610 + 0x32802bc));
  if (iVar1 != 0) {
    iVar6 = FUN_03275bc8(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x70);
    if (iVar6 < param_2) {
      iVar2 = *(int *)(iVar1 + 8);
      iVar9 = iVar2 * iVar6;
      iStack_2c = param_2;
      if (iVar9 < iVar2 * param_2) {
        iVar2 = iVar2 * (param_2 - iVar6);
        puVar10 = *(undefined4 **)(_UNK_03280614 + 0x3280328);
        do {
          iVar6 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x03b780b0(iVar6,iVar9,*puVar10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar6 + 8)) {
            iVar6 = FUN_03275bc8(param_1);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar1 + 0x10);
            iVar6 = *(int *)(iVar6 + 0x18);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x03b780b0(iVar7,iVar9,*puVar10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar7 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar6,uVar8,**(undefined4 **)(_UNK_03280618 + 0x32803cc));
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
          if (*(int *)(**(int **)(_UNK_0328061c + 0x32803ec) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03280620 + 0x3280408));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x2c;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar9;
          func_0x02bd2cf0(iVar6,iVar9,0xffffffff,10);
          iVar2 = iVar2 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar2 != 0);
      }
      iVar1 = FUN_03275bc8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = iStack_2c;
      func_0x026efd30(iVar1,iStack_2c,0);
      if (*(int *)(**(int **)(_UNK_03280624 + 0x3280498) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03280628 + 0x32804b4));
      piVar5 = *(int **)(_UNK_0328062c + 0x32804c8);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x330);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03280630 + 0x32804ec),1);
      iStack_28 = iVar6;
      iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03280634 + 0x328050c),&iStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar6 != 0) &&
         (iVar2 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01438904();
        func_0x01438790(uVar3,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar6;
      func_0x014385cc(piVar5 + 4,iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar8,piVar5,0);
      if (*(int *)(**(int **)(_UNK_03280638 + 0x328059c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_032747d0();
      if (iVar1 != 0) {
        func_0x0329ad18(iVar1,0);
      }
    }
  }
  return;
}

