/* Ghidra 12.1.2 native pseudocode; RVA 0x3BDA150; Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory.RegisterAttacher<__Il2CppFullySharedGenericType>; status ok */


long Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__RegisterAttacher___Il2CppFullySharedGenericType_
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [16];
  long alStack_178 [3];
  undefined1 auStack_160 [16];
  long alStack_150 [4];
  undefined1 auStack_130 [16];
  long alStack_120 [5];
  undefined1 auStack_f8 [16];
  long lStack_e8;
  long alStack_e0 [5];
  long alStack_b8 [3];
  long alStack_a0 [4];
  ulong auStack_80 [4];
  long lStack_60;
  long lStack_58;
  
  lVar14 = tpidr_el0;
  lStack_58 = *(long *)(lVar14 + 0x28);
  puVar20 = *(undefined8 **)(param_2 + 0x38);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_07779760);
    puVar20 = *(undefined8 **)(param_2 + 0x38);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x03256878(param_2);
      puVar20 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  uVar17 = (ulong)*(uint *)(puVar20[1] + 0xfc);
  uVar15 = uVar17 + 0xf & 0x1fffffff0;
  lVar6 = (long)&lStack_60 - uVar15;
  lVar18 = lVar6 - uVar15;
  puVar19 = (undefined1 *)(lVar18 - uVar15);
  func_0x072ce9a0(puVar19,0,uVar17);
  uVar15 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_03cda2d4:
    func_0x03280cac();
  }
  else {
    param_4 = &lStack_60;
    lStack_60 = lVar6;
    (*(code *)((undefined8 *)*puVar20)[2])(*(undefined8 *)*puVar20);
    func_0x072ce970(puVar19,lVar6,uVar17);
    param_1 = *(long *)(param_1 + 0x18);
    uVar15 = uVar17;
    func_0x072ce970(lVar18,puVar19);
    uVar5 = func_0x03280b94(*(undefined8 *)(*(long *)(param_2 + 0x38) + 8),lVar18);
    if (param_1 == 0) goto LAB_03cda2d4;
    lVar12 = *(long *)(param_1 + 0x10);
    lVar16 = *(long *)PTR_DAT_07779760;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_03cda2d4;
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
      lVar12 = func_0x032809c4();
    }
    else {
      uVar15 = *(ulong *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
      lVar12 = func_0x0414446c(param_1);
    }
    if (*(long *)(lVar14 + 0x28) == lStack_58) {
      return lVar12;
    }
  }
  auVar22 = func_0x072ce990();
  lVar14 = auVar22._0_8_;
  *(undefined8 *)(puVar19 + -0x20) = 0x3cda2dc;
  *(ulong *)(puVar19 + -0x18) = uVar17;
  *(long *)(puVar19 + -0x10) = param_1;
  *(long *)(puVar19 + -8) = param_2;
  uVar17 = uVar15;
  if (*(long *)(uVar15 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_07779768);
    func_0x03280a18(PTR_DAT_07779770);
    if (*(long *)(uVar15 + 0x38) == 0) {
      func_0x03256878(uVar15);
    }
  }
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) &&
     (lVar12 = func_0x03d004fc(*(long *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_07779768),
     lVar12 != 0)) {
    uVar17 = *(ulong *)PTR_DAT_07779770;
    lVar12 = func_0x05341858(lVar12,auVar22._8_8_);
    if (lVar12 != 0) {
      func_0x03cef278(lVar12,**(undefined8 **)(uVar15 + 0x38));
      if ((*(long *)(lVar14 + 0x10) != 0) &&
         (lVar12 = func_0x03d03718(*(long *)(lVar14 + 0x10),
                                   *(undefined8 *)(*(long *)(uVar15 + 0x38) + 8)), lVar12 != 0)) {
        uVar21 = *(undefined8 *)(puVar19 + -8);
        uVar5 = *(undefined8 *)(puVar19 + -0x20);
        goto SUB_0728771c;
      }
    }
  }
  auVar23 = func_0x03280cac();
  lVar16 = auVar23._0_8_;
  puVar3 = (undefined8 *)(puVar19 + -0x40);
  *(undefined8 *)(puVar19 + -0x40) = 0x3cda390;
  *(long *)(puVar19 + -0x38) = auVar22._8_8_;
  *(long *)(puVar19 + -0x30) = lVar14;
  *(ulong *)(puVar19 + -0x28) = uVar15;
  uVar15 = uVar17;
  if (*(long *)(uVar17 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_07779768);
    func_0x03280a18(PTR_DAT_07779770);
    if (*(long *)(uVar17 + 0x38) == 0) {
      func_0x03256878(uVar17);
    }
  }
  if (((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) &&
     (lVar14 = func_0x03d004fc(*(long *)(lVar16 + 0x10),*(undefined8 *)PTR_DAT_07779768),
     lVar14 != 0)) {
    uVar15 = *(ulong *)PTR_DAT_07779770;
    lVar14 = func_0x05341858(lVar14,auVar23._8_8_);
    if (((lVar14 != 0) &&
        ((**(code **)**(undefined8 **)(uVar17 + 0x38))(), *(long *)(lVar16 + 0x10) != 0)) &&
       (lVar12 = (*(code *)**(undefined8 **)(*(long *)(uVar17 + 0x38) + 8))(), lVar12 != 0)) {
      uVar21 = *(undefined8 *)(puVar19 + -0x28);
      puVar19 = puVar19 + -0x20;
      uVar5 = *puVar3;
SUB_0728771c:
      *(undefined8 *)(puVar19 + -0x10) = uVar5;
      lVar14 = *(long *)(lVar12 + 0x10);
      if (lVar14 != 0) {
        *(undefined4 *)(lVar14 + 0x68) = 2;
        *(undefined1 *)(lVar14 + 0x11) = 1;
        return lVar12;
      }
      lVar14 = func_0x03280cac(lVar12,0);
      *(undefined8 *)(puVar19 + -0x20) = 0x7287744;
      *(undefined8 *)(puVar19 + -0x18) = uVar21;
      func_0x0728a9a0(lVar14,1);
      return lVar14;
    }
  }
  auVar22 = func_0x03280cac();
  *(code **)(puVar19 + -0x60) = MergeEngine_ECS_Components_Board_BoardQueueComponent__Select_object_
  ;
  *(long *)(puVar19 + -0x58) = auVar23._8_8_;
  *(long *)(puVar19 + -0x50) = lVar16;
  *(ulong *)(puVar19 + -0x48) = uVar17;
  lVar14 = *(long *)(uVar15 + 0x38);
  if (lVar14 == 0) {
    func_0x03256878(uVar15);
    lVar14 = *(long *)(uVar15 + 0x38);
  }
  lVar12 = func_0x03d50a94(*(undefined8 *)(auVar22._0_8_ + 0x28),auVar22._8_8_,
                           *(undefined8 *)(lVar14 + 8));
  lVar16 = func_0x03d50a94(*(undefined8 *)(auVar22._0_8_ + 0x30),auVar22._8_8_,
                           *(undefined8 *)(*(long *)(uVar15 + 0x38) + 8));
  auVar22._8_8_ = lVar16;
  auVar22._0_8_ = lVar12;
  lVar8 = *(long *)(*(long *)(uVar15 + 0x38) + 0x18);
  *(undefined8 *)(puVar19 + -0x60) = *(undefined8 *)(puVar19 + -0x60);
  *(undefined8 *)(puVar19 + -0x58) = *(undefined8 *)(puVar19 + -0x58);
  *(undefined8 *)(puVar19 + -0x50) = *(undefined8 *)(puVar19 + -0x50);
  *(undefined8 *)(puVar19 + -0x48) = *(undefined8 *)(puVar19 + -0x48);
  lVar14 = lVar8;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  puVar7 = PTR_DAT_07779d10;
  if ((lVar12 == 0) || (puVar7 = PTR_DAT_07779d18, lVar16 == 0)) {
    uVar5 = func_0x03280a2c(puVar7);
    uVar5 = func_0x05ac7464(uVar5,0);
    auVar23 = func_0x03280b7c(uVar5,lVar8);
    *(undefined8 *)(puVar19 + -0x80) = 0x3d60510;
    *(long *)(puVar19 + -0x78) = lVar12;
    *(long *)(puVar19 + -0x70) = lVar16;
    *(long *)(puVar19 + -0x68) = lVar8;
    lVar12 = lVar14;
    if (*(long *)(lVar14 + 0x38) == 0) {
      func_0x03256878(lVar14);
    }
    puVar7 = PTR_DAT_07779d10;
    if ((auVar23._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 8))
                         (auVar23._0_8_,auVar23._8_8_,0);
      return lVar14;
    }
    uVar5 = func_0x03280a2c(puVar7);
    uVar5 = func_0x05ac7464(uVar5,0);
    auVar22 = func_0x03280b7c(uVar5,lVar14);
    *(undefined8 *)(puVar19 + -0xb0) = 0x3d60588;
    *(long *)(puVar19 + -0xa0) = lVar18;
    *(undefined1 (*) [16])(puVar19 + -0x98) = auVar23;
    *(long *)(puVar19 + -0x88) = lVar14;
    lVar14 = lVar12;
    plVar11 = param_4;
    if (param_4[7] == 0) {
      func_0x03256878(param_4);
    }
    puVar7 = PTR_DAT_07779d10;
    if ((auVar22._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
      uVar5 = func_0x03280a2c(puVar7);
      uVar5 = func_0x05ac7464(uVar5,0);
      auVar23 = func_0x03280b7c(uVar5,param_4);
      *(undefined8 *)(puVar19 + -0xe0) = 0x3d60608;
      *(undefined1 (*) [16])(puVar19 + -0xd0) = auVar22;
      *(long *)(puVar19 + -0xc0) = lVar12;
      *(long **)(puVar19 + -0xb8) = param_4;
      lVar18 = lVar14;
      plVar10 = plVar11;
      if (plVar11[7] == 0) {
        func_0x03256878(plVar11);
      }
      puVar7 = PTR_DAT_07779d10;
      if ((auVar23._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar14 = (*(code *)**(undefined8 **)(plVar11[7] + 0x10))(auVar23._0_8_,auVar23._8_8_,lVar14)
        ;
        return lVar14;
      }
      uVar5 = func_0x03280a2c(puVar7);
      uVar5 = func_0x05ac7464(uVar5,0);
      auVar22 = func_0x03280b7c(uVar5,plVar11);
      *(undefined8 *)(puVar19 + -0x110) = 0x3d6068c;
      *(undefined1 (*) [16])(puVar19 + -0x100) = auVar23;
      *(long *)(puVar19 + -0xf0) = lVar14;
      *(long **)(puVar19 + -0xe8) = plVar11;
      plVar13 = (long *)plVar10[7];
      plVar11 = plVar10;
      if (plVar13 == (long *)0x0) {
        func_0x03256878(plVar10);
        plVar13 = (long *)plVar10[7];
      }
      if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      uVar5 = *(undefined8 *)(plVar10[7] + 8);
      func_0x0531dbd0(lVar14,0xfffffffe);
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x38) = auVar22._0_8_;
        func_0x032809c4((undefined8 *)(lVar14 + 0x38),auVar22._0_8_);
        *(undefined8 *)(lVar14 + 0x48) = auVar22._8_8_;
        func_0x032809c4((undefined8 *)(lVar14 + 0x48),auVar22._8_8_);
        *(long *)(lVar14 + 0x28) = lVar18;
        func_0x032809c4((long *)(lVar14 + 0x28),lVar18);
        return lVar14;
      }
      auVar23 = func_0x03280cac();
      puVar4 = puVar19 + -0x140;
      *(undefined8 *)(puVar19 + -0x140) = 0x3d60730;
      *(undefined8 *)(puVar19 + -0x130) = 0;
      *(undefined1 (*) [16])(puVar19 + -0x128) = auVar22;
      *(long *)(puVar19 + -0x118) = lVar18;
      plVar13 = (long *)plVar11[7];
      plVar10 = plVar11;
      if (plVar13 == (long *)0x0) {
        func_0x03256878(plVar11);
        plVar13 = (long *)plVar11[7];
      }
      if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      lVar12 = *(long *)(plVar11[7] + 8);
      func_0x0531e428(lVar14,0xfffffffe);
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x38) = auVar23._0_8_;
        func_0x032809c4((undefined8 *)(lVar14 + 0x38),auVar23._0_8_);
        *(undefined8 *)(lVar14 + 0x48) = auVar23._8_8_;
        func_0x032809c4((undefined8 *)(lVar14 + 0x48),auVar23._8_8_);
        *(undefined8 *)(lVar14 + 0x28) = uVar5;
        func_0x032809c4((undefined8 *)(lVar14 + 0x28),uVar5);
        return lVar14;
      }
      uVar21 = 0x3d607d4;
      auVar22 = func_0x03280cac();
      lVar18 = 0;
    }
    else {
      plVar10 = *(long **)(param_4[7] + 0x10);
      uVar5 = *(undefined8 *)(puVar19 + -0x88);
      lVar18 = *(long *)(puVar19 + -0xa0);
      auVar23 = *(undefined1 (*) [16])(puVar19 + -0x98);
      puVar4 = puVar19 + -0x80;
      uVar21 = *(undefined8 *)(puVar19 + -0xb0);
    }
  }
  else {
    uVar5 = *(undefined8 *)(puVar19 + -0x48);
    plVar10 = *(long **)(*(long *)(lVar8 + 0x38) + 8);
    lVar12 = 0;
    puVar4 = puVar19 + -0x40;
    uVar21 = *(undefined8 *)(puVar19 + -0x60);
    auVar23 = *(undefined1 (*) [16])(puVar19 + -0x58);
  }
  *(undefined8 *)(puVar4 + -0x30) = uVar21;
  *(long *)(puVar4 + -0x20) = lVar18;
  *(undefined1 (*) [16])(puVar4 + -0x18) = auVar23;
  *(undefined8 *)(puVar4 + -8) = uVar5;
  plVar13 = (long *)plVar10[7];
  plVar11 = plVar10;
  if (plVar13 == (long *)0x0) {
    func_0x03256878(plVar10);
    plVar13 = (long *)plVar10[7];
  }
  if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar14 = func_0x03280ca0();
  uVar5 = *(undefined8 *)(plVar10[7] + 8);
  func_0x0531ec78(lVar14,0xfffffffe);
  if (lVar14 != 0) {
    *(undefined8 *)(lVar14 + 0x40) = auVar22._0_8_;
    func_0x032809c4((undefined8 *)(lVar14 + 0x40),auVar22._0_8_);
    *(undefined8 *)(lVar14 + 0x50) = auVar22._8_8_;
    func_0x032809c4((undefined8 *)(lVar14 + 0x50),auVar22._8_8_);
    *(long *)(lVar14 + 0x30) = lVar12;
    func_0x032809c4((long *)(lVar14 + 0x30),lVar12);
    return lVar14;
  }
  auVar23 = func_0x03280cac();
  lVar14 = auVar23._0_8_;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d60878;
  *(long *)(puVar4 + -0x58) = lVar6;
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar4 + -0x48) = auVar22;
  *(long *)(puVar4 + -0x38) = lVar12;
  plVar10 = (long *)plVar11[7];
  if (plVar10 == (long *)0x0) {
    func_0x03256878(plVar11);
    plVar10 = (long *)plVar11[7];
  }
  if ((*(byte *)(*plVar10 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  puVar20 = *(undefined8 **)(plVar11[7] + 8);
  (*(code *)*puVar20)(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    func_0x02f17738(lVar18,*(long *)(*(long *)plVar11[7] + 0x80) + 0xc0,lVar14);
    func_0x02f17738(lVar18,*(long *)(*(long *)plVar11[7] + 0x80) + 0x100,auVar23._8_8_);
    func_0x02f17738(lVar18,*(long *)(*(long *)plVar11[7] + 0x80) + 0x80,uVar5);
    return lVar18;
  }
  auVar22 = func_0x03280cac();
  lVar18 = auVar22._8_8_;
  plVar10 = auVar22._0_8_;
  *(undefined8 *)(puVar4 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar4 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar4 + -0x80) = auVar23;
  *(long **)(puVar4 + -0x70) = plVar11;
  *(undefined8 *)(puVar4 + -0x68) = uVar5;
  puVar9 = puVar20;
  if (puVar20[7] == 0) {
    func_0x03256878(puVar20);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar10 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar5 = func_0x03280a2c(puVar7);
    uVar5 = func_0x05ac7464(uVar5,0);
    func_0x03280b7c(uVar5,puVar20);
LAB_03d60c04:
    func_0x03281048(plVar10);
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(puVar20[7] + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    lVar12 = *plVar10;
    bVar1 = *(byte *)(lVar12 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6)) {
      lVar6 = *(long *)(puVar20[7] + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
        lVar12 = *plVar10;
        bVar1 = *(byte *)(lVar12 + 0x130);
      }
      if ((*(byte *)(lVar6 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6)) {
        lVar6 = *(long *)(puVar20[7] + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c(lVar6);
          lVar12 = *plVar10;
          bVar1 = *(byte *)(lVar12 + 0x130);
        }
        if ((*(byte *)(lVar6 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
        {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar14 = (**(code **)(lVar12 + 0x228))(plVar10,lVar18,*(undefined8 *)(lVar12 + 0x230));
          return lVar14;
        }
      }
      goto LAB_03d60c04;
    }
    lVar14 = *(long *)(puVar20[7] + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar14 = func_0x03280b90(plVar10,lVar14);
    if (lVar14 == 0) {
      lVar14 = *(long *)(puVar20[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         )) {
        if ((*(byte *)(*(long *)(puVar20[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        func_0x04b68fa4(lVar14,plVar10,lVar18,*(undefined8 *)(puVar20[7] + 0x58));
        return lVar14;
      }
      if ((*(byte *)(*(long *)(puVar20[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      lVar6 = *(long *)(puVar20[7] + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
      {
        func_0x04b713b0(lVar14,plVar10,lVar18,*(undefined8 *)(puVar20[7] + 0x48));
        return lVar14;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar20[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    lVar6 = *(long *)(puVar20[7] + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c(lVar6);
    }
    lVar12 = func_0x03280b90(plVar10,lVar6);
    if (lVar12 != 0) {
      func_0x04b66610(lVar14,lVar12,lVar18,*(undefined8 *)(puVar20[7] + 0x30));
      return lVar14;
    }
  }
  auVar23 = func_0x03281048(plVar10,lVar6);
  lVar18 = auVar23._8_8_;
  plVar11 = auVar23._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = 0x3d60c18;
  *(long *)(puVar4 + -0xb8) = lVar6;
  *(long *)(puVar4 + -0xb0) = lVar14;
  *(undefined8 **)(puVar4 + -0xa8) = puVar20;
  *(undefined1 (*) [16])(puVar4 + -0xa0) = auVar22;
  if (puVar9[7] == 0) {
    func_0x03256878(puVar9);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar5 = func_0x03280a2c(puVar7);
    uVar5 = func_0x05ac7464(uVar5,0);
    func_0x03280b7c(uVar5,puVar9);
  }
  else {
    lVar14 = *(long *)(puVar9[7] + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar12 = *plVar11;
    bVar1 = *(byte *)(lVar12 + 0x130);
    if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14)) {
      lVar14 = *(long *)(puVar9[7] + 0x20);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar14 = func_0x03280b90(plVar11,lVar14);
      if (lVar14 != 0) {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        lVar6 = *(long *)(puVar9[7] + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c(lVar6);
        }
        lVar12 = func_0x03280b90(plVar11,lVar6);
        if (lVar12 != 0) {
          func_0x04b667e0(lVar14,lVar12,lVar18,*(undefined8 *)(puVar9[7] + 0x30));
          return lVar14;
        }
        goto LAB_03d60ee0;
      }
      lVar14 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         )) {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        func_0x04b693d0(lVar14,plVar11,lVar18,*(undefined8 *)(puVar9[7] + 0x58));
        return lVar14;
      }
      if ((*(byte *)(*(long *)(puVar9[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      lVar12 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b715c8(lVar14,plVar11,lVar18,*(undefined8 *)(puVar9[7] + 0x48));
        return lVar14;
      }
    }
    else {
      lVar14 = *(long *)(puVar9[7] + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar12 = *plVar11;
        bVar1 = *(byte *)(lVar12 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(puVar9[7] + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
          lVar12 = *plVar11;
          bVar1 = *(byte *)(lVar12 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar14 = (**(code **)(lVar12 + 0x228))(plVar11,lVar18,*(undefined8 *)(lVar12 + 0x230));
          return lVar14;
        }
      }
    }
  }
  func_0x03281048(plVar11);
LAB_03d60ee0:
  lVar14 = func_0x03281048(plVar11,lVar6);
  *(undefined8 *)(puVar4 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar4 + -0xd0) = auVar23;
  lVar18 = *(long *)(lVar14 + 0x20);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  lVar18 = **(long **)(lVar18 + 0xb8);
  func_0x03280ab0();
  if (lVar18 == 0) {
    lVar18 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar6 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c();
    }
    **(long **)(lVar6 + 0xb8) = lVar18;
    lVar14 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar14 + 0xb8),lVar18);
  }
  return lVar18;
}

