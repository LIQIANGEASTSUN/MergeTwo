/* Ghidra 12.1.2 native pseudocode; RVA 0x67301BC; Merger.Game.Views.BoardItem.BoardItemView2.GetContainer; status ok */

long * Merger_Game_Views_BoardItem_BoardItemView2__GetContainer
                 (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code **ppcVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined *puVar19;
  uint uVar20;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar21;
  undefined *puVar22;
  undefined *unaff_x24;
  undefined *puVar23;
  undefined *unaff_x25;
  undefined *puVar24;
  code *pcVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  code *apcStack_f0 [2];
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long lStack_98;
  code *pcStack_90;
  long *plStack_28;
  
  if ((bRam0000000007e28983 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d778);
    bRam0000000007e28983 = 1;
  }
  plStack_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x04fe48b0(*(long *)(param_1 + 0x80),param_2,&plStack_28,*(undefined8 *)PTR_DAT_0780d778);
    return plStack_28;
  }
  lVar6 = func_0x03280cac();
  if ((bRam0000000007e2897a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2897a = 1;
  }
  plVar18 = *(long **)(lVar6 + 0x30);
  if (plVar18 != (long *)0x0) {
    lVar6 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar17 + 0x62) * 0x10 + 0x138);
          goto LAB_068302b8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077c1d88,0x62);
