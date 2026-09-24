/* Ghidra 12.1.2 native pseudocode; RVA 0x6731778; Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory.CreateAttachers; status ok */


/* WARNING: Possible PIC construction at 0x068318e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06831900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06831918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06831930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06831948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06831970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06831998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068319c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068319e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06831a10: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06831a14) */
/* WARNING: Removing unreachable block (ram,0x068319ec) */
/* WARNING: Removing unreachable block (ram,0x068319c4) */
/* WARNING: Removing unreachable block (ram,0x0683199c) */
/* WARNING: Removing unreachable block (ram,0x06831974) */
/* WARNING: Removing unreachable block (ram,0x0683194c) */
/* WARNING: Removing unreachable block (ram,0x06831934) */
/* WARNING: Removing unreachable block (ram,0x0683191c) */
/* WARNING: Removing unreachable block (ram,0x06831904) */
/* WARNING: Removing unreachable block (ram,0x068318ec) */
/* WARNING: Removing unreachable block (ram,0x03d607bc) */

undefined1  [16]
Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__CreateAttachers
          (long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

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
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
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
  long *plVar21;
  undefined8 extraout_x1_09;
  long lVar22;
  undefined8 extraout_x1_10;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  int *piVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  long *plVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [16];
  long alStack_1f8 [3];
  undefined1 auStack_1e0 [16];
  long alStack_1d0 [4];
  undefined1 auStack_1b0 [16];
  long alStack_1a0 [5];
  undefined1 auStack_178 [16];
  long lStack_168;
  long alStack_160 [5];
  long alStack_138 [3];
  long alStack_120 [4];
  long alStack_100 [4];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  long lStack_68;
  long lVar20;
  
  puVar34 = PTR_DAT_0780d8d0;
  puVar35 = PTR_DAT_0780d8c8;
  puVar36 = PTR_DAT_0780d8c0;
  puVar39 = PTR_DAT_0780d8b8;
  puVar24 = PTR_DAT_0780d8b0;
  puVar23 = PTR_DAT_0780d8a8;
  puVar28 = PTR_DAT_0780d890;
  if ((bRam0000000007e2898e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d8d8);
    func_0x03280a18(PTR_DAT_0780d898);
    func_0x03280a18(PTR_DAT_0780d8c0);
    func_0x03280a18(PTR_DAT_0780d8e0);
    func_0x03280a18(PTR_DAT_0780d8e8);
    func_0x03280a18(PTR_DAT_0780d890);
    func_0x03280a18(PTR_DAT_0780d8f0);
    func_0x03280a18(PTR_DAT_0780d8f8);
    func_0x03280a18(PTR_DAT_0780d8d0);
    func_0x03280a18(PTR_DAT_0780d8a8);
    func_0x03280a18(PTR_DAT_0780d8a0);
    func_0x03280a18(PTR_DAT_0780d8b0);
    func_0x03280a18(PTR_DAT_0780d8b8);
    func_0x03280a18(PTR_DAT_0780d900);
    func_0x03280a18(PTR_DAT_0780d8c8);
    func_0x03280a18(PTR_DAT_0780d908);
    func_0x03280a18(PTR_DAT_0780d910);
    func_0x03280a18(PTR_DAT_0780d918);
    func_0x03280a18(PTR_DAT_0780d920);
    func_0x03280a18(PTR_DAT_0780d928);
    bRam0000000007e2898e = 1;
  }
  lVar22 = *(long *)puVar28;
  uStack_80 = 0x68318ec;
  puStack_70 = puVar28;
  lStack_68 = param_1;
  if ((*(long *)(lVar22 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_07779760), *(long *)(lVar22 + 0x38) == 0)) {
    func_0x03256878(lVar22);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_03cda14c:
    auVar47 = func_0x03280cac();
    lVar29 = auVar47._8_8_;
    puVar28 = auVar47._0_8_;
    uStack_d0 = 0x7e28000;
    uStack_c8 = 0x3cda150;
    puStack_c0 = puVar23;
    puStack_b8 = puVar24;
    puStack_b0 = puVar39;
    puStack_a8 = puVar36;
    puStack_a0 = puVar35;
    puStack_98 = puVar34;
    puVar24 = (undefined *)tpidr_el0;
    uStack_d8 = *(undefined8 *)(puVar24 + 0x28);
    puVar13 = *(undefined8 **)(lVar29 + 0x38);
    lStack_90 = lVar22;
    lStack_88 = param_1;
    if (puVar13 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779760);
      puVar13 = *(undefined8 **)(lVar29 + 0x38);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x03256878(lVar29);
        puVar13 = *(undefined8 **)(lVar29 + 0x38);
      }
    }
    puVar34 = (undefined *)(ulong)*(uint *)(puVar13[1] + 0xfc);
    uVar15 = (ulong)(puVar34 + 0xf) & 0x1fffffff0;
    puVar36 = (undefined *)((long)&puStack_e0 - uVar15);
    puVar35 = puVar36 + -uVar15;
    puVar38 = puVar35 + -uVar15;
    func_0x072ce9a0(puVar38,0,puVar34);
    puVar23 = (undefined *)0x0;
    if (*(long *)(puVar28 + 0x10) != 0) {
      param_4 = &puStack_e0;
      puStack_e0 = puVar36;
      (*(code *)((undefined8 *)*puVar13)[2])(*(undefined8 *)*puVar13);
      func_0x072ce970(puVar38,puVar36,puVar34);
      puVar28 = *(undefined **)(puVar28 + 0x18);
      puVar23 = puVar34;
      func_0x072ce970(puVar35,puVar38);
      lVar10 = func_0x03280b94(*(undefined8 *)(*(long *)(lVar29 + 0x38) + 8),puVar35);
      if (puVar28 != (undefined *)0x0) {
        lVar22 = *(long *)(puVar28 + 0x10);
        lVar32 = *(long *)PTR_DAT_07779760;
        *(int *)(puVar28 + 0x1c) = *(int *)(puVar28 + 0x1c) + 1;
        if (lVar22 != 0) {
          uVar2 = *(uint *)(puVar28 + 0x18);
          if (uVar2 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(puVar28 + 0x18) = uVar2 + 1;
            plVar11 = (long *)(lVar22 + (long)(int)uVar2 * 8 + 0x20);
            *plVar11 = lVar10;
            goto SUB_032809c4;
          }
          lVar22 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70);
          uVar14 = 0x3cda2a8;
          puVar23 = puVar28;
          puVar39 = puVar38;
          goto SUB_0414446c;
        }
      }
    }
    func_0x03280cac();
    auVar47 = func_0x072ce990();
    lVar22 = auVar47._0_8_;
    *(undefined8 *)(puVar38 + -0x20) = 0x3cda2dc;
    *(undefined **)(puVar38 + -0x18) = puVar34;
    *(undefined **)(puVar38 + -0x10) = puVar28;
    *(long *)(puVar38 + -8) = lVar29;
    puVar24 = puVar23;
    if (*(long *)(puVar23 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779768);
      func_0x03280a18(PTR_DAT_07779770);
      if (*(long *)(puVar23 + 0x38) == 0) {
        func_0x03256878(puVar23);
      }
    }
    if (((lVar22 != 0) && (*(long *)(lVar22 + 0x10) != 0)) &&
       (lVar10 = func_0x03d004fc(*(long *)(lVar22 + 0x10),*(undefined8 *)PTR_DAT_07779768),
       lVar10 != 0)) {
      puVar24 = *(undefined **)PTR_DAT_07779770;
      lVar10 = func_0x05341858(lVar10,auVar47._8_8_);
      if (lVar10 != 0) {
        func_0x03cef278(lVar10,**(undefined8 **)(puVar23 + 0x38));
        if ((*(long *)(lVar22 + 0x10) != 0) &&
           (uVar15 = func_0x03d03718(*(long *)(lVar22 + 0x10),
                                     *(undefined8 *)(*(long *)(puVar23 + 0x38) + 8)), uVar15 != 0))
        {
          uVar12 = *(undefined8 *)(puVar38 + -8);
          uVar14 = *(undefined8 *)(puVar38 + -0x20);
          goto SUB_0728771c;
        }
      }
    }
    auVar41 = func_0x03280cac();
    lVar10 = auVar41._0_8_;
    puVar7 = (undefined8 *)(puVar38 + -0x40);
    *(undefined8 *)(puVar38 + -0x40) = 0x3cda390;
    *(long *)(puVar38 + -0x38) = auVar47._8_8_;
    *(long *)(puVar38 + -0x30) = lVar22;
    *(undefined **)(puVar38 + -0x28) = puVar23;
    puVar28 = puVar24;
    if (*(long *)(puVar24 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779768);
      func_0x03280a18(PTR_DAT_07779770);
      if (*(long *)(puVar24 + 0x38) == 0) {
        func_0x03256878(puVar24);
      }
    }
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) &&
       (lVar22 = func_0x03d004fc(*(long *)(lVar10 + 0x10),*(undefined8 *)PTR_DAT_07779768),
       lVar22 != 0)) {
      puVar28 = *(undefined **)PTR_DAT_07779770;
      lVar22 = func_0x05341858(lVar22,auVar41._8_8_);
      if (((lVar22 != 0) &&
          ((**(code **)**(undefined8 **)(puVar24 + 0x38))(), *(long *)(lVar10 + 0x10) != 0)) &&
         (uVar15 = (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0x38) + 8))(), uVar15 != 0)) {
        uVar12 = *(undefined8 *)(puVar38 + -0x28);
        puVar38 = puVar38 + -0x20;
        uVar14 = *puVar7;
SUB_0728771c:
        *(undefined8 *)(puVar38 + -0x10) = uVar14;
        lVar22 = *(long *)(uVar15 + 0x10);
        if (lVar22 == 0) {
          auVar41._0_8_ = func_0x03280cac(uVar15,0);
          *(undefined8 *)(puVar38 + -0x20) = 0x7287744;
          *(undefined8 *)(puVar38 + -0x18) = uVar12;
          func_0x0728a9a0(auVar41._0_8_,1);
          auVar41._8_8_ = extraout_x1_10;
          return auVar41;
        }
        *(undefined4 *)(lVar22 + 0x68) = 2;
        *(undefined1 *)(lVar22 + 0x11) = 1;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = uVar15;
        return auVar47;
      }
    }
    auVar47 = func_0x03280cac();
    *(undefined8 *)(puVar38 + -0x60) = 0x3cda44c;
    *(long *)(puVar38 + -0x58) = auVar41._8_8_;
    *(long *)(puVar38 + -0x50) = lVar10;
    *(undefined **)(puVar38 + -0x48) = puVar24;
    lVar22 = *(long *)(puVar28 + 0x38);
    if (lVar22 == 0) {
      func_0x03256878(puVar28);
      lVar22 = *(long *)(puVar28 + 0x38);
    }
    lVar10 = func_0x03d50a94(*(undefined8 *)(auVar47._0_8_ + 0x28),auVar47._8_8_,
                             *(undefined8 *)(lVar22 + 8));
    lVar29 = func_0x03d50a94(*(undefined8 *)(auVar47._0_8_ + 0x30),auVar47._8_8_,
                             *(undefined8 *)(*(long *)(puVar28 + 0x38) + 8));
    auVar42._8_8_ = lVar29;
    auVar42._0_8_ = lVar10;
    lVar32 = *(long *)(*(long *)(puVar28 + 0x38) + 0x18);
    *(undefined8 *)(puVar38 + -0x60) = *(undefined8 *)(puVar38 + -0x60);
    *(undefined8 *)(puVar38 + -0x58) = *(undefined8 *)(puVar38 + -0x58);
    *(undefined8 *)(puVar38 + -0x50) = *(undefined8 *)(puVar38 + -0x50);
    *(undefined8 *)(puVar38 + -0x48) = *(undefined8 *)(puVar38 + -0x48);
    lVar22 = lVar32;
    if (*(long *)(lVar32 + 0x38) == 0) {
      func_0x03256878(lVar32);
    }
    puVar24 = PTR_DAT_07779d10;
    if ((lVar10 == 0) || (puVar24 = PTR_DAT_07779d18, lVar29 == 0)) {
      uVar14 = func_0x03280a2c(puVar24);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar47 = func_0x03280b7c(uVar14,lVar32);
      *(undefined8 *)(puVar38 + -0x80) = 0x3d60510;
      *(long *)(puVar38 + -0x78) = lVar10;
      *(long *)(puVar38 + -0x70) = lVar29;
      *(long *)(puVar38 + -0x68) = lVar32;
      lVar29 = lVar22;
      if (*(long *)(lVar22 + 0x38) == 0) {
        func_0x03256878(lVar22);
      }
      puVar24 = PTR_DAT_07779d10;
      if ((auVar47._0_8_ != 0) && (puVar24 = PTR_DAT_07779d18, auVar47._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar47 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))
                            (auVar47._0_8_,auVar47._8_8_,0);
        return auVar47;
      }
      uVar14 = func_0x03280a2c(puVar24);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar42 = func_0x03280b7c(uVar14,lVar22);
      *(undefined8 *)(puVar38 + -0xb0) = 0x3d60588;
      *(undefined **)(puVar38 + -0xa0) = puVar35;
      *(undefined1 (*) [16])(puVar38 + -0x98) = auVar47;
      *(long *)(puVar38 + -0x88) = lVar22;
      lVar22 = lVar29;
      ppuVar27 = param_4;
      if (param_4[7] == (undefined *)0x0) {
        func_0x03256878(param_4);
      }
      puVar35 = PTR_DAT_07779d10;
      if ((auVar42._0_8_ == 0) || (puVar35 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
        uVar14 = func_0x03280a2c(puVar35);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar47 = func_0x03280b7c(uVar14,param_4);
        *(undefined8 *)(puVar38 + -0xe0) = 0x3d60608;
        *(undefined1 (*) [16])(puVar38 + -0xd0) = auVar42;
        *(long *)(puVar38 + -0xc0) = lVar29;
        *(undefined ***)(puVar38 + -0xb8) = param_4;
        lVar29 = lVar22;
        ppuVar26 = ppuVar27;
        if (ppuVar27[7] == (undefined *)0x0) {
          func_0x03256878(ppuVar27);
        }
        puVar35 = PTR_DAT_07779d10;
        if ((auVar47._0_8_ != 0) && (puVar35 = PTR_DAT_07779d18, auVar47._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar47 = (*(code *)**(undefined8 **)(ppuVar27[7] + 0x10))
                              (auVar47._0_8_,auVar47._8_8_,lVar22);
          return auVar47;
        }
        uVar14 = func_0x03280a2c(puVar35);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar41 = func_0x03280b7c(uVar14,ppuVar27);
        lVar10 = auVar41._0_8_;
        *(undefined8 *)(puVar38 + -0x110) = 0x3d6068c;
        *(undefined1 (*) [16])(puVar38 + -0x100) = auVar47;
        *(long *)(puVar38 + -0xf0) = lVar22;
        *(undefined ***)(puVar38 + -0xe8) = ppuVar27;
        plVar11 = (long *)ppuVar26[7];
        ppuVar27 = ppuVar26;
        if (plVar11 == (long *)0x0) {
          func_0x03256878(ppuVar26);
          plVar11 = (long *)ppuVar26[7];
        }
        if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar22 = func_0x03280ca0();
        uVar14 = *(undefined8 *)(ppuVar26[7] + 8);
        func_0x0531dbd0(lVar22,0xfffffffe);
        if (lVar22 != 0) {
          plVar11 = (long *)(lVar22 + 0x38);
          *plVar11 = lVar10;
          goto SUB_032809c4;
        }
        auVar47 = func_0x03280cac();
        lVar10 = auVar47._0_8_;
        puVar8 = puVar38 + -0x140;
        *(undefined8 *)(puVar38 + -0x140) = 0x3d60730;
        *(undefined8 *)(puVar38 + -0x130) = 0;
        *(undefined1 (*) [16])(puVar38 + -0x128) = auVar41;
        *(long *)(puVar38 + -0x118) = lVar29;
        plVar11 = (long *)ppuVar27[7];
        ppuVar26 = ppuVar27;
        if (plVar11 == (long *)0x0) {
          func_0x03256878(ppuVar27);
          plVar11 = (long *)ppuVar27[7];
        }
        if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar22 = func_0x03280ca0();
        lVar29 = *(long *)(ppuVar27[7] + 8);
        func_0x0531e428(lVar22,0xfffffffe);
        if (lVar22 != 0) {
          plVar11 = (long *)(lVar22 + 0x38);
          *plVar11 = lVar10;
          goto SUB_032809c4;
        }
        uVar12 = 0x3d607d4;
        auVar42 = func_0x03280cac();
        puVar35 = (undefined *)0x0;
      }
      else {
        ppuVar26 = *(undefined ***)(param_4[7] + 0x10);
        uVar14 = *(undefined8 *)(puVar38 + -0x88);
        puVar35 = *(undefined **)(puVar38 + -0xa0);
        auVar47 = *(undefined1 (*) [16])(puVar38 + -0x98);
        puVar8 = puVar38 + -0x80;
        uVar12 = *(undefined8 *)(puVar38 + -0xb0);
      }
    }
    else {
      uVar14 = *(undefined8 *)(puVar38 + -0x48);
      ppuVar26 = *(undefined ***)(*(long *)(lVar32 + 0x38) + 8);
      lVar29 = 0;
      puVar8 = puVar38 + -0x40;
      uVar12 = *(undefined8 *)(puVar38 + -0x60);
      auVar47 = *(undefined1 (*) [16])(puVar38 + -0x58);
    }
    lVar10 = auVar42._0_8_;
    *(undefined8 *)(puVar8 + -0x30) = uVar12;
    *(undefined **)(puVar8 + -0x20) = puVar35;
    *(undefined1 (*) [16])(puVar8 + -0x18) = auVar47;
    *(undefined8 *)(puVar8 + -8) = uVar14;
    plVar11 = (long *)ppuVar26[7];
    ppuVar27 = ppuVar26;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(ppuVar26);
      plVar11 = (long *)ppuVar26[7];
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar22 = func_0x03280ca0();
    uVar14 = *(undefined8 *)(ppuVar26[7] + 8);
    func_0x0531ec78(lVar22,0xfffffffe);
    if (lVar22 != 0) {
      plVar11 = (long *)(lVar22 + 0x40);
      *plVar11 = lVar10;
      goto SUB_032809c4;
    }
    auVar47 = func_0x03280cac();
    uVar12 = auVar47._0_8_;
    *(undefined8 *)(puVar8 + -0x60) = 0x3d60878;
    *(undefined **)(puVar8 + -0x58) = puVar36;
    *(undefined8 *)(puVar8 + -0x50) = 0;
    *(undefined1 (*) [16])(puVar8 + -0x48) = auVar42;
    *(long *)(puVar8 + -0x38) = lVar29;
    plVar11 = (long *)ppuVar27[7];
    if (plVar11 == (long *)0x0) {
      func_0x03256878(ppuVar27);
      plVar11 = (long *)ppuVar27[7];
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar43._0_8_ = func_0x03280ca0();
    puVar13 = *(undefined8 **)(ppuVar27[7] + 8);
    (*(code *)*puVar13)(auVar43._0_8_,0xfffffffe);
    if (auVar43._0_8_ != 0) {
      func_0x02f17738(auVar43._0_8_,*(long *)(*(long *)ppuVar27[7] + 0x80) + 0xc0,uVar12);
      func_0x02f17738(auVar43._0_8_,*(long *)(*(long *)ppuVar27[7] + 0x80) + 0x100,auVar47._8_8_);
      func_0x02f17738(auVar43._0_8_,*(long *)(*(long *)ppuVar27[7] + 0x80) + 0x80,uVar14);
      auVar43._8_8_ = extraout_x1;
      return auVar43;
    }
    auVar41 = func_0x03280cac();
    lVar22 = auVar41._8_8_;
    plVar11 = auVar41._0_8_;
    *(undefined8 *)(puVar8 + -0x90) = 0x3d60944;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined1 (*) [16])(puVar8 + -0x80) = auVar47;
    *(undefined ***)(puVar8 + -0x70) = ppuVar27;
    *(undefined8 *)(puVar8 + -0x68) = uVar14;
    puVar16 = puVar13;
    if (puVar13[7] == 0) {
      func_0x03256878(puVar13);
    }
    puVar35 = PTR_DAT_07774b08;
    if ((plVar11 == (long *)0x0) || (puVar35 = PTR_DAT_077799b8, lVar22 == 0)) {
      uVar14 = func_0x03280a2c(puVar35);
      uVar14 = func_0x05ac7464(uVar14,0);
      func_0x03280b7c(uVar14,puVar13);
LAB_03d60c04:
      func_0x03281048(plVar11);
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      lVar29 = *plVar11;
      bVar1 = *(byte *)(lVar29 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar29 = *plVar11;
          bVar1 = *(byte *)(lVar29 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10
           )) {
          lVar10 = *(long *)(puVar13[7] + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = func_0x0325681c(lVar10);
            lVar29 = *plVar11;
            bVar1 = *(byte *)(lVar29 + 0x130);
          }
          if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) ==
              lVar10)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar47 = (**(code **)(lVar29 + 0x228))(plVar11,lVar22,*(undefined8 *)(lVar29 + 0x230));
            return auVar47;
          }
        }
        goto LAB_03d60c04;
      }
      lVar10 = *(long *)(puVar13[7] + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar10 = func_0x03280b90(plVar11,lVar10);
      if (lVar10 == 0) {
        lVar10 = *(long *)(puVar13[7] + 0x38);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c();
        }
        if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
            lVar10)) {
          if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar12 = func_0x03280ca0();
          func_0x04b68fa4(uVar12,plVar11,lVar22,*(undefined8 *)(puVar13[7] + 0x58));
          uVar14 = extraout_x1_01;
LAB_03d60aa4:
          auVar44._8_8_ = uVar14;
          auVar44._0_8_ = uVar12;
          return auVar44;
        }
        if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar12 = func_0x03280ca0();
        lVar10 = *(long *)(puVar13[7] + 0x38);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) ==
            lVar10)) {
          func_0x04b713b0(uVar12,plVar11,lVar22,*(undefined8 *)(puVar13[7] + 0x48));
          uVar14 = extraout_x1_02;
          goto LAB_03d60aa4;
        }
        goto LAB_03d60c04;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar12 = func_0x03280ca0();
      lVar10 = *(long *)(puVar13[7] + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar29 = func_0x03280b90(plVar11,lVar10);
      if (lVar29 != 0) {
        func_0x04b66610(uVar12,lVar29,lVar22,*(undefined8 *)(puVar13[7] + 0x30));
        uVar14 = extraout_x1_00;
        goto LAB_03d60aa4;
      }
    }
    auVar47 = func_0x03281048(plVar11,lVar10);
    lVar22 = auVar47._8_8_;
    plVar11 = auVar47._0_8_;
    *(undefined8 *)(puVar8 + -0xc0) = 0x3d60c18;
    *(long *)(puVar8 + -0xb8) = lVar10;
    *(undefined8 *)(puVar8 + -0xb0) = uVar12;
    *(undefined8 **)(puVar8 + -0xa8) = puVar13;
    *(undefined1 (*) [16])(puVar8 + -0xa0) = auVar41;
    if (puVar16[7] == 0) {
      func_0x03256878(puVar16);
    }
    puVar35 = PTR_DAT_07774b08;
    if ((plVar11 == (long *)0x0) || (puVar35 = PTR_DAT_077799b8, lVar22 == 0)) {
      uVar14 = func_0x03280a2c(puVar35);
      uVar14 = func_0x05ac7464(uVar14,0);
      func_0x03280b7c(uVar14,puVar16);
LAB_03d60ed8:
      func_0x03281048(plVar11);
    }
    else {
      lVar29 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c();
      }
      lVar32 = *plVar11;
      bVar1 = *(byte *)(lVar32 + 0x130);
      if ((*(byte *)(lVar29 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar32 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) == lVar29))
      {
        lVar29 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
          lVar32 = *plVar11;
          bVar1 = *(byte *)(lVar32 + 0x130);
        }
        if ((*(byte *)(lVar29 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar32 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) == lVar29
           )) {
          lVar29 = *(long *)(puVar16[7] + 0x10);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            lVar29 = func_0x0325681c(lVar29);
            lVar32 = *plVar11;
            bVar1 = *(byte *)(lVar32 + 0x130);
          }
          if ((*(byte *)(lVar29 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar32 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) ==
              lVar29)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar47 = (**(code **)(lVar32 + 0x228))(plVar11,lVar22,*(undefined8 *)(lVar32 + 0x230));
            return auVar47;
          }
        }
        goto LAB_03d60ed8;
      }
      lVar29 = *(long *)(puVar16[7] + 0x20);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      lVar29 = func_0x03280b90(plVar11,lVar29);
      if (lVar29 == 0) {
        lVar29 = *(long *)(puVar16[7] + 0x38);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c();
        }
        if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar29 + 0x130)) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) !=
            lVar29)) {
          if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar12 = func_0x03280ca0();
          func_0x04b693d0(uVar12,plVar11,lVar22,*(undefined8 *)(puVar16[7] + 0x58));
          uVar14 = extraout_x1_04;
LAB_03d60d78:
          auVar45._8_8_ = uVar14;
          auVar45._0_8_ = uVar12;
          return auVar45;
        }
        if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar12 = func_0x03280ca0();
        lVar29 = *(long *)(puVar16[7] + 0x38);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
        }
        if ((*(byte *)(lVar29 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) ==
            lVar29)) {
          func_0x04b715c8(uVar12,plVar11,lVar22,*(undefined8 *)(puVar16[7] + 0x48));
          uVar14 = extraout_x1_05;
          goto LAB_03d60d78;
        }
        goto LAB_03d60ed8;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar12 = func_0x03280ca0();
      lVar10 = *(long *)(puVar16[7] + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar29 = func_0x03280b90(plVar11,lVar10);
      if (lVar29 != 0) {
        func_0x04b667e0(uVar12,lVar29,lVar22,*(undefined8 *)(puVar16[7] + 0x30));
        uVar14 = extraout_x1_03;
        goto LAB_03d60d78;
      }
    }
    lVar22 = func_0x03281048(plVar11,lVar10);
    *(undefined8 *)(puVar8 + -0xe0) = 0x3d60eec;
    *(undefined1 (*) [16])(puVar8 + -0xd0) = auVar47;
    lVar10 = *(long *)(lVar22 + 0x20);
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
      auVar46._8_8_ = extraout_x1_06;
      auVar46._0_8_ = lVar10;
      return auVar46;
    }
    lVar10 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar29 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    **(long **)(lVar29 + 0xb8) = lVar10;
    lVar22 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    plVar11 = *(long **)(lVar22 + 0xb8);
    goto SUB_032809c4;
  }
  lVar10 = func_0x03d04cac(*(long *)(param_1 + 0x10),**(undefined8 **)(lVar22 + 0x38));
  puVar28 = *(undefined **)(param_1 + 0x18);
  if (puVar28 == (undefined *)0x0) goto LAB_03cda14c;
  lVar29 = *(long *)(puVar28 + 0x10);
  lVar32 = *(long *)PTR_DAT_07779760;
  *(int *)(puVar28 + 0x1c) = *(int *)(puVar28 + 0x1c) + 1;
  if (lVar29 == 0) goto LAB_03cda14c;
  uVar2 = *(uint *)(puVar28 + 0x18);
  if (uVar2 < *(uint *)(lVar29 + 0x18)) {
    *(uint *)(puVar28 + 0x18) = uVar2 + 1;
    plVar11 = (long *)(lVar29 + (long)(int)uVar2 * 8 + 0x20);
    *plVar11 = lVar10;
    goto SUB_032809c4;
  }
  lVar22 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70);
  puVar38 = &stack0xffffffffffffffa0;
  lVar29 = lStack_68;
  puVar23 = puStack_70;
  uVar14 = uStack_80;
