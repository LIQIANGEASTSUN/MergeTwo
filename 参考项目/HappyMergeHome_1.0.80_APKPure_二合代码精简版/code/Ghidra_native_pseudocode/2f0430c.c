
/* WARNING: Possible PIC construction at 0x02f14768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f1476c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1430c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_r4;
  char *pcVar9;
  int *piVar10;
  int unaff_r5;
  undefined4 uVar11;
  undefined4 unaff_r6;
  int iVar12;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_02f1460c + 0x2f14324);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f14610 + 0x2f14338));
    func_0x01438628(*(undefined4 *)(_UNK_02f14614 + 0x2f14344));
    func_0x01438628(*(undefined4 *)(_UNK_02f14618 + 0x2f14350));
    func_0x01438628(*(undefined4 *)(_UNK_02f1461c + 0x2f1435c));
    func_0x01438628(*(undefined4 *)(_UNK_02f14620 + 0x2f14368));
    func_0x01438628(*(undefined4 *)(_UNK_02f14624 + 0x2f14374));
    func_0x01438628(*(undefined4 *)(_UNK_02f14628 + 0x2f14380));
    func_0x01438628(*(undefined4 *)(_UNK_02f1462c + 0x2f1438c));
    func_0x01438628(*(undefined4 *)(_UNK_02f14630 + 0x2f14398));
    func_0x01438628(*(undefined4 *)(_UNK_02f14634 + 0x2f143a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f14638 + 0x2f143b0));
    *pcVar9 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x2d3e,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f1463c + 0x2f1440c));
    func_0x024eeca8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar5 + 8) = param_2;
    func_0x014385cc((int *)(iVar5 + 8),param_2);
    if (*(int *)(**(int **)(_UNK_02f14640 + 0x2f14444) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02f14644 + 0x2f14460));
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x28);
    uVar11 = func_0x014388d4(**(undefined4 **)(_UNK_02f14648 + 0x2f14480));
    func_0x03a062d0(uVar11,iVar5,**(undefined4 **)(_UNK_02f1464c + 0x2f144a0),0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x04cfe1c0(iVar7,uVar11,**(undefined4 **)(_UNK_02f14650 + 0x2f144c4));
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(undefined4 *)(iVar5 + 0xc);
    uVar8 = *(undefined4 *)(iVar5 + 0x10);
    if (*(int *)(**(int **)(_UNK_02f14654 + 0x2f144e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    param_2 = func_0x02af43a8(uVar11,uVar8,0);
    if (*(int *)(**(int **)(_UNK_02f14658 + 0x2f14520) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1465c + 0x2f1453c));
    piVar10 = *(int **)(_UNK_02f14660 + 0x2f14550);
    iVar7 = *piVar10;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar10;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
    piVar10 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02f14664 + 0x2f14574),1);
    if (piVar10 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((param_2 != 0) &&
       (iVar7 = func_0x014387a8(param_2,*(undefined4 *)(*piVar10 + 0x20)), iVar7 == 0)) {
      uVar8 = func_0x01438904();
      func_0x01438790(uVar8,0);
    }
    if (piVar10[3] == 0) {
      func_0x014388e8();
    }
    piVar10[4] = param_2;
    func_0x014385cc(piVar10 + 4,param_2);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar5,uVar11,piVar10,0);
    unaff_r9 = &uStack_48;
    pcVar9 = (char *)(_UNK_02f14964 + 0x2f14690);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f14968 + 0x2f146a4));
      func_0x01438628(*(undefined4 *)(_UNK_02f1496c + 0x2f146b0));
      func_0x01438628(*(undefined4 *)(_UNK_02f14970 + 0x2f146bc));
      func_0x01438628(*(undefined4 *)(_UNK_02f14974 + 0x2f146c8));
      func_0x01438628(*(undefined4 *)(_UNK_02f14978 + 0x2f146d4));
      func_0x01438628(*(undefined4 *)(_UNK_02f1497c + 0x2f146e0));
      func_0x01438628(*(undefined4 *)(_UNK_02f14980 + 0x2f146ec));
      func_0x01438628(*(undefined4 *)(_UNK_02f14984 + 0x2f146f8));
      func_0x01438628(*(undefined4 *)(_UNK_02f14988 + 0x2f14704));
      func_0x01438628(*(undefined4 *)(_UNK_02f1498c + 0x2f14710));
      *pcVar9 = '\x01';
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_48 = 0;
    uStack_38 = 0;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    iVar5 = func_0x02953fd4(0x2d44,0);
    if (iVar5 == 0) {
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f14990 + 0x2f1477c));
      func_0x024eeca8(iVar5,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar5 + 8) = param_1;
      func_0x014385cc((undefined4 *)(iVar5 + 8),param_1);
      piVar10 = (int *)(iVar5 + 0xc);
      *piVar10 = param_2;
      func_0x014385cc(piVar10,param_2);
      iVar7 = *piVar10;
      if ((iVar7 != 0) && (iVar12 = *(int *)(iVar7 + 0xc), 0 < iVar12)) {
        if (7 < iVar12) {
          iVar12 = 8;
        }
        uStack_4c = func_0x04cfe7bc(iVar7,0,iVar12,**(undefined4 **)(_UNK_02f14994 + 0x2f147ec));
        iVar7 = *piVar10;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        func_0x04cff564(iVar7,0,iVar12,**(undefined4 **)(_UNK_02f14998 + 0x2f1481c));
        func_0x02028d38(&uStack_48,2,0);
        if (*(int *)(**(int **)(_UNK_02f1499c + 0x2f14840) + 0x74) == 0) {
          func_0x014387a4();
        }
        iStack_50 = func_0x03b2c734(**(undefined4 **)(_UNK_02f149a0 + 0x2f1485c));
        if (*(int *)(**(int **)(_UNK_02f149a4 + 0x2f14870) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02f149a8 + 0x2f14894));
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_54 = func_0x029be154(iVar7,0);
        uVar4 = uStack_30;
        uVar3 = uStack_34;
        uVar2 = uStack_38;
        uVar1 = uStack_3c;
        uVar8 = uStack_44;
        uVar11 = uStack_48;
        uStack_58 = uStack_40;
        uStack_5c = uStack_2c;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02f149ac + 0x2f148dc));
        func_0x0152e3ec(uVar6,iVar5,**(undefined4 **)(_UNK_02f149b0 + 0x2f14900),0);
        iVar5 = iStack_50;
        if (iStack_50 == 0) {
          func_0x014388e4();
        }
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_80 = uStack_58;
        uStack_7c = uVar1;
        uStack_78 = uVar2;
        uStack_74 = uVar3;
        uStack_6c = uStack_5c;
        uStack_88 = uVar11;
        uStack_84 = uVar8;
        uStack_70 = uVar4;
        uStack_68 = uVar6;
        func_0x02b75870(iVar5,uStack_4c,uStack_54,1);
      }
      return;
    }
    iVar5 = func_0x029540a4(0x2d44,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x2f1476c;
    unaff_r4 = iVar5;
    unaff_r5 = param_2;
    unaff_r6 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_88;
  }
  else {
    iVar5 = func_0x029540a4(0x2d3e,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar7 = *(int *)(iVar5 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar7 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar7 = *(int *)(iVar5 + 8);
  uVar11 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = 3;
  if (iVar5 == 0) {
    uVar8 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x024f56d0(iVar7,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
  return;
}