LAB_068302b8:
                    /* WARNING: Could not recover jumptable at 0x068302cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar18 = (long *)(*(code *)*puVar7)(plVar18,0,puVar7[1]);
    return plVar18;
  }
  lVar6 = func_0x03280cac();
  puVar19 = PTR_DAT_0774e4a0;
  pcStack_90 = Merger_Game_Views_BoardItem_BoardItemView2__OnValidate;
  if ((bRam0000000007e2897b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4a0);
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_0780d780);
    func_0x03280a18(PTR_DAT_0780d788);
    func_0x03280a18(PTR_DAT_0780d790);
    bRam0000000007e2897b = 1;
  }
  if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar18 = (long *)func_0x06fa07e4(0);
  if (((ulong)plVar18 & 1) != 0) {
    return plVar18;
  }
  plVar18 = (long *)0x7e28000;
  if (*(long *)(lVar6 + 0x80) == 0) {
LAB_06830410:
    puVar24 = unaff_x25;
    puVar23 = unaff_x24;
    plVar8 = plVar18;
    func_0x03280cac();
  }
  else {
    func_0x04fe2f04(*(long *)(lVar6 + 0x80),*(undefined8 *)PTR_DAT_0780d790);
    plVar8 = (long *)func_0x03ced324(lVar6,*(undefined8 *)PTR_DAT_0780d780);
    puVar24 = PTR_DAT_0780d788;
    puVar23 = PTR_DAT_0774e930;
    if (plVar8 == (long *)0x0) goto LAB_06830410;
    uVar13 = *(uint *)(plVar8 + 3);
    if ((int)uVar13 < 1) {
      return plVar8;
    }
    unaff_x23 = 0;
    while (uVar20 = (uint)unaff_x23, uVar20 < uVar13) {
      lVar9 = plVar8[(long)(int)uVar20 + 4];
      plVar18 = plVar8;
      unaff_x24 = puVar23;
      unaff_x25 = puVar24;
      if (lVar9 == 0) goto LAB_06830410;
      puVar19 = *(undefined **)(lVar6 + 0x80);
      unaff_x22 = *(ulong *)(lVar9 + 0x60);
      lVar9 = func_0x03cec8b4(lVar9,*(undefined8 *)puVar23);
      if (puVar19 == (undefined *)0x0) goto LAB_06830410;
      param_4 = *(long *)puVar24;
      plVar18 = (long *)func_0x04fe2d7c(puVar19,unaff_x22);
      uVar13 = *(uint *)(plVar8 + 3);
      unaff_x23 = (ulong)(uVar20 + 1);
      param_3 = lVar9;
      if ((int)uVar13 <= (int)(uVar20 + 1)) {
        return plVar18;
      }
    }
  }
  auVar26 = func_0x03280cb4();
  uVar16 = auVar26._8_8_;
  plVar18 = auVar26._0_8_;
  pcStack_c0 = Merger_Game_Views_BoardItem_BoardItemView2__Initialise;
  uVar21 = 0x7e28000;
  uStack_b8 = unaff_x23;
  uStack_b0 = unaff_x22;
  puStack_a8 = puVar19;
  plStack_a0 = plVar8;
  lStack_98 = lVar6;
  if ((bRam0000000007e2897c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d798);
    func_0x03280a18(PTR_DAT_0780d7a0);
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d7b0);
    bRam0000000007e2897c = 1;
  }
  plVar18[6] = uVar16;
  func_0x032809c4(plVar18 + 6,uVar16);
  plVar18[0x11] = param_3;
  func_0x032809c4(plVar18 + 0x11,param_3);
  if (param_4 == 0) {
    param_4 = plVar18[0x15];
  }
  plVar18[0x16] = param_4;
  func_0x032809c4(plVar18 + 0x16,param_4);
  func_0x0678e8a0(plVar18,0,0);
  lVar6 = func_0x069aaf28(plVar18,0);
  if (cRam0000000007e16829 == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e16829 = '\x01';
  }
  if (lVar6 == 0) {
LAB_068305a8:
    lVar9 = func_0x03280cac();
    puVar19 = PTR_DAT_0780d7b8;
    ppcVar4 = apcStack_f0;
    apcStack_f0[0] =
         Merger_Game_Views_BoardItem_BoardItemView2__RegisterExistingBoardItemViewBehaviours;
    uStack_d8 = 0x7e16000;
    lStack_d0 = lVar6;
    if ((bRam0000000007e2897d & 1) == 0) {
      uStack_e0 = uVar16;
      plStack_c8 = plVar18;
      func_0x03280a18(PTR_DAT_0780d7b8);
      auVar26._8_8_ = uStack_e0;
      auVar26._0_8_ = plStack_c8;
      bRam0000000007e2897d = 1;
    }
    uStack_e0 = auVar26._8_8_;
    plStack_c8 = auVar26._0_8_;
    plVar18 = (long *)func_0x03ced324(lVar9,*(undefined8 *)puVar19);
    plVar8 = (long *)0x7e28000;
    if (plVar18 != (long *)0x0) {
      uVar13 = *(uint *)(plVar18 + 3);
      plVar8 = plVar18;
      if (0 < (int)uVar13) {
        uVar16 = 0;
        do {
          uVar20 = (uint)uVar16;
          plVar8 = plVar18;
          if (uVar13 <= uVar20) {
            func_0x03280cb4();
            goto LAB_06830664;
          }
          puVar19 = (undefined *)plVar18[(long)(int)uVar20 + 4];
          if (puVar19 == (undefined *)0x0) goto LAB_06830664;
          uVar10 = func_0x057dadc4(puVar19,0);
          param_5 = 0;
          plVar8 = (long *)Merger_Game_Views_BoardItem_BoardItemView2__RegisterBehaviour
                                     (lVar9,puVar19,uVar10,1);
          uVar13 = *(uint *)(plVar18 + 3);
          uVar16 = (ulong)(uVar20 + 1);
        } while ((int)(uVar20 + 1) < (int)uVar13);
      }
      return plVar8;
    }
LAB_06830664:
    pcVar25 = Merger_Game_Views_BoardItem_BoardItemView2__TryResetAnimation;
    plVar18 = (long *)func_0x03280cac();
  }
  else {
    func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar6,0);
    if ((char)plVar18[0x14] == '\0') {
      Merger_Game_Views_BoardItem_BoardItemView2__RegisterExistingBoardItemViewBehaviours(plVar18);
      *(undefined1 *)(plVar18 + 0x14) = 1;
    }
    puVar22 = PTR_DAT_0780d7b0;
    puVar1 = PTR_DAT_0780d7a0;
    puVar19 = PTR_DAT_0780d798;
    if (plVar18[0x12] == 0) goto LAB_068305a8;
    uVar10 = func_0x04fe2bac(plVar18[0x12],*(undefined8 *)PTR_DAT_0780d7a8);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar19);
    func_0x054221d4(uVar11,plVar18,*(undefined8 *)puVar1,0);
    func_0x03e0f058(uVar10,uVar11,*(undefined8 *)puVar22);
    ppcVar4 = &pcStack_90;
    lVar9 = lStack_98;
    plVar8 = plStack_a0;
    puVar19 = puStack_a8;
    uVar16 = uStack_b0;
    uVar21 = uStack_b8;
    pcVar25 = pcStack_c0;
  }
  *(code **)((long)ppcVar4 + -0x20) = pcVar25;
  *(long **)((long)ppcVar4 + -0x10) = plVar8;
  *(long *)((long)ppcVar4 + -8) = lVar9;
  plVar8 = plVar18;
  if ((bRam0000000007e28981 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7c0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    plVar8 = (long *)func_0x03280a18(PTR_DAT_0780d7c8);
    bRam0000000007e28981 = 1;
  }
  puVar1 = PTR_DAT_0774e4e0;
  if (*(char *)((long)plVar18 + 0xa1) == '\0') {
    return plVar8;
  }
  lVar6 = func_0x03280b88(*(undefined8 *)
                           (*plVar18 + (ulong)*(ushort *)(*(long *)PTR_DAT_0780d7c0 + 0x50) * 0x10 +
                           0x140));
  lVar6 = (**(code **)(lVar6 + 8))(plVar18,lVar6);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar1);
  }
  plVar8 = (long *)func_0x06fdeb74(lVar6,0,0);
  if (((ulong)plVar8 & 1) == 0) {
    return plVar8;
  }
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x48) != 0)) {
    plVar8 = (long *)func_0x0336f398(*(long *)(lVar6 + 0x48),*(undefined8 *)PTR_DAT_0780d7c8,0,0,0,0
                                    );
    *(undefined1 *)((long)plVar18 + 0xa1) = 0;
    return plVar8;
  }
  lVar9 = func_0x03280cac();
  puVar5 = (undefined1 *)((long)ppcVar4 + -0x40);
  *(code **)((long)ppcVar4 + -0x40) = Merger_Game_Views_BoardItem_BoardItemView2__Dispose;
  *(undefined **)((long)ppcVar4 + -0x38) = puVar19;
  *(long *)((long)ppcVar4 + -0x30) = lVar6;
  *(long **)((long)ppcVar4 + -0x28) = plVar18;
  lVar6 = func_0x069aaf28(lVar9,0);
  uVar10 = 0x7e16000;
  if (cRam0000000007e16829 == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e16829 = '\x01';
  }
  if (lVar6 == 0) {
    pcVar25 = Merger_Game_Views_BoardItem_BoardItemView2__WipeBehaviours;
    lVar6 = func_0x03280cac();
    uVar11 = 0;
  }
  else {
    func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar6,0);
    uVar11 = *(undefined8 *)((long)ppcVar4 + -0x30);
    puVar5 = (undefined1 *)((long)ppcVar4 + -0x20);
    pcVar25 = *(code **)((long)ppcVar4 + -0x40);
    uVar10 = *(undefined8 *)((long)ppcVar4 + -0x38);
    lVar6 = lVar9;
    lVar9 = *(long *)((long)ppcVar4 + -0x28);
  }
  puVar3 = PTR_DAT_0780d7f0;
  puVar2 = PTR_DAT_0780d7e8;
  puVar22 = PTR_DAT_0780d7e0;
  puVar1 = PTR_DAT_0780d7d8;
  puVar19 = PTR_DAT_0780d7d0;
  *(code **)(puVar5 + -0x40) = pcVar25;
  *(undefined **)(puVar5 + -0x38) = puVar24;
  *(undefined **)(puVar5 + -0x30) = puVar23;
  *(ulong *)(puVar5 + -0x28) = uVar21;
  *(ulong *)(puVar5 + -0x20) = uVar16;
  *(undefined8 *)(puVar5 + -0x18) = uVar10;
  *(undefined8 *)(puVar5 + -0x10) = uVar11;
  *(long *)(puVar5 + -8) = lVar9;
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
  uVar11 = *(undefined8 *)(lVar6 + 0x90);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar19);
  uVar21 = 0;
  func_0x0534d2a4(uVar10,lVar6,*(undefined8 *)puVar1);
  uVar10 = func_0x03d85c08(uVar11,uVar10,*(undefined8 *)puVar22);
  lVar9 = func_0x03d5afd0(uVar10,*(undefined8 *)puVar2);
  lVar14 = *(long *)puVar3;
  uVar16 = *(ulong *)(lVar6 + 0x90);
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c(lVar14);
    lVar14 = *(long *)puVar3;
  }
  puVar19 = PTR_DAT_0780d810;
  puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0xb8) + 8);
  if (puVar7 == (undefined8 *)0x0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c(lVar14);
      lVar14 = *(long *)puVar3;
    }
    puVar22 = (undefined *)**(undefined8 **)(lVar14 + 0xb8);
    puVar7 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
    uVar21 = 0;
    func_0x0541a7c0(puVar7,puVar22,*(undefined8 *)PTR_DAT_0780d818);
    puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *puVar12 = puVar7;
    func_0x032809c4(puVar12,puVar7);
  }
  puVar12 = *(undefined8 **)puVar19;
  plVar18 = (long *)func_0x03e0ea40(uVar16,puVar7);
  if (lVar9 != 0) {
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar16 = 0;
      uVar15 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)(lVar9 + 0x28);
      do {
        if (uVar15 <= uVar16) {
          func_0x03280cb4();
          goto LAB_068309cc;
        }
        puVar12 = (undefined8 *)puVar7[-1];
        uVar21 = 0;
        plVar18 = (long *)Merger_Game_Views_BoardItem_BoardItemView2__RemoveBehaviour(lVar6,*puVar7)
        ;
        uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar16 = uVar16 + 1;
        puVar7 = puVar7 + 2;
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    return plVar18;
  }
LAB_068309cc:
  auVar26 = func_0x03280cac();
  plVar18 = auVar26._8_8_;
  lVar14 = auVar26._0_8_;
  *(code **)(puVar5 + -0x80) = Merger_Game_Views_BoardItem_BoardItemView2__RegisterBehaviour;
  *(undefined **)(puVar5 + -0x70) = puVar3;
  *(undefined **)(puVar5 + -0x68) = puVar22;
  *(undefined8 **)(puVar5 + -0x60) = puVar7;
  *(ulong *)(puVar5 + -0x58) = uVar16;
  *(long *)(puVar5 + -0x50) = lVar9;
  *(long *)(puVar5 + -0x48) = lVar6;
  if ((bRam0000000007e2897f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d820);
    func_0x03280a18(PTR_DAT_0776d970);
    func_0x03280a18(PTR_DAT_0780d828);
    bRam0000000007e2897f = 1;
  }
  if (*(long *)(lVar14 + 0x90) != 0) {
    plVar8 = (long *)func_0x04fe2d7c(*(long *)(lVar14 + 0x90),puVar12,plVar18,
                                     *(undefined8 *)PTR_DAT_0780d820);
    if ((uVar21 & 1) != 0) {
      if (*(long *)(lVar14 + 0x98) == 0) goto LAB_06830b04;
      plVar8 = (long *)func_0x053c1024(*(long *)(lVar14 + 0x98),puVar12,
                                       *(undefined8 *)PTR_DAT_0776d970);
    }
    if ((param_5 & 1) == 0) {
      return plVar8;
    }
    if (plVar18 != (long *)0x0) {
      lVar6 = *plVar18;
      uVar10 = *(undefined8 *)(lVar14 + 0x30);
      uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0780d828) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06830ae0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar18 = (long *)(*(code *)*puVar7)(plVar18,uVar10,lVar14,puVar7[1]);
      return plVar18;
    }
  }
LAB_06830b04:
  lVar6 = func_0x03280cac();
  *(code **)(puVar5 + -0xb0) = Merger_Game_Views_BoardItem_BoardItemView2__PointerClicked;
  *(ulong *)(puVar5 + -0xa8) = uVar21 & 0xffffffff;
  *(undefined8 **)(puVar5 + -0xa0) = puVar12;
  *(ulong *)(puVar5 + -0x98) = param_5 & 0xffffffff;
  *(undefined1 (*) [16])(puVar5 + -0x90) = auVar26;
  if ((bRam0000000007e2897e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d7a8);
    func_0x03280a18(PTR_DAT_0780d830);
    func_0x03280a18(PTR_DAT_0780d838);
    func_0x03280a18(PTR_DAT_0780d840);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_0780d848);
    bRam0000000007e2897e = 1;
  }
  *(undefined8 *)(puVar5 + -0xd0) = 0;
  *(undefined8 *)(puVar5 + -200) = 0;
  *(undefined8 *)(puVar5 + -0xc0) = 0;
  if ((*(long *)(lVar6 + 0x90) != 0) &&
     (lVar9 = func_0x04fe2bac(*(long *)(lVar6 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
     puVar24 = PTR_DAT_0780d838, puVar23 = PTR_DAT_0780d830, puVar19 = PTR_DAT_0780d828, lVar9 != 0)
     ) {
    func_0x04816768(puVar5 + -0xe8,lVar9,*(undefined8 *)PTR_DAT_0780d848);
    *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0xe0);
    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xe8);
    *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0xd8);
    while( true ) {
      uVar16 = func_0x05160714(puVar5 + -0xd0,*(undefined8 *)puVar24);
      if ((uVar16 & 1) == 0) {
        func_0x05160710(puVar5 + -0xd0,*(undefined8 *)puVar23);
        goto LAB_06830c6c;
      }
      plVar18 = *(long **)(puVar5 + -0xc0);
      if (plVar18 == (long *)0x0) break;
      lVar9 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar19) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto LAB_06830c40;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar19,4);
LAB_06830c40:
      uVar16 = (*(code *)*puVar7)(plVar18,puVar7[1]);
      if ((uVar16 & 1) != 0) {
        plVar18 = (long *)func_0x05160710(puVar5 + -0xd0,*(undefined8 *)puVar23);
        return plVar18;
      }
    }
    func_0x03280cac();
    puVar12 = (undefined8 *)puVar23;
  }
  auVar27 = func_0x03280cac();
  if (auVar27._8_4_ == 1) {
    plVar18 = (long *)func_0x072ce910(auVar27._0_8_);
    lVar9 = *plVar18;
    func_0x072ce920();
    func_0x05160710(puVar5 + -0xd0,*puVar12);
    if (lVar9 == 0) {
LAB_06830c6c:
      plVar18 = (long *)func_0x0678ebfc(lVar6,0);
      return plVar18;
    }
    func_0x03280ca4(lVar9);
  }
  func_0x05160710(puVar5 + -0xd0,*puVar12);
  func_0x03365958(auVar27._0_8_);
  func_0x03280ca4(0);
  plVar18 = (long *)func_0x02f09514();
  *(undefined1 *)((long)plVar18 + 0xa1) = 1;
  return plVar18;
}

