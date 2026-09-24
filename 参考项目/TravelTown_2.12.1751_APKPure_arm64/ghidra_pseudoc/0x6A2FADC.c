/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2FADC; Merger.MergeBoard.ViewModel.BoardItemBehavioursHandlerViewModel.InitializeBehaviourPools; status ok */


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

ulong Merger_MergeBoard_ViewModel_BoardItemBehavioursHandlerViewModel__InitializeBehaviourPools
                (long param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  long *extraout_x1;
  long *extraout_x1_00;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  long *plVar22;
  int iVar23;
  undefined *puVar24;
  long *unaff_x23;
  undefined *puVar25;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar26;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar27;
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
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  plVar22 = (long *)0x7e2a000;
  plVar16 = param_3;
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
  plVar8 = (long *)0x0;
  puVar24 = unaff_x26;
  puVar6 = unaff_x27;
  puVar25 = unaff_x28;
  if (param_3 == (long *)0x0) {
LAB_06b2fe70:
    func_0x03280cac();
    unaff_x26 = puVar24;
    unaff_x27 = puVar6;
    unaff_x28 = puVar25;
  }
  else {
    lVar17 = *param_3;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0782f358) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b2fbc0;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    plVar16 = (long *)0x0;
    puVar7 = (undefined8 *)func_0x03256b10(param_3);
LAB_06b2fbc0:
    plVar8 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
    puVar25 = PTR_DAT_0782f360;
    puVar14 = PTR_DAT_078067e0;
    puVar24 = PTR_DAT_077c7930;
    puVar6 = PTR_DAT_0774e8e0;
    if (plVar8 != (long *)0x0) {
LAB_06b2fbf4:
      lVar17 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b2fc40;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      plVar16 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b2fc40:
      uVar18 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar18 & 1) == 0) {
        param_1 = 0;
        goto LAB_06b2fdd4;
      }
      lVar17 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b2fc9c;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      plVar16 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b2fc9c:
      unaff_x23 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      if (unaff_x23 != (long *)0x0) {
        if ((int)unaff_x23[5] == 1) {
          unaff_x24 = (undefined *)unaff_x23[4];
          plVar22 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777dc48);
          func_0x06955db4(plVar22,0);
          if (unaff_x24 == (undefined *)0x0) goto LAB_06b2fe60;
          unaff_x25 = *(undefined **)(param_1 + 0x90);
          uVar9 = func_0x06fe368c(unaff_x24,0);
          plVar16 = (long *)0x0;
          lVar17 = func_0x055ee6c0(unaff_x25,uVar9);
          if (plVar22 == (long *)0x0) goto LAB_06b2fe64;
          plVar22[2] = lVar17;
          func_0x032809c4();
          plVar22[8] = (long)unaff_x24;
          func_0x032809c4(plVar22 + 8,unaff_x24);
          *(undefined1 *)(plVar22 + 5) = 1;
          uVar1 = *(undefined4 *)((long)unaff_x23 + 0x2c);
          *(undefined4 *)((long)plVar22 + 0x2c) = uVar1;
          *(undefined4 *)(plVar22 + 6) = uVar1;
          unaff_x23 = *(long **)(param_1 + 0x68);
          if (unaff_x23 == (long *)0x0) goto LAB_06b2fe5c;
          lVar17 = *unaff_x23;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar14) {
                puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 3) * 0x10 + 0x138);
                goto LAB_06b2fd8c;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)puVar14,3);
LAB_06b2fd8c:
          uVar9 = (*(code *)*puVar7)(unaff_x23,puVar7[1]);
          param_4 = 0;
          plVar16 = param_2;
          lVar17 = func_0x06a4bc78(param_1,uVar9,param_2,0,0);
          if (lVar17 == 0) goto LAB_06b2fe68;
          lVar17 = func_0x03dc9518(lVar17,*(undefined8 *)puVar24);
          if (lVar17 == 0) goto LAB_06b2fe6c;
          plVar16 = (long *)0x0;
          func_0x06955dbc(lVar17,plVar22);
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
    auVar28 = func_0x03280ca4(param_1);
    uVar9 = auVar28._0_8_;
    if (auVar28._8_4_ != 1) break;
    plVar10 = (long *)func_0x072ce910(uVar9);
    param_1 = *plVar10;
    uVar18 = func_0x072ce920();
