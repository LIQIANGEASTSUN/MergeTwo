
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03209df8(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0320a4f0 + 0x3209e10);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320a4f4 + 0x3209e24));
    func_0x01438628(*(undefined4 *)(_UNK_0320a4f8 + 0x3209e30));
    func_0x01438628(*(undefined4 *)(_UNK_0320a4fc + 0x3209e3c));
    func_0x01438628(*(undefined4 *)(_UNK_0320a500 + 0x3209e48));
    func_0x01438628(*(undefined4 *)(_UNK_0320a504 + 0x3209e54));
    func_0x01438628(*(undefined4 *)(_UNK_0320a508 + 0x3209e60));
    func_0x01438628(*(undefined4 *)(_UNK_0320a50c + 0x3209e6c));
    func_0x01438628(*(undefined4 *)(_UNK_0320a510 + 0x3209e78));
    func_0x01438628(*(undefined4 *)(_UNK_0320a514 + 0x3209e84));
    func_0x01438628(*(undefined4 *)(_UNK_0320a518 + 0x3209e90));
    func_0x01438628(*(undefined4 *)(_UNK_0320a51c + 0x3209e9c));
    func_0x01438628(*(undefined4 *)(_UNK_0320a520 + 0x3209ea8));
    func_0x01438628(*(undefined4 *)(_UNK_0320a524 + 0x3209eb4));
    func_0x01438628(*(undefined4 *)(_UNK_0320a528 + 0x3209ec0));
    func_0x01438628(*(undefined4 *)(_UNK_0320a52c + 0x3209ecc));
    func_0x01438628(*(undefined4 *)(_UNK_0320a530 + 0x3209ed8));
    func_0x01438628(*(undefined4 *)(_UNK_0320a534 + 0x3209ee4));
    func_0x01438628(*(undefined4 *)(_UNK_0320a538 + 0x3209ef0));
    func_0x01438628(*(undefined4 *)(_UNK_0320a53c + 0x3209efc));
    func_0x01438628(*(undefined4 *)(_UNK_0320a540 + 0x3209f08));
    func_0x01438628(*(undefined4 *)(_UNK_0320a544 + 0x3209f14));
    func_0x01438628(*(undefined4 *)(_UNK_0320a548 + 0x3209f20));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xecb,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0320a54c + 0x3209f84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0320a550 + 0x3209fa0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0320a554 + 0x3209fc0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2b8);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0320a558 + 0x320a008));
    if (iVar3 == 0) {
      func_0x0320a5a4(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0320a55c + 0x320a02c));
      func_0x026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0320a560 + 0x320a048) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0320a564 + 0x320a064));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026efba8(iVar3,uVar2,0);
      iVar4 = func_0x0320a60c(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0320a60c(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0320a568 + 0x320a108));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0320a56c + 0x320a124);
        puVar9 = *(undefined4 **)(_UNK_0320a570 + 0x320a12c);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0320a744(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_0320a574 + 0x320a1a8));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0320a57c + 0x320a1e8));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0320a580 + 0x320a200);
      puVar9 = *(undefined4 **)(_UNK_0320a584 + 0x320a208);
      while( true ) {
        iVar7 = func_0x0320a60c(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0320a60c(param_1);
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
      if (*(int *)(**(int **)(_UNK_0320a58c + 0x320a2e8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0320a590 + 0x320a304));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0320a594 + 0x320a340);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_0320a598 + 0x320a380));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0320a59c + 0x320a418));
      func_0x0320a800(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_0320a5a0 + 0x320a454));
  }
  else {
    iVar1 = func_0x029540a4(0xecb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