SUB_0414446c:
  *(undefined8 *)(puVar38 + -0x30) = uVar14;
  *(undefined **)(puVar38 + -0x20) = puVar35;
  *(undefined **)(puVar38 + -0x18) = puVar34;
  *(undefined **)(puVar38 + -0x10) = puVar23;
  *(long *)(puVar38 + -8) = lVar29;
  uVar3 = *(uint *)(puVar28 + 0x18);
  uVar2 = uVar3 + 1;
  lVar22 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(puVar28,(ulong)uVar2);
  lVar29 = *(long *)(puVar28 + 0x10);
  *(uint *)(puVar28 + 0x18) = uVar2;
  if (lVar29 == 0) {
    func_0x03280cac();
  }
  else if (uVar3 < *(uint *)(lVar29 + 0x18)) {
    plVar11 = (long *)(lVar29 + (long)(int)uVar3 * 8 + 0x20);
    *plVar11 = lVar10;
    goto SUB_032809c4;
  }
  auVar47 = func_0x03280cb4();
  lVar20 = auVar47._8_8_;
  lVar29 = auVar47._0_8_;
  *(undefined8 *)(puVar38 + -0x60) = 0x41444d8;
  *(long *)(puVar38 + -0x50) = (long)(int)uVar3;
  *(ulong *)(puVar38 + -0x48) = (ulong)uVar2;
  *(undefined **)(puVar38 + -0x40) = puVar28;
  *(long *)(puVar38 + -0x38) = lVar10;
  lVar25 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar20,0x14);
  lVar32 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c(lVar32);
  }
  if (lVar20 == 0) {
LAB_0414454c:
    lVar10 = 0;
  }
  else {
    lVar10 = func_0x03280b90(lVar20,lVar32);
    if (lVar10 == 0) {
      func_0x03281048(lVar20,lVar32);
      goto LAB_0414454c;
    }
  }
  lVar32 = *(long *)(lVar29 + 0x10);
  lVar30 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
  if (lVar32 != 0) {
    uVar2 = *(uint *)(lVar29 + 0x18);
    if (uVar2 < *(uint *)(lVar32 + 0x18)) {
      *(uint *)(lVar29 + 0x18) = uVar2 + 1;
      plVar11 = (long *)(lVar32 + (long)(int)uVar2 * 8 + 0x20);
      *plVar11 = lVar10;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar19 = (ulong *)(((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar19,0x10);
          if (bVar5) {
            *puVar19 = *puVar19 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      auVar40._8_8_ = lVar10;
      auVar40._0_8_ = plVar11;
      return auVar40;
    }
    func_0x0414446c(lVar29,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70)
                   );
    uVar14 = extraout_x1_07;
LAB_041445ac:
    auVar48._4_4_ = 0;
    auVar48._0_4_ = *(int *)(lVar29 + 0x18) - 1;
    auVar48._8_8_ = uVar14;
    return auVar48;
  }
  auVar50 = func_0x03280cac();
  uVar14 = auVar50._0_8_;
  if (auVar50._8_4_ == 1) {
    puVar13 = (undefined8 *)func_0x072ce910(uVar14);
    uVar14 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar15 = func_0x032810d8(uVar14,*(undefined8 *)*puVar13);
    if ((uVar15 & 1) != 0) {
      func_0x072ce920();
      uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x68);
      lVar22 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar22 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar14 = func_0x057a51c4(uVar14,0);
      func_0x057b7b18(lVar20,uVar14,0);
      uVar14 = extraout_x1_08;
      goto LAB_041445ac;
    }
    puVar16 = (undefined8 *)func_0x072ce930(8);
    *puVar16 = *puVar13;
    lVar25 = 0;
    uVar14 = func_0x072ce940(puVar16,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar14);
  auVar47 = func_0x02f09514();
  plVar21 = auVar47._8_8_;
  plVar17 = auVar47._0_8_;
  uVar2 = *(uint *)(plVar17 + 3);
  lVar10 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x90);
  uVar15 = (ulong)uVar2;
  *(undefined8 *)(puVar38 + -0xa0) = 0x4144678;
  *(undefined **)(puVar38 + -0x98) = puVar24;
  *(undefined **)(puVar38 + -0x90) = puVar39;
  *(undefined **)(puVar38 + -0x88) = puVar36;
  *(undefined8 *)(puVar38 + -0x80) = uVar14;
  *(long *)(puVar38 + -0x78) = lVar22;
  *(long *)(puVar38 + -0x70) = lVar20;
  *(long *)(puVar38 + -0x68) = lVar29;
  plVar37 = (long *)0x7e18000;
  plVar11 = plVar21;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar21 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar17 + 3) < uVar2) {
    func_0x057b8434(0);
  }
  lVar22 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c(lVar22);
  }
  plVar18 = (long *)func_0x03280b90(plVar21,lVar22);
  if (plVar18 == (long *)0x0) {
    if ((int)uVar2 < (int)plVar17[3]) {
      if (plVar21 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar22 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar29 = *plVar21;
        uVar31 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar31 != 0) {
          piVar33 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == lVar22) {
              puVar13 = (undefined8 *)(lVar29 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar31 = uVar31 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar21);
LAB_04145868:
        plVar37 = (long *)(*(code *)*puVar13)(plVar21,puVar13[1]);
        puVar35 = PTR_DAT_0774e8e0;
        if (plVar37 != (long *)0x0) {
          do {
            lVar22 = *plVar37;
            uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar31 != 0) {
              piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)puVar35) {
                  puVar13 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar31 = uVar31 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar31 != 0);
            }
            plVar11 = (long *)0x0;
            puVar13 = (undefined8 *)func_0x03256b10(plVar37);
LAB_041458d0:
            auVar47 = (*(code *)*puVar13)(plVar37,puVar13[1]);
            if ((auVar47._0_8_ & 1) == 0) {
              uVar15 = 0;
              iVar9 = 5;
              if (plVar37 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar22 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c(lVar22);
            }
            lVar29 = *plVar37;
            uVar31 = (ulong)*(ushort *)(lVar29 + 0x12e);
            if (uVar31 != 0) {
              piVar33 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == lVar22) {
                  puVar13 = (undefined8 *)(lVar29 + (long)*piVar33 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar31 = uVar31 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar31 != 0);
            }
            puVar13 = (undefined8 *)func_0x03256b10(plVar37,lVar22,0);
LAB_04145948:
            plVar11 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
            func_0x04145380(plVar17,uVar15,plVar11,
                            *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x160));
            uVar15 = (ulong)((int)uVar15 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar50 = func_0x03280ca4(uVar15);
        if (auVar50._8_4_ != 1) {
          if (plVar37 == (long *)0x0) goto LAB_04145ae0;
          lVar22 = *plVar37;
          uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar15 == 0) goto LAB_04145ab8;
          piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar19 = (ulong *)func_0x072ce910(auVar50._0_8_);
        uVar15 = *puVar19;
        auVar47 = func_0x072ce920();
        iVar9 = 0;
        if (plVar37 != (long *)0x0) {
LAB_04145988:
          lVar22 = *plVar37;
          uVar31 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar31 != 0) {
            piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar13 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar31 = uVar31 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar31 != 0);
          }
          plVar11 = (long *)0x0;
          puVar13 = (undefined8 *)func_0x03256b10(plVar37);
LAB_041459dc:
          auVar47 = (*(code *)*puVar13)(plVar37,puVar13[1]);
        }
LAB_041459e8:
      } while (uVar15 != 0);
      if (iVar9 == 5) goto LAB_04145a10;
      if (iVar9 != 0) {
        return auVar47;
      }
    }
    auVar47 = func_0x041462cc(plVar17,plVar21,
                              *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar22 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar29 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar15 != 0) {
      piVar33 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar29 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar15 = uVar15 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar18,lVar22,0);
