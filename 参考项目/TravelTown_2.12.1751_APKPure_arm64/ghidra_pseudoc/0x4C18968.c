/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18968; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>.GetContainer; status ok */


/* WARNING: Possible PIC construction at 0x06830524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0683063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06830528) */
/* WARNING: Removing unreachable block (ram,0x06830640) */

long * Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel___GetContainer
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  undefined *puVar20;
  long *unaff_x22;
  uint uVar21;
  undefined *unaff_x23;
  undefined *puVar22;
  undefined *puVar23;
  undefined *unaff_x24;
  undefined *puVar24;
  undefined *unaff_x25;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 auStack_f0 [2];
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *aplStack_28 [2];
  
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    func_0x03280cac();
    return (long *)0x0;
  }
  lVar13 = 0;
  if ((bRam0000000007e28983 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d778);
    bRam0000000007e28983 = 1;
  }
  aplStack_28[0] = (long *)0x0;
  lVar7 = *(long *)(lVar7 + 0x80);
  if (lVar7 != 0) {
    func_0x04fe48b0(lVar7,param_2,aplStack_28,*(undefined8 *)PTR_DAT_0780d778);
    return aplStack_28[0];
  }
  lVar7 = func_0x03280cac();
  if ((bRam0000000007e2897a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2897a = 1;
  }
  plVar19 = *(long **)(lVar7 + 0x30);
  if (plVar19 != (long *)0x0) {
    lVar7 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar18 + 0x62) * 0x10 + 0x138);
          goto LAB_068302b8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_077c1d88,0x62);