LAB_06b2fdd4:
    if (plVar8 != (long *)0x0) {
      lVar17 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b2fe2c;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      plVar16 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b2fe2c:
      uVar18 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    if (param_1 == 0) {
      return uVar18;
    }
  }
  if (plVar8 != (long *)0x0) {
    lVar17 = *plVar8;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b2ff44;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    plVar16 = (long *)0x0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b2ff44:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  func_0x03365958(uVar9);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  pcStack_b0 = 
  Merger_MergeBoard_ViewModel_BoardItemBehavioursHandlerViewModel__GetCombinedBehaviourConfig;
  uStack_78 = 0;
  lVar17 = 0x7e2a000;
  puStack_a8 = puVar6;
  puStack_a0 = puVar24;
  puStack_98 = unaff_x25;
  puStack_90 = unaff_x24;
  plStack_88 = unaff_x23;
  plStack_80 = plVar22;
  uStack_70 = uVar9;
  plStack_68 = plVar8;
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
  puVar14 = PTR_DAT_0782f378;
  if (auVar31._8_8_ == 0) {
LAB_06b30184:
    puVar14 = PTR_DAT_078091e8;
    uVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078091f8);
    func_0x04fe1fa4(uVar18,*(undefined8 *)puVar14);
  }
  else {
    lVar11 = *(long *)PTR_DAT_0782f378;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar11 = *(long *)puVar14;
    }
    lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar17 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar14;
      }
      uVar9 = **(undefined8 **)(lVar11 + 0xb8);
      lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077daca0);
      func_0x053569b8(lVar17,uVar9,*(undefined8 *)PTR_DAT_0782f368,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar14 + 0xb8) + 8);
      *plVar16 = lVar17;
      func_0x032809c4(plVar16,lVar17);
      lVar11 = *(long *)puVar14;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar11 = *(long *)puVar14;
    }
    unaff_x25 = PTR_DAT_077dac98;
    plVar22 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (plVar22 == (long *)0x0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar14;
      }
      unaff_x23 = (long *)**(undefined8 **)(lVar11 + 0xb8);
      plVar22 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077daca8);
      func_0x053569b8(plVar22,unaff_x23,*(undefined8 *)PTR_DAT_0782f370,0);
      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x10);
      *puVar7 = plVar22;
      func_0x032809c4(puVar7,plVar22);
    }
    param_4 = *(ulong *)unaff_x25;
    plVar16 = plVar22;
    uVar18 = func_0x03d5c100(auVar31._8_8_,lVar17);
    unaff_x24 = puVar14;
    if (uVar18 == 0) goto LAB_06b30184;
  }
  auVar30._8_8_ = plVar22;
  auVar30._0_8_ = lVar17;
  plVar22 = *(long **)(auVar31._0_8_ + 0x68);
  puVar14 = unaff_x24;
  puVar26 = unaff_x25;
  puVar15 = puVar24;
  puVar27 = puVar6;
  if (plVar22 == (long *)0x0) {
LAB_06b3041c:
    func_0x03280cac();
    unaff_x24 = puVar14;
    unaff_x25 = puVar26;
    puVar24 = puVar15;
    puVar6 = puVar27;
  }
  else {
    lVar17 = *plVar22;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_078067e0) {
          puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_06b30208;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    plVar16 = (long *)0x1;
    puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b30208:
    plVar8 = (long *)(*(code *)*puVar7)(plVar22,puVar7[1]);
    if (plVar8 == (long *)0x0) goto LAB_06b3041c;
    lVar17 = *plVar8;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07809200) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b30270;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    plVar16 = (long *)0x0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b30270:
    unaff_x23 = (long *)PTR_DAT_0774e8c8;
    plVar22 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar26 = PTR_DAT_07809208;
    puVar27 = PTR_DAT_078091f0;
    puVar15 = PTR_DAT_078091e0;
    puVar14 = PTR_DAT_0774e8e0;
    if (plVar22 != (long *)0x0) {
LAB_06b302ac:
      plVar8 = auVar30._8_8_;
      lVar17 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar14) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b302f8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      plVar16 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b302f8:
      uVar19 = (*(code *)*puVar7)(plVar22,puVar7[1]);
      if ((uVar19 & 1) == 0) {
        lVar17 = 0;
        goto LAB_06b3039c;
      }
      lVar17 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar26) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b30354;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      plVar16 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b30354:
      auVar31 = (*(code *)*puVar7)(plVar22,puVar7[1]);
      plVar8 = auVar31._8_8_;
      if (uVar18 != 0) {
        plVar16 = *(long **)puVar15;
        uVar19 = func_0x04fe2f70(uVar18,auVar31._0_8_);
        auVar30 = auVar31;
        if ((uVar19 & 1) == 0) {
          param_4 = *(ulong *)puVar27;
          func_0x04fe2d68(uVar18,auVar31._0_8_);
          plVar16 = plVar8;
        }
        goto LAB_06b302ac;
      }
      func_0x03280cac();
      goto LAB_06b3041c;
    }
  }
  puVar27 = puVar6;
  puVar15 = puVar24;
  puVar26 = unaff_x25;
  puVar14 = unaff_x24;
  func_0x03280cac();
  while( true ) {
    plVar8 = auVar30._8_8_;
    auVar28 = func_0x03280ca4(auVar30._0_8_);
    uVar9 = auVar28._0_8_;
    if (auVar28._8_4_ != 1) break;
    plVar10 = (long *)func_0x072ce910();
    lVar17 = *plVar10;
    func_0x072ce920();
LAB_06b3039c:
    auVar30._8_8_ = plVar8;
    auVar30._0_8_ = lVar17;
    if (plVar22 != (long *)0x0) {
      lVar11 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x23) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b303ec;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      plVar16 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b303ec:
      (*(code *)*puVar7)(plVar22,puVar7[1]);
    }
    if (lVar17 == 0) {
      return uVar18;
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar17 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x23) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b304b8;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    plVar16 = (long *)0x0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b304b8:
    (*(code *)*puVar7)(plVar22,puVar7[1]);
  }
  func_0x03365958(uVar9);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  lVar17 = auVar31._0_8_;
  puVar5 = &uStack_120;
  uStack_100 = 0x6b304dc;
  uStack_c8 = 0;
  plVar10 = (long *)0x7e2a000;
  puStack_f8 = puVar27;
  puStack_f0 = puVar15;
  puStack_e8 = puVar26;
  puStack_e0 = puVar14;
  plStack_d8 = unaff_x23;
  plStack_d0 = plVar8;
  plStack_c0 = plVar22;
  uStack_b8 = uVar9;
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
  plVar22 = (long *)0x0;
  if ((auVar31._8_8_ != 0) && (plVar22 = *(long **)(auVar31._8_8_ + 0x30), plVar22 != (long *)0x0))
  {
    lVar11 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar20 + 0x6d) * 0x10 + 0x138);
          goto LAB_06b30610;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    plVar16 = (long *)0x6d;
    puVar7 = (undefined8 *)func_0x03256b10(plVar22);
