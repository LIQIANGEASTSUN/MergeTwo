/* Ghidra 12.1.2 native pseudocode; RVA 0x3BDA090; Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory.RegisterAttacher<object>; status ok */


/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cda28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6083c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6085c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d606f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d607b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cda2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03d6079c) */
/* WARNING: Removing unreachable block (ram,0x03d60718) */
/* WARNING: Removing unreachable block (ram,0x03d606f8) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */
/* WARNING: Removing unreachable block (ram,0x03d60840) */
/* WARNING: Removing unreachable block (ram,0x03cda290) */
/* WARNING: Removing unreachable block (ram,0x03cda2a8) */
/* WARNING: Removing unreachable block (ram,0x03cda2b8) */
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x03d607bc) */

undefined1  [16]
Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__RegisterAttacher_object_
          (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong *puVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long *plVar22;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  int *piVar30;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar31;
  undefined1 *unaff_x24;
  undefined1 *puVar32;
  long unaff_x25;
  undefined8 unaff_x30;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  undefined8 auStack_1c0 [3];
  undefined1 auStack_1a8 [16];
  long alStack_198 [3];
  undefined1 auStack_180 [16];
  long alStack_170 [4];
  undefined1 auStack_150 [16];
  long alStack_140 [5];
  undefined1 auStack_118 [16];
  long lStack_108;
  long alStack_100 [5];
  long alStack_d8 [3];
  long alStack_c0 [4];
  ulong auStack_a0 [4];
  long lStack_80;
  undefined8 uStack_78;
  long lVar21;
  
  if ((*(long *)(param_2 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_07779760), *(long *)(param_2 + 0x38) == 0)) {
    func_0x03256878(param_2);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_03cda14c:
    auVar40 = func_0x03280cac();
    unaff_x19 = auVar40._8_8_;
    lVar25 = auVar40._0_8_;
    unaff_x25 = tpidr_el0;
    uStack_78 = *(undefined8 *)(unaff_x25 + 0x28);
    puVar15 = *(undefined8 **)(unaff_x19 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779760);
      puVar15 = *(undefined8 **)(unaff_x19 + 0x38);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x03256878(unaff_x19);
        puVar15 = *(undefined8 **)(unaff_x19 + 0x38);
      }
    }
    unaff_x21 = (ulong)*(uint *)(puVar15[1] + 0xfc);
    uVar17 = unaff_x21 + 0xf & 0x1fffffff0;
    unaff_x23 = (long)&lStack_80 - uVar17;
    unaff_x22 = unaff_x23 - uVar17;
    puVar32 = (undefined1 *)(unaff_x22 - uVar17);
    func_0x072ce9a0(puVar32,0,unaff_x21);
    uVar17 = 0;
    if (*(long *)(lVar25 + 0x10) != 0) {
      param_4 = &lStack_80;
      lStack_80 = unaff_x23;
      (*(code *)((undefined8 *)*puVar15)[2])(*(undefined8 *)*puVar15);
      func_0x072ce970(puVar32,unaff_x23,unaff_x21);
      lVar25 = *(long *)(lVar25 + 0x18);
      uVar17 = unaff_x21;
      func_0x072ce970(unaff_x22,puVar32);
      lVar10 = func_0x03280b94(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),unaff_x22);
      if (lVar25 != 0) {
        lVar26 = *(long *)(lVar25 + 0x10);
        lVar29 = *(long *)PTR_DAT_07779760;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar26 != 0) {
          uVar2 = *(uint *)(lVar25 + 0x18);
          if (uVar2 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar25 + 0x18) = uVar2 + 1;
            plVar11 = (long *)(lVar26 + (long)(int)uVar2 * 8 + 0x20);
            *plVar11 = lVar10;
            goto SUB_032809c4;
          }
          lVar26 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70);
          unaff_x30 = 0x3cda2a8;
          unaff_x20 = lVar25;
          unaff_x24 = puVar32;
          goto SUB_0414446c;
        }
      }
    }
    func_0x03280cac();
    auVar40 = func_0x072ce990();
    lVar10 = auVar40._0_8_;
    *(undefined8 *)(puVar32 + -0x20) = 0x3cda2dc;
    *(ulong *)(puVar32 + -0x18) = unaff_x21;
    *(long *)(puVar32 + -0x10) = lVar25;
    *(long *)(puVar32 + -8) = unaff_x19;
    uVar28 = uVar17;
    if (*(long *)(uVar17 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779768);
      func_0x03280a18(PTR_DAT_07779770);
      if (*(long *)(uVar17 + 0x38) == 0) {
        func_0x03256878(uVar17);
      }
    }
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) &&
       (lVar25 = func_0x03d004fc(*(long *)(lVar10 + 0x10),*(undefined8 *)PTR_DAT_07779768),
       lVar25 != 0)) {
      uVar28 = *(ulong *)PTR_DAT_07779770;
      lVar25 = func_0x05341858(lVar25,auVar40._8_8_);
      if (lVar25 != 0) {
        func_0x03cef278(lVar25,**(undefined8 **)(uVar17 + 0x38));
        if ((*(long *)(lVar10 + 0x10) != 0) &&
           (uVar12 = func_0x03d03718(*(long *)(lVar10 + 0x10),
                                     *(undefined8 *)(*(long *)(uVar17 + 0x38) + 8)), uVar12 != 0)) {
          uVar13 = *(undefined8 *)(puVar32 + -8);
          uVar16 = *(undefined8 *)(puVar32 + -0x20);
          goto SUB_0728771c;
        }
      }
    }
    auVar34 = func_0x03280cac();
    lVar25 = auVar34._0_8_;
    puVar7 = (undefined8 *)(puVar32 + -0x40);
    *(undefined8 *)(puVar32 + -0x40) = 0x3cda390;
    *(long *)(puVar32 + -0x38) = auVar40._8_8_;
    *(long *)(puVar32 + -0x30) = lVar10;
    *(ulong *)(puVar32 + -0x28) = uVar17;
    uVar17 = uVar28;
    if (*(long *)(uVar28 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779768);
      func_0x03280a18(PTR_DAT_07779770);
      if (*(long *)(uVar28 + 0x38) == 0) {
        func_0x03256878(uVar28);
      }
    }
    if (((lVar25 != 0) && (*(long *)(lVar25 + 0x10) != 0)) &&
       (lVar10 = func_0x03d004fc(*(long *)(lVar25 + 0x10),*(undefined8 *)PTR_DAT_07779768),
       lVar10 != 0)) {
      uVar17 = *(ulong *)PTR_DAT_07779770;
      lVar10 = func_0x05341858(lVar10,auVar34._8_8_);
      if (((lVar10 != 0) &&
          ((**(code **)**(undefined8 **)(uVar28 + 0x38))(), *(long *)(lVar25 + 0x10) != 0)) &&
         (uVar12 = (*(code *)**(undefined8 **)(*(long *)(uVar28 + 0x38) + 8))(), uVar12 != 0)) {
        uVar13 = *(undefined8 *)(puVar32 + -0x28);
        puVar32 = puVar32 + -0x20;
        uVar16 = *puVar7;
SUB_0728771c:
        *(undefined8 *)(puVar32 + -0x10) = uVar16;
        lVar10 = *(long *)(uVar12 + 0x10);
        if (lVar10 == 0) {
          auVar34._0_8_ = func_0x03280cac(uVar12,0);
          *(undefined8 *)(puVar32 + -0x20) = 0x7287744;
          *(undefined8 *)(puVar32 + -0x18) = uVar13;
          func_0x0728a9a0(auVar34._0_8_,1);
          auVar34._8_8_ = extraout_x1_10;
          return auVar34;
        }
        *(undefined4 *)(lVar10 + 0x68) = 2;
        *(undefined1 *)(lVar10 + 0x11) = 1;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = uVar12;
        return auVar40;
      }
    }
    auVar40 = func_0x03280cac();
    *(code **)(puVar32 + -0x60) =
         MergeEngine_ECS_Components_Board_BoardQueueComponent__Select_object_;
    *(long *)(puVar32 + -0x58) = auVar34._8_8_;
    *(long *)(puVar32 + -0x50) = lVar25;
    *(ulong *)(puVar32 + -0x48) = uVar28;
    lVar10 = *(long *)(uVar17 + 0x38);
    if (lVar10 == 0) {
      func_0x03256878(uVar17);
      lVar10 = *(long *)(uVar17 + 0x38);
    }
    lVar25 = func_0x03d50a94(*(undefined8 *)(auVar40._0_8_ + 0x28),auVar40._8_8_,
                             *(undefined8 *)(lVar10 + 8));
    lVar26 = func_0x03d50a94(*(undefined8 *)(auVar40._0_8_ + 0x30),auVar40._8_8_,
                             *(undefined8 *)(*(long *)(uVar17 + 0x38) + 8));
    auVar35._8_8_ = lVar26;
    auVar35._0_8_ = lVar25;
    lVar29 = *(long *)(*(long *)(uVar17 + 0x38) + 0x18);
    *(undefined8 *)(puVar32 + -0x60) = *(undefined8 *)(puVar32 + -0x60);
    *(undefined8 *)(puVar32 + -0x58) = *(undefined8 *)(puVar32 + -0x58);
    *(undefined8 *)(puVar32 + -0x50) = *(undefined8 *)(puVar32 + -0x50);
    *(undefined8 *)(puVar32 + -0x48) = *(undefined8 *)(puVar32 + -0x48);
    lVar10 = lVar29;
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
    puVar14 = PTR_DAT_07779d10;
    if ((lVar25 == 0) || (puVar14 = PTR_DAT_07779d18, lVar26 == 0)) {
      uVar16 = func_0x03280a2c(puVar14);
      uVar16 = func_0x05ac7464(uVar16,0);
      auVar40 = func_0x03280b7c(uVar16,lVar29);
      *(undefined8 *)(puVar32 + -0x80) = 0x3d60510;
      *(long *)(puVar32 + -0x78) = lVar25;
      *(long *)(puVar32 + -0x70) = lVar26;
      *(long *)(puVar32 + -0x68) = lVar29;
      lVar25 = lVar10;
      if (*(long *)(lVar10 + 0x38) == 0) {
        func_0x03256878(lVar10);
      }
      puVar14 = PTR_DAT_07779d10;
      if ((auVar40._0_8_ != 0) && (puVar14 = PTR_DAT_07779d18, auVar40._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar40 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 8))
                            (auVar40._0_8_,auVar40._8_8_,0);
        return auVar40;
      }
      uVar16 = func_0x03280a2c(puVar14);
      uVar16 = func_0x05ac7464(uVar16,0);
      auVar35 = func_0x03280b7c(uVar16,lVar10);
      *(undefined8 *)(puVar32 + -0xb0) = 0x3d60588;
      *(long *)(puVar32 + -0xa0) = unaff_x22;
      *(undefined1 (*) [16])(puVar32 + -0x98) = auVar40;
      *(long *)(puVar32 + -0x88) = lVar10;
      lVar26 = lVar25;
      plVar11 = param_4;
      if (param_4[7] == 0) {
        func_0x03256878(param_4);
      }
      puVar14 = PTR_DAT_07779d10;
      if ((auVar35._0_8_ == 0) || (puVar14 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
        uVar16 = func_0x03280a2c(puVar14);
        uVar16 = func_0x05ac7464(uVar16,0);
        auVar40 = func_0x03280b7c(uVar16,param_4);
        *(undefined8 *)(puVar32 + -0xe0) = 0x3d60608;
        *(undefined1 (*) [16])(puVar32 + -0xd0) = auVar35;
        *(long *)(puVar32 + -0xc0) = lVar25;
        *(long **)(puVar32 + -0xb8) = param_4;
        lVar25 = lVar26;
        plVar24 = plVar11;
        if (plVar11[7] == 0) {
          func_0x03256878(plVar11);
        }
        puVar14 = PTR_DAT_07779d10;
        if ((auVar40._0_8_ != 0) && (puVar14 = PTR_DAT_07779d18, auVar40._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar40 = (*(code *)**(undefined8 **)(plVar11[7] + 0x10))
                              (auVar40._0_8_,auVar40._8_8_,lVar26);
          return auVar40;
        }
        uVar16 = func_0x03280a2c(puVar14);
        uVar16 = func_0x05ac7464(uVar16,0);
        auVar34 = func_0x03280b7c(uVar16,plVar11);
        lVar10 = auVar34._0_8_;
        *(undefined8 *)(puVar32 + -0x110) = 0x3d6068c;
        *(undefined1 (*) [16])(puVar32 + -0x100) = auVar40;
        *(long *)(puVar32 + -0xf0) = lVar26;
        *(long **)(puVar32 + -0xe8) = plVar11;
        plVar31 = (long *)plVar24[7];
        plVar11 = plVar24;
        if (plVar31 == (long *)0x0) {
          func_0x03256878(plVar24);
          plVar31 = (long *)plVar24[7];
        }
        if ((*(byte *)(*plVar31 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar26 = func_0x03280ca0();
        uVar16 = *(undefined8 *)(plVar24[7] + 8);
        func_0x0531dbd0(lVar26,0xfffffffe);
        if (lVar26 != 0) {
          plVar11 = (long *)(lVar26 + 0x38);
          *plVar11 = lVar10;
          goto SUB_032809c4;
        }
        auVar40 = func_0x03280cac();
        lVar10 = auVar40._0_8_;
        puVar8 = puVar32 + -0x140;
        *(undefined8 *)(puVar32 + -0x140) = 0x3d60730;
        *(undefined8 *)(puVar32 + -0x130) = 0;
        *(undefined1 (*) [16])(puVar32 + -0x128) = auVar34;
        *(long *)(puVar32 + -0x118) = lVar25;
        plVar31 = (long *)plVar11[7];
        plVar24 = plVar11;
        if (plVar31 == (long *)0x0) {
          func_0x03256878(plVar11);
          plVar31 = (long *)plVar11[7];
        }
        if ((*(byte *)(*plVar31 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar26 = func_0x03280ca0();
        lVar25 = *(long *)(plVar11[7] + 8);
        func_0x0531e428(lVar26,0xfffffffe);
        if (lVar26 != 0) {
          plVar11 = (long *)(lVar26 + 0x38);
          *plVar11 = lVar10;
          goto SUB_032809c4;
        }
        uVar13 = 0x3d607d4;
        auVar35 = func_0x03280cac();
        unaff_x22 = 0;
      }
      else {
        plVar24 = *(long **)(param_4[7] + 0x10);
        uVar16 = *(undefined8 *)(puVar32 + -0x88);
        unaff_x22 = *(long *)(puVar32 + -0xa0);
        auVar40 = *(undefined1 (*) [16])(puVar32 + -0x98);
        puVar8 = puVar32 + -0x80;
        uVar13 = *(undefined8 *)(puVar32 + -0xb0);
      }
    }
    else {
      uVar16 = *(undefined8 *)(puVar32 + -0x48);
      plVar24 = *(long **)(*(long *)(lVar29 + 0x38) + 8);
      lVar25 = 0;
      puVar8 = puVar32 + -0x40;
      uVar13 = *(undefined8 *)(puVar32 + -0x60);
      auVar40 = *(undefined1 (*) [16])(puVar32 + -0x58);
    }
    lVar10 = auVar35._0_8_;
    *(undefined8 *)(puVar8 + -0x30) = uVar13;
    *(long *)(puVar8 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar8 + -0x18) = auVar40;
    *(undefined8 *)(puVar8 + -8) = uVar16;
    plVar31 = (long *)plVar24[7];
    plVar11 = plVar24;
    if (plVar31 == (long *)0x0) {
      func_0x03256878(plVar24);
      plVar31 = (long *)plVar24[7];
    }
    if ((*(byte *)(*plVar31 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar26 = func_0x03280ca0();
    uVar16 = *(undefined8 *)(plVar24[7] + 8);
    func_0x0531ec78(lVar26,0xfffffffe);
    if (lVar26 != 0) {
      plVar11 = (long *)(lVar26 + 0x40);
      *plVar11 = lVar10;
      goto SUB_032809c4;
    }
    auVar40 = func_0x03280cac();
    uVar13 = auVar40._0_8_;
    *(undefined8 *)(puVar8 + -0x60) = 0x3d60878;
    *(long *)(puVar8 + -0x58) = unaff_x23;
    *(undefined8 *)(puVar8 + -0x50) = 0;
    *(undefined1 (*) [16])(puVar8 + -0x48) = auVar35;
    *(long *)(puVar8 + -0x38) = lVar25;
    plVar24 = (long *)plVar11[7];
    if (plVar24 == (long *)0x0) {
      func_0x03256878(plVar11);
      plVar24 = (long *)plVar11[7];
    }
    if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar36._0_8_ = func_0x03280ca0();
    puVar15 = *(undefined8 **)(plVar11[7] + 8);
    (*(code *)*puVar15)(auVar36._0_8_,0xfffffffe);
    if (auVar36._0_8_ != 0) {
      func_0x02f17738(auVar36._0_8_,*(long *)(*(long *)plVar11[7] + 0x80) + 0xc0,uVar13);
      func_0x02f17738(auVar36._0_8_,*(long *)(*(long *)plVar11[7] + 0x80) + 0x100,auVar40._8_8_);
      func_0x02f17738(auVar36._0_8_,*(long *)(*(long *)plVar11[7] + 0x80) + 0x80,uVar16);
      auVar36._8_8_ = extraout_x1;
      return auVar36;
    }
    auVar34 = func_0x03280cac();
    lVar10 = auVar34._8_8_;
    plVar24 = auVar34._0_8_;
    *(undefined8 *)(puVar8 + -0x90) = 0x3d60944;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined1 (*) [16])(puVar8 + -0x80) = auVar40;
    *(long **)(puVar8 + -0x70) = plVar11;
    *(undefined8 *)(puVar8 + -0x68) = uVar16;
    puVar18 = puVar15;
    if (puVar15[7] == 0) {
      func_0x03256878(puVar15);
    }
    puVar14 = PTR_DAT_07774b08;
    if ((plVar24 == (long *)0x0) || (puVar14 = PTR_DAT_077799b8, lVar10 == 0)) {
      uVar16 = func_0x03280a2c(puVar14);
      uVar16 = func_0x05ac7464(uVar16,0);
      func_0x03280b7c(uVar16,puVar15);
LAB_03d60c04:
      func_0x03281048(plVar24);
      lVar25 = 0;
    }
    else {
      lVar25 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      lVar26 = *plVar24;
      bVar1 = *(byte *)(lVar26 + 0x130);
      if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25))
      {
        lVar25 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
          lVar26 = *plVar24;
          bVar1 = *(byte *)(lVar26 + 0x130);
        }
        if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25
           )) {
          lVar25 = *(long *)(puVar15[7] + 0x10);
          if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
            lVar25 = func_0x0325681c(lVar25);
            lVar26 = *plVar24;
            bVar1 = *(byte *)(lVar26 + 0x130);
          }
          if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) ==
              lVar25)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar40 = (**(code **)(lVar26 + 0x228))(plVar24,lVar10,*(undefined8 *)(lVar26 + 0x230));
            return auVar40;
          }
        }
        goto LAB_03d60c04;
      }
      lVar25 = *(long *)(puVar15[7] + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      lVar25 = func_0x03280b90(plVar24,lVar25);
      if (lVar25 == 0) {
        lVar25 = *(long *)(puVar15[7] + 0x38);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c();
        }
        if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(lVar25 + 0x130)) ||
           (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) !=
            lVar25)) {
          if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar13 = func_0x03280ca0();
          func_0x04b68fa4(uVar13,plVar24,lVar10,*(undefined8 *)(puVar15[7] + 0x58));
          uVar16 = extraout_x1_01;
LAB_03d60aa4:
          auVar37._8_8_ = uVar16;
          auVar37._0_8_ = uVar13;
          return auVar37;
        }
        if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar13 = func_0x03280ca0();
        lVar25 = *(long *)(puVar15[7] + 0x38);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        if ((*(byte *)(lVar25 + 0x130) <= *(byte *)(*plVar24 + 0x130)) &&
           (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) ==
            lVar25)) {
          func_0x04b713b0(uVar13,plVar24,lVar10,*(undefined8 *)(puVar15[7] + 0x48));
          uVar16 = extraout_x1_02;
          goto LAB_03d60aa4;
        }
        goto LAB_03d60c04;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar13 = func_0x03280ca0();
      lVar25 = *(long *)(puVar15[7] + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      lVar26 = func_0x03280b90(plVar24,lVar25);
      if (lVar26 != 0) {
        func_0x04b66610(uVar13,lVar26,lVar10,*(undefined8 *)(puVar15[7] + 0x30));
        uVar16 = extraout_x1_00;
        goto LAB_03d60aa4;
      }
    }
    auVar40 = func_0x03281048(plVar24,lVar25);
    lVar10 = auVar40._8_8_;
    plVar11 = auVar40._0_8_;
    *(undefined8 *)(puVar8 + -0xc0) = 0x3d60c18;
    *(long *)(puVar8 + -0xb8) = lVar25;
    *(undefined8 *)(puVar8 + -0xb0) = uVar13;
    *(undefined8 **)(puVar8 + -0xa8) = puVar15;
    *(undefined1 (*) [16])(puVar8 + -0xa0) = auVar34;
    if (puVar18[7] == 0) {
      func_0x03256878(puVar18);
    }
    puVar14 = PTR_DAT_07774b08;
    if ((plVar11 == (long *)0x0) || (puVar14 = PTR_DAT_077799b8, lVar10 == 0)) {
      uVar16 = func_0x03280a2c(puVar14);
      uVar16 = func_0x05ac7464(uVar16,0);
      func_0x03280b7c(uVar16,puVar18);
LAB_03d60ed8:
      func_0x03281048(plVar11);
    }
    else {
      lVar26 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      lVar29 = *plVar11;
      bVar1 = *(byte *)(lVar29 + 0x130);
      if ((*(byte *)(lVar26 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) == lVar26))
      {
        lVar26 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
          lVar29 = *plVar11;
          bVar1 = *(byte *)(lVar29 + 0x130);
        }
        if ((*(byte *)(lVar26 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) == lVar26
           )) {
          lVar26 = *(long *)(puVar18[7] + 0x10);
          if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
            lVar26 = func_0x0325681c(lVar26);
            lVar29 = *plVar11;
            bVar1 = *(byte *)(lVar29 + 0x130);
          }
          if ((*(byte *)(lVar26 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) ==
              lVar26)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar40 = (**(code **)(lVar29 + 0x228))(plVar11,lVar10,*(undefined8 *)(lVar29 + 0x230));
            return auVar40;
          }
        }
        goto LAB_03d60ed8;
      }
      lVar26 = *(long *)(puVar18[7] + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      lVar26 = func_0x03280b90(plVar11,lVar26);
      if (lVar26 == 0) {
        lVar26 = *(long *)(puVar18[7] + 0x38);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c();
        }
        if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar26 + 0x130)) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) !=
            lVar26)) {
          if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar13 = func_0x03280ca0();
          func_0x04b693d0(uVar13,plVar11,lVar10,*(undefined8 *)(puVar18[7] + 0x58));
          uVar16 = extraout_x1_04;
LAB_03d60d78:
          auVar38._8_8_ = uVar16;
          auVar38._0_8_ = uVar13;
          return auVar38;
        }
        if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar13 = func_0x03280ca0();
        lVar26 = *(long *)(puVar18[7] + 0x38);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        if ((*(byte *)(lVar26 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) ==
            lVar26)) {
          func_0x04b715c8(uVar13,plVar11,lVar10,*(undefined8 *)(puVar18[7] + 0x48));
          uVar16 = extraout_x1_05;
          goto LAB_03d60d78;
        }
        goto LAB_03d60ed8;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar13 = func_0x03280ca0();
      lVar25 = *(long *)(puVar18[7] + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      lVar26 = func_0x03280b90(plVar11,lVar25);
      if (lVar26 != 0) {
        func_0x04b667e0(uVar13,lVar26,lVar10,*(undefined8 *)(puVar18[7] + 0x30));
        uVar16 = extraout_x1_03;
        goto LAB_03d60d78;
      }
    }
    lVar25 = func_0x03281048(plVar11,lVar25);
    *(undefined8 *)(puVar8 + -0xe0) = 0x3d60eec;
    *(undefined1 (*) [16])(puVar8 + -0xd0) = auVar40;
    lVar10 = *(long *)(lVar25 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = **(long **)(lVar10 + 0xb8);
    func_0x03280ab0();
    if (lVar10 != 0) {
      auVar39._8_8_ = extraout_x1_06;
      auVar39._0_8_ = lVar10;
      return auVar39;
    }
    lVar10 = *(long *)(lVar25 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar26 = *(long *)(lVar25 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    **(long **)(lVar26 + 0xb8) = lVar10;
    lVar25 = *(long *)(lVar25 + 0x20);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    plVar11 = *(long **)(lVar25 + 0xb8);
    goto SUB_032809c4;
  }
  lVar10 = func_0x03d04cac(*(long *)(param_1 + 0x10),**(undefined8 **)(param_2 + 0x38));
  lVar25 = *(long *)(param_1 + 0x18);
  if (lVar25 == 0) goto LAB_03cda14c;
  lVar26 = *(long *)(lVar25 + 0x10);
  lVar29 = *(long *)PTR_DAT_07779760;
  *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
  if (lVar26 == 0) goto LAB_03cda14c;
  uVar2 = *(uint *)(lVar25 + 0x18);
  if (uVar2 < *(uint *)(lVar26 + 0x18)) {
    *(uint *)(lVar25 + 0x18) = uVar2 + 1;
    plVar11 = (long *)(lVar26 + (long)(int)uVar2 * 8 + 0x20);
    *plVar11 = lVar10;
    goto SUB_032809c4;
  }
  lVar26 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70);
  puVar32 = (undefined1 *)register0x00000008;
SUB_0414446c:
  *(undefined8 *)(puVar32 + -0x30) = unaff_x30;
  *(long *)(puVar32 + -0x20) = unaff_x22;
  *(ulong *)(puVar32 + -0x18) = unaff_x21;
  *(long *)(puVar32 + -0x10) = unaff_x20;
  *(long *)(puVar32 + -8) = unaff_x19;
  uVar3 = *(uint *)(lVar25 + 0x18);
  uVar2 = uVar3 + 1;
  lVar26 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(lVar25,(ulong)uVar2);
  lVar29 = *(long *)(lVar25 + 0x10);
  *(uint *)(lVar25 + 0x18) = uVar2;
  if (lVar29 == 0) {
    func_0x03280cac();
  }
  else if (uVar3 < *(uint *)(lVar29 + 0x18)) {
    plVar11 = (long *)(lVar29 + (long)(int)uVar3 * 8 + 0x20);
    *plVar11 = lVar10;
    goto SUB_032809c4;
  }
  auVar40 = func_0x03280cb4();
  lVar21 = auVar40._8_8_;
  lVar29 = auVar40._0_8_;
  *(undefined8 *)(puVar32 + -0x60) = 0x41444d8;
  *(long *)(puVar32 + -0x50) = (long)(int)uVar3;
  *(ulong *)(puVar32 + -0x48) = (ulong)uVar2;
  *(long *)(puVar32 + -0x40) = lVar25;
  *(long *)(puVar32 + -0x38) = lVar10;
  lVar23 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar21,0x14);
  lVar25 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  if (lVar21 == 0) {
LAB_0414454c:
    lVar10 = 0;
  }
  else {
    lVar10 = func_0x03280b90(lVar21,lVar25);
    if (lVar10 == 0) {
      func_0x03281048(lVar21,lVar25);
      goto LAB_0414454c;
    }
  }
  lVar25 = *(long *)(lVar29 + 0x10);
  lVar27 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
  if (lVar25 != 0) {
    uVar2 = *(uint *)(lVar29 + 0x18);
    if (uVar2 < *(uint *)(lVar25 + 0x18)) {
      *(uint *)(lVar29 + 0x18) = uVar2 + 1;
      plVar11 = (long *)(lVar25 + (long)(int)uVar2 * 8 + 0x20);
      *plVar11 = lVar10;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar20 = (ulong *)(((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar20,0x10);
          if (bVar5) {
            *puVar20 = *puVar20 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      auVar33._8_8_ = lVar10;
      auVar33._0_8_ = plVar11;
      return auVar33;
    }
    func_0x0414446c(lVar29,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70)
                   );
    uVar16 = extraout_x1_07;
LAB_041445ac:
    auVar41._4_4_ = 0;
    auVar41._0_4_ = *(int *)(lVar29 + 0x18) - 1;
    auVar41._8_8_ = uVar16;
    return auVar41;
  }
  auVar43 = func_0x03280cac();
  uVar16 = auVar43._0_8_;
  if (auVar43._8_4_ == 1) {
    puVar15 = (undefined8 *)func_0x072ce910(uVar16);
    uVar16 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar17 = func_0x032810d8(uVar16,*(undefined8 *)*puVar15);
    if ((uVar17 & 1) != 0) {
      func_0x072ce920();
      uVar16 = *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x68);
      lVar10 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar16 = func_0x057a51c4(uVar16,0);
      func_0x057b7b18(lVar21,uVar16,0);
      uVar16 = extraout_x1_08;
      goto LAB_041445ac;
    }
    puVar18 = (undefined8 *)func_0x072ce930(8);
    *puVar18 = *puVar15;
    lVar23 = 0;
    uVar16 = func_0x072ce940(puVar18,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar16);
  auVar40 = func_0x02f09514();
  plVar22 = auVar40._8_8_;
  plVar24 = auVar40._0_8_;
  uVar2 = *(uint *)(plVar24 + 3);
  lVar10 = *(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x90);
  uVar17 = (ulong)uVar2;
  *(undefined8 *)(puVar32 + -0xa0) = 0x4144678;
  *(long *)(puVar32 + -0x98) = unaff_x25;
  *(undefined1 **)(puVar32 + -0x90) = unaff_x24;
  *(long *)(puVar32 + -0x88) = unaff_x23;
  *(undefined8 *)(puVar32 + -0x80) = uVar16;
  *(long *)(puVar32 + -0x78) = lVar26;
  *(long *)(puVar32 + -0x70) = lVar21;
  *(long *)(puVar32 + -0x68) = lVar29;
  plVar31 = (long *)0x7e18000;
  plVar11 = plVar22;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar22 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar24 + 3) < uVar2) {
    func_0x057b8434(0);
  }
  lVar25 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c(lVar25);
  }
  plVar19 = (long *)func_0x03280b90(plVar22,lVar25);
  if (plVar19 == (long *)0x0) {
    if ((int)uVar2 < (int)plVar24[3]) {
      if (plVar22 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar25 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        lVar26 = *plVar22;
        uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar28 != 0) {
          piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar25) {
              puVar15 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar28 = uVar28 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar28 != 0);
        }
        plVar11 = (long *)0x0;
        puVar15 = (undefined8 *)func_0x03256b10(plVar22);
LAB_04145868:
        plVar31 = (long *)(*(code *)*puVar15)(plVar22,puVar15[1]);
        puVar14 = PTR_DAT_0774e8e0;
        if (plVar31 != (long *)0x0) {
          do {
            lVar25 = *plVar31;
            uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar28 != 0) {
              piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *(long *)puVar14) {
                  puVar15 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar28 = uVar28 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar28 != 0);
            }
            plVar11 = (long *)0x0;
            puVar15 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041458d0:
            auVar40 = (*(code *)*puVar15)(plVar31,puVar15[1]);
            if ((auVar40._0_8_ & 1) == 0) {
              uVar17 = 0;
              iVar9 = 5;
              if (plVar31 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar25 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
              lVar25 = func_0x0325681c(lVar25);
            }
            lVar26 = *plVar31;
            uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar28 != 0) {
              piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == lVar25) {
                  puVar15 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar28 = uVar28 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar28 != 0);
            }
            puVar15 = (undefined8 *)func_0x03256b10(plVar31,lVar25,0);