LAB_068302b8:
                    /* WARNING: Could not recover jumptable at 0x068302cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar19 = (long *)(*(code *)*puVar8)(plVar19,0,puVar8[1]);
    return plVar19;
  }
  plVar19 = (long *)func_0x03280cac();
  puVar20 = PTR_DAT_0774e4a0;
  uStack_90 = 0x68302d4;
  if ((bRam0000000007e2897b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4a0);
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_0780d780);
    func_0x03280a18(PTR_DAT_0780d788);
    func_0x03280a18(PTR_DAT_0780d790);
    bRam0000000007e2897b = 1;
  }
  if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar9 = (long *)func_0x06fa07e4(0);
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  plVar9 = (long *)0x7e28000;
  if (plVar19[0x10] == 0) {
LAB_06830410:
    puVar25 = unaff_x25;
    puVar24 = unaff_x24;
    plVar10 = plVar9;
    func_0x03280cac();
  }
  else {
    func_0x04fe2f04(plVar19[0x10],*(undefined8 *)PTR_DAT_0780d790);
    plVar10 = (long *)func_0x03ced324(plVar19,*(undefined8 *)PTR_DAT_0780d780);
    puVar25 = PTR_DAT_0780d788;
    puVar24 = PTR_DAT_0774e930;
    if (plVar10 == (long *)0x0) goto LAB_06830410;
    uVar15 = *(uint *)(plVar10 + 3);
    if ((int)uVar15 < 1) {
      return plVar10;
    }
    unaff_x23 = (undefined *)0x0;
    while (uVar21 = (uint)unaff_x23, uVar21 < uVar15) {
      lVar7 = plVar10[(long)(int)uVar21 + 4];
      plVar9 = plVar10;
      unaff_x24 = puVar24;
      unaff_x25 = puVar25;
      if (lVar7 == 0) goto LAB_06830410;
      puVar20 = (undefined *)plVar19[0x10];
      unaff_x22 = *(long **)(lVar7 + 0x60);
      lVar7 = func_0x03cec8b4(lVar7,*(undefined8 *)puVar24);
      if (puVar20 == (undefined *)0x0) goto LAB_06830410;
      param_4 = *(long *)puVar25;
      plVar9 = (long *)func_0x04fe2d7c(puVar20,unaff_x22);
      uVar15 = *(uint *)(plVar10 + 3);
      unaff_x23 = (undefined *)(ulong)(uVar21 + 1);
      lVar13 = lVar7;
      if ((int)uVar15 <= (int)(uVar21 + 1)) {
        return plVar9;
      }
    }
  }
  auVar28 = func_0x03280cb4();
  plVar9 = auVar28._8_8_;
  plVar12 = auVar28._0_8_;
  uStack_c0 = 0x6830418;
  puVar22 = (undefined *)0x7e28000;
  puStack_b8 = unaff_x23;
  plStack_b0 = unaff_x22;
  puStack_a8 = puVar20;
  plStack_a0 = plVar10;
  plStack_98 = plVar19;
  if ((bRam0000000007e2897c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d798);
    func_0x03280a18(PTR_DAT_0780d7a0);
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d7b0);
    bRam0000000007e2897c = 1;
  }
  plVar12[6] = (long)plVar9;
  func_0x032809c4(plVar12 + 6,plVar9);
  plVar12[0x11] = lVar13;
  func_0x032809c4(plVar12 + 0x11,lVar13);
  if (param_4 == 0) {
    param_4 = plVar12[0x15];
  }
  plVar12[0x16] = param_4;
  func_0x032809c4(plVar12 + 0x16,param_4);
  func_0x0678e8a0(plVar12,0,0);
  lVar7 = func_0x069aaf28(plVar12,0);
  if (cRam0000000007e16829 == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e16829 = '\x01';
  }
  if (lVar7 == 0) {
LAB_068305a8:
    uVar26 = 0x68305ac;
    plVar19 = (long *)func_0x03280cac();
SUB_068305ac:
    puVar20 = PTR_DAT_0780d7b8;
    puVar6 = auStack_f0;
    puVar4 = auStack_f0;
    uStack_d8 = 0x7e16000;
    auStack_f0[0] = uVar26;
    lStack_d0 = lVar7;
    if ((bRam0000000007e2897d & 1) == 0) {
      plStack_e0 = plVar9;
      plStack_c8 = plVar12;
      func_0x03280a18(PTR_DAT_0780d7b8);
      auVar28._8_8_ = plStack_e0;
      auVar28._0_8_ = plStack_c8;
      bRam0000000007e2897d = 1;
    }
    plStack_e0 = auVar28._8_8_;
    plStack_c8 = auVar28._0_8_;
    plVar12 = (long *)func_0x03ced324(plVar19,*(undefined8 *)puVar20);
    plVar10 = (long *)0x7e28000;
    if (plVar12 == (long *)0x0) {
LAB_06830664:
      uVar26 = 0x6830668;
      plVar12 = (long *)func_0x03280cac();
      puVar23 = puVar22;
      goto LAB_06830668;
    }
    if ((int)plVar12[3] < 1) {
      return plVar12;
    }
    plVar9 = (long *)0x0;
    plVar10 = plVar12;
    if ((int)plVar12[3] == 0) {
      func_0x03280cb4();
      goto LAB_06830664;
    }
    uVar17 = plVar12[4];
    auVar29._8_8_ = uVar17;
    auVar29._0_8_ = plVar19;
    puVar20 = (undefined *)0x0;
    if (uVar17 == 0) goto LAB_06830664;
    puVar8 = (undefined8 *)func_0x057dadc4(uVar17,0);
    uVar14 = 1;
    param_5 = 0;
    uVar26 = 0x6830640;
  }
  else {
    func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar7,0);
    puVar1 = PTR_DAT_0780d7b0;
    puVar23 = PTR_DAT_0780d7a0;
    puVar20 = PTR_DAT_0780d798;
    if ((char)plVar12[0x14] == '\0') {
      uVar26 = 0x6830528;
      plVar19 = plVar12;
      goto SUB_068305ac;
    }
    if (plVar12[0x12] == 0) goto LAB_068305a8;
    uVar26 = func_0x04fe2bac(plVar12[0x12],*(undefined8 *)PTR_DAT_0780d7a8);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar20);
    func_0x054221d4(uVar11,plVar12,*(undefined8 *)puVar23,0);
    func_0x03e0f058(uVar26,uVar11,*(undefined8 *)puVar1);
    puVar4 = &uStack_90;
    plVar19 = plStack_98;
    plVar10 = plStack_a0;
    puVar20 = puStack_a8;
    plVar9 = plStack_b0;
    puVar23 = puStack_b8;
    uVar26 = uStack_c0;
LAB_06830668:
    *(undefined8 *)((long)puVar4 + -0x20) = uVar26;
    *(long **)((long)puVar4 + -0x10) = plVar10;
    *(long **)((long)puVar4 + -8) = plVar19;
    plVar19 = plVar12;
    if ((bRam0000000007e28981 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      plVar19 = (long *)func_0x03280a18(PTR_DAT_0780d7c8);
      bRam0000000007e28981 = 1;
    }
    puVar22 = PTR_DAT_0774e4e0;
    if (*(char *)((long)plVar12 + 0xa1) == '\0') {
      return plVar19;
    }
    lVar7 = func_0x03280b88(*(undefined8 *)
                             (*plVar12 + (ulong)*(ushort *)(*(long *)PTR_DAT_0780d7c0 + 0x50) * 0x10
                             + 0x140));
    lVar7 = (**(code **)(lVar7 + 8))(plVar12,lVar7);
    if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar22);
    }
    plVar19 = (long *)func_0x06fdeb74(lVar7,0,0);
    if (((ulong)plVar19 & 1) == 0) {
      return plVar19;
    }
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x48) != 0)) {
      plVar19 = (long *)func_0x0336f398(*(long *)(lVar7 + 0x48),*(undefined8 *)PTR_DAT_0780d7c8,0,0,
                                        0,0);
      *(undefined1 *)((long)plVar12 + 0xa1) = 0;
      return plVar19;
    }
    plVar10 = (long *)func_0x03280cac();
    puVar5 = (undefined1 *)((long)puVar4 + -0x40);
    *(undefined8 *)((long)puVar4 + -0x40) = 0x6830758;
    *(undefined **)((long)puVar4 + -0x38) = puVar20;
    *(long *)((long)puVar4 + -0x30) = lVar7;
    *(long **)((long)puVar4 + -0x28) = plVar12;
    lVar7 = func_0x069aaf28(plVar10,0);
    uVar26 = 0x7e16000;
    if (cRam0000000007e16829 == '\0') {
      func_0x03280a18(PTR_DAT_077500e8);
      cRam0000000007e16829 = '\x01';
    }
    if (lVar7 == 0) {
      uVar27 = 0x68307cc;
      plVar19 = (long *)func_0x03280cac();
      uVar11 = 0;
    }
    else {
      func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                      *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar7,0);
      uVar11 = *(undefined8 *)((long)puVar4 + -0x30);
      puVar5 = (undefined1 *)((long)puVar4 + -0x20);
      uVar27 = *(undefined8 *)((long)puVar4 + -0x40);
      uVar26 = *(undefined8 *)((long)puVar4 + -0x38);
      plVar19 = plVar10;
      plVar10 = *(long **)((long)puVar4 + -0x28);
    }
    puVar3 = PTR_DAT_0780d7f0;
    puVar2 = PTR_DAT_0780d7e8;
    puVar22 = PTR_DAT_0780d7e0;
    puVar1 = PTR_DAT_0780d7d8;
    puVar20 = PTR_DAT_0780d7d0;
    puVar6 = (undefined8 *)(puVar5 + -0x40);
    *(undefined8 *)(puVar5 + -0x40) = uVar27;
    *(undefined **)(puVar5 + -0x38) = puVar25;
    *(undefined **)(puVar5 + -0x30) = puVar24;
    *(undefined **)(puVar5 + -0x28) = puVar23;
    *(long **)(puVar5 + -0x20) = plVar9;
    *(undefined8 *)(puVar5 + -0x18) = uVar26;
    *(undefined8 *)(puVar5 + -0x10) = uVar11;
    *(long **)(puVar5 + -8) = plVar10;
    if ((bRam0000000007e28982 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7f8);
      func_0x03280a18(PTR_DAT_0780d7d8);
      func_0x03280a18(PTR_DAT_0780d7e8);
      func_0x03280a18(PTR_DAT_0780d7e0);
      func_0x03280a18(PTR_DAT_0780d7d0);
      func_0x03280a18(PTR_DAT_0780d800);
      func_0x03280a18(PTR_DAT_0780d808);
      func_0x03280a18(PTR_DAT_0780d810);
      func_0x03280a18(PTR_DAT_0780d818);
      func_0x03280a18(PTR_DAT_0780d7f0);
      bRam0000000007e28982 = 1;
    }
    lVar7 = plVar19[0x12];
    uVar26 = func_0x03280ca0(*(undefined8 *)puVar20);
    uVar14 = 0;
    func_0x0534d2a4(uVar26,plVar19,*(undefined8 *)puVar1);
    uVar26 = func_0x03d85c08(lVar7,uVar26,*(undefined8 *)puVar22);
    plVar12 = (long *)func_0x03d5afd0(uVar26,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar3;
    uVar17 = plVar19[0x12];
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)puVar3;
    }
    puVar20 = PTR_DAT_0780d810;
    plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
    if (plVar9 == (long *)0x0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c(lVar7);
        lVar7 = *(long *)puVar3;
      }
      puVar22 = (undefined *)**(undefined8 **)(lVar7 + 0xb8);
      plVar9 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
      uVar14 = 0;
      func_0x0541a7c0(plVar9,puVar22,*(undefined8 *)PTR_DAT_0780d818);
      puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *puVar8 = plVar9;
      func_0x032809c4(puVar8,plVar9);
    }
    puVar8 = *(undefined8 **)puVar20;
    plVar10 = (long *)func_0x03e0ea40(uVar17,plVar9);
    if (plVar12 != (long *)0x0) {
      if (0 < (int)plVar12[3]) {
        uVar17 = 0;
        uVar16 = plVar12[3] & 0xffffffff;
        plVar9 = plVar12 + 5;
        do {
          if (uVar16 <= uVar17) {
            func_0x03280cb4();
            goto LAB_068309cc;
          }
          puVar8 = (undefined8 *)plVar9[-1];
          uVar14 = 0;
          plVar10 = (long *)func_0x06830d14(plVar19,*plVar9);
          uVar16 = (ulong)*(uint *)(plVar12 + 3);
          uVar17 = uVar17 + 1;
          plVar9 = plVar9 + 2;
        } while ((long)uVar17 < (long)(int)*(uint *)(plVar12 + 3));
      }
      return plVar10;
    }
LAB_068309cc:
    uVar26 = 0x68309d0;
    auVar29 = func_0x03280cac();
    puVar24 = puVar3;
  }
  plVar10 = auVar29._8_8_;
  lVar7 = auVar29._0_8_;
  *(undefined8 *)((long)puVar6 + -0x40) = uVar26;
  *(undefined **)((long)puVar6 + -0x30) = puVar24;
  *(undefined **)((long)puVar6 + -0x28) = puVar22;
  *(long **)((long)puVar6 + -0x20) = plVar9;
  *(ulong *)((long)puVar6 + -0x18) = uVar17;
  *(long **)((long)puVar6 + -0x10) = plVar12;
  *(long **)((long)puVar6 + -8) = plVar19;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(lVar7 + 0x90) != 0) {
    plVar19 = (long *)func_0x04fe2d7c(*(long *)(lVar7 + 0x90),puVar8,plVar10,
                                      *(undefined8 *)PTR_DAT_0780d820);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(lVar7 + 0x98) == 0) goto LAB_06830b04;
      plVar19 = (long *)func_0x053c1024(*(long *)(lVar7 + 0x98),puVar8,
                                        *(undefined8 *)PTR_DAT_0776d970);
    }
    if ((param_5 & 1) == 0) {
      return plVar19;
    }
    if (plVar10 != (long *)0x0) {
      lVar13 = *plVar10;
      uVar26 = *(undefined8 *)(lVar7 + 0x30);
      uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar19 = (long *)(*(code *)*puVar8)(plVar10,uVar26,lVar7,puVar8[1]);
      return plVar19;
    }
  }
LAB_06830b04:
  lVar7 = func_0x03280cac();
  *(undefined8 *)((long)puVar6 + -0x70) = 0x6830b08;
  *(ulong *)((long)puVar6 + -0x68) = uVar14 & 0xffffffff;
  *(undefined8 **)((long)puVar6 + -0x60) = puVar8;
  *(ulong *)((long)puVar6 + -0x58) = param_5 & 0xffffffff;
  *(undefined1 (*) [16])((long)puVar6 + -0x50) = auVar29;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  *(undefined8 *)((long)puVar6 + -0x90) = 0;
  *(undefined8 *)((long)puVar6 + -0x88) = 0;
  *(undefined8 *)((long)puVar6 + -0x80) = 0;
  if ((*(long *)(lVar7 + 0x90) != 0) &&
     (lVar13 = func_0x04fe2bac(*(long *)(lVar7 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar25 = PTR_DAT_0780d838, puVar24 = PTR_DAT_0780d830, puVar20 = PTR_DAT_0780d828, lVar13 != 0
     )) {
    func_0x04816768((undefined1 *)((long)puVar6 + -0xa8),lVar13,*(undefined8 *)PTR_DAT_0780d848);
    *(undefined8 *)((long)puVar6 + -0x88) = *(undefined8 *)((long)puVar6 + -0xa0);
    *(undefined8 *)((long)puVar6 + -0x90) = *(undefined8 *)((long)puVar6 + -0xa8);
    *(undefined8 *)((long)puVar6 + -0x80) = *(undefined8 *)((long)puVar6 + -0x98);
    while( true ) {
      uVar17 = func_0x05160714((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar25);
      if ((uVar17 & 1) == 0) {
        func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar24);
        goto LAB_06830c6c;
      }
      plVar19 = *(long **)((long)puVar6 + -0x80);
      if (plVar19 == (long *)0x0) break;
      lVar13 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar20) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar20,4);
LAB_06830c40:
      uVar17 = (*(code *)*puVar8)(plVar19,puVar8[1]);
      if ((uVar17 & 1) != 0) {
        plVar19 = (long *)func_0x05160710((undefined1 *)((long)puVar6 + -0x90),
                                          *(undefined8 *)puVar24);
        return plVar19;
      }
    }
    func_0x03280cac();
    puVar8 = (undefined8 *)puVar24;
  }
  auVar30 = func_0x03280cac();
  if (auVar30._8_4_ == 1) {
    plVar19 = (long *)func_0x072ce910(auVar30._0_8_);
    lVar13 = *plVar19;
    func_0x072ce920();
    func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*puVar8);
    if (lVar13 == 0) {
LAB_06830c6c:
      plVar19 = (long *)func_0x0678ebfc(lVar7,0);
      return plVar19;
    }
    func_0x03280ca4(lVar13);
  }
  func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*puVar8);
  func_0x03365958(auVar30._0_8_);
  func_0x03280ca4(0);
  plVar19 = (long *)func_0x02f09514();
  *(undefined1 *)((long)plVar19 + 0xa1) = 1;
  return plVar19;
}

