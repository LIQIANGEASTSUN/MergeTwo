/* Ghidra 12.1.2 native pseudocode; RVA 0x6A44800; Merger.MergeBoard.View.Items.MergeBoardItemBehavioursHandler.InitializeBehaviourPools; status ok */


/* WARNING: Possible PIC construction at 0x06b30878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b30de8) */
/* WARNING: Removing unreachable block (ram,0x06b30dc8) */
/* WARNING: Removing unreachable block (ram,0x06b30da8) */
/* WARNING: Removing unreachable block (ram,0x06b30d88) */
/* WARNING: Removing unreachable block (ram,0x06b30d68) */
/* WARNING: Removing unreachable block (ram,0x06b3087c) */
/* WARNING: Removing unreachable block (ram,0x06b308d4) */
/* WARNING: Removing unreachable block (ram,0x06b308dc) */
/* WARNING: Removing unreachable block (ram,0x06b308f4) */
/* WARNING: Removing unreachable block (ram,0x06b308fc) */
/* WARNING: Removing unreachable block (ram,0x06b309f0) */
/* WARNING: Removing unreachable block (ram,0x06b30908) */
/* WARNING: Removing unreachable block (ram,0x06b30914) */
/* WARNING: Removing unreachable block (ram,0x06b30a00) */
/* WARNING: Removing unreachable block (ram,0x06b30a10) */
/* WARNING: Removing unreachable block (ram,0x06b30a18) */
/* WARNING: Removing unreachable block (ram,0x06b30a30) */
/* WARNING: Removing unreachable block (ram,0x06b30a38) */
/* WARNING: Removing unreachable block (ram,0x06b30a60) */
/* WARNING: Removing unreachable block (ram,0x06b30a44) */
/* WARNING: Removing unreachable block (ram,0x06b30a50) */
/* WARNING: Removing unreachable block (ram,0x06b30a6c) */
/* WARNING: Removing unreachable block (ram,0x06b30a8c) */
/* WARNING: Removing unreachable block (ram,0x06b30a94) */
/* WARNING: Removing unreachable block (ram,0x06b30abc) */
/* WARNING: Removing unreachable block (ram,0x06b30aa0) */
/* WARNING: Removing unreachable block (ram,0x06b30aac) */
/* WARNING: Removing unreachable block (ram,0x06b30ac8) */
/* WARNING: Removing unreachable block (ram,0x06b30ad8) */
/* WARNING: Removing unreachable block (ram,0x06b30af4) */
/* WARNING: Removing unreachable block (ram,0x06b30afc) */
/* WARNING: Removing unreachable block (ram,0x06b30b24) */
/* WARNING: Removing unreachable block (ram,0x06b30b08) */
/* WARNING: Removing unreachable block (ram,0x06b30b14) */
/* WARNING: Removing unreachable block (ram,0x06b30b34) */
/* WARNING: Removing unreachable block (ram,0x06b30b4c) */
/* WARNING: Removing unreachable block (ram,0x06b30b60) */
/* WARNING: Removing unreachable block (ram,0x06b30b68) */
/* WARNING: Removing unreachable block (ram,0x06b30c4c) */
/* WARNING: Removing unreachable block (ram,0x06b30b74) */
/* WARNING: Removing unreachable block (ram,0x06b30b80) */
/* WARNING: Removing unreachable block (ram,0x06b30880) */
/* WARNING: Removing unreachable block (ram,0x06b30888) */
/* WARNING: Removing unreachable block (ram,0x06b308a4) */
/* WARNING: Removing unreachable block (ram,0x06b308ac) */
/* WARNING: Removing unreachable block (ram,0x06b30974) */
/* WARNING: Removing unreachable block (ram,0x06b308b8) */
/* WARNING: Removing unreachable block (ram,0x06b308c4) */
/* WARNING: Removing unreachable block (ram,0x06b30984) */
/* WARNING: Removing unreachable block (ram,0x06b309cc) */
/* WARNING: Removing unreachable block (ram,0x06b309d4) */
/* WARNING: Removing unreachable block (ram,0x06b309e0) */
/* WARNING: Removing unreachable block (ram,0x06b309ec) */
/* WARNING: Removing unreachable block (ram,0x03cd9c04) */
/* WARNING: Removing unreachable block (ram,0x03cd9c20) */
/* WARNING: Removing unreachable block (ram,0x03cd9c28) */
/* WARNING: Removing unreachable block (ram,0x03cd9c34) */