LAB_04145948:
            plVar11 = (long *)(*(code *)*puVar15)(plVar31,puVar15[1]);
            func_0x04145380(plVar24,uVar17,plVar11,
                            *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x160));
            uVar17 = (ulong)((int)uVar17 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar43 = func_0x03280ca4(uVar17);
        if (auVar43._8_4_ != 1) {
          if (plVar31 == (long *)0x0) goto LAB_04145ae0;
          lVar25 = *plVar31;
          uVar17 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar17 == 0) goto LAB_04145ab8;
          piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar20 = (ulong *)func_0x072ce910(auVar43._0_8_);
        uVar17 = *puVar20;
        auVar40 = func_0x072ce920();
        iVar9 = 0;
        if (plVar31 != (long *)0x0) {
LAB_04145988:
          lVar25 = *plVar31;
          uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar28 != 0) {
            piVar30 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar15 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar28 = uVar28 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar28 != 0);
          }
          plVar11 = (long *)0x0;
          puVar15 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041459dc:
          auVar40 = (*(code *)*puVar15)(plVar31,puVar15[1]);
        }
LAB_041459e8:
      } while (uVar17 != 0);
      if (iVar9 == 5) goto LAB_04145a10;
      if (iVar9 != 0) {
        return auVar40;
      }
    }
    auVar40 = func_0x041462cc(plVar24,plVar22,
                              *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar25 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c(lVar25);
    }
    lVar26 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar17 != 0) {
      piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar25) {
          puVar15 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar17 = uVar17 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(plVar19,lVar25,0);
LAB_04145728:
    auVar40 = (*(code *)*puVar15)(plVar19,puVar15[1]);
    iVar9 = auVar40._0_4_;
    if (0 < iVar9) {
      func_0x04144aa0(plVar24,(int)plVar24[3] + iVar9,
                      *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x78));
      iVar6 = (int)plVar24[3] - uVar2;
      if (iVar6 != 0 && (int)uVar2 <= (int)plVar24[3]) {
        func_0x057b9f30(plVar24[2],uVar2,plVar24[2],iVar9 + uVar2,iVar6,0);
      }
      if (plVar24 == plVar19) {
        func_0x057b9f30(plVar24[2],0,plVar24[2],uVar2,uVar2,0);
        auVar40 = func_0x057b9f30(plVar24[2],iVar9 + uVar2,plVar24[2],uVar2 << 1,
                                  (int)plVar24[3] - uVar2,0);
      }
      else {
        lVar25 = plVar24[2];
        lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar26 = *plVar19;
        uVar17 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar17 != 0) {
          piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar10) {
              puVar15 = (undefined8 *)(lVar26 + (long)(*piVar30 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar17 = uVar17 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plVar19,lVar10,5);
LAB_04145838:
        auVar40 = (*(code *)*puVar15)(plVar19,lVar25,uVar2,puVar15[1]);
      }
      *(int *)(plVar24 + 3) = (int)plVar24[3] + iVar9;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar24 + 0x1c) = *(int *)((long)plVar24 + 0x1c) + 1;
  return auVar40;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar30 = piVar30 + 4;
    if (uVar17 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar15 = (undefined8 *)(lVar25 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar11 = (long *)0x0;
  puVar15 = (undefined8 *)func_0x03256b10(plVar31);
LAB_04145ad4:
  (*(code *)*puVar15)(plVar31,puVar15[1]);
LAB_04145ae0:
  func_0x03365958(auVar43._0_8_);
  func_0x03280ca4(0);
  auVar40 = func_0x02f09514();
  lVar25 = auVar40._0_8_;
  *(undefined8 *)(puVar32 + -0xc0) = 0x4145af8;
  *(long *)(puVar32 + -0xb0) = lVar10;
  *(long **)(puVar32 + -0xa8) = plVar24;
  auVar40 = func_0x03f898d4(*(undefined8 *)(lVar25 + 0x10),auVar40._8_8_,0,
                            *(undefined4 *)(lVar25 + 0x18),
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(*(long *)(plVar11[4] + 0xc0) + 0xd0) +
                                                 0x20) + 0xc0) + 0x158));
  uVar16 = auVar40._8_8_;
  if (-1 < (int)auVar40._0_4_) {
    func_0x04145da4(lVar25,auVar40._0_8_ & 0xffffffff);
    uVar16 = extraout_x1_09;
  }
  auVar42._4_4_ = 0;
  auVar42._0_4_ = ~auVar40._0_4_ >> 0x1f;
  auVar42._8_8_ = uVar16;
  return auVar42;
}