LAB_06b30610:
    plVar12 = (long *)(*(code *)*puVar7)(plVar22,puVar7[1]);
    puVar24 = PTR_DAT_07809600;
    puVar26 = puVar6;
    if (plVar12 != (long *)0x0) {
      lVar11 = *plVar12;
      plVar8 = *(long **)(lVar17 + 0x70);
      uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07809600) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b3067c;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      plVar16 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b3067c:
      plVar13 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
      plVar10 = plVar12;
      puVar15 = puVar24;
      if (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar20 + 9) * 0x10 + 0x138);
              goto LAB_06b306e8;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,9);
LAB_06b306e8:
        plVar16 = (long *)puVar7[1];
        plVar12 = (long *)(*(code *)*puVar7)(plVar8,plVar13);
        puVar2 = PTR_DAT_077db760;
        puVar24 = PTR_DAT_0777e548;
        unaff_x23 = plVar13;
        if (plVar12 != (long *)0x0) {
          lVar11 = *plVar12;
          uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e548) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar20 + 0x21) * 0x10 + 0x138);
                goto LAB_06b30760;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777e548,0x21);
LAB_06b30760:
          puVar14 = (undefined *)(*(code *)*puVar7)(plVar12,puVar7[1]);
          unaff_x23 = (long *)func_0x03280ca0(*(undefined8 *)puVar2);
          plVar16 = (long *)0x0;
          func_0x0610f958(unaff_x23,puVar14);
          if ((unaff_x23 == (long *)0x0) || ((char)unaff_x23[2] == '\0')) {
LAB_06b307b4:
            lVar11 = *plVar12;
            uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar24) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar20 + 5) * 0x10 + 0x138);
                  goto LAB_06b30804;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar24,5);
