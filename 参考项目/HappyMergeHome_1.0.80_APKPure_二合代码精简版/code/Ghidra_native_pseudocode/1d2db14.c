
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01d3db14(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar18 = (char *)(_UNK_01d3e558 + 0x1d3db30);
  if (*pcVar18 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3e55c + 0x1d3db44));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e560 + 0x1d3db50));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e564 + 0x1d3db5c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e568 + 0x1d3db68));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e56c + 0x1d3db74));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e570 + 0x1d3db80));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e574 + 0x1d3db8c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e578 + 0x1d3db98));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e57c + 0x1d3dba4));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e580 + 0x1d3dbb0));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e584 + 0x1d3dbbc));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e588 + 0x1d3dbc8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e58c + 0x1d3dbd4));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e590 + 0x1d3dbe0));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e594 + 0x1d3dbec));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e598 + 0x1d3dbf8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e59c + 0x1d3dc04));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5a0 + 0x1d3dc10));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5a4 + 0x1d3dc1c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5a8 + 0x1d3dc28));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5ac + 0x1d3dc34));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5b0 + 0x1d3dc40));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5b4 + 0x1d3dc4c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5b8 + 0x1d3dc58));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5bc + 0x1d3dc64));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5c0 + 0x1d3dc70));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5c4 + 0x1d3dc7c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5c8 + 0x1d3dc88));
    func_0x01438628(*(undefined4 *)(_UNK_01d3e5cc + 0x1d3dc94));
    *pcVar18 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  iVar7 = func_0x02953fd4(0xb3ad,0);
  if (iVar7 == 0) {
    iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01d3e5d0 + 0x1d3dd04));
    func_0x024f0510(iVar7,**(undefined4 **)(_UNK_01d3e5d4 + 0x1d3dd18));
    iVar9 = FUN_01d3a9c0(param_1);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar9 + 0x44);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x024f10dc(iVar9,**(undefined4 **)(_UNK_01d3e5d8 + 0x1d3dd54));
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x024f10ec(&uStack_68,iVar9,**(undefined4 **)(_UNK_01d3e5dc + 0x1d3dd90));
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    puVar20 = *(undefined4 **)(_UNK_01d3e5e0 + 0x1d3ddac);
    while (iVar9 = func_0x0151455c(&uStack_38,*puVar20), uVar8 = uStack_2c, iVar9 != 0) {
      iVar9 = FUN_01d3c24c(param_1,uStack_2c);
      iVar10 = FUN_01d3a9c0(param_1);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar10 + 0x30);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = func_0x024f0540(iVar10,uVar8,**(undefined4 **)(_UNK_01d3e5e4 + 0x1d3de04));
      if (iVar10 != 0) {
        iVar9 = FUN_01d3c24c(param_1,uVar8);
        iVar10 = FUN_01d3a9c0(param_1);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = *(int *)(iVar10 + 0x30);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x03b70fac(iVar10,uVar8,**(undefined4 **)(_UNK_01d3e5e8 + 0x1d3de5c));
        iVar9 = iVar9 - iVar10;
      }
      iVar10 = FUN_01d3a9c0(param_1);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar10 + 0x44);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x03b70fac(iVar10,uVar8,**(undefined4 **)(_UNK_01d3e5ec + 0x1d3dea0));
      bVar21 = SBORROW4(iVar9,1);
      iVar10 = iVar9 + -1;
      if (0 < iVar9) {
        bVar21 = SBORROW4(iVar11,3);
        iVar10 = iVar11 + -3;
      }
      if (iVar10 < 0 == bVar21) {
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar7 + 8);
        uVar19 = *(uint *)(iVar7 + 0xc);
        piVar17 = *(int **)(_UNK_01d3e5f0 + 0x1d3dee4);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        iVar10 = *piVar17;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (uVar19 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar7 + 0xc) = uVar19 + 1;
          *(undefined4 *)(iVar9 + uVar19 * 4 + 0x10) = uVar8;
        }
        else {
          func_0x024f0520(iVar7,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_01d3e5f4 + 0x1d3df38));
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar7 + 0xc) < 1) {
      uVar8 = 0;
    }
    else {
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01d3e600 + 0x1d3df64));
      func_0x024eed9c(iVar9,**(undefined4 **)(_UNK_01d3e604 + 0x1d3df78));
      if (0 < *(int *)(iVar7 + 0xc)) {
        iVar10 = 0;
        puVar20 = *(undefined4 **)(_UNK_01d3e608 + 0x1d3df9c);
        do {
          iVar11 = FUN_01d3a9c0(param_1);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar11 = *(int *)(iVar11 + 0x44);
          uVar8 = func_0x024f0530(iVar7,iVar10,*puVar20);
          if (iVar11 == 0) {
            func_0x014388e4();
            iVar12 = func_0x03b70fac(0,uVar8,**(undefined4 **)(_UNK_01d3e610 + 0x1d3e008));
            func_0x014388e4();
          }
          else {
            iVar12 = func_0x03b70fac(iVar11,uVar8,**(undefined4 **)(_UNK_01d3e60c + 0x1d3dfe4));
          }
          func_0x03b70fe4(iVar11,uVar8,iVar12 + -3,**(undefined4 **)(_UNK_01d3e614 + 0x1d3e02c));
          uVar8 = func_0x024f0530(iVar7,iVar10,*puVar20);
          uVar8 = func_0x01d3e660(param_1,uVar8);
          uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_01d3e618 + 0x1d3e064));
          func_0x02ca3c70(uVar13,uVar8,1,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar11 = *(int *)(iVar9 + 8);
          uVar19 = *(uint *)(iVar9 + 0xc);
          piVar17 = *(int **)(_UNK_01d3e61c + 0x1d3e0b4);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar12 = *piVar17;
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          if (uVar19 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar19 + 1;
            puVar14 = (undefined4 *)(iVar11 + uVar19 * 4 + 0x10);
            *puVar14 = uVar13;
            func_0x014385cc(puVar14,uVar13);
          }
          else {
            func_0x0152874c(iVar9,uVar13,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
          iVar11 = FUN_01d3a9c0(param_1);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar11 = *(int *)(iVar11 + 0x30);
          uVar8 = func_0x024f0530(iVar7,iVar10,*puVar20);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar11 = func_0x024f0540(iVar11,uVar8,**(undefined4 **)(_UNK_01d3e620 + 0x1d3e154));
          iVar12 = FUN_01d3a9c0(param_1);
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          iVar12 = *(int *)(iVar12 + 0x30);
          uVar8 = func_0x024f0530(iVar7,iVar10,*puVar20);
          if (iVar12 == 0) {
            func_0x014388e4();
            if (iVar11 == 0) goto LAB_01d3e20c;
            iVar11 = func_0x03b70fac(0,uVar8,**(undefined4 **)(_UNK_01d3e62c + 0x1d3e1dc));
            func_0x014388e4();
LAB_01d3e1ec:
            func_0x03b70fe4(iVar12,uVar8,iVar11 + 1,**(undefined4 **)(_UNK_01d3e630 + 0x1d3e200));
          }
          else {
            if (iVar11 != 0) {
              iVar11 = func_0x03b70fac(iVar12,uVar8,**(undefined4 **)(_UNK_01d3e628 + 0x1d3e1b0));
              goto LAB_01d3e1ec;
            }
LAB_01d3e20c:
            func_0x03b70cd0(iVar12,uVar8,1,**(undefined4 **)(_UNK_01d3e624 + 0x1d3e220));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar7 + 0xc));
      }
      if (*(int *)(**(int **)(_UNK_01d3e634 + 0x1d3e244) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x020254a4(iVar7,iVar9,0x55,0);
      func_0x02028d38(&uStack_58,0x9c,0);
      if (*(int *)(**(int **)(_UNK_01d3e638 + 0x1d3e29c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x03b2c734(**(undefined4 **)(_UNK_01d3e63c + 0x1d3e2b8));
      if (*(int *)(**(int **)(_UNK_01d3e640 + 0x1d3e2cc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_01d3e644 + 0x1d3e2e8));
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uVar6 = uStack_3c;
      uVar5 = uStack_40;
      uVar4 = uStack_44;
      uVar3 = uStack_48;
      uVar2 = uStack_4c;
      uVar1 = uStack_50;
      uVar13 = uStack_54;
      uVar8 = uStack_58;
      uVar15 = *(undefined4 *)(iVar10 + 0x10);
      uVar16 = func_0x014388d4(**(undefined4 **)(_UNK_01d3e648 + 0x1d3e344));
      func_0x0152e3ec(uVar16,param_1,**(undefined4 **)(_UNK_01d3e64c + 0x1d3e36c),0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02b75870(iVar7,iVar9,uVar15,1,uVar8,uVar13,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar16,0
                      ,0);
      if (*(int *)(**(int **)(_UNK_01d3e650 + 0x1d3e3e0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01d3e654 + 0x1d3e3fc));
      iVar10 = **(int **)(_UNK_01d3e658 + 0x1d3e410);
      iVar9 = *(int *)(iVar10 + 0x1c);
      if (iVar9 == 0) {
        func_0x014909d8(iVar10);
        iVar9 = *(int *)(iVar10 + 0x1c);
      }
      iVar9 = *(int *)(iVar9 + 8);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x0149097c();
      }
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x0149097c();
      }
      uVar8 = **(undefined4 **)(iVar9 + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar7,**(undefined4 **)(_UNK_01d3e65c + 0x1d3e48c),uVar8,0);
      uVar8 = 1;
    }
  }
  else {
    iVar7 = func_0x029540a4(0xb3ad,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x02869630(iVar7,param_1,0);
  }
  return uVar8;
}