ulong Merger_MergeBoard_View_Items_MergeBoardItemBehavioursHandler__InitializeBehaviourPools
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long *extraout_x1;
  long *extraout_x1_00;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  int iVar23;
  undefined *puVar24;
  long *unaff_x23;
  undefined *puVar25;
  undefined *unaff_x24;
  undefined *puVar26;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar27;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 auStack_180 [2];
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar6 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2a558 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fa50);
    func_0x03280a18(PTR_DAT_0774fc08);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0782fa48);
    func_0x03280a18(PTR_DAT_078094b0);
    bRam0000000007e2a558 = 1;
  }
  puVar18 = (undefined8 *)(param_1 + 0x38);
  uVar19 = *puVar18;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar10 = func_0x06fe04ec(uVar19,0,0);
  puVar6 = PTR_DAT_078094b0;
  if ((uVar10 & 1) != 0) {
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774fc08);
    func_0x06fdf714(lVar11,*(undefined8 *)puVar6,0);
    if (lVar11 == 0) goto LAB_06b44950;
    lVar12 = func_0x06fdf130(lVar11,0);
    uVar19 = func_0x06fdbe94(param_1,0);
    if (lVar12 == 0) goto LAB_06b44950;
    func_0x06feb51c(lVar12,uVar19,0);
    uVar19 = func_0x06fdf130(lVar11,0);
    *puVar18 = uVar19;
    func_0x032809c4(puVar18,uVar19);
  }
  lVar12 = *(long *)(param_1 + 0x28);
  plVar20 = *(long **)(param_1 + 0x38);
  lVar11 = func_0x06b44698(param_1);
  if ((lVar11 == 0) ||
     (plVar13 = (long *)func_0x04fe2bac(lVar11,*(undefined8 *)PTR_DAT_0782fa50), lVar12 == 0)) {
LAB_06b44950:
    uVar10 = func_0x03280cac();
    puVar6 = PTR_DAT_0782fa58;
    if ((bRam0000000007e2a559 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782fa58);
      bRam0000000007e2a559 = 1;
    }
    puVar24 = PTR_DAT_0774e4e0;
    uVar19 = *(undefined8 *)puVar6;
    if ((bRam0000000007e2fb28 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0);
      bRam0000000007e2fb28 = 1;
    }
    if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    return uVar10;
  }
  plVar22 = (long *)0x7e2a000;
  plVar15 = plVar13;
  if ((bRam0000000007e2a486 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c7930);
    func_0x03280a18(PTR_DAT_0777dc48);
    func_0x03280a18(PTR_DAT_078067e0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782f358);
    func_0x03280a18(PTR_DAT_0782f360);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e2a486 = 1;
  }
  plVar7 = (long *)0x0;
  puVar24 = unaff_x26;
  puVar6 = unaff_x27;
  puVar25 = unaff_x28;
  if (plVar13 == (long *)0x0) {
LAB_06b2fe70:
    func_0x03280cac();
    unaff_x26 = puVar24;
    unaff_x27 = puVar6;
    unaff_x28 = puVar25;
  }
  else {
    lVar11 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0782f358) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b2fbc0;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    plVar15 = (long *)0x0;
    puVar18 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06b2fbc0:
    plVar7 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
    puVar25 = PTR_DAT_0782f360;
    puVar9 = PTR_DAT_078067e0;
    puVar24 = PTR_DAT_077c7930;
    puVar6 = PTR_DAT_0774e8e0;
    if (plVar7 != (long *)0x0) {
LAB_06b2fbf4:
      lVar11 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
            puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b2fc40;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b2fc40:
      uVar10 = (*(code *)*puVar18)(plVar7,puVar18[1]);
      if ((uVar10 & 1) == 0) {
        lVar12 = 0;
        goto LAB_06b2fdd4;
      }
      lVar11 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar25) {
            puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b2fc9c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b2fc9c:
      unaff_x23 = (long *)(*(code *)*puVar18)(plVar7,puVar18[1]);
      if (unaff_x23 != (long *)0x0) {
        if ((int)unaff_x23[5] == 1) {
          unaff_x24 = (undefined *)unaff_x23[4];
          plVar22 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777dc48);
          func_0x06955db4(plVar22,0);
          if (unaff_x24 == (undefined *)0x0) goto LAB_06b2fe60;
          unaff_x25 = *(undefined **)(lVar12 + 0x90);
          uVar19 = func_0x06fe368c(unaff_x24,0);
          plVar15 = (long *)0x0;
          lVar11 = func_0x055ee6c0(unaff_x25,uVar19);
          if (plVar22 == (long *)0x0) goto LAB_06b2fe64;
          plVar22[2] = lVar11;
          func_0x032809c4();
          plVar22[8] = (long)unaff_x24;
          func_0x032809c4(plVar22 + 8,unaff_x24);
          *(undefined1 *)(plVar22 + 5) = 1;
          uVar1 = *(undefined4 *)((long)unaff_x23 + 0x2c);
          *(undefined4 *)((long)plVar22 + 0x2c) = uVar1;
          *(undefined4 *)(plVar22 + 6) = uVar1;
          unaff_x23 = *(long **)(lVar12 + 0x68);
          if (unaff_x23 == (long *)0x0) goto LAB_06b2fe5c;
          lVar11 = *unaff_x23;
          uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
                puVar18 = (undefined8 *)(lVar11 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_06b2fd8c;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)puVar9,3);
LAB_06b2fd8c:
          uVar19 = (*(code *)*puVar18)(unaff_x23,puVar18[1]);
          param_4 = 0;
          plVar15 = plVar20;
          lVar11 = func_0x06a4bc78(lVar12,uVar19,plVar20,0,0);
          if (lVar11 == 0) goto LAB_06b2fe68;
          lVar11 = func_0x03dc9518(lVar11,*(undefined8 *)puVar24);
          if (lVar11 == 0) goto LAB_06b2fe6c;
          plVar15 = (long *)0x0;
          func_0x06955dbc(lVar11,plVar22);
        }
        goto LAB_06b2fbf4;
      }
      func_0x03280cac();