LAB_06b30804:
            lVar11 = (*(code *)*puVar7)(plVar12,puVar7[1]);
            if ((lVar11 == 0) || (plVar8 = *(long **)(lVar11 + 0x20), plVar8 == (long *)0x0)) {
              plVar12 = *(long **)PTR_DAT_077dc8e8;
              lVar11 = plVar12[7];
              if (lVar11 == 0) {
                func_0x03256878(plVar12);
                lVar11 = plVar12[7];
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = func_0x0325681c();
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar11 = *(long *)(plVar12[7] + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = func_0x0325681c();
              }
              plVar8 = (long *)**(long **)(lVar11 + 0xb8);
            }
            plVar16 = &lStack_108;
            uVar9 = 0x6b3087c;
            lVar11 = lVar17;
            goto SUB_06b30e14;
          }
          plVar8 = plVar12;
          puVar27 = puVar24;
          if (unaff_x23[3] != 0) {
            unaff_x23 = *(long **)(unaff_x23[3] + 0x10);
            uVar18 = func_0x055fde0c(unaff_x23,0);
            if ((uVar18 & 1) != 0) goto LAB_06b307b4;
            plVar12 = *(long **)(lVar17 + 0x78);
            lVar17 = 0;
            if (plVar12 != (long *)0x0) {
              lVar17 = *plVar12;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07774930) {
                    puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                    goto LAB_06b30b98;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07774930,2);
LAB_06b30b98:
              uStack_118 = (*(code *)*puVar7)(plVar12,unaff_x23,1,0,puVar7[1]);
              uVar9 = func_0x0558dab4(&uStack_118,*(undefined8 *)PTR_DAT_077ec328,0);
              lVar17 = *plVar22;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
                    puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 0x25) * 0x10 + 0x138);
                    goto LAB_06b30c20;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar7 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar6,0x25);
