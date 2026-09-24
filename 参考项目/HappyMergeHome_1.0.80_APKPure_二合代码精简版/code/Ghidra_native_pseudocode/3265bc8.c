
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03275bc8(int param_1)

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
  
  pcVar5 = (char *)(_UNK_032762c0 + 0x3275be0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032762c4 + 0x3275bf4));
    func_0x01438628(*(undefined4 *)(_UNK_032762c8 + 0x3275c00));
    func_0x01438628(*(undefined4 *)(_UNK_032762cc + 0x3275c0c));
    func_0x01438628(*(undefined4 *)(_UNK_032762d0 + 0x3275c18));
    func_0x01438628(*(undefined4 *)(_UNK_032762d4 + 0x3275c24));
    func_0x01438628(*(undefined4 *)(_UNK_032762d8 + 0x3275c30));
    func_0x01438628(*(undefined4 *)(_UNK_032762dc + 0x3275c3c));
    func_0x01438628(*(undefined4 *)(_UNK_032762e0 + 0x3275c48));
    func_0x01438628(*(undefined4 *)(_UNK_032762e4 + 0x3275c54));
    func_0x01438628(*(undefined4 *)(_UNK_032762e8 + 0x3275c60));
    func_0x01438628(*(undefined4 *)(_UNK_032762ec + 0x3275c6c));
    func_0x01438628(*(undefined4 *)(_UNK_032762f0 + 0x3275c78));
    func_0x01438628(*(undefined4 *)(_UNK_032762f4 + 0x3275c84));
    func_0x01438628(*(undefined4 *)(_UNK_032762f8 + 0x3275c90));
    func_0x01438628(*(undefined4 *)(_UNK_032762fc + 0x3275c9c));
    func_0x01438628(*(undefined4 *)(_UNK_03276300 + 0x3275ca8));
    func_0x01438628(*(undefined4 *)(_UNK_03276304 + 0x3275cb4));
    func_0x01438628(*(undefined4 *)(_UNK_03276308 + 0x3275cc0));
    func_0x01438628(*(undefined4 *)(_UNK_0327630c + 0x3275ccc));
    func_0x01438628(*(undefined4 *)(_UNK_03276310 + 0x3275cd8));
    func_0x01438628(*(undefined4 *)(_UNK_03276314 + 0x3275ce4));
    func_0x01438628(*(undefined4 *)(_UNK_03276318 + 0x3275cf0));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xee3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0327631c + 0x3275d54) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03276320 + 0x3275d70));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03276324 + 0x3275d90));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x328);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_03276328 + 0x3275dd8));
    if (iVar3 == 0) {
      func_0x03276374(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0327632c + 0x3275dfc));
      func_0x026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_03276330 + 0x3275e18) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_03276334 + 0x3275e34));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026efba8(iVar3,uVar2,0);
      iVar4 = func_0x032763dc(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x032763dc(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_03276338 + 0x3275ed8));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0327633c + 0x3275ef4);
        puVar9 = *(undefined4 **)(_UNK_03276340 + 0x3275efc);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x03276514(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_03276344 + 0x3275f78));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0327634c + 0x3275fb8));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_03276350 + 0x3275fd0);
      puVar9 = *(undefined4 **)(_UNK_03276354 + 0x3275fd8);
      while( true ) {
        iVar7 = func_0x032763dc(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x032763dc(param_1);
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
        func_0x026ef4b0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026ef580(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0327635c + 0x32760b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03276360 + 0x32760d4));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x20);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_03276364 + 0x3276110);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_03276368 + 0x3276150));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0327636c + 0x32761e8));
      func_0x032765d0(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_03276370 + 0x3276224));
  }
  else {
    iVar1 = func_0x029540a4(0xee3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

