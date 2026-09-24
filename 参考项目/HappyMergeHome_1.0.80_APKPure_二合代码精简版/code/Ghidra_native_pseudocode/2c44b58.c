
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c54b58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined8 uVar21;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar6 = func_0x02953fd4(0x5f6f,0);
  if (iVar6 != 0) {
    iVar6 = func_0x029540a4(0x5f6f,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    iStack_20 = 0;
    func_0x024f56c0(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar9 = *(int *)(iVar6 + 8);
    uVar11 = *(undefined4 *)(iVar6 + 0xc);
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar7 = 2;
    if (iVar6 == 0) {
      uVar7 = 1;
    }
    func_0x024f56d0(iVar9,uVar11,&iStack_30,uVar7,0,0);
    return;
  }
  iVar6 = *(int *)(param_1 + 0xc0);
  if (iVar6 == 0) {
    return;
  }
  pcVar8 = (char *)(_UNK_02b94a58 + 0x2b93ab4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b94a5c + 0x2b93ac8),0,0);
    func_0x01438628(*(undefined4 *)(_UNK_02b94a60 + 0x2b93ad4));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a64 + 0x2b93ae0));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a68 + 0x2b93aec));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a6c + 0x2b93af8));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a70 + 0x2b93b04));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a74 + 0x2b93b10));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a78 + 0x2b93b1c));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a7c + 0x2b93b28));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a80 + 0x2b93b34));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a84 + 0x2b93b40));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a88 + 0x2b93b4c));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a8c + 0x2b93b58));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a90 + 0x2b93b64));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a94 + 0x2b93b70));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a98 + 0x2b93b7c));
    func_0x01438628(*(undefined4 *)(_UNK_02b94a9c + 0x2b93b88));
    func_0x01438628(*(undefined4 *)(_UNK_02b94aa0 + 0x2b93b94));
    func_0x01438628(*(undefined4 *)(_UNK_02b94aa4 + 0x2b93ba0));
    func_0x01438628(*(undefined4 *)(_UNK_02b94aa8 + 0x2b93bac));
    func_0x01438628(*(undefined4 *)(_UNK_02b94aac + 0x2b93bb8));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ab0 + 0x2b93bc4));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ab4 + 0x2b93bd0));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ab8 + 0x2b93bdc));
    func_0x01438628(*(undefined4 *)(_UNK_02b94abc + 0x2b93be8));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ac0 + 0x2b93bf4));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ac4 + 0x2b93c00));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ac8 + 0x2b93c0c));
    func_0x01438628(*(undefined4 *)(_UNK_02b94acc + 0x2b93c18));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ad0 + 0x2b93c24));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ad4 + 0x2b93c30));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ad8 + 0x2b93c3c));
    func_0x01438628(*(undefined4 *)(_UNK_02b94adc + 0x2b93c48));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ae0 + 0x2b93c54));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ae4 + 0x2b93c60));
    func_0x01438628(*(undefined4 *)(_UNK_02b94ae8 + 0x2b93c6c));
    func_0x01438628(*(undefined4 *)(_UNK_02b94aec + 0x2b93c78));
    func_0x01438628(*(undefined4 *)(_UNK_02b94af0 + 0x2b93c84));
    func_0x01438628(*(undefined4 *)(_UNK_02b94af4 + 0x2b93c90));
    func_0x01438628(*(undefined4 *)(_UNK_02b94af8 + 0x2b93c9c));
    func_0x01438628(*(undefined4 *)(_UNK_02b94afc + 0x2b93ca8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  iStack_38 = 0;
  iVar9 = func_0x02953fd4(0x2256,0);
  if (iVar9 != 0) {
    iVar9 = func_0x029540a4(0x2256,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x0286c1e8(iVar9,iVar6,0,0);
    return;
  }
  iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_02b94ce0 + 0x2b93d18));
  func_0x024eeca8(iVar9,0);
  iVar1 = func_0x02b94e20(iVar6);
  if (iVar1 == 0) {
    return;
  }
  piVar20 = *(int **)(_UNK_02b94d30 + 0x2b93d48);
  if (*(int *)(*piVar20 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar16 = *(undefined4 **)(_UNK_02b94d34 + 0x2b93d64);
  iVar1 = func_0x014e9518(*puVar16);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar11 = *puVar16;
  *(undefined1 *)(iVar1 + 0x20) = 1;
  iVar1 = func_0x014e9518(uVar11);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar10 = 0;
  iVar1 = FUN_02baf084(iVar1,0,0);
  puVar19 = *(undefined4 **)(_UNK_02b94d6c + 0x2b93dc0);
  puVar18 = *(undefined4 **)(_UNK_02b94d70 + 0x2b93dc8);
  while( true ) {
    if (*(int *)(*piVar20 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(*puVar16);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02bd7e48(iVar2,0,0);
    if (*(int *)(*piVar20 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(*puVar16);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (iVar2 <= iVar10) break;
    iVar2 = FUN_02bd7f00(iVar3,iVar10,0,0);
    if (iVar2 != 0) {
      uVar11 = *(undefined4 *)(iVar2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
        iVar3 = func_0x046c26fc(0,uVar11,*puVar19);
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar3 != 0) {
          iStack_28 = iVar2;
          func_0x014388e4();
          iVar3 = func_0x046c23f8(0,iVar2,**(undefined4 **)(_UNK_02b94d74 + 0x2b93edc));
          func_0x014388e4();
          goto LAB_02b93eec;
        }
        func_0x014388e4();
LAB_02b93f04:
        uVar11 = *puVar18;
        iVar3 = 1;
      }
      else {
        iVar3 = func_0x046c26fc(iVar1,uVar11,*puVar19);
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar3 == 0) goto LAB_02b93f04;
        iStack_28 = iVar2;
        iVar3 = func_0x046c23f8(iVar1,iVar2,**(undefined4 **)(_UNK_02b94d78 + 0x2b93e90));
LAB_02b93eec:
        uVar11 = *puVar18;
        iVar3 = iVar3 + 1;
      }
      func_0x046c2488(iVar1,iVar2,iVar3,uVar11);
    }
    iVar10 = iVar10 + 1;
  }
  iVar10 = FUN_02bad050(iVar3,0,0);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  iVar10 = *(int *)(iVar10 + 0x1c);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  func_0x0152da0c(&iStack_48,iVar10,**(undefined4 **)(_UNK_02b94d7c + 0x2b93f60));
  iStack_38 = iStack_48;
  uStack_34 = uStack_44;
  iStack_30 = iStack_40;
  iStack_2c = iStack_3c;
  puVar13 = *(undefined4 **)(_UNK_02b94d80 + 0x2b93f80);
  while (iVar2 = func_0x04878f14(&iStack_38,*puVar13), iVar10 = iStack_2c, iVar2 != 0) {
    if (iStack_2c != 0) {
      uVar11 = *(undefined4 *)(iStack_2c + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x046c26fc(iVar1,uVar11,*puVar19);
      iVar10 = *(int *)(iVar10 + 8);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046c2488(iVar1,iVar10,1,*puVar18);
      }
      else {
        iStack_28 = iVar10;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c23f8(iVar1,iVar10,**(undefined4 **)(_UNK_02b94d84 + 0x2b93fe4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046c2488(iVar1,iVar10,iVar2 + 1,*puVar18);
      }
    }
  }
  func_0x04878f10(&iStack_38,**(undefined4 **)(_UNK_02b94d88 + 0x2b94048));
  iVar10 = iVar6;
  if (*(int *)(*piVar20 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(*puVar16);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  piVar20 = *(int **)(_UNK_02b94d90 + 0x2b94090);
  iVar3 = *(int *)(*piVar20 + 0x74);
  *(undefined1 *)(iVar2 + 0x20) = 1;
  if (iVar3 == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02b94d94 + 0x2b940b0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x020e9710(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar2 + 0xa8);
  if ((iVar3 != 0) && (1 < *(int *)(iVar3 + 0xc))) {
    puVar16 = *(undefined4 **)(_UNK_02b94d98 + 0x2b94108);
    uVar11 = func_0x024f0530(iVar3,0,*puVar16);
    iVar3 = *(int *)(iVar2 + 0xa8);
    *(undefined4 *)(iVar6 + 0x44) = uVar11;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar11 = func_0x024f0530(iVar3,1,*puVar16);
    *(undefined4 *)(iVar6 + 0x48) = uVar11;
  }
  iVar3 = *(int *)(iVar2 + 0xac);
  if ((iVar3 != 0) && (1 < *(int *)(iVar3 + 0xc))) {
    puVar16 = *(undefined4 **)(_UNK_02b94d9c + 0x2b9415c);
    uVar11 = func_0x024f0530(iVar3,0,*puVar16);
    iVar3 = *(int *)(iVar2 + 0xac);
    *(undefined4 *)(iVar6 + 0x4c) = uVar11;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar11 = func_0x024f0530(iVar3,1,*puVar16);
    *(undefined4 *)(iVar6 + 0x50) = uVar11;
  }
  iStack_28 = *(int *)(iVar2 + 8);
  *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar2 + 0xb0);
  uVar11 = func_0x01524ffc(&iStack_28,0);
  uVar11 = func_0x014e9568(**(undefined4 **)(_UNK_02b94da0 + 0x2b941b8),uVar11,0);
  if (*(int *)(**(int **)(_UNK_02b94da4 + 0x2b941cc) + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x024eed10(uVar11,0);
  if (*(int *)(iVar2 + 0xb4) == 1) {
    iStack_28 = *(int *)(iVar2 + 8);
    uVar11 = func_0x01524ffc(&iStack_28,0);
    uVar11 = func_0x014e9568(**(undefined4 **)(_UNK_02b94da8 + 0x2b9421c),uVar11,0);
    piVar17 = *(int **)(_UNK_02b94dac + 0x2b94230);
    iVar3 = *piVar17;
    iVar2 = *(int *)(iVar3 + 0x1c);
    if (iVar2 == 0) {
      func_0x014909d8(iVar3);
      iVar2 = *(int *)(iVar3 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    piVar14 = *(int **)(_UNK_02b94db0 + 0x2b94290);
    iVar3 = *piVar14;
    uVar7 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4(iVar3);
    }
    func_0x026794a8(uVar11,uVar7,0);
    iVar2 = func_0x02b9565c(iVar6);
    if (iVar2 == 0) goto LAB_02b94384;
    uVar11 = func_0x01524ffc(iVar2 + 8,0);
    uVar11 = func_0x014e9568(**(undefined4 **)(_UNK_02b94db4 + 0x2b942f0),uVar11,0);
    iVar3 = *piVar17;
    iVar1 = *(int *)(iVar3 + 0x1c);
    if (iVar1 == 0) {
      func_0x014909d8(iVar3);
      iVar1 = *(int *)(iVar3 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    iVar3 = *piVar14;
    uVar7 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4(iVar3);
    }
    func_0x026794a8(uVar11,uVar7,0);
  }
  else {
LAB_02b94384:
    iVar2 = func_0x02b95a20(iVar6,iVar1);
    if ((iVar2 == 0) && (iVar2 = func_0x02b96384(iVar6,iVar1), iVar2 == 0)) {
      return;
    }
  }
  iVar1 = *(int *)(iVar6 + 0x38);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
  }
  iVar1 = *(int *)(iVar6 + 0x38);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  uVar12 = *(uint *)(iVar1 + 0xc);
  piVar17 = *(int **)(_UNK_02b94dbc + 0x2b94424);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar15 = *piVar17;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (uVar12 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar12 + 1;
    piVar17 = (int *)(iVar3 + uVar12 * 4 + 0x10);
    *piVar17 = iVar2;
    func_0x014385cc(piVar17,iVar2);
  }
  else {
    func_0x0152874c(iVar1,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(**(int **)(_UNK_02b94dc0 + 0x2b9447c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b94dc4 + 0x2b94498));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02b94dc8 + 0x2b944b8));
  *(undefined1 *)(iVar6 + 0x58) = 0;
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 0x100);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar11 = *(undefined4 *)(iVar3 + 0x18);
  uVar7 = *(undefined4 *)(iVar3 + 0x1c);
  if (*(int *)(**(int **)(_UNK_02b94dcc + 0x2b944f4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x02aedd4c(uVar11,uVar7,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x100);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02699404(iVar3,0,0);
    iVar3 = *(int *)(iVar1 + 0x100);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02699348(iVar3,0,0);
  }
  uVar12 = func_0x02b96cf8(iVar6);
  if (*(int *)(*piVar20 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x03b2c734(**(undefined4 **)(_UNK_02b94dd0 + 0x2b94594));
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar11 = func_0x020edfd8(iVar6,0);
  piVar14 = *(int **)(_UNK_02b94dd4 + 0x2b945c4);
  piVar17 = *(int **)(_UNK_02b94dd8 + 0x2b945d0);
  iVar6 = *piVar17;
  iVar3 = **(int **)(*piVar14 + 0x5c);
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar17;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar12 = uVar12 ^ 1;
  iVar6 = func_0x0203cc18(iVar3,uVar7,0);
  if (iVar6 == 0) {
    if (*(int *)(**(int **)(_UNK_02b94ddc + 0x2b94628) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02b94de0 + 0x2b94644));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02ca8b40(iVar6,uVar11,0);
    uVar12 = uVar4 & uVar12;
  }
  iVar6 = *piVar17;
  iVar3 = **(int **)(*piVar14 + 0x5c);
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar17;
  }
  uVar11 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x0203d724(iVar3,uVar11,0);
  iVar6 = iVar10;
  if (iVar3 == 0) {
    iVar6 = *piVar17;
    iVar3 = **(int **)(*piVar14 + 0x5c);
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar17;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0203d084(iVar3,uVar11,0);
    iVar6 = iVar10;
    if (iVar3 == 0) {
      iVar6 = *piVar17;
      iVar3 = **(int **)(*piVar14 + 0x5c);
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar17;
      }
      uVar11 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x10);
      iVar6 = iVar10;
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x0203cc18(iVar3,uVar11,0);
      uVar12 = uVar12 & uVar4;
    }
  }
  if (*(int *)(**(int **)(_UNK_02b94de4 + 0x2b94770) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02b94de8 + 0x2b9478c));
  uVar11 = *(undefined4 *)(iVar2 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar11 = func_0x029a6fa8(iVar3,uVar11,0);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar9 + 8) = uVar11;
  func_0x014385cc((undefined4 *)(iVar9 + 8),uVar11);
  if (*(int *)(*piVar20 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02b94dec + 0x2b947fc));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x020eeb20(iVar2,0);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) < 1)) goto LAB_02b94990;
  uVar11 = func_0x014388d4(**(undefined4 **)(_UNK_02b94df0 + 0x2b94840));
  func_0x03a062d0(uVar11,iVar9,**(undefined4 **)(_UNK_02b94df4 + 0x2b9485c),0);
  iVar9 = func_0x024f0618(iVar2,uVar11,**(undefined4 **)(_UNK_02b94df8 + 0x2b94874));
  piVar20 = (int *)(iVar10 + 0x5c);
  *piVar20 = iVar9;
  func_0x014385cc(piVar20,iVar9);
  if (*piVar20 == 0) {
    if (*(int *)(**(int **)(_UNK_02b94dfc + 0x2b948a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x0364a714(iVar2,0,**(undefined4 **)(_UNK_02b94e00 + 0x2b948c8));
    *piVar20 = iVar9;
    func_0x014385cc(piVar20,iVar9);
  }
  if (uVar12 != 0) {
    iVar9 = *(int *)(iVar1 + 0x100);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar2 = *piVar20;
    uVar11 = *(undefined4 *)(iVar9 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e67d4(uVar11,*(int *)(iVar2 + 0x1c) + 1);
    if (extraout_r1 != 0) goto LAB_02b94990;
    iVar9 = *(int *)(iVar1 + 0x100);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar2 = *piVar20;
    iVar9 = *(int *)(iVar9 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x20) < iVar9) goto LAB_02b94990;
    iVar9 = *(int *)(iVar1 + 0x100);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar2 = *piVar20;
    iVar9 = *(int *)(iVar9 + 0x14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x24) < iVar9) goto LAB_02b94990;
  }
  iVar9 = *(int *)(iVar10 + 0x38);
  *(undefined1 *)(iVar10 + 0x58) = 1;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar9 + 0xc);
  *(undefined4 *)(iVar9 + 0xc) = 0;
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  if (0 < iVar2) {
    func_0x01523bec(*(undefined4 *)(iVar9 + 8),0,iVar2,0);
  }
  iVar9 = *(int *)(iVar1 + 0x100);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iStack_28 = *(int *)(iVar9 + 0x10);
  func_0x02699348(iVar9,iStack_28 + 1,0);
  iVar9 = 0;
  puVar16 = *(undefined4 **)(_UNK_02b94e04 + 0x2b94b84);
  while( true ) {
    iVar2 = *piVar20;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x2c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0xc) <= iVar9) break;
    iVar2 = *(int *)(iVar10 + 0x5c);
    iVar3 = *(int *)(iVar10 + 0x38);
    iVar10 = iVar6;
    if (iVar2 == 0) {
      func_0x014388e4();
      iVar10 = iVar6;
    }
    iVar6 = *(int *)(iVar2 + 0x2c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar11 = func_0x024f0530(iVar6,iVar9,*puVar16);
    iVar6 = *piVar20;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x30);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x024f0530(iVar6,iVar9,*puVar16);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02b94e08 + 0x2b94c24));
    func_0x02ca3c70(uVar5,uVar11,uVar7,0,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar3 + 8);
    uVar12 = *(uint *)(iVar3 + 0xc);
    piVar17 = *(int **)(_UNK_02b94e0c + 0x2b94c74);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    iVar2 = *piVar17;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (uVar12 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar12 + 1;
      puVar18 = (undefined4 *)(iVar6 + uVar12 * 4 + 0x10);
      *puVar18 = uVar5;
      func_0x014385cc(puVar18,uVar5);
    }
    else {
      func_0x0152874c(iVar3,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
    }
    iVar9 = iVar9 + 1;
    iVar6 = iVar10;
  }
LAB_02b94990:
  iVar6 = iVar1;
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar1 + 0x100);
  if (*(int *)(**(int **)(_UNK_02b94e10 + 0x2b949ac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b94e14 + 0x2b949cc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar21 = func_0x026ffbe0(iVar1,0);
  uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
  uVar11 = uVar7;
  if (iVar9 == 0) {
    func_0x014388e4();
    uVar11 = extraout_r1_00;
  }
  func_0x026994c0(iVar9,uVar11,(int)uVar21,uVar7,0);
  iVar6 = *(int *)(iVar6 + 0x100);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iStack_28 = *(int *)(iVar6 + 8);
  func_0x026991d0(iVar6,iStack_28 + 1,0);
  func_0x02b96f70(iVar10,*(undefined1 *)(iVar10 + 0x58));
  return;
}