LAB_06b2fe5c:
      func_0x03280cac();
LAB_06b2fe60:
      func_0x03280cac();
LAB_06b2fe64:
      func_0x03280cac();
LAB_06b2fe68:
      func_0x03280cac();
LAB_06b2fe6c:
      func_0x03280cac();
      goto LAB_06b2fe70;
    }
  }
  puVar25 = unaff_x28;
  puVar6 = unaff_x27;
  puVar24 = unaff_x26;
  func_0x03280cac();
  while( true ) {
    auVar28 = func_0x03280ca4(lVar12);
    uVar19 = auVar28._0_8_;
    if (auVar28._8_4_ != 1) break;
    plVar20 = (long *)func_0x072ce910(uVar19);
    lVar12 = *plVar20;
    uVar10 = func_0x072ce920();
LAB_06b2fdd4:
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b2fe2c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b2fe2c:
      uVar10 = (*(code *)*puVar18)(plVar7,puVar18[1]);
    }
    if (lVar12 == 0) {
      return uVar10;
    }
  }
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b2ff44;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    plVar15 = (long *)0x0;
    puVar18 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b2ff44:
    (*(code *)*puVar18)(plVar7,puVar18[1]);
  }
  func_0x03365958(uVar19);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  uStack_b0 = 0x6b2ff68;
  uStack_78 = 0;
  lVar11 = 0x7e2a000;
  puStack_a8 = puVar6;
  puStack_a0 = puVar24;
  puStack_98 = unaff_x25;
  puStack_90 = unaff_x24;
  plStack_88 = unaff_x23;
  plStack_80 = plVar22;
  uStack_70 = uVar19;
  plStack_68 = plVar7;
  if ((bRam0000000007e2a487 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078091e0);
    func_0x03280a18(PTR_DAT_078091e8);
    func_0x03280a18(PTR_DAT_078091f0);
    func_0x03280a18(PTR_DAT_078091f8);
    func_0x03280a18(PTR_DAT_077dac98);
    func_0x03280a18(PTR_DAT_077daca0);
    func_0x03280a18(PTR_DAT_077daca8);
    func_0x03280a18(PTR_DAT_078067e0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07809200);
    func_0x03280a18(PTR_DAT_07809208);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07809210);
    func_0x03280a18(PTR_DAT_07809218);
    func_0x03280a18(PTR_DAT_0782f368);
    func_0x03280a18(PTR_DAT_0782f370);
    func_0x03280a18(PTR_DAT_0782f378);
    bRam0000000007e2a487 = 1;
  }
  puVar9 = PTR_DAT_0782f378;
  if (auVar31._8_8_ == 0) {
LAB_06b30184:
    puVar9 = PTR_DAT_078091e8;
    uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078091f8);
    func_0x04fe1fa4(uVar10,*(undefined8 *)puVar9);
  }
  else {
    lVar12 = *(long *)PTR_DAT_0782f378;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar12 = *(long *)puVar9;
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar11 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar12 = *(long *)puVar9;
      }
      uVar19 = **(undefined8 **)(lVar12 + 0xb8);
      lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077daca0);
      func_0x053569b8(lVar11,uVar19,*(undefined8 *)PTR_DAT_0782f368,0);
      plVar20 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
      *plVar20 = lVar11;
      func_0x032809c4(plVar20,lVar11);
      lVar12 = *(long *)puVar9;
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar12 = *(long *)puVar9;
    }
    unaff_x25 = PTR_DAT_077dac98;
    plVar22 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (plVar22 == (long *)0x0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar12 = *(long *)puVar9;
      }
      unaff_x23 = (long *)**(undefined8 **)(lVar12 + 0xb8);
      plVar22 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077daca8);
      func_0x053569b8(plVar22,unaff_x23,*(undefined8 *)PTR_DAT_0782f370,0);
      puVar18 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
      *puVar18 = plVar22;
      func_0x032809c4(puVar18,plVar22);
    }
    param_4 = *(ulong *)unaff_x25;
    plVar15 = plVar22;
    uVar10 = func_0x03d5c100(auVar31._8_8_,lVar11);
    unaff_x24 = puVar9;
    if (uVar10 == 0) goto LAB_06b30184;
  }
  auVar30._8_8_ = plVar22;
  auVar30._0_8_ = lVar11;
  plVar20 = *(long **)(auVar31._0_8_ + 0x68);
  puVar9 = unaff_x24;
  puVar26 = unaff_x25;
  puVar14 = puVar24;
  puVar27 = puVar6;
  if (plVar20 == (long *)0x0) {
LAB_06b3041c:
    func_0x03280cac();
    unaff_x24 = puVar9;
    unaff_x25 = puVar26;
    puVar24 = puVar14;
    puVar6 = puVar27;
  }
  else {
    lVar11 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_078067e0) {
          puVar18 = (undefined8 *)(lVar11 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_06b30208;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    plVar15 = (long *)0x1;
    puVar18 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b30208:
    plVar13 = (long *)(*(code *)*puVar18)(plVar20,puVar18[1]);
    if (plVar13 == (long *)0x0) goto LAB_06b3041c;
    lVar11 = *plVar13;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07809200) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b30270;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    plVar15 = (long *)0x0;
    puVar18 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06b30270:
    unaff_x23 = (long *)PTR_DAT_0774e8c8;
    plVar20 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
    puVar26 = PTR_DAT_07809208;
    puVar27 = PTR_DAT_078091f0;
    puVar14 = PTR_DAT_078091e0;
    puVar9 = PTR_DAT_0774e8e0;
    if (plVar20 != (long *)0x0) {
LAB_06b302ac:
      plVar13 = auVar30._8_8_;
      lVar11 = *plVar20;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
            puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b302f8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b302f8:
      uVar16 = (*(code *)*puVar18)(plVar20,puVar18[1]);
      if ((uVar16 & 1) == 0) {
        lVar11 = 0;
        goto LAB_06b3039c;
      }
      lVar11 = *plVar20;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar26) {
            puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b30354;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b30354:
      auVar31 = (*(code *)*puVar18)(plVar20,puVar18[1]);
      plVar13 = auVar31._8_8_;
      if (uVar10 != 0) {
        plVar15 = *(long **)puVar14;
        uVar16 = func_0x04fe2f70(uVar10,auVar31._0_8_);
        auVar30 = auVar31;
        if ((uVar16 & 1) == 0) {
          param_4 = *(ulong *)puVar27;
          func_0x04fe2d68(uVar10,auVar31._0_8_);
          plVar15 = plVar13;
        }
        goto LAB_06b302ac;
      }
      func_0x03280cac();
      goto LAB_06b3041c;
    }
  }
  puVar27 = puVar6;
  puVar14 = puVar24;
  puVar26 = unaff_x25;
  puVar9 = unaff_x24;
  func_0x03280cac();
  while( true ) {
    plVar13 = auVar30._8_8_;
    auVar28 = func_0x03280ca4(auVar30._0_8_);
    uVar19 = auVar28._0_8_;
    if (auVar28._8_4_ != 1) break;
    plVar22 = (long *)func_0x072ce910();
    lVar11 = *plVar22;
    func_0x072ce920();
LAB_06b3039c:
    auVar30._8_8_ = plVar13;
    auVar30._0_8_ = lVar11;
    if (plVar20 != (long *)0x0) {
      lVar12 = *plVar20;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x23) {
            puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b303ec;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b303ec:
      (*(code *)*puVar18)(plVar20,puVar18[1]);
    }
    if (lVar11 == 0) {
      return uVar10;
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar11 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x23) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b304b8;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    plVar15 = (long *)0x0;
    puVar18 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b304b8:
    (*(code *)*puVar18)(plVar20,puVar18[1]);
  }
  func_0x03365958(uVar19);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  lVar11 = auVar31._0_8_;
  puVar5 = &uStack_120;
  uStack_100 = 0x6b304dc;
  uStack_c8 = 0;
  plVar22 = (long *)0x7e2a000;
  puStack_f8 = puVar27;
  puStack_f0 = puVar14;
  puStack_e8 = puVar26;
  puStack_e0 = puVar9;
  plStack_d8 = unaff_x23;
  plStack_d0 = plVar13;
  plStack_c0 = plVar20;
  uStack_b8 = uVar19;
  if ((bRam0000000007e2a489 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db760);
    func_0x03280a18(PTR_DAT_077dc8e8);
    func_0x03280a18(PTR_DAT_0780dd80);
    func_0x03280a18(PTR_DAT_07809600);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07772268);
    func_0x03280a18(PTR_DAT_07774930);
    func_0x03280a18(PTR_DAT_0777a750);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_0774e5d8);
    func_0x03280a18(PTR_DAT_077ec328);
    bRam0000000007e2a489 = 1;
  }
  puVar6 = PTR_DAT_077c1d88;
  uStack_110 = 0;
  lStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  plVar20 = (long *)0x0;
  if ((auVar31._8_8_ != 0) && (plVar20 = *(long **)(auVar31._8_8_ + 0x30), plVar20 != (long *)0x0))
  {
    lVar12 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar18 = (undefined8 *)(lVar12 + (long)(*piVar17 + 0x6d) * 0x10 + 0x138);
          goto LAB_06b30610;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    plVar15 = (long *)0x6d;
    puVar18 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b30610:
    plVar7 = (long *)(*(code *)*puVar18)(plVar20,puVar18[1]);
    puVar24 = PTR_DAT_07809600;
    puVar26 = puVar6;
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      plVar13 = *(long **)(lVar11 + 0x70);
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07809600) {
            puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b3067c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b3067c:
      plVar8 = (long *)(*(code *)*puVar18)(plVar7,puVar18[1]);
      plVar22 = plVar7;
      puVar14 = puVar24;
      if (plVar13 != (long *)0x0) {
        lVar12 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar18 = (undefined8 *)(lVar12 + (long)(*piVar17 + 9) * 0x10 + 0x138);
              goto LAB_06b306e8;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777a498,9);
LAB_06b306e8:
        plVar15 = (long *)puVar18[1];
        plVar7 = (long *)(*(code *)*puVar18)(plVar13,plVar8);
        puVar2 = PTR_DAT_077db760;
        puVar24 = PTR_DAT_0777e548;
        unaff_x23 = plVar8;
        if (plVar7 != (long *)0x0) {
          lVar12 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e548) {
                puVar18 = (undefined8 *)(lVar12 + (long)(*piVar17 + 0x21) * 0x10 + 0x138);
                goto LAB_06b30760;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777e548,0x21);
LAB_06b30760:
          puVar9 = (undefined *)(*(code *)*puVar18)(plVar7,puVar18[1]);
          unaff_x23 = (long *)func_0x03280ca0(*(undefined8 *)puVar2);
          plVar15 = (long *)0x0;
          func_0x0610f958(unaff_x23,puVar9);
          if ((unaff_x23 == (long *)0x0) || ((char)unaff_x23[2] == '\0')) {
LAB_06b307b4:
            lVar12 = *plVar7;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar24) {
                  puVar18 = (undefined8 *)(lVar12 + (long)(*piVar17 + 5) * 0x10 + 0x138);
                  goto LAB_06b30804;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar24,5);
LAB_06b30804:
            lVar12 = (*(code *)*puVar18)(plVar7,puVar18[1]);
            if ((lVar12 == 0) || (plVar13 = *(long **)(lVar12 + 0x20), plVar13 == (long *)0x0)) {
              plVar7 = *(long **)PTR_DAT_077dc8e8;
              lVar12 = plVar7[7];
              if (lVar12 == 0) {
                func_0x03256878(plVar7);
                lVar12 = plVar7[7];
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = func_0x0325681c();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar12 = *(long *)(plVar7[7] + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = func_0x0325681c();
              }
              plVar13 = (long *)**(long **)(lVar12 + 0xb8);
            }
            plVar15 = &lStack_108;
            uVar19 = 0x6b3087c;
            lVar12 = lVar11;
            goto SUB_06b30e14;
          }
          plVar13 = plVar7;
          puVar27 = puVar24;
          if (unaff_x23[3] != 0) {
            unaff_x23 = *(long **)(unaff_x23[3] + 0x10);
            uVar10 = func_0x055fde0c(unaff_x23,0);
            if ((uVar10 & 1) != 0) goto LAB_06b307b4;
            plVar7 = *(long **)(lVar11 + 0x78);
            lVar11 = 0;
            if (plVar7 != (long *)0x0) {
              lVar11 = *plVar7;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07774930) {
                    puVar18 = (undefined8 *)(lVar11 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_06b30b98;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07774930,2);
LAB_06b30b98:
              uStack_118 = (*(code *)*puVar18)(plVar7,unaff_x23,1,0,puVar18[1]);
              uVar19 = func_0x0558dab4(&uStack_118,*(undefined8 *)PTR_DAT_077ec328,0);
              lVar11 = *plVar20;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                    puVar18 = (undefined8 *)(lVar11 + (long)(*piVar17 + 0x25) * 0x10 + 0x138);
                    goto LAB_06b30c20;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar6,0x25);
LAB_06b30c20:
              uVar10 = (*(code *)*puVar18)(plVar20,uVar19,puVar18[1]);
              return uVar10;
            }
          }
        }
      }
    }
  }
  plVar7 = plVar13;
  func_0x03280cac();
  puVar5 = auStack_180;
  puVar4 = auStack_180;
  auStack_180[0] = 0x6b30c5c;
  lVar12 = 0x7e2a000;
  puStack_170 = puVar25;
  puStack_168 = puVar27;
  puStack_160 = puVar14;
  puStack_158 = puVar26;
  puStack_150 = puVar9;
  plStack_148 = unaff_x23;
  plStack_140 = plVar7;
  plStack_138 = plVar22;
  lStack_130 = lVar11;
  plStack_128 = plVar20;
  if ((bRam0000000007e2a488 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f380);
    func_0x03280a18(PTR_DAT_0782f388);
    func_0x03280a18(PTR_DAT_0782f390);
    func_0x03280a18(PTR_DAT_0782f398);
    func_0x03280a18(PTR_DAT_0782f3a0);
    func_0x03280a18(PTR_DAT_0782f3a8);
    func_0x03280a18(PTR_DAT_0782f3b0);
    func_0x03280a18(PTR_DAT_0782f3b8);
    func_0x03280a18(PTR_DAT_0782f3c0);
    func_0x03280a18(PTR_DAT_0782f3c8);
    bRam0000000007e2a488 = 1;
  }
  if (extraout_x1 != (long *)0x0) {
    plVar15 = *(long **)PTR_DAT_0782f398;
    uVar10 = 0;
    uVar19 = 0x6b30d68;
    plVar13 = extraout_x1;
    plVar20 = extraout_x1;
    puVar6 = PTR_DAT_0782f3a0;
    puVar9 = PTR_DAT_0782f3a8;
    puVar14 = PTR_DAT_0782f3b0;
    puVar24 = PTR_DAT_0782f3c8;
    puVar25 = PTR_DAT_0782f3c0;
    do {
      puVar3 = (undefined1 *)((long)puVar4 + -0x40);
      *(undefined8 *)((long)puVar4 + -0x40) = uVar19;
      *(undefined **)((long)puVar4 + -0x30) = puVar25;
      *(undefined **)((long)puVar4 + -0x28) = puVar24;
      *(undefined **)((long)puVar4 + -0x20) = puVar14;
      *(undefined **)((long)puVar4 + -0x18) = puVar9;
      *(undefined **)((long)puVar4 + -0x10) = puVar6;
      *(long **)((long)puVar4 + -8) = plVar20;
      plVar22 = (long *)plVar15[7];
      plVar20 = plVar15;
      if (plVar22 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_0776dcd8);
        func_0x03280a18(PTR_DAT_07779718);
        func_0x03280a18(PTR_DAT_07779720);
        func_0x03280a18(PTR_DAT_0774e558);
        func_0x03280a18(PTR_DAT_07779728);
        func_0x03280a18(PTR_DAT_07779730);
        func_0x03280a18(PTR_DAT_07779738);
        func_0x03280a18(PTR_DAT_077503b8);
        plVar22 = (long *)plVar15[7];
        if (plVar22 == (long *)0x0) {
          func_0x03256878(plVar15);
          plVar22 = (long *)plVar15[7];
        }
      }
      puVar25 = PTR_DAT_0774e558;
      *(undefined8 *)((long)puVar4 + -0x38) = 0;
      plVar7 = (long *)plVar13[0x11];
      puVar24 = (undefined *)*plVar22;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar22 = (long *)func_0x057a51c4(puVar24,0);
      if ((plVar22 == (long *)0x0) ||
         (puVar6 = (undefined *)
                   (**(code **)(*plVar22 + 0x1b8))(plVar22,*(undefined8 *)(*plVar22 + 0x1c0)),
         plVar7 == (long *)0x0)) {
LAB_03cd9c4c:
        plVar22 = plVar20;
        uVar19 = 0x3cd9c50;
        auVar29 = func_0x03280cac();
SUB_03cd9c50:
        plVar8 = auVar29._8_8_;
        puVar3 = (undefined1 *)((long)puVar4 + -0x70);
        *(undefined8 *)((long)puVar4 + -0x70) = uVar19;
        *(long **)((long)puVar4 + -0x60) = plVar7;
        *(long **)((long)puVar4 + -0x58) = plVar15;
        *(ulong *)((long)puVar4 + -0x50) = uVar10;
        *(long **)((long)puVar4 + -0x48) = plVar13;
        plVar20 = plVar22;
        uVar16 = param_4;
        if (*(long *)(param_4 + 0x38) == 0) {
          func_0x03280a18(PTR_DAT_07779740);
          func_0x03280a18(PTR_DAT_0774e558);
          if (*(long *)(param_4 + 0x38) == 0) {
            func_0x03256878(param_4);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_07779740 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar11 = func_0x069572f4(plVar8,0);
        uVar10 = param_4;
        plVar15 = plVar22;
        if (lVar11 != 0) {
          plVar20 = (long *)0x1;
          uVar16 = 0;
          plVar13 = (long *)func_0x06957fd0(lVar11,plVar22);
          if (plVar13 != (long *)0x0) {
            uVar10 = func_0x03dc9518(plVar13,**(undefined8 **)(param_4 + 0x38));
            plVar8 = *(long **)(*(long *)(param_4 + 0x38) + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            plVar20 = (long *)func_0x057a51c4(plVar8,0);
            uVar16 = 0;
            func_0x068309d0(auVar29._0_8_,uVar10,plVar20,0,1,0);
            lVar11 = func_0x06fdf130(plVar13,0);
            plVar15 = plVar13;
            if (lVar11 != 0) {
              func_0x06fed5b8(lVar11,0);
              return uVar10;
            }
          }
        }
        plVar22 = plVar20;
        uVar19 = 0x3cd9d68;
        auVar31 = func_0x03280cac();
        plVar13 = auVar29._0_8_;
      }
      else {
        lVar11 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07779720) {
              puVar18 = (undefined8 *)(lVar11 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_03cd9ac8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
        param_4 = puVar18[1];
        plVar20 = (long *)((long)puVar4 + -0x38);
        (*(code *)*puVar18)(plVar7,puVar6);
        lVar11 = *(long *)((long)puVar4 + -0x38);
        puVar24 = puVar6;
        if (lVar11 == 0) {
          plVar7 = *(long **)plVar15[7];
          if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar22 = (long *)func_0x057a51c4(plVar7,0);
          if (plVar22 != (long *)0x0) {
            uVar19 = (**(code **)(*plVar22 + 0x1b8))(plVar22,*(undefined8 *)(*plVar22 + 0x1c0));
            plVar7 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar19,0);
            if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
            }
            param_4 = *(ulong *)PTR_DAT_07779738;
            plVar20 = (long *)0x0;
            func_0x0556c434(plVar7,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                            *(undefined8 *)PTR_DAT_07779730,0,0);
            lVar11 = *(long *)((long)puVar4 + -0x38);
            if (lVar11 != 0) goto LAB_03cd9b94;
          }
          goto LAB_03cd9c4c;
        }
LAB_03cd9b94:
        if (plVar13[0x10] == 0) goto LAB_03cd9c4c;
        puVar24 = *(undefined **)(lVar11 + 0x20);
        auVar31._8_8_ = puVar24;
        auVar31._0_8_ = plVar13;
        plVar20 = *(long **)PTR_DAT_07779718;
        plVar22 = (long *)func_0x04fe2cfc(plVar13[0x10],*(undefined8 *)(lVar11 + 0x18));
        if (*(long *)((long)puVar4 + -0x38) == 0) goto LAB_03cd9c4c;
        if (*(int *)(*(long *)((long)puVar4 + -0x38) + 0x28) == 1) {
          plVar7 = plVar22;
          if (puVar24 == (undefined *)0x0) goto LAB_03cd9c4c;
          puVar25 = (undefined *)plVar13[0x16];
          uVar19 = func_0x06fe368c(puVar24,0);
          uVar19 = func_0x055ee6c0(puVar25,uVar19,0);
          auVar29._8_8_ = uVar19;
          auVar29._0_8_ = plVar13;
          param_4 = *(ulong *)(plVar15[7] + 0x18);
          uVar19 = 0x3cd9c04;
          goto SUB_03cd9c50;
        }
        uVar16 = *(ulong *)(plVar15[7] + 8);
        uVar19 = 0x3cd9c20;
        plVar8 = plVar22;
      }
      puVar14 = auVar31._8_8_;
      *(undefined8 *)(puVar3 + -0x30) = uVar19;
      *(long **)(puVar3 + -0x20) = plVar8;
      *(long **)(puVar3 + -0x18) = plVar15;
      *(ulong *)(puVar3 + -0x10) = uVar10;
      *(long **)(puVar3 + -8) = plVar13;
      param_4 = uVar16;
      if (*(long *)(uVar16 + 0x38) == 0) {
        func_0x03280a18(PTR_DAT_07779748);
        func_0x03280a18(PTR_DAT_0774e4e0);
        func_0x03280a18(PTR_DAT_0774e558);
        if (*(long *)(uVar16 + 0x38) == 0) {
          func_0x03256878(uVar16);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar11 = func_0x03e3cdbc(puVar14,plVar22,*(undefined8 *)PTR_DAT_07779748);
      if (lVar11 != 0) {
        uVar10 = func_0x03dc9518(lVar11,**(undefined8 **)(uVar16 + 0x38));
        uVar19 = *(undefined8 *)(*(long *)(uVar16 + 0x38) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e558);
        }
        uVar19 = func_0x057a51c4(uVar19,0);
        func_0x068309d0(auVar31._0_8_,uVar10,uVar19,0,1,0);
        return uVar10;
      }
      auVar30 = func_0x03280cac();
      lVar11 = auVar30._8_8_;
      puVar4 = (undefined8 *)(puVar3 + -0x60);
      *(undefined8 *)(puVar3 + -0x50) = 0x3cd9e68;
      *(long **)(puVar3 + -0x48) = plVar22;
      *(ulong *)(puVar3 + -0x40) = uVar16;
      *(long *)(puVar3 + -0x38) = auVar31._0_8_;
      puVar18 = *(undefined8 **)(lVar11 + 0x38);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_07779750);
        func_0x03280a18(PTR_DAT_0774e558);
        puVar18 = *(undefined8 **)(lVar11 + 0x38);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x03256878(lVar11);
          puVar18 = *(undefined8 **)(lVar11 + 0x38);
        }
      }
      *(undefined8 *)(puVar3 + -0x58) = 0;
      lVar12 = *(long *)(auVar30._0_8_ + 0x90);
      puVar9 = (undefined *)*puVar18;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar19 = func_0x057a51c4(puVar9,0);
      if (lVar12 != 0) {
        func_0x04fe48b0(lVar12,uVar19,puVar3 + -0x58,*(undefined8 *)PTR_DAT_07779750);
        uVar19 = *(undefined8 *)(puVar3 + -0x58);
        lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar12 = func_0x03280b90(uVar19,lVar12);
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        if (lVar12 != 0) {
          uVar10 = func_0x03280b90(lVar12,lVar11);
          if (uVar10 != 0) {
            return uVar10;
          }
          func_0x03281048(lVar12,lVar11);
        }
        return 0;
      }
      auVar31 = func_0x03280cac();
      lVar12 = auVar31._8_8_;
      plVar13 = auVar31._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = 0x3cd9f80;
      *(undefined8 *)(puVar3 + -0x70) = 0;
      *(long *)(puVar3 + -0x68) = lVar11;
      plVar20 = *(long **)(lVar12 + 0x38);
      if (plVar20 == (long *)0x0) {
        func_0x03256878(lVar12);
        plVar20 = *(long **)(lVar12 + 0x38);
      }
      lVar11 = func_0x03280b88(*(undefined8 *)
                                (*plVar13 + (ulong)*(ushort *)(*plVar20 + 0x50) * 0x10 + 0x140));
      uVar10 = (**(code **)(lVar11 + 8))(plVar13,lVar11);
      if (uVar10 != 0) {
        return uVar10;
      }
      puVar6 = *(undefined **)(puVar3 + -0x70);
      plVar20 = *(long **)(puVar3 + -0x68);
      uVar10 = 1;
      plVar15 = *(long **)(*(long *)(lVar12 + 0x38) + 0x10);
      uVar19 = *(undefined8 *)(puVar3 + -0x80);
    } while( true );
  }
  uVar19 = 0x6b30e14;
  func_0x03280cac();
  plVar20 = (long *)0x0;
  plVar13 = extraout_x1_00;