LAB_06b30c20:
              uVar18 = (*(code *)*puVar7)(plVar22,uVar9,puVar7[1]);
              return uVar18;
            }
          }
        }
      }
    }
  }
  plVar12 = plVar8;
  func_0x03280cac();
  puVar5 = auStack_180;
  puVar4 = auStack_180;
  auStack_180[0] = 0x6b30c5c;
  lVar11 = 0x7e2a000;
  puStack_170 = puVar25;
  puStack_168 = puVar27;
  puStack_160 = puVar15;
  puStack_158 = puVar26;
  puStack_150 = puVar14;
  plStack_148 = unaff_x23;
  plStack_140 = plVar12;
  plStack_138 = plVar10;
  lStack_130 = lVar17;
  plStack_128 = plVar22;
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
    plVar8 = *(long **)PTR_DAT_0782f398;
    uVar18 = 0;
    uVar9 = 0x6b30d68;
    plVar22 = extraout_x1;
    plVar16 = extraout_x1;
    puVar6 = PTR_DAT_0782f3a0;
    puVar14 = PTR_DAT_0782f3a8;
    puVar15 = PTR_DAT_0782f3b0;
    puVar24 = PTR_DAT_0782f3c8;
    puVar25 = PTR_DAT_0782f3c0;
    do {
      puVar3 = (undefined1 *)((long)puVar4 + -0x40);
      *(undefined8 *)((long)puVar4 + -0x40) = uVar9;
      *(undefined **)((long)puVar4 + -0x30) = puVar25;
      *(undefined **)((long)puVar4 + -0x28) = puVar24;
      *(undefined **)((long)puVar4 + -0x20) = puVar15;
      *(undefined **)((long)puVar4 + -0x18) = puVar14;
      *(undefined **)((long)puVar4 + -0x10) = puVar6;
      *(long **)((long)puVar4 + -8) = plVar16;
      plVar10 = (long *)plVar8[7];
      plVar16 = plVar8;
      if (plVar10 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_0776dcd8);
        func_0x03280a18(PTR_DAT_07779718);
        func_0x03280a18(PTR_DAT_07779720);
        func_0x03280a18(PTR_DAT_0774e558);
        func_0x03280a18(PTR_DAT_07779728);
        func_0x03280a18(PTR_DAT_07779730);
        func_0x03280a18(PTR_DAT_07779738);
        func_0x03280a18(PTR_DAT_077503b8);
        plVar10 = (long *)plVar8[7];
        if (plVar10 == (long *)0x0) {
          func_0x03256878(plVar8);
          plVar10 = (long *)plVar8[7];
        }
      }
      puVar25 = PTR_DAT_0774e558;
      *(undefined8 *)((long)puVar4 + -0x38) = 0;
      plVar12 = (long *)plVar22[0x11];
      puVar24 = (undefined *)*plVar10;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar10 = (long *)func_0x057a51c4(puVar24,0);
      if ((plVar10 == (long *)0x0) ||
         (puVar6 = (undefined *)
                   (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0)),
         plVar12 == (long *)0x0)) {
LAB_03cd9c4c:
        plVar10 = plVar16;
        uVar9 = 0x3cd9c50;
        auVar29 = func_0x03280cac();
SUB_03cd9c50:
        plVar13 = auVar29._8_8_;
        puVar3 = (undefined1 *)((long)puVar4 + -0x70);
        *(undefined8 *)((long)puVar4 + -0x70) = uVar9;
        *(long **)((long)puVar4 + -0x60) = plVar12;
        *(long **)((long)puVar4 + -0x58) = plVar8;
        *(ulong *)((long)puVar4 + -0x50) = uVar18;
        *(long **)((long)puVar4 + -0x48) = plVar22;
        plVar16 = plVar10;
        uVar19 = param_4;
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
        lVar17 = func_0x069572f4(plVar13,0);
        uVar18 = param_4;
        plVar8 = plVar10;
        if (lVar17 != 0) {
          plVar16 = (long *)0x1;
          uVar19 = 0;
          plVar22 = (long *)func_0x06957fd0(lVar17,plVar10);
          if (plVar22 != (long *)0x0) {
            uVar18 = func_0x03dc9518(plVar22,**(undefined8 **)(param_4 + 0x38));
            plVar13 = *(long **)(*(long *)(param_4 + 0x38) + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            plVar16 = (long *)func_0x057a51c4(plVar13,0);
            uVar19 = 0;
            func_0x068309d0(auVar29._0_8_,uVar18,plVar16,0,1,0);
            lVar17 = func_0x06fdf130(plVar22,0);
            plVar8 = plVar22;
            if (lVar17 != 0) {
              func_0x06fed5b8(lVar17,0);
              return uVar18;
            }
          }
        }
        plVar10 = plVar16;
        uVar9 = 0x3cd9d68;
        auVar31 = func_0x03280cac();
        plVar22 = auVar29._0_8_;
      }
      else {
        lVar17 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07779720) {
              puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03cd9ac8;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
        param_4 = puVar7[1];
        plVar16 = (long *)((long)puVar4 + -0x38);
        (*(code *)*puVar7)(plVar12,puVar6);
        lVar17 = *(long *)((long)puVar4 + -0x38);
        puVar24 = puVar6;
        if (lVar17 == 0) {
          plVar12 = *(long **)plVar8[7];
          if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar10 = (long *)func_0x057a51c4(plVar12,0);
          if (plVar10 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            plVar12 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar9,0);
            if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
            }
            param_4 = *(ulong *)PTR_DAT_07779738;
            plVar16 = (long *)0x0;
            func_0x0556c434(plVar12,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                            *(undefined8 *)PTR_DAT_07779730,0,0);
            lVar17 = *(long *)((long)puVar4 + -0x38);
            if (lVar17 != 0) goto LAB_03cd9b94;
          }
          goto LAB_03cd9c4c;
        }