LAB_04145728:
    auVar47 = (*(code *)*puVar13)(plVar18,puVar13[1]);
    iVar9 = auVar47._0_4_;
    if (0 < iVar9) {
      func_0x04144aa0(plVar17,(int)plVar17[3] + iVar9,
                      *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x78));
      iVar6 = (int)plVar17[3] - uVar2;
      if (iVar6 != 0 && (int)uVar2 <= (int)plVar17[3]) {
        func_0x057b9f30(plVar17[2],uVar2,plVar17[2],iVar9 + uVar2,iVar6,0);
      }
      if (plVar17 == plVar18) {
        func_0x057b9f30(plVar17[2],0,plVar17[2],uVar2,uVar2,0);
        auVar47 = func_0x057b9f30(plVar17[2],iVar9 + uVar2,plVar17[2],uVar2 << 1,
                                  (int)plVar17[3] - uVar2,0);
      }
      else {
        lVar29 = plVar17[2];
        lVar22 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar10 = *plVar18;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar33 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == lVar22) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar33 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar15 = uVar15 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar18,lVar22,5);
LAB_04145838:
        auVar47 = (*(code *)*puVar13)(plVar18,lVar29,uVar2,puVar13[1]);
      }
      *(int *)(plVar17 + 3) = (int)plVar17[3] + iVar9;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar17 + 0x1c) = *(int *)((long)plVar17 + 0x1c) + 1;
  return auVar47;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar33 = piVar33 + 4;
    if (uVar15 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar33 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar11 = (long *)0x0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar37);
LAB_04145ad4:
  (*(code *)*puVar13)(plVar37,puVar13[1]);
LAB_04145ae0:
  func_0x03365958(auVar50._0_8_);
  func_0x03280ca4(0);
  auVar47 = func_0x02f09514();
  lVar22 = auVar47._0_8_;
  *(undefined8 *)(puVar38 + -0xc0) = 0x4145af8;
  *(long *)(puVar38 + -0xb0) = lVar10;
  *(long **)(puVar38 + -0xa8) = plVar17;
  auVar47 = func_0x03f898d4(*(undefined8 *)(lVar22 + 0x10),auVar47._8_8_,0,
                            *(undefined4 *)(lVar22 + 0x18),
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(*(long *)(plVar11[4] + 0xc0) + 0xd0) +
                                                 0x20) + 0xc0) + 0x158));
  uVar14 = auVar47._8_8_;
  if (-1 < (int)auVar47._0_4_) {
    func_0x04145da4(lVar22,auVar47._0_8_ & 0xffffffff);
    uVar14 = extraout_x1_09;
  }
  auVar49._4_4_ = 0;
  auVar49._0_4_ = ~auVar47._0_4_ >> 0x1f;
  auVar49._8_8_ = uVar14;
  return auVar49;
}

