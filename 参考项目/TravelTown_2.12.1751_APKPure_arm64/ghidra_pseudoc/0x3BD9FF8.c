/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD9FF8; Merger.Game.Views.BoardItem.BoardItemView2.HasBehaviour<object>; status ok */


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

long * Merger_Game_Views_BoardItem_BoardItemView2__HasBehaviour_object_
                 (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  long lVar29;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar30;
  undefined1 *unaff_x24;
  undefined1 *puVar31;
  long unaff_x25;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [16];
  long alStack_1b8 [3];
  undefined1 auStack_1a0 [16];
  long alStack_190 [4];
  undefined1 auStack_170 [16];
  long alStack_160 [5];
  undefined1 auStack_138 [16];
  long lStack_128;
  long alStack_120 [5];
  long alStack_f8 [3];
  long alStack_e0 [4];
  ulong auStack_c0 [4];
  long lStack_a0;
  undefined8 uStack_98;
  
  plVar22 = *(long **)(param_2 + 0x38);
  if (plVar22 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_07779758);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar22 = *(long **)(param_2 + 0x38);
    if (plVar22 == (long *)0x0) {
      func_0x03256878(param_2);
      plVar22 = *(long **)(param_2 + 0x38);
    }
  }
  lVar28 = *(long *)(param_1 + 0x90);
  lVar29 = *plVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar10 = func_0x057a51c4(lVar29,0);
  if (lVar28 != 0) {
    uVar9 = func_0x04fe343c(lVar28,uVar10,
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)PTR_DAT_07779758 + 0x20) + 0xc0) + 0x110)
                           );
    return (long *)(ulong)(~uVar9 >> 0x1f);
  }
  auVar33 = func_0x03280cac();
  lVar28 = auVar33._8_8_;
  if ((*(long *)(lVar28 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_07779760), *(long *)(lVar28 + 0x38) == 0)) {
    func_0x03256878(lVar28);
  }
  lVar11 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar11 == 0) {
LAB_03cda14c:
    auVar33 = func_0x03280cac();
    lVar23 = auVar33._8_8_;
    lVar11 = auVar33._0_8_;
    unaff_x25 = tpidr_el0;
    uStack_98 = *(undefined8 *)(unaff_x25 + 0x28);
    puVar14 = *(undefined8 **)(lVar23 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779760);
      puVar14 = *(undefined8 **)(lVar23 + 0x38);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x03256878(lVar23);
        puVar14 = *(undefined8 **)(lVar23 + 0x38);
      }
    }
    unaff_x21 = (ulong)*(uint *)(puVar14[1] + 0xfc);
    uVar15 = unaff_x21 + 0xf & 0x1fffffff0;
    unaff_x23 = (long)&lStack_a0 - uVar15;
    unaff_x22 = unaff_x23 - uVar15;
    puVar31 = (undefined1 *)(unaff_x22 - uVar15);
    func_0x072ce9a0(puVar31,0,unaff_x21);
    uVar15 = 0;
    if (*(long *)(lVar11 + 0x10) != 0) {
      param_4 = &lStack_a0;
      lStack_a0 = unaff_x23;
      (*(code *)((undefined8 *)*puVar14)[2])(*(undefined8 *)*puVar14);
      func_0x072ce970(puVar31,unaff_x23,unaff_x21);
      lVar11 = *(long *)(lVar11 + 0x18);
      uVar15 = unaff_x21;
      func_0x072ce970(unaff_x22,puVar31);
      lVar28 = func_0x03280b94(*(undefined8 *)(*(long *)(lVar23 + 0x38) + 8),unaff_x22);
      if (lVar11 != 0) {
        lVar29 = *(long *)(lVar11 + 0x10);
        lVar26 = *(long *)PTR_DAT_07779760;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar29 != 0) {
          uVar9 = *(uint *)(lVar11 + 0x18);
          if (uVar9 < *(uint *)(lVar29 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar9 + 1;
            plVar22 = (long *)(lVar29 + (long)(int)uVar9 * 8 + 0x20);
            *plVar22 = lVar28;
            goto SUB_032809c4;
          }
          lVar26 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
          uVar10 = 0x3cda2a8;
          lVar29 = lVar11;
          unaff_x24 = puVar31;
          goto SUB_0414446c;
        }
      }
    }
    func_0x03280cac();
    auVar33 = func_0x072ce990();
    lVar29 = auVar33._0_8_;
    *(undefined8 *)(puVar31 + -0x20) = 0x3cda2dc;
    *(ulong *)(puVar31 + -0x18) = unaff_x21;
    *(long *)(puVar31 + -0x10) = lVar11;
    *(long *)(puVar31 + -8) = lVar23;
    uVar25 = uVar15;
    if (*(long *)(uVar15 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779768);
      func_0x03280a18(PTR_DAT_07779770);
      if (*(long *)(uVar15 + 0x38) == 0) {
        func_0x03256878(uVar15);
      }
    }
    if (((lVar29 != 0) && (*(long *)(lVar29 + 0x10) != 0)) &&
       (lVar28 = func_0x03d004fc(*(long *)(lVar29 + 0x10),*(undefined8 *)PTR_DAT_07779768),
       lVar28 != 0)) {
      uVar25 = *(ulong *)PTR_DAT_07779770;
      lVar28 = func_0x05341858(lVar28,auVar33._8_8_);
      if (lVar28 != 0) {
        func_0x03cef278(lVar28,**(undefined8 **)(uVar15 + 0x38));
        if ((*(long *)(lVar29 + 0x10) != 0) &&
           (plVar22 = (long *)func_0x03d03718(*(long *)(lVar29 + 0x10),
                                              *(undefined8 *)(*(long *)(uVar15 + 0x38) + 8)),
           plVar22 != (long *)0x0)) {
          uVar32 = *(undefined8 *)(puVar31 + -8);
          uVar10 = *(undefined8 *)(puVar31 + -0x20);
          goto SUB_0728771c;
        }
      }
    }
    auVar34 = func_0x03280cac();
    lVar28 = auVar34._0_8_;
    puVar6 = (undefined8 *)(puVar31 + -0x40);
    *(undefined8 *)(puVar31 + -0x40) = 0x3cda390;
    *(long *)(puVar31 + -0x38) = auVar33._8_8_;
    *(long *)(puVar31 + -0x30) = lVar29;
    *(ulong *)(puVar31 + -0x28) = uVar15;
    uVar15 = uVar25;
    if (*(long *)(uVar25 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779768);
      func_0x03280a18(PTR_DAT_07779770);
      if (*(long *)(uVar25 + 0x38) == 0) {
        func_0x03256878(uVar25);
      }
    }
    if (((lVar28 != 0) && (*(long *)(lVar28 + 0x10) != 0)) &&
       (lVar29 = func_0x03d004fc(*(long *)(lVar28 + 0x10),*(undefined8 *)PTR_DAT_07779768),
       lVar29 != 0)) {
      uVar15 = *(ulong *)PTR_DAT_07779770;
      lVar29 = func_0x05341858(lVar29,auVar34._8_8_);
      if (((lVar29 != 0) &&
          ((**(code **)**(undefined8 **)(uVar25 + 0x38))(), *(long *)(lVar28 + 0x10) != 0)) &&
         (plVar22 = (long *)(*(code *)**(undefined8 **)(*(long *)(uVar25 + 0x38) + 8))(),
         plVar22 != (long *)0x0)) {
        uVar32 = *(undefined8 *)(puVar31 + -0x28);
        puVar31 = puVar31 + -0x20;
        uVar10 = *puVar6;
SUB_0728771c:
        *(undefined8 *)(puVar31 + -0x10) = uVar10;
        lVar29 = plVar22[2];
        if (lVar29 == 0) {
          plVar22 = (long *)func_0x03280cac(plVar22,0);
          *(undefined8 *)(puVar31 + -0x20) = 0x7287744;
          *(undefined8 *)(puVar31 + -0x18) = uVar32;
          func_0x0728a9a0(plVar22,1);
          return plVar22;
        }
        *(undefined4 *)(lVar29 + 0x68) = 2;
        *(undefined1 *)(lVar29 + 0x11) = 1;
        return plVar22;
      }
    }
    auVar33 = func_0x03280cac();
    *(code **)(puVar31 + -0x60) =
         MergeEngine_ECS_Components_Board_BoardQueueComponent__Select_object_;
    *(long *)(puVar31 + -0x58) = auVar34._8_8_;
    *(long *)(puVar31 + -0x50) = lVar28;
    *(ulong *)(puVar31 + -0x48) = uVar25;
    lVar29 = *(long *)(uVar15 + 0x38);
    if (lVar29 == 0) {
      func_0x03256878(uVar15);
      lVar29 = *(long *)(uVar15 + 0x38);
    }
    lVar28 = func_0x03d50a94(*(undefined8 *)(auVar33._0_8_ + 0x28),auVar33._8_8_,
                             *(undefined8 *)(lVar29 + 8));
    lVar11 = func_0x03d50a94(*(undefined8 *)(auVar33._0_8_ + 0x30),auVar33._8_8_,
                             *(undefined8 *)(*(long *)(uVar15 + 0x38) + 8));
    auVar33._8_8_ = lVar11;
    auVar33._0_8_ = lVar28;
    lVar23 = *(long *)(*(long *)(uVar15 + 0x38) + 0x18);
    *(undefined8 *)(puVar31 + -0x60) = *(undefined8 *)(puVar31 + -0x60);
    *(undefined8 *)(puVar31 + -0x58) = *(undefined8 *)(puVar31 + -0x58);
    *(undefined8 *)(puVar31 + -0x50) = *(undefined8 *)(puVar31 + -0x50);
    *(undefined8 *)(puVar31 + -0x48) = *(undefined8 *)(puVar31 + -0x48);
    lVar29 = lVar23;
    if (*(long *)(lVar23 + 0x38) == 0) {
      func_0x03256878(lVar23);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((lVar28 == 0) || (puVar12 = PTR_DAT_07779d18, lVar11 == 0)) {
      uVar10 = func_0x03280a2c(puVar12);
      uVar10 = func_0x05ac7464(uVar10,0);
      auVar34 = func_0x03280b7c(uVar10,lVar23);
      *(undefined8 *)(puVar31 + -0x80) = 0x3d60510;
      *(long *)(puVar31 + -0x78) = lVar28;
      *(long *)(puVar31 + -0x70) = lVar11;
      *(long *)(puVar31 + -0x68) = lVar23;
      lVar28 = lVar29;
      if (*(long *)(lVar29 + 0x38) == 0) {
        func_0x03256878(lVar29);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar34._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar22 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x38) + 8))
                                    (auVar34._0_8_,auVar34._8_8_,0);
        return plVar22;
      }
      uVar10 = func_0x03280a2c(puVar12);
      uVar10 = func_0x05ac7464(uVar10,0);
      auVar33 = func_0x03280b7c(uVar10,lVar29);
      *(undefined8 *)(puVar31 + -0xb0) = 0x3d60588;
      *(long *)(puVar31 + -0xa0) = unaff_x22;
      *(undefined1 (*) [16])(puVar31 + -0x98) = auVar34;
      *(long *)(puVar31 + -0x88) = lVar29;
      lVar29 = lVar28;
      plVar22 = param_4;
      if (param_4[7] == 0) {
        func_0x03256878(param_4);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar33._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar33._8_8_ == 0)) {
        uVar10 = func_0x03280a2c(puVar12);
        uVar10 = func_0x05ac7464(uVar10,0);
        auVar34 = func_0x03280b7c(uVar10,param_4);
        *(undefined8 *)(puVar31 + -0xe0) = 0x3d60608;
        *(undefined1 (*) [16])(puVar31 + -0xd0) = auVar33;
        *(long *)(puVar31 + -0xc0) = lVar28;
        *(long **)(puVar31 + -0xb8) = param_4;
        lVar28 = lVar29;
        plVar21 = plVar22;
        if (plVar22[7] == 0) {
          func_0x03256878(plVar22);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((auVar34._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar22 = (long *)(*(code *)**(undefined8 **)(plVar22[7] + 0x10))
                                      (auVar34._0_8_,auVar34._8_8_,lVar29);
          return plVar22;
        }
        uVar10 = func_0x03280a2c(puVar12);
        uVar10 = func_0x05ac7464(uVar10,0);
        auVar33 = func_0x03280b7c(uVar10,plVar22);
        *(undefined8 *)(puVar31 + -0x110) = 0x3d6068c;
        *(undefined1 (*) [16])(puVar31 + -0x100) = auVar34;
        *(long *)(puVar31 + -0xf0) = lVar29;
        *(long **)(puVar31 + -0xe8) = plVar22;
        plVar30 = (long *)plVar21[7];
        plVar22 = plVar21;
        if (plVar30 == (long *)0x0) {
          func_0x03256878(plVar21);
          plVar30 = (long *)plVar21[7];
        }
        if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar29 = func_0x03280ca0();
        uVar10 = *(undefined8 *)(plVar21[7] + 8);
        func_0x0531dbd0(lVar29,0xfffffffe);
        if (lVar29 != 0) {
          plVar22 = (long *)(lVar29 + 0x38);
          *plVar22 = auVar33._0_8_;
          goto SUB_032809c4;
        }
        auVar34 = func_0x03280cac();
        puVar7 = puVar31 + -0x140;
        *(undefined8 *)(puVar31 + -0x140) = 0x3d60730;
        *(undefined8 *)(puVar31 + -0x130) = 0;
        *(undefined1 (*) [16])(puVar31 + -0x128) = auVar33;
        *(long *)(puVar31 + -0x118) = lVar28;
        plVar30 = (long *)plVar22[7];
        plVar21 = plVar22;
        if (plVar30 == (long *)0x0) {
          func_0x03256878(plVar22);
          plVar30 = (long *)plVar22[7];
        }
        if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar29 = func_0x03280ca0();
        lVar28 = *(long *)(plVar22[7] + 8);
        func_0x0531e428(lVar29,0xfffffffe);
        if (lVar29 != 0) {
          plVar22 = (long *)(lVar29 + 0x38);
          *plVar22 = auVar34._0_8_;
          goto SUB_032809c4;
        }
        uVar32 = 0x3d607d4;
        auVar33 = func_0x03280cac();
        unaff_x22 = 0;
      }
      else {
        plVar21 = *(long **)(param_4[7] + 0x10);
        uVar10 = *(undefined8 *)(puVar31 + -0x88);
        unaff_x22 = *(long *)(puVar31 + -0xa0);
        auVar34 = *(undefined1 (*) [16])(puVar31 + -0x98);
        puVar7 = puVar31 + -0x80;
        uVar32 = *(undefined8 *)(puVar31 + -0xb0);
      }
    }
    else {
      uVar10 = *(undefined8 *)(puVar31 + -0x48);
      plVar21 = *(long **)(*(long *)(lVar23 + 0x38) + 8);
      lVar28 = 0;
      puVar7 = puVar31 + -0x40;
      uVar32 = *(undefined8 *)(puVar31 + -0x60);
      auVar34 = *(undefined1 (*) [16])(puVar31 + -0x58);
    }
    *(undefined8 *)(puVar7 + -0x30) = uVar32;
    *(long *)(puVar7 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar7 + -0x18) = auVar34;
    *(undefined8 *)(puVar7 + -8) = uVar10;
    plVar30 = (long *)plVar21[7];
    plVar22 = plVar21;
    if (plVar30 == (long *)0x0) {
      func_0x03256878(plVar21);
      plVar30 = (long *)plVar21[7];
    }
    if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar29 = func_0x03280ca0();
    uVar10 = *(undefined8 *)(plVar21[7] + 8);
    func_0x0531ec78(lVar29,0xfffffffe);
    if (lVar29 != 0) {
      plVar22 = (long *)(lVar29 + 0x40);
      *plVar22 = auVar33._0_8_;
      goto SUB_032809c4;
    }
    auVar34 = func_0x03280cac();
    plVar21 = auVar34._0_8_;
    *(undefined8 *)(puVar7 + -0x60) = 0x3d60878;
    *(long *)(puVar7 + -0x58) = unaff_x23;
    *(undefined8 *)(puVar7 + -0x50) = 0;
    *(undefined1 (*) [16])(puVar7 + -0x48) = auVar33;
    *(long *)(puVar7 + -0x38) = lVar28;
    plVar30 = (long *)plVar22[7];
    if (plVar30 == (long *)0x0) {
      func_0x03256878(plVar22);
      plVar30 = (long *)plVar22[7];
    }
    if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar30 = (long *)func_0x03280ca0();
    puVar14 = *(undefined8 **)(plVar22[7] + 8);
    (*(code *)*puVar14)(plVar30,0xfffffffe);
    if (plVar30 != (long *)0x0) {
      func_0x02f17738(plVar30,*(long *)(*(long *)plVar22[7] + 0x80) + 0xc0,plVar21);
      func_0x02f17738(plVar30,*(long *)(*(long *)plVar22[7] + 0x80) + 0x100,auVar34._8_8_);
      func_0x02f17738(plVar30,*(long *)(*(long *)plVar22[7] + 0x80) + 0x80,uVar10);
      return plVar30;
    }
    auVar33 = func_0x03280cac();
    lVar29 = auVar33._8_8_;
    plVar30 = auVar33._0_8_;
    *(undefined8 *)(puVar7 + -0x90) = 0x3d60944;
    *(undefined8 *)(puVar7 + -0x88) = 0;
    *(undefined1 (*) [16])(puVar7 + -0x80) = auVar34;
    *(long **)(puVar7 + -0x70) = plVar22;
    *(undefined8 *)(puVar7 + -0x68) = uVar10;
    puVar16 = puVar14;
    if (puVar14[7] == 0) {
      func_0x03256878(puVar14);
    }
    puVar12 = PTR_DAT_07774b08;
    if ((plVar30 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar29 == 0)) {
      uVar10 = func_0x03280a2c(puVar12);
      uVar10 = func_0x05ac7464(uVar10,0);
      func_0x03280b7c(uVar10,puVar14);
LAB_03d60c04:
      func_0x03281048(plVar30);
      lVar28 = 0;
    }
    else {
      lVar28 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c();
      }
      lVar11 = *plVar30;
      bVar1 = *(byte *)(lVar11 + 0x130);
      if ((*(byte *)(lVar28 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar28 + 0x130) * 8 + -8) == lVar28))
      {
        lVar28 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = func_0x0325681c(lVar28);
          lVar11 = *plVar30;
          bVar1 = *(byte *)(lVar11 + 0x130);
        }
        if ((*(byte *)(lVar28 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar28 + 0x130) * 8 + -8) == lVar28
           )) {
          lVar28 = *(long *)(puVar14[7] + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            lVar28 = func_0x0325681c(lVar28);
            lVar11 = *plVar30;
            bVar1 = *(byte *)(lVar11 + 0x130);
          }
          if ((*(byte *)(lVar28 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar28 + 0x130) * 8 + -8) ==
              lVar28)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar22 = (long *)(**(code **)(lVar11 + 0x228))
                                        (plVar30,lVar29,*(undefined8 *)(lVar11 + 0x230));
            return plVar22;
          }
        }
        goto LAB_03d60c04;
      }
      lVar28 = *(long *)(puVar14[7] + 0x20);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c(lVar28);
      }
      lVar28 = func_0x03280b90(plVar30,lVar28);
      if (lVar28 == 0) {
        lVar28 = *(long *)(puVar14[7] + 0x38);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = func_0x0325681c();
        }
        if ((*(byte *)(*plVar30 + 0x130) < *(byte *)(lVar28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar30 + 200) + (ulong)*(byte *)(lVar28 + 0x130) * 8 + -8) !=
            lVar28)) {
          if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar22 = (long *)func_0x03280ca0();
          func_0x04b68fa4(plVar22,plVar30,lVar29,*(undefined8 *)(puVar14[7] + 0x58));
          return plVar22;
        }
        if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar21 = (long *)func_0x03280ca0();
        lVar28 = *(long *)(puVar14[7] + 0x38);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = func_0x0325681c(lVar28);
        }
        if ((*(byte *)(lVar28 + 0x130) <= *(byte *)(*plVar30 + 0x130)) &&
           (*(long *)(*(long *)(*plVar30 + 200) + (ulong)*(byte *)(lVar28 + 0x130) * 8 + -8) ==
            lVar28)) {
          func_0x04b713b0(plVar21,plVar30,lVar29,*(undefined8 *)(puVar14[7] + 0x48));
          return plVar21;
        }
        goto LAB_03d60c04;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar21 = (long *)func_0x03280ca0();
      lVar28 = *(long *)(puVar14[7] + 0x20);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c(lVar28);
      }
      lVar11 = func_0x03280b90(plVar30,lVar28);
      if (lVar11 != 0) {
        func_0x04b66610(plVar21,lVar11,lVar29,*(undefined8 *)(puVar14[7] + 0x30));
        return plVar21;
      }
    }
    auVar34 = func_0x03281048(plVar30,lVar28);
    lVar29 = auVar34._8_8_;
    plVar22 = auVar34._0_8_;
    *(undefined8 *)(puVar7 + -0xc0) = 0x3d60c18;
    *(long *)(puVar7 + -0xb8) = lVar28;
    *(long **)(puVar7 + -0xb0) = plVar21;
    *(undefined8 **)(puVar7 + -0xa8) = puVar14;
    *(undefined1 (*) [16])(puVar7 + -0xa0) = auVar33;
    if (puVar16[7] == 0) {
      func_0x03256878(puVar16);
    }
    puVar12 = PTR_DAT_07774b08;
    if ((plVar22 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar29 == 0)) {
      uVar10 = func_0x03280a2c(puVar12);
      uVar10 = func_0x05ac7464(uVar10,0);
      func_0x03280b7c(uVar10,puVar16);
LAB_03d60ed8:
      func_0x03281048(plVar22);
    }
    else {
      lVar11 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      lVar23 = *plVar22;
      bVar1 = *(byte *)(lVar23 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
          lVar23 = *plVar22;
          bVar1 = *(byte *)(lVar23 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
           )) {
          lVar11 = *(long *)(puVar16[7] + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = func_0x0325681c(lVar11);
            lVar23 = *plVar22;
            bVar1 = *(byte *)(lVar23 + 0x130);
          }
          if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) ==
              lVar11)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar22 = (long *)(**(code **)(lVar23 + 0x228))
                                        (plVar22,lVar29,*(undefined8 *)(lVar23 + 0x230));
            return plVar22;
          }
        }
        goto LAB_03d60ed8;
      }
      lVar11 = *(long *)(puVar16[7] + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar11 = func_0x03280b90(plVar22,lVar11);
      if (lVar11 == 0) {
        lVar11 = *(long *)(puVar16[7] + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c();
        }
        if ((*(byte *)(*plVar22 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar22 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) {
          if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar21 = (long *)func_0x03280ca0();
          func_0x04b693d0(plVar21,plVar22,lVar29,*(undefined8 *)(puVar16[7] + 0x58));
          return plVar21;
        }
        if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar21 = (long *)func_0x03280ca0();
        lVar11 = *(long *)(puVar16[7] + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar22 + 0x130)) &&
           (*(long *)(*(long *)(*plVar22 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) ==
            lVar11)) {
          func_0x04b715c8(plVar21,plVar22,lVar29,*(undefined8 *)(puVar16[7] + 0x48));
          return plVar21;
        }
        goto LAB_03d60ed8;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar21 = (long *)func_0x03280ca0();
      lVar28 = *(long *)(puVar16[7] + 0x20);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c(lVar28);
      }
      lVar11 = func_0x03280b90(plVar22,lVar28);
      if (lVar11 != 0) {
        func_0x04b667e0(plVar21,lVar11,lVar29,*(undefined8 *)(puVar16[7] + 0x30));
        return plVar21;
      }
    }
    lVar29 = func_0x03281048(plVar22,lVar28);
    *(undefined8 *)(puVar7 + -0xe0) = 0x3d60eec;
    *(undefined1 (*) [16])(puVar7 + -0xd0) = auVar34;
    lVar28 = *(long *)(lVar29 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x10);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    plVar22 = (long *)**(long **)(lVar28 + 0xb8);
    func_0x03280ab0();
    if (plVar22 != (long *)0x0) {
      return plVar22;
    }
    lVar28 = *(long *)(lVar29 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    uVar10 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar28 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar28 = *(long *)(lVar29 + 0x20);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x10);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c();
    }
    **(undefined8 **)(lVar28 + 0xb8) = uVar10;
    lVar29 = *(long *)(lVar29 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    plVar22 = *(long **)(lVar29 + 0xb8);
    goto SUB_032809c4;
  }
  lVar28 = func_0x03d04cac(lVar11,**(undefined8 **)(lVar28 + 0x38));
  lVar11 = *(long *)(auVar33._0_8_ + 0x18);
  if (lVar11 == 0) goto LAB_03cda14c;
  lVar23 = *(long *)(lVar11 + 0x10);
  lVar26 = *(long *)PTR_DAT_07779760;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar23 == 0) goto LAB_03cda14c;
  uVar9 = *(uint *)(lVar11 + 0x18);
  if (uVar9 < *(uint *)(lVar23 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar9 + 1;
    plVar22 = (long *)(lVar23 + (long)(int)uVar9 * 8 + 0x20);
    *plVar22 = lVar28;
    goto SUB_032809c4;
  }
  lVar26 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
  puVar31 = &stack0xffffffffffffffe0;
  uVar10 = 0x3cda090;
  lVar23 = 0;
SUB_0414446c:
  *(undefined8 *)(puVar31 + -0x30) = uVar10;
  *(long *)(puVar31 + -0x20) = unaff_x22;
  *(ulong *)(puVar31 + -0x18) = unaff_x21;
  *(long *)(puVar31 + -0x10) = lVar29;
  *(long *)(puVar31 + -8) = lVar23;
  uVar2 = *(uint *)(lVar11 + 0x18);
  uVar9 = uVar2 + 1;
  lVar29 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(lVar11,(ulong)uVar9);
  lVar23 = *(long *)(lVar11 + 0x10);
  *(uint *)(lVar11 + 0x18) = uVar9;
  if (lVar23 == 0) {
    func_0x03280cac();
  }
  else if (uVar2 < *(uint *)(lVar23 + 0x18)) {
    plVar22 = (long *)(lVar23 + (long)(int)uVar2 * 8 + 0x20);
    *plVar22 = lVar28;
    goto SUB_032809c4;
  }
  auVar33 = func_0x03280cb4();
  lVar26 = auVar33._8_8_;
  lVar23 = auVar33._0_8_;
  *(undefined8 *)(puVar31 + -0x60) = 0x41444d8;
  *(long *)(puVar31 + -0x50) = (long)(int)uVar2;
  *(ulong *)(puVar31 + -0x48) = (ulong)uVar9;
  *(long *)(puVar31 + -0x40) = lVar11;
  *(long *)(puVar31 + -0x38) = lVar28;
  lVar11 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar26,0x14);
  lVar28 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    lVar28 = func_0x0325681c(lVar28);
  }
  if (lVar26 == 0) {
LAB_0414454c:
    lVar13 = 0;
  }
  else {
    lVar13 = func_0x03280b90(lVar26,lVar28);
    if (lVar13 == 0) {
      func_0x03281048(lVar26,lVar28);
      goto LAB_0414454c;
    }
  }
  lVar28 = *(long *)(lVar23 + 0x10);
  lVar24 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  if (lVar28 != 0) {
    uVar9 = *(uint *)(lVar23 + 0x18);
    if (uVar9 < *(uint *)(lVar28 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar9 + 1;
      plVar22 = (long *)(lVar28 + (long)(int)uVar9 * 8 + 0x20);
      *plVar22 = lVar13;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar19 = (ulong *)(((ulong)plVar22 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar19,0x10);
          if (bVar4) {
            *puVar19 = *puVar19 | 1L << ((ulong)plVar22 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return plVar22;
    }
    func_0x0414446c(lVar23,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70)
                   );
LAB_041445ac:
    return (long *)(ulong)(*(int *)(lVar23 + 0x18) - 1);
  }
  auVar35 = func_0x03280cac();
  uVar10 = auVar35._0_8_;
  if (auVar35._8_4_ == 1) {
    puVar14 = (undefined8 *)func_0x072ce910(uVar10);
    uVar10 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar15 = func_0x032810d8(uVar10,*(undefined8 *)*puVar14);
    if ((uVar15 & 1) != 0) {
      func_0x072ce920();
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x68);
      lVar29 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar29 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar10 = func_0x057a51c4(uVar10,0);
      func_0x057b7b18(lVar26,uVar10,0);
      goto LAB_041445ac;
    }
    puVar16 = (undefined8 *)func_0x072ce930(8);
    *puVar16 = *puVar14;
    lVar11 = 0;
    uVar10 = func_0x072ce940(puVar16,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar10);
  auVar33 = func_0x02f09514();
  plVar20 = auVar33._8_8_;
  plVar21 = auVar33._0_8_;
  uVar9 = *(uint *)(plVar21 + 3);
  lVar28 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x90);
  uVar15 = (ulong)uVar9;
  *(undefined8 *)(puVar31 + -0xa0) = 0x4144678;
  *(long *)(puVar31 + -0x98) = unaff_x25;
  *(undefined1 **)(puVar31 + -0x90) = unaff_x24;
  *(long *)(puVar31 + -0x88) = unaff_x23;
  *(undefined8 *)(puVar31 + -0x80) = uVar10;
  *(long *)(puVar31 + -0x78) = lVar29;
  *(long *)(puVar31 + -0x70) = lVar26;
  *(long *)(puVar31 + -0x68) = lVar23;
  plVar30 = (long *)0x7e18000;
  plVar22 = plVar20;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar20 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar21 + 3) < uVar9) {
    func_0x057b8434(0);
  }
  lVar29 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  plVar17 = (long *)func_0x03280b90(plVar20,lVar29);
  if (plVar17 == (long *)0x0) {
    if ((int)uVar9 < (int)plVar21[3]) {
      if (plVar20 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar29 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
        }
        lVar11 = *plVar20;
        uVar25 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar25 != 0) {
          piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar29) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar25 = uVar25 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar25 != 0);
        }
        plVar22 = (long *)0x0;
        puVar14 = (undefined8 *)func_0x03256b10(plVar20);