LAB_03cd9b94:
        if (plVar22[0x10] == 0) goto LAB_03cd9c4c;
        puVar24 = *(undefined **)(lVar17 + 0x20);
        auVar31._8_8_ = puVar24;
        auVar31._0_8_ = plVar22;
        plVar16 = *(long **)PTR_DAT_07779718;
        plVar10 = (long *)func_0x04fe2cfc(plVar22[0x10],*(undefined8 *)(lVar17 + 0x18));
        if (*(long *)((long)puVar4 + -0x38) == 0) goto LAB_03cd9c4c;
        if (*(int *)(*(long *)((long)puVar4 + -0x38) + 0x28) == 1) {
          plVar12 = plVar10;
          if (puVar24 == (undefined *)0x0) goto LAB_03cd9c4c;
          puVar25 = (undefined *)plVar22[0x16];
          uVar9 = func_0x06fe368c(puVar24,0);
          uVar9 = func_0x055ee6c0(puVar25,uVar9,0);
          auVar29._8_8_ = uVar9;
          auVar29._0_8_ = plVar22;
          param_4 = *(ulong *)(plVar8[7] + 0x18);
          uVar9 = 0x3cd9c04;
          goto SUB_03cd9c50;
        }
        uVar19 = *(ulong *)(plVar8[7] + 8);
        uVar9 = 0x3cd9c20;
        plVar13 = plVar10;
      }
      puVar15 = auVar31._8_8_;
      *(undefined8 *)(puVar3 + -0x30) = uVar9;
      *(long **)(puVar3 + -0x20) = plVar13;
      *(long **)(puVar3 + -0x18) = plVar8;
      *(ulong *)(puVar3 + -0x10) = uVar18;
      *(long **)(puVar3 + -8) = plVar22;
      param_4 = uVar19;
      if (*(long *)(uVar19 + 0x38) == 0) {
        func_0x03280a18(PTR_DAT_07779748);
        func_0x03280a18(PTR_DAT_0774e4e0);
        func_0x03280a18(PTR_DAT_0774e558);
        if (*(long *)(uVar19 + 0x38) == 0) {
          func_0x03256878(uVar19);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar17 = func_0x03e3cdbc(puVar15,plVar10,*(undefined8 *)PTR_DAT_07779748);
      if (lVar17 != 0) {
        uVar18 = func_0x03dc9518(lVar17,**(undefined8 **)(uVar19 + 0x38));
        uVar9 = *(undefined8 *)(*(long *)(uVar19 + 0x38) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e558);
        }
        uVar9 = func_0x057a51c4(uVar9,0);
        func_0x068309d0(auVar31._0_8_,uVar18,uVar9,0,1,0);
        return uVar18;
      }
      auVar30 = func_0x03280cac();
      lVar17 = auVar30._8_8_;
      puVar4 = (undefined8 *)(puVar3 + -0x60);
      *(undefined8 *)(puVar3 + -0x50) = 0x3cd9e68;
      *(long **)(puVar3 + -0x48) = plVar10;
      *(ulong *)(puVar3 + -0x40) = uVar19;
      *(long *)(puVar3 + -0x38) = auVar31._0_8_;
      puVar7 = *(undefined8 **)(lVar17 + 0x38);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_07779750);
        func_0x03280a18(PTR_DAT_0774e558);
        puVar7 = *(undefined8 **)(lVar17 + 0x38);
        if (puVar7 == (undefined8 *)0x0) {
          func_0x03256878(lVar17);
          puVar7 = *(undefined8 **)(lVar17 + 0x38);
        }
      }
      *(undefined8 *)(puVar3 + -0x58) = 0;
      lVar11 = *(long *)(auVar30._0_8_ + 0x90);
      puVar14 = (undefined *)*puVar7;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar9 = func_0x057a51c4(puVar14,0);
      if (lVar11 != 0) {
        func_0x04fe48b0(lVar11,uVar9,puVar3 + -0x58,*(undefined8 *)PTR_DAT_07779750);
        uVar9 = *(undefined8 *)(puVar3 + -0x58);
        lVar11 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar11 = func_0x03280b90(uVar9,lVar11);
        lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
        }
        if (lVar11 != 0) {
          uVar18 = func_0x03280b90(lVar11,lVar17);
          if (uVar18 != 0) {
            return uVar18;
          }
          func_0x03281048(lVar11,lVar17);
        }
        return 0;
      }
      auVar31 = func_0x03280cac();
      lVar11 = auVar31._8_8_;
      plVar22 = auVar31._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = 0x3cd9f80;
      *(undefined8 *)(puVar3 + -0x70) = 0;
      *(long *)(puVar3 + -0x68) = lVar17;
      plVar16 = *(long **)(lVar11 + 0x38);
      if (plVar16 == (long *)0x0) {
        func_0x03256878(lVar11);
        plVar16 = *(long **)(lVar11 + 0x38);
      }
      lVar17 = func_0x03280b88(*(undefined8 *)
                                (*plVar22 + (ulong)*(ushort *)(*plVar16 + 0x50) * 0x10 + 0x140));
      uVar18 = (**(code **)(lVar17 + 8))(plVar22,lVar17);
      if (uVar18 != 0) {
        return uVar18;
      }
      puVar6 = *(undefined **)(puVar3 + -0x70);
      plVar16 = *(long **)(puVar3 + -0x68);
      uVar18 = 1;
      plVar8 = *(long **)(*(long *)(lVar11 + 0x38) + 0x10);
      uVar9 = *(undefined8 *)(puVar3 + -0x80);
    } while( true );
  }
  uVar9 = 0x6b30e14;
  func_0x03280cac();
  plVar22 = (long *)0x0;
  plVar8 = extraout_x1_00;