SUB_06b30e14:
  *(undefined8 *)((long)puVar5 + -0x40) = uVar19;
  *(undefined **)((long)puVar5 + -0x30) = puVar9;
  *(long **)((long)puVar5 + -0x28) = unaff_x23;
  *(long **)((long)puVar5 + -0x20) = plVar7;
  *(long **)((long)puVar5 + -0x18) = plVar22;
  *(long *)((long)puVar5 + -0x10) = lVar12;
  *(long **)((long)puVar5 + -8) = plVar20;
  lVar11 = 0x7e2a000;
  if ((bRam0000000007e2a48a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077806f8);
    func_0x03280a18(PTR_DAT_07780700);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0780dd88);
    bRam0000000007e2a48a = 1;
  }
  if (plVar13 == (long *)0x0) {
LAB_06b31074:
    *plVar15 = 0;
    func_0x032809c4(plVar15,0);
    uVar21 = 0;
LAB_06b31088:
    return (ulong)uVar21;
  }
  lVar12 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077806f8) {
        puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_06b30ed4;
      }
      uVar10 = uVar10 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar10 != 0);
  }
  puVar18 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077806f8,0);
LAB_06b30ed4:
  plVar20 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
  puVar25 = PTR_DAT_0780dd88;
  puVar24 = PTR_DAT_07780700;
  puVar6 = PTR_DAT_0774e8e0;
  if (plVar20 == (long *)0x0) {
LAB_06b310a4:
    func_0x03280cac();
    goto LAB_06b310a8;
  }
  do {
    lVar11 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b30f4c;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar6,0);
