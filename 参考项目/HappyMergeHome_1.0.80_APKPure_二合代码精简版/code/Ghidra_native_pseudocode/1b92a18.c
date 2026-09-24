
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ba2a18(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  int iStack_58;
  undefined1 uStack_51;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01ba376c + 0x1ba2a38);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ba3770 + 0x1ba2a4c));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3774 + 0x1ba2a58));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3778 + 0x1ba2a64));
    func_0x01438628(*(undefined4 *)(_UNK_01ba377c + 0x1ba2a70));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3780 + 0x1ba2a7c));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3784 + 0x1ba2a88));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3788 + 0x1ba2a94));
    func_0x01438628(*(undefined4 *)(_UNK_01ba378c + 0x1ba2aa0));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3790 + 0x1ba2aac));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3794 + 0x1ba2ab8));
    func_0x01438628(*(undefined4 *)(_UNK_01ba3798 + 0x1ba2ac4));
    func_0x01438628(*(undefined4 *)(_UNK_01ba379c + 0x1ba2ad0));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37a0 + 0x1ba2adc));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37a4 + 0x1ba2ae8));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37a8 + 0x1ba2af4));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37ac + 0x1ba2b00));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37b0 + 0x1ba2b0c));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37b4 + 0x1ba2b18));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37b8 + 0x1ba2b24));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37bc + 0x1ba2b30));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37c0 + 0x1ba2b3c));
    func_0x01438628(*(undefined4 *)(_UNK_01ba37c4 + 0x1ba2b48));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0xa7e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa7e9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x39) = 0;
  iVar1 = func_0x01ba9704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026be808(iVar1,*(int *)(iVar1 + 0x18) + -1,0);
  iVar1 = func_0x01ba9704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x03b75ba0(iVar1,param_2,**(undefined4 **)(_UNK_01ba37c8 + 0x1ba2c10));
  iVar1 = func_0x01ba9704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iStack_2c = *(int *)(iVar1 + 0x24);
  func_0x026bea3c(iVar1,iStack_2c + 1,0);
  iVar1 = func_0x01ba9704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (param_3 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(param_3 + 0x14) <= iVar1) {
    iVar8 = *(int *)(param_3 + 0x10);
    iVar1 = func_0x01ba9704(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e5f78(100,(iVar8 - *(int *)(iVar1 + 0x24)) + 1);
    iVar8 = func_0x024f14b8(0,100,0);
    if (iVar8 <= iVar1) {
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      if (*(int *)(**(int **)(_UNK_01ba37cc + 0x1ba3054) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar3 = func_0x02af43a8(uVar4,uVar3,0);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar1 = **(int **)(**(int **)(_UNK_01ba37d0 + 0x1ba3094) + 0x5c);
      uStack_50 = 0;
      uStack_40 = 0;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      func_0x02028d38(&uStack_50,0x91,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = uStack_3c;
      func_0x02e66ffc(iVar1,uVar3,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,
                      uStack_38,uStack_34,1,0);
      iVar1 = func_0x01ba9704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iStack_2c = *(int *)(iVar1 + 0x1c);
      func_0x026be8c4(iVar1,iStack_2c + 1,0);
      iVar1 = func_0x01ba9704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026bea3c(iVar1,0,0);
      iVar1 = func_0x01ba9704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x28);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar13 = *(undefined4 **)(_UNK_01ba37d4 + 0x1ba3194);
      func_0x03b75c84(iVar1,*puVar13);
      iVar1 = func_0x01ba9704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar1,*puVar13);
      if (*(int *)(**(int **)(_UNK_01ba37d8 + 0x1ba31d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x0202346c(0);
      iVar8 = func_0x01ba9704(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iStack_2c = *(int *)(iVar8 + 0x1c);
      uVar3 = func_0x01524ffc(&iStack_2c,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar1,0x269,uVar3,0,0,0,0,uVar4,0,0,0,0,0);
      iVar1 = func_0x01ba9704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(_UNK_01ba37dc + 0x1ba328c);
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(_UNK_01ba37e0 + 0x1ba32ac);
      iVar8 = func_0x014e9518(*puVar13);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uStack_64 = 0;
      iVar8 = func_0x020a9d08(iVar8,0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar11 = 1;
      iVar9 = 1;
      iVar7 = 0;
      if (*(int *)(iVar8 + 0xc) <= iVar1) {
        iVar1 = func_0x01ba9704(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026beb08(iVar1,1,0);
        func_0x01bb13e0(param_1,3);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar13);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020a9c38(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = *(undefined4 *)(iVar1 + 0x14);
        iVar1 = func_0x014e9518(*puVar13);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020a9c38(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0x18);
        if (*(int *)(**(int **)(_UNK_01ba37e4 + 0x1ba33c8) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar3 = func_0x02af43a8(uVar3,uVar4,0);
        uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        iVar1 = **(int **)(**(int **)(_UNK_01ba37e8 + 0x1ba340c) + 0x5c);
        uStack_50 = 0;
        uStack_40 = 0;
        uStack_3c = uStack_4c;
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        func_0x02028d38(&uStack_50,0x91,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar11 = 1;
        uStack_64 = 0;
        func_0x02e66ffc(iVar1,uVar3,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,
                        uStack_38,uStack_34,1,0);
        iVar9 = 1;
        iVar7 = 0;
      }
      goto LAB_01ba3480;
    }
  }
  iVar1 = func_0x01ba9704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(param_3 + 0x18);
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar11 = 0;
  iVar9 = 0;
  uStack_64 = 0;
  iVar7 = 0;
  if (iVar1 < *(int *)(iVar8 + 0xc)) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ba37ec + 0x1ba2d4c));
    func_0x024f0510(iVar1,**(undefined4 **)(_UNK_01ba37f0 + 0x1ba2d60));
    iVar8 = 0;
    puVar13 = *(undefined4 **)(_UNK_01ba37f4 + 0x1ba2d78);
    piVar12 = *(int **)(_UNK_01ba37f8 + 0x1ba2d80);
    while( true ) {
      iVar7 = *(int *)(param_3 + 0x18);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0xc) <= iVar8) break;
      iVar7 = func_0x01ba9704(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x2c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f0f34(iVar7,iVar8,*puVar13);
      if (iVar7 == 0) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar1 + 8);
        uVar10 = *(uint *)(iVar1 + 0xc);
        iVar9 = *piVar12;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (uVar10 < *(uint *)(iVar7 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar10 + 1;
          *(int *)(iVar7 + uVar10 * 4 + 0x10) = iVar8;
        }
        else {
          func_0x024f0520(iVar1,iVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar8 = iVar8 + 1;
    }
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      return;
    }
    iVar7 = *(int *)(param_3 + 0x10);
    iVar8 = func_0x01ba9704(param_1);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x014e5f78(*(int *)(iVar1 + 0xc) * 100,(iVar7 - *(int *)(iVar8 + 0x24)) + 1);
    uVar11 = 0;
    iVar2 = func_0x024f14b8(0,100,0);
    iVar9 = 0;
    uStack_64 = 0;
    iVar7 = 0;
    if (iVar2 <= iVar8) {
      if (*(int *)(**(int **)(_UNK_01ba37fc + 0x1ba2ed8) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar3 = func_0x0364a34c(iVar1,0,**(undefined4 **)(_UNK_01ba3800 + 0x1ba2ef8));
      iVar1 = *(int *)(param_3 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar13 = *(undefined4 **)(_UNK_01ba3804 + 0x1ba2f28);
      iVar9 = func_0x024f0530(iVar1,uVar3,*puVar13);
      iVar1 = *(int *)(param_3 + 0x1c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_64 = func_0x024f0530(iVar1,uVar3,*puVar13);
      if (0 < iVar9) {
        uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        iVar1 = **(int **)(**(int **)(_UNK_01ba3808 + 0x1ba2f7c) + 0x5c);
        uStack_50 = 0;
        uStack_40 = 0;
        uStack_3c = uStack_4c;
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        func_0x02028d38(&uStack_50,0x91,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02e64460(iVar1,iVar9,uStack_64,uStack_3c,uStack_50,uStack_4c,uStack_48,uStack_44,
                        uStack_40,uStack_3c,uStack_38,uStack_34,1,0,0,0);
        iVar1 = func_0x01ba9704(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x2c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar1,uVar3,**(undefined4 **)(_UNK_01ba380c + 0x1ba3034));
      }
      uVar11 = 0;
      iVar7 = iVar9;
    }
  }
LAB_01ba3480:
  if (*(int *)(**(int **)(_UNK_01ba3810 + 0x1ba3490) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ba3814 + 0x1ba34ac));
  piVar12 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01ba3818 + 0x1ba34c4),4);
  puVar13 = *(undefined4 **)(_UNK_01ba381c + 0x1ba34d8);
  uStack_50 = param_2;
  iVar8 = func_0x014387ac(*puVar13,&uStack_50);
  if (piVar12 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar8 != 0) && (iVar2 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar12 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if (piVar12[3] == 0) {
    func_0x014388e8();
  }
  piVar12[4] = iVar8;
  func_0x014385cc(piVar12 + 4,iVar8);
  uStack_51 = uVar11;
  iVar8 = func_0x014387ac(**(undefined4 **)(_UNK_01ba3820 + 0x1ba3554),&uStack_51);
  if ((iVar8 != 0) && (iVar2 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar12 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if ((uint)piVar12[3] < 2) {
    func_0x014388e8();
  }
  piVar12[5] = iVar8;
  func_0x014385cc(piVar12 + 5,iVar8);
  iStack_58 = iVar7;
  iVar8 = func_0x014387ac(*puVar13,&iStack_58);
  if ((iVar8 != 0) && (iVar7 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar12 + 0x20)), iVar7 == 0))
  {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if ((uint)piVar12[3] < 3) {
    func_0x014388e8();
  }
  piVar12[6] = iVar8;
  func_0x014385cc(piVar12 + 6,iVar8);
  uStack_5c = uStack_64;
  iVar8 = func_0x014387ac(*puVar13,&uStack_5c);
  if ((iVar8 != 0) && (iVar7 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar12 + 0x20)), iVar7 == 0))
  {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if ((uint)piVar12[3] < 4) {
    func_0x014388e8();
  }
  piVar12[7] = iVar8;
  func_0x014385cc(piVar12 + 7,iVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar1,**(undefined4 **)(_UNK_01ba3824 + 0x1ba3690),piVar12,0);
  iStack_28 = iVar9;
  if (*(int *)(**(int **)(_UNK_01ba3828 + 0x1ba36a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x0202346c(0);
  iStack_2c = func_0x01ba8784(param_1);
  uVar3 = func_0x01524ffc(&iStack_2c,0);
  uVar4 = func_0x01524ffc(&iStack_28,0);
  iVar8 = func_0x01ba9704(param_1);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iStack_2c = *(int *)(iVar8 + 0x1c);
  uVar5 = func_0x01524ffc(&iStack_2c,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020257a4(iVar1,0x268,uVar3,uVar4,uVar5,0,0);
  return;
}