SUB_06b30e14:
  *(undefined8 *)((long)puVar5 + -0x40) = uVar9;
  *(undefined **)((long)puVar5 + -0x30) = puVar14;
  *(long **)((long)puVar5 + -0x28) = unaff_x23;
  *(long **)((long)puVar5 + -0x20) = plVar12;
  *(long **)((long)puVar5 + -0x18) = plVar10;
  *(long *)((long)puVar5 + -0x10) = lVar11;
  *(long **)((long)puVar5 + -8) = plVar22;
  lVar17 = 0x7e2a000;
  if ((bRam0000000007e2a48a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077806f8);
    func_0x03280a18(PTR_DAT_07780700);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0780dd88);
    bRam0000000007e2a48a = 1;
  }
  if (plVar8 == (long *)0x0) {
LAB_06b31074:
    *plVar16 = 0;
    func_0x032809c4(plVar16,0);
    uVar21 = 0;
LAB_06b31088:
    return (ulong)uVar21;
  }
  lVar11 = *plVar8;
  uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_077806f8) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_06b30ed4;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077806f8,0);
LAB_06b30ed4:
  plVar22 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
  puVar25 = PTR_DAT_0780dd88;
  puVar24 = PTR_DAT_07780700;
  puVar6 = PTR_DAT_0774e8e0;
  if (plVar22 == (long *)0x0) {
LAB_06b310a4:
    func_0x03280cac();
    goto LAB_06b310a8;
  }
  do {
    lVar17 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b30f4c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar6,0);