LAB_06b30f4c:
    uVar10 = (*(code *)*puVar18)(plVar20,puVar18[1]);
    if ((uVar10 & 1) == 0) {
      uVar21 = 0;
      iVar23 = 6;
      goto joined_r0x06b31000;
    }
    lVar11 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar24) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b30fa8;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar24,0);
LAB_06b30fa8:
    lVar11 = (*(code *)*puVar18)(plVar20,puVar18[1]);
    if (lVar11 == 0) {
      func_0x03280cac();
      lVar11 = 0;
      goto LAB_06b310a4;
    }
    uVar10 = func_0x055ea870(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)puVar25,0);
  } while ((uVar10 & 1) == 0);
  *plVar15 = *(long *)(lVar11 + 0x18);
  func_0x032809c4(plVar15);
  uVar21 = 1;
  iVar23 = 5;
joined_r0x06b31000:
  lVar11 = 0;
  do {
    if (plVar20 != (long *)0x0) {
      lVar12 = *plVar20;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b31058;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31058:
      (*(code *)*puVar18)(plVar20,puVar18[1]);
    }
    if (lVar11 == 0) {
      if ((iVar23 == 0) || (iVar23 == 6)) goto LAB_06b31074;
      goto LAB_06b31088;
    }
LAB_06b310a8:
    auVar28 = func_0x03280ca4(lVar11);
    uVar19 = auVar28._0_8_;
    if (auVar28._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910(uVar19);
    lVar11 = *plVar13;
    func_0x072ce920();
    iVar23 = 0;
    uVar21 = 0;
  } while( true );
  if (plVar20 != (long *)0x0) {
    lVar11 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar18 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b31154;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31154:
    (*(code *)*puVar18)(plVar20,puVar18[1]);
  }
  func_0x03365958(uVar19);
  func_0x03280ca4(0);
  uVar10 = func_0x02f09514();
  puVar6 = PTR_DAT_0782f3d0;
  *(undefined8 *)((long)puVar5 + -0x60) = 0x6b31178;
  *(undefined8 *)((long)puVar5 + -0x58) = 0;
  *(long **)((long)puVar5 + -0x50) = plVar20;
  *(long **)((long)puVar5 + -0x48) = plVar15;
  if ((bRam0000000007e2a48b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f3d0);
    bRam0000000007e2a48b = 1;
  }
  *(undefined8 *)(uVar10 + 0x90) = *(undefined8 *)puVar6;
  func_0x032809c4();
  puVar24 = PTR_DAT_07828a38;
  puVar6 = PTR_DAT_07828a30;
  *(undefined8 *)((long)puVar5 + -0x70) = *(undefined8 *)((long)puVar5 + -0x60);
  *(undefined8 *)((long)puVar5 + -0x60) = uVar19;
  *(undefined8 *)((long)puVar5 + -0x58) = *(undefined8 *)((long)puVar5 + -0x58);
  *(undefined8 *)((long)puVar5 + -0x50) = *(undefined8 *)((long)puVar5 + -0x50);
  *(undefined8 *)((long)puVar5 + -0x48) = *(undefined8 *)((long)puVar5 + -0x48);
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x053bfe40(uVar19,*(undefined8 *)puVar24);
  *(undefined8 *)(uVar10 + 0x60) = uVar19;
  func_0x032809c4((undefined8 *)(uVar10 + 0x60),uVar19);
  return uVar10;
}