LAB_04145868:
        plVar30 = (long *)(*(code *)*puVar14)(plVar20,puVar14[1]);
        puVar12 = PTR_DAT_0774e8e0;
        if (plVar30 != (long *)0x0) {
          do {
            lVar29 = *plVar30;
            uVar25 = (ulong)*(ushort *)(lVar29 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar12) {
                  puVar14 = (undefined8 *)(lVar29 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            plVar22 = (long *)0x0;
            puVar14 = (undefined8 *)func_0x03256b10(plVar30);
LAB_041458d0:
            plVar18 = (long *)(*(code *)*puVar14)(plVar30,puVar14[1]);
            if (((ulong)plVar18 & 1) == 0) {
              uVar15 = 0;
              iVar8 = 5;
              if (plVar30 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar29 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
              lVar29 = func_0x0325681c(lVar29);
            }
            lVar11 = *plVar30;
            uVar25 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == lVar29) {
                  puVar14 = (undefined8 *)(lVar11 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar14 = (undefined8 *)func_0x03256b10(plVar30,lVar29,0);
LAB_04145948:
            plVar22 = (long *)(*(code *)*puVar14)(plVar30,puVar14[1]);
            func_0x04145380(plVar21,uVar15,plVar22,
                            *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x160));
            uVar15 = (ulong)((int)uVar15 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar35 = func_0x03280ca4(uVar15);
        if (auVar35._8_4_ != 1) {
          if (plVar30 == (long *)0x0) goto LAB_04145ae0;
          lVar29 = *plVar30;
          uVar15 = (ulong)*(ushort *)(lVar29 + 0x12e);
          if (uVar15 == 0) goto LAB_04145ab8;
          piVar27 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar19 = (ulong *)func_0x072ce910(auVar35._0_8_);
        uVar15 = *puVar19;
        plVar18 = (long *)func_0x072ce920();
        iVar8 = 0;
        if (plVar30 != (long *)0x0) {
LAB_04145988:
          lVar29 = *plVar30;
          uVar25 = (ulong)*(ushort *)(lVar29 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar14 = (undefined8 *)(lVar29 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          plVar22 = (long *)0x0;
          puVar14 = (undefined8 *)func_0x03256b10(plVar30);
LAB_041459dc:
          plVar18 = (long *)(*(code *)*puVar14)(plVar30,puVar14[1]);
        }
LAB_041459e8:
      } while (uVar15 != 0);
      if (iVar8 == 5) goto LAB_04145a10;
      if (iVar8 != 0) {
        return plVar18;
      }
    }
    plVar18 = (long *)func_0x041462cc(plVar21,plVar20,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar29 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    lVar11 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar29) {
          puVar14 = (undefined8 *)(lVar11 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar15 = uVar15 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar15 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar17,lVar29,0);
LAB_04145728:
    plVar18 = (long *)(*(code *)*puVar14)(plVar17,puVar14[1]);
    iVar8 = (int)plVar18;
    if (0 < iVar8) {
      func_0x04144aa0(plVar21,(int)plVar21[3] + iVar8,
                      *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x78));
      iVar5 = (int)plVar21[3] - uVar9;
      if (iVar5 != 0 && (int)uVar9 <= (int)plVar21[3]) {
        func_0x057b9f30(plVar21[2],uVar9,plVar21[2],iVar8 + uVar9,iVar5,0);
      }
      if (plVar21 == plVar17) {
        func_0x057b9f30(plVar21[2],0,plVar21[2],uVar9,uVar9,0);
        plVar18 = (long *)func_0x057b9f30(plVar21[2],iVar8 + uVar9,plVar21[2],uVar9 << 1,
                                          (int)plVar21[3] - uVar9,0);
      }
      else {
        lVar11 = plVar21[2];
        lVar29 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
        }
        lVar28 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar15 != 0) {
          piVar27 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar29) {
              puVar14 = (undefined8 *)(lVar28 + (long)(*piVar27 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar15 = uVar15 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar17,lVar29,5);
LAB_04145838:
        plVar18 = (long *)(*(code *)*puVar14)(plVar17,lVar11,uVar9,puVar14[1]);
      }
      *(int *)(plVar21 + 3) = (int)plVar21[3] + iVar8;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar21 + 0x1c) = *(int *)((long)plVar21 + 0x1c) + 1;
  return plVar18;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar27 = piVar27 + 4;
    if (uVar15 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar14 = (undefined8 *)(lVar29 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar22 = (long *)0x0;
  puVar14 = (undefined8 *)func_0x03256b10(plVar30);
LAB_04145ad4:
  (*(code *)*puVar14)(plVar30,puVar14[1]);
LAB_04145ae0:
  func_0x03365958(auVar35._0_8_);
  func_0x03280ca4(0);
  auVar33 = func_0x02f09514();
  lVar29 = auVar33._0_8_;
  *(undefined8 *)(puVar31 + -0xc0) = 0x4145af8;
  *(long *)(puVar31 + -0xb0) = lVar28;
  *(long **)(puVar31 + -0xa8) = plVar21;
  uVar9 = func_0x03f898d4(*(undefined8 *)(lVar29 + 0x10),auVar33._8_8_,0,
                          *(undefined4 *)(lVar29 + 0x18),
                          *(undefined8 *)
                           (*(long *)(*(long *)(*(long *)(*(long *)(plVar22[4] + 0xc0) + 0xd0) +
                                               0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar9) {
    func_0x04145da4(lVar29,uVar9);
  }
  return (long *)(ulong)(~uVar9 >> 0x1f);
}