LAB_06b30f4c:
    uVar18 = (*(code *)*puVar7)(plVar22,puVar7[1]);
    if ((uVar18 & 1) == 0) {
      uVar21 = 0;
      iVar23 = 6;
      goto joined_r0x06b31000;
    }
    lVar17 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar24) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b30fa8;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar24,0);
LAB_06b30fa8:
    lVar17 = (*(code *)*puVar7)(plVar22,puVar7[1]);
    if (lVar17 == 0) {
      func_0x03280cac();
      lVar17 = 0;
      goto LAB_06b310a4;
    }
    uVar18 = func_0x055ea870(*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)puVar25,0);
  } while ((uVar18 & 1) == 0);
  *plVar16 = *(long *)(lVar17 + 0x18);
  func_0x032809c4(plVar16);
  uVar21 = 1;
  iVar23 = 5;
joined_r0x06b31000:
  lVar17 = 0;
  do {
    if (plVar22 != (long *)0x0) {
      lVar11 = *plVar22;
      uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b31058;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31058:
      (*(code *)*puVar7)(plVar22,puVar7[1]);
    }
    if (lVar17 == 0) {
      if ((iVar23 == 0) || (iVar23 == 6)) goto LAB_06b31074;
      goto LAB_06b31088;
    }
LAB_06b310a8:
    auVar28 = func_0x03280ca4(lVar17);
    uVar9 = auVar28._0_8_;
    if (auVar28._8_4_ != 1) break;
    plVar8 = (long *)func_0x072ce910(uVar9);
    lVar17 = *plVar8;
    func_0x072ce920();
    iVar23 = 0;
    uVar21 = 0;
  } while( true );
  if (plVar22 != (long *)0x0) {
    lVar17 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_06b31154;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31154:
    (*(code *)*puVar7)(plVar22,puVar7[1]);
  }
  func_0x03365958(uVar9);
  func_0x03280ca4(0);
  uVar18 = func_0x02f09514();
  puVar6 = PTR_DAT_0782f3d0;
  *(undefined8 *)((long)puVar5 + -0x60) = 0x6b31178;
  *(undefined8 *)((long)puVar5 + -0x58) = 0;
  *(long **)((long)puVar5 + -0x50) = plVar22;
  *(long **)((long)puVar5 + -0x48) = plVar16;
  if ((bRam0000000007e2a48b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f3d0);
    bRam0000000007e2a48b = 1;
  }
  *(undefined8 *)(uVar18 + 0x90) = *(undefined8 *)puVar6;
  func_0x032809c4();
  puVar24 = PTR_DAT_07828a38;
  puVar6 = PTR_DAT_07828a30;
  *(undefined8 *)((long)puVar5 + -0x70) = *(undefined8 *)((long)puVar5 + -0x60);
  *(undefined8 *)((long)puVar5 + -0x60) = uVar9;
  *(undefined8 *)((long)puVar5 + -0x58) = *(undefined8 *)((long)puVar5 + -0x58);
  *(undefined8 *)((long)puVar5 + -0x50) = *(undefined8 *)((long)puVar5 + -0x50);
  *(undefined8 *)((long)puVar5 + -0x48) = *(undefined8 *)((long)puVar5 + -0x48);
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x053bfe40(uVar9,*(undefined8 *)puVar24);
  *(undefined8 *)(uVar18 + 0x60) = uVar9;
  func_0x032809c4((undefined8 *)(uVar18 + 0x60),uVar9);
  return uVar18;
}

