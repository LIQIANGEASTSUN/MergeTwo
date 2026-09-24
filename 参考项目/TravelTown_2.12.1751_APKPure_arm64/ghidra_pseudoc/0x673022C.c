/* Ghidra 12.1.2 native pseudocode; RVA 0x673022C; Merger.Game.Views.BoardItem.BoardItemView2.ShowQuestHintAfterLandAnimationEvent; status ok */

/* WARNING: Possible PIC construction at 0x06830524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0683063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06830528) */
/* WARNING: Removing unreachable block (ram,0x06830640) */

void Merger_Game_Views_BoardItem_BoardItemView2__ShowQuestHintAfterLandAnimationEvent
               (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  undefined *puVar21;
  undefined8 *unaff_x22;
  uint uVar22;
  undefined *unaff_x23;
  undefined *puVar23;
  undefined *puVar24;
  undefined *unaff_x24;
  undefined *puVar25;
  undefined *unaff_x25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 auStack_c0 [2];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000007e2897a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2897a = 1;
  }
  plVar20 = *(long **)(param_1 + 0x30);
  if (plVar20 != (long *)0x0) {
    lVar16 = *plVar20;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar7 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x62) * 0x10 + 0x138);
          goto LAB_068302b8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077c1d88,0x62);
LAB_068302b8:
                    /* WARNING: Could not recover jumptable at 0x068302cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar7)(plVar20,0,puVar7[1]);
    return;
  }
  plVar20 = (long *)func_0x03280cac();
  puVar21 = PTR_DAT_0774e4a0;
  uStack_60 = 0x68302d4;
  if ((bRam0000000007e2897b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4a0);
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_0780d780);
    func_0x03280a18(PTR_DAT_0780d788);
    func_0x03280a18(PTR_DAT_0780d790);
    bRam0000000007e2897b = 1;
  }
  if (*(int *)(*(long *)puVar21 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar18 = func_0x06fa07e4(0);
  if ((uVar18 & 1) != 0) {
    return;
  }
  lVar16 = 0x7e28000;
  if (plVar20[0x10] == 0) {
LAB_06830410:
    puVar26 = unaff_x25;
    puVar25 = unaff_x24;
    lVar8 = lVar16;
    func_0x03280cac();
  }
  else {
    func_0x04fe2f04(plVar20[0x10],*(undefined8 *)PTR_DAT_0780d790);
    lVar8 = func_0x03ced324(plVar20,*(undefined8 *)PTR_DAT_0780d780);
    puVar26 = PTR_DAT_0780d788;
    puVar25 = PTR_DAT_0774e930;
    if (lVar8 == 0) goto LAB_06830410;
    uVar15 = *(uint *)(lVar8 + 0x18);
    if ((int)uVar15 < 1) {
      return;
    }
    unaff_x23 = (undefined *)0x0;
    while (uVar22 = (uint)unaff_x23, uVar22 < uVar15) {
      lVar9 = *(long *)(lVar8 + (long)(int)uVar22 * 8 + 0x20);
      lVar16 = lVar8;
      unaff_x24 = puVar25;
      unaff_x25 = puVar26;
      if (lVar9 == 0) goto LAB_06830410;
      puVar21 = (undefined *)plVar20[0x10];
      unaff_x22 = *(undefined8 **)(lVar9 + 0x60);
      lVar9 = func_0x03cec8b4(lVar9,*(undefined8 *)puVar25);
      if (puVar21 == (undefined *)0x0) goto LAB_06830410;
      param_4 = *(long *)puVar26;
      func_0x04fe2d7c(puVar21,unaff_x22);
      uVar15 = *(uint *)(lVar8 + 0x18);
      unaff_x23 = (undefined *)(ulong)(uVar22 + 1);
      param_3 = lVar9;
      if ((int)uVar15 <= (int)(uVar22 + 1)) {
        return;
      }
    }
  }
  auVar29 = func_0x03280cb4();
  puVar7 = auVar29._8_8_;
  plVar11 = auVar29._0_8_;
  uStack_90 = 0x6830418;
  puVar23 = (undefined *)0x7e28000;
  puStack_88 = unaff_x23;
  puStack_80 = unaff_x22;
  puStack_78 = puVar21;
  lStack_70 = lVar8;
  plStack_68 = plVar20;
  if ((bRam0000000007e2897c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d798);
    func_0x03280a18(PTR_DAT_0780d7a0);
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d7b0);
    bRam0000000007e2897c = 1;
  }
  plVar11[6] = (long)puVar7;
  func_0x032809c4(plVar11 + 6,puVar7);
  plVar11[0x11] = param_3;
  func_0x032809c4(plVar11 + 0x11,param_3);
  if (param_4 == 0) {
    param_4 = plVar11[0x15];
  }
  plVar11[0x16] = param_4;
  func_0x032809c4(plVar11 + 0x16,param_4);
  func_0x0678e8a0(plVar11,0,0);
  lVar16 = func_0x069aaf28(plVar11,0);
  if (cRam0000000007e16829 == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e16829 = '\x01';
  }
  if (lVar16 == 0) {
LAB_068305a8:
    uVar27 = 0x68305ac;
    plVar20 = (long *)func_0x03280cac();
SUB_068305ac:
    puVar21 = PTR_DAT_0780d7b8;
    puVar6 = auStack_c0;
    puVar4 = auStack_c0;
    uStack_a8 = 0x7e16000;
    auStack_c0[0] = uVar27;
    lStack_a0 = lVar16;
    if ((bRam0000000007e2897d & 1) == 0) {
      puStack_b0 = puVar7;
      plStack_98 = plVar11;
      func_0x03280a18(PTR_DAT_0780d7b8);
      auVar29._8_8_ = puStack_b0;
      auVar29._0_8_ = plStack_98;
      bRam0000000007e2897d = 1;
    }
    puStack_b0 = auVar29._8_8_;
    plStack_98 = auVar29._0_8_;
    lVar8 = func_0x03ced324(plVar20,*(undefined8 *)puVar21);
    lVar16 = 0x7e28000;
    if (lVar8 == 0) {
LAB_06830664:
      uVar27 = 0x6830668;
      plVar11 = (long *)func_0x03280cac();
      puVar24 = puVar23;
      goto LAB_06830668;
    }
    if (*(int *)(lVar8 + 0x18) < 1) {
      return;
    }
    puVar7 = (undefined8 *)0x0;
    lVar16 = lVar8;
    if (*(int *)(lVar8 + 0x18) == 0) {
      func_0x03280cb4();
      goto LAB_06830664;
    }
    uVar18 = *(ulong *)(lVar8 + 0x20);
    auVar30._8_8_ = uVar18;
    auVar30._0_8_ = plVar20;
    puVar21 = (undefined *)0x0;
    if (uVar18 == 0) goto LAB_06830664;
    puVar13 = (undefined8 *)func_0x057dadc4(uVar18,0);
    uVar14 = 1;
    param_5 = 0;
    uVar27 = 0x6830640;
  }
  else {
    func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar16,0);
    puVar1 = PTR_DAT_0780d7b0;
    puVar24 = PTR_DAT_0780d7a0;
    puVar21 = PTR_DAT_0780d798;
    if ((char)plVar11[0x14] == '\0') {
      uVar27 = 0x6830528;
      plVar20 = plVar11;
      goto SUB_068305ac;
    }
    if (plVar11[0x12] == 0) goto LAB_068305a8;
    uVar27 = func_0x04fe2bac(plVar11[0x12],*(undefined8 *)PTR_DAT_0780d7a8);
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar21);
    func_0x054221d4(uVar10,plVar11,*(undefined8 *)puVar24,0);
    func_0x03e0f058(uVar27,uVar10,*(undefined8 *)puVar1);
    puVar4 = &uStack_60;
    plVar20 = plStack_68;
    lVar16 = lStack_70;
    puVar21 = puStack_78;
    puVar7 = puStack_80;
    puVar24 = puStack_88;
    uVar27 = uStack_90;
LAB_06830668:
    *(undefined8 *)((long)puVar4 + -0x20) = uVar27;
    *(long *)((long)puVar4 + -0x10) = lVar16;
    *(long **)((long)puVar4 + -8) = plVar20;
    if ((bRam0000000007e28981 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0780d7c8);
      bRam0000000007e28981 = 1;
    }
    puVar23 = PTR_DAT_0774e4e0;
    if (*(char *)((long)plVar11 + 0xa1) == '\0') {
      return;
    }
    lVar16 = func_0x03280b88(*(undefined8 *)
                              (*plVar11 +
                               (ulong)*(ushort *)(*(long *)PTR_DAT_0780d7c0 + 0x50) * 0x10 + 0x140))
    ;
    lVar16 = (**(code **)(lVar16 + 8))(plVar11,lVar16);
    if (*(int *)(*(long *)puVar23 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar23);
    }
    uVar18 = func_0x06fdeb74(lVar16,0,0);
    if ((uVar18 & 1) == 0) {
      return;
    }
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x48) != 0)) {
      func_0x0336f398(*(long *)(lVar16 + 0x48),*(undefined8 *)PTR_DAT_0780d7c8,0,0,0,0);
      *(undefined1 *)((long)plVar11 + 0xa1) = 0;
      return;
    }
    plVar12 = (long *)func_0x03280cac();
    puVar5 = (undefined1 *)((long)puVar4 + -0x40);
    *(undefined8 *)((long)puVar4 + -0x40) = 0x6830758;
    *(undefined **)((long)puVar4 + -0x38) = puVar21;
    *(long *)((long)puVar4 + -0x30) = lVar16;
    *(long **)((long)puVar4 + -0x28) = plVar11;
    lVar16 = func_0x069aaf28(plVar12,0);
    uVar27 = 0x7e16000;
    if (cRam0000000007e16829 == '\0') {
      func_0x03280a18(PTR_DAT_077500e8);
      cRam0000000007e16829 = '\x01';
    }
    if (lVar16 == 0) {
      uVar28 = 0x68307cc;
      plVar20 = (long *)func_0x03280cac();
      uVar10 = 0;
    }
    else {
      func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                      *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar16,0)
      ;
      uVar10 = *(undefined8 *)((long)puVar4 + -0x30);
      puVar5 = (undefined1 *)((long)puVar4 + -0x20);
      uVar28 = *(undefined8 *)((long)puVar4 + -0x40);
      uVar27 = *(undefined8 *)((long)puVar4 + -0x38);
      plVar20 = plVar12;
      plVar12 = *(long **)((long)puVar4 + -0x28);
    }
    puVar3 = PTR_DAT_0780d7f0;
    puVar2 = PTR_DAT_0780d7e8;
    puVar23 = PTR_DAT_0780d7e0;
    puVar1 = PTR_DAT_0780d7d8;
    puVar21 = PTR_DAT_0780d7d0;
    puVar6 = (undefined8 *)(puVar5 + -0x40);
    *(undefined8 *)(puVar5 + -0x40) = uVar28;
    *(undefined **)(puVar5 + -0x38) = puVar26;
    *(undefined **)(puVar5 + -0x30) = puVar25;
    *(undefined **)(puVar5 + -0x28) = puVar24;
    *(undefined8 **)(puVar5 + -0x20) = puVar7;
    *(undefined8 *)(puVar5 + -0x18) = uVar27;
    *(undefined8 *)(puVar5 + -0x10) = uVar10;
    *(long **)(puVar5 + -8) = plVar12;
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
    lVar16 = plVar20[0x12];
    uVar27 = func_0x03280ca0(*(undefined8 *)puVar21);
    uVar14 = 0;
    func_0x0534d2a4(uVar27,plVar20,*(undefined8 *)puVar1);
    uVar27 = func_0x03d85c08(lVar16,uVar27,*(undefined8 *)puVar23);
    lVar8 = func_0x03d5afd0(uVar27,*(undefined8 *)puVar2);
    lVar16 = *(long *)puVar3;
    uVar18 = plVar20[0x12];
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c(lVar16);
      lVar16 = *(long *)puVar3;
    }
    puVar21 = PTR_DAT_0780d810;
    puVar7 = *(undefined8 **)(*(long *)(lVar16 + 0xb8) + 8);
    if (puVar7 == (undefined8 *)0x0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c(lVar16);
        lVar16 = *(long *)puVar3;
      }
      puVar23 = (undefined *)**(undefined8 **)(lVar16 + 0xb8);
      puVar7 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
      uVar14 = 0;
      func_0x0541a7c0(puVar7,puVar23,*(undefined8 *)PTR_DAT_0780d818);
      puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *puVar13 = puVar7;
      func_0x032809c4(puVar13,puVar7);
    }
    puVar13 = *(undefined8 **)puVar21;
    func_0x03e0ea40(uVar18,puVar7);
    if (lVar8 != 0) {
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar18 = 0;
        uVar17 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        puVar7 = (undefined8 *)(lVar8 + 0x28);
        do {
          if (uVar17 <= uVar18) {
            func_0x03280cb4();
            goto LAB_068309cc;
          }
          puVar13 = (undefined8 *)puVar7[-1];
          uVar14 = 0;
          func_0x06830d14(plVar20,*puVar7);
          uVar17 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar18 = uVar18 + 1;
          puVar7 = puVar7 + 2;
        } while ((long)uVar18 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      return;
    }
LAB_068309cc:
    uVar27 = 0x68309d0;
    auVar30 = func_0x03280cac();
    puVar25 = puVar3;
  }
  plVar11 = auVar30._8_8_;
  lVar16 = auVar30._0_8_;
  *(undefined8 *)((long)puVar6 + -0x40) = uVar27;
  *(undefined **)((long)puVar6 + -0x30) = puVar25;
  *(undefined **)((long)puVar6 + -0x28) = puVar23;
  *(undefined8 **)((long)puVar6 + -0x20) = puVar7;
  *(ulong *)((long)puVar6 + -0x18) = uVar18;
  *(long *)((long)puVar6 + -0x10) = lVar8;
  *(long **)((long)puVar6 + -8) = plVar20;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(lVar16 + 0x90) != 0) {
    func_0x04fe2d7c(*(long *)(lVar16 + 0x90),puVar13,plVar11,*(undefined8 *)PTR_DAT_0780d820);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(lVar16 + 0x98) == 0) goto LAB_06830b04;
      func_0x053c1024(*(long *)(lVar16 + 0x98),puVar13,*(undefined8 *)PTR_DAT_0776d970);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar27 = *(undefined8 *)(lVar16 + 0x30);
      uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(plVar11,uVar27,lVar16,puVar7[1]);
      return;
    }
  }
LAB_06830b04:
  lVar16 = func_0x03280cac();
  *(undefined8 *)((long)puVar6 + -0x70) = 0x6830b08;
  *(ulong *)((long)puVar6 + -0x68) = uVar14 & 0xffffffff;
  *(undefined8 **)((long)puVar6 + -0x60) = puVar13;
  *(ulong *)((long)puVar6 + -0x58) = param_5 & 0xffffffff;
  *(undefined1 (*) [16])((long)puVar6 + -0x50) = auVar30;
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
  if ((*(long *)(lVar16 + 0x90) != 0) &&
     (lVar8 = func_0x04fe2bac(*(long *)(lVar16 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar26 = PTR_DAT_0780d838, puVar25 = PTR_DAT_0780d830, puVar21 = PTR_DAT_0780d828, lVar8 != 0)
     ) {
    func_0x04816768((undefined1 *)((long)puVar6 + -0xa8),lVar8,*(undefined8 *)PTR_DAT_0780d848);
    *(undefined8 *)((long)puVar6 + -0x88) = *(undefined8 *)((long)puVar6 + -0xa0);
    *(undefined8 *)((long)puVar6 + -0x90) = *(undefined8 *)((long)puVar6 + -0xa8);
    *(undefined8 *)((long)puVar6 + -0x80) = *(undefined8 *)((long)puVar6 + -0x98);
    while( true ) {
      uVar18 = func_0x05160714((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar26);
      if ((uVar18 & 1) == 0) {
        func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar25);
        goto LAB_06830c6c;
      }
      plVar20 = *(long **)((long)puVar6 + -0x80);
      if (plVar20 == (long *)0x0) break;
      lVar8 = *plVar20;
      uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar21) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar21,4);
LAB_06830c40:
      uVar18 = (*(code *)*puVar7)(plVar20,puVar7[1]);
      if ((uVar18 & 1) != 0) {
        func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*(undefined8 *)puVar25);
        return;
      }
    }
    func_0x03280cac();
    puVar13 = (undefined8 *)puVar25;
  }
  auVar31 = func_0x03280cac();
  if (auVar31._8_4_ == 1) {
    plVar20 = (long *)func_0x072ce910(auVar31._0_8_);
    lVar8 = *plVar20;
    func_0x072ce920();
    func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*puVar13);
    if (lVar8 == 0) {
LAB_06830c6c:
      func_0x0678ebfc(lVar16,0);
      return;
    }
    func_0x03280ca4(lVar8);
  }
  func_0x05160710((undefined1 *)((long)puVar6 + -0x90),*puVar13);
  func_0x03365958(auVar31._0_8_);
  func_0x03280ca4(0);
  lVar16 = func_0x02f09514();
  *(undefined1 *)(lVar16 + 0xa1) = 1;
  return;
}

