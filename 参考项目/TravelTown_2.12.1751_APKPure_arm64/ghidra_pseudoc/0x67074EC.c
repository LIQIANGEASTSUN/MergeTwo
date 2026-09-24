/* Ghidra 12.1.2 native pseudocode; RVA 0x67074EC; Merger.Game.Views.Inventory.InventoryItemSlotView.Awake; status ok */


/* WARNING: Possible PIC construction at 0x0680757c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06807580) */
/* WARNING: Removing unreachable block (ram,0x068075a4) */
/* WARNING: Removing unreachable block (ram,0x04144594) */

long * Merger_Game_Views_Inventory_InventoryItemSlotView__Awake(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  uint uVar10;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  long lVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar5 = PTR_DAT_0780c510;
  puVar12 = (undefined8 *)PTR_DAT_0774e758;
  if ((bRam0000000007e287a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0780c510);
    func_0x03280a18(PTR_DAT_0780c518);
    bRam0000000007e287a7 = 1;
  }
  lVar29 = *(long *)(param_1 + 0x68);
  lVar20 = func_0x03280ca0(*puVar12);
  func_0x056ed730(lVar20,param_1,*(undefined8 *)puVar5,0);
  puVar5 = PTR_DAT_0780c518;
  if (lVar29 == 0) {
    plVar24 = (long *)func_0x03280cac();
    lVar20 = plVar24[0xb];
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x068075e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar24 = (long *)(**(code **)(lVar20 + 0x18))
                                  (*(undefined8 *)(lVar20 + 0x40),plVar24[0xe],plVar24[0x10],
                                   *(undefined8 *)(lVar20 + 0x28));
      return plVar24;
    }
    return plVar24;
  }
  uStack_50 = 0x6807580;
  lStack_48 = lVar20;
  lStack_40 = lVar29;
  lStack_38 = param_1;
  if ((bRam0000000007e295b6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776a610,lVar20,0);
    bRam0000000007e295b6 = 1;
  }
  auVar34._8_8_ = lStack_38;
  auVar34._0_8_ = lStack_40;
  lVar21 = *(long *)(lVar29 + 0x128);
  if (lVar21 == 0) {
LAB_069bab24:
    auVar34 = func_0x03280cac();
    uStack_70 = 0x69bab28;
    uStack_68 = 0x7e29000;
    lStack_60 = lVar29;
    lStack_58 = lVar20;
    if ((bRam0000000007e295b7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077eba08);
      bRam0000000007e295b7 = 1;
    }
    auVar36._8_8_ = lStack_58;
    auVar36._0_8_ = lStack_60;
    lVar20 = *(long *)(auVar34._0_8_ + 0x128);
    auVar35._8_8_ = auVar34._8_8_;
    auVar35._0_8_ = lVar20;
    if (lVar20 != 0) {
      plVar24 = *(long **)PTR_DAT_077eba08;
      puVar8 = &uStack_50;
      uVar13 = uStack_70;
      goto SUB_04145af8;
    }
    auVar35 = func_0x03280cac();
    lVar20 = auVar35._8_8_;
    uStack_90 = 0x69bab80;
    lStack_88 = 0x7e29000;
    auStack_80 = auVar34;
    if ((bRam0000000007e295b8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776a610);
      bRam0000000007e295b8 = 1;
    }
    lVar21 = *(long *)(auVar35._0_8_ + 0x130);
    if (lVar21 != 0) {
      lVar29 = *(long *)(lVar21 + 0x10);
      lVar23 = *(long *)PTR_DAT_0776a610;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (lVar29 != 0) {
        uVar10 = *(uint *)(lVar21 + 0x18);
        if (uVar10 < *(uint *)(lVar29 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar10 + 1;
          plVar24 = (long *)(lVar29 + (long)(int)uVar10 * 8 + 0x20);
          *plVar24 = lVar20;
          goto SUB_032809c4;
        }
        lVar23 = *(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
        puVar7 = &uStack_70;
        lVar29 = lStack_88;
        uVar13 = uStack_90;
        auVar34 = auStack_80;
        goto SUB_0414446c;
      }
    }
    auVar34 = func_0x03280cac();
    uStack_b0 = 0x69bac2c;
    uStack_a8 = 0x7e29000;
    auStack_a0 = auVar35;
    if ((bRam0000000007e295b9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077eba08);
      bRam0000000007e295b9 = 1;
    }
    lVar20 = *(long *)(auVar34._0_8_ + 0x130);
    auVar35._8_8_ = auVar34._8_8_;
    auVar35._0_8_ = lVar20;
    if (lVar20 != 0) {
      plVar24 = *(long **)PTR_DAT_077eba08;
      puVar8 = &uStack_90;
      uVar13 = uStack_b0;
      auVar36 = auStack_a0;
      goto SUB_04145af8;
    }
    auVar36 = func_0x03280cac();
    lVar20 = auVar36._8_8_;
    uStack_d0 = 0x69bac84;
    lStack_c8 = 0x7e29000;
    auStack_c0 = auVar34;
    if ((bRam0000000007e295ba & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776a610);
      bRam0000000007e295ba = 1;
    }
    lVar21 = *(long *)(auVar36._0_8_ + 0x138);
    if (lVar21 != 0) {
      lVar29 = *(long *)(lVar21 + 0x10);
      lVar23 = *(long *)PTR_DAT_0776a610;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (lVar29 != 0) {
        uVar10 = *(uint *)(lVar21 + 0x18);
        if (uVar10 < *(uint *)(lVar29 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar10 + 1;
          plVar24 = (long *)(lVar29 + (long)(int)uVar10 * 8 + 0x20);
          *plVar24 = lVar20;
          goto SUB_032809c4;
        }
        lVar23 = *(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
        puVar7 = &uStack_b0;
        lVar29 = lStack_c8;
        uVar13 = uStack_d0;
        auVar34 = auStack_c0;
        goto SUB_0414446c;
      }
    }
    auVar34 = func_0x03280cac();
    if ((bRam0000000007e295bb & 1) == 0) {
      func_0x03280a18(PTR_DAT_077eba08);
      bRam0000000007e295bb = 1;
    }
    lVar20 = *(long *)(auVar34._0_8_ + 0x138);
    auVar35._8_8_ = auVar34._8_8_;
    auVar35._0_8_ = lVar20;
    if (lVar20 == 0) {
      lVar20 = func_0x03280cac();
      puVar5 = PTR_DAT_0774e4e0;
      if ((bRam0000000007e295bc & 1) == 0) {
        func_0x03280a18(PTR_DAT_078243f0);
        func_0x03280a18(PTR_DAT_07817630);
        func_0x03280a18(PTR_DAT_07784358);
        func_0x03280a18(PTR_DAT_07784360);
        func_0x03280a18(PTR_DAT_0774e4e0);
        func_0x03280a18(PTR_DAT_078243f8);
        bRam0000000007e295bc = 1;
      }
      uVar13 = *(undefined8 *)(lVar20 + 0x170);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar14 = func_0x06fdeb74(uVar13,0,0);
      if ((((uVar14 & 1) != 0) || (*(char *)(lVar20 + 0x192) != '\0')) ||
         (*(char *)(lVar20 + 400) != '\0')) {
        if (cRam0000000007e162b5 == '\0') {
          func_0x03280a18(PTR_DAT_0774ee08);
          cRam0000000007e162b5 = '\x01';
        }
        fVar32 = *(float *)(lVar20 + 0x154);
        fVar33 = *(float *)(lVar20 + 0x158);
        plVar24 = *(long **)PTR_DAT_0774ee08;
        if ((int)plVar24[0x1c] == 0) {
          plVar24 = (long *)func_0x03280b8c();
        }
        if (50.0 < SQRT(fVar32 * fVar32 + fVar33 * fVar33)) {
          return plVar24;
        }
      }
      puVar30 = (undefined8 *)PTR_DAT_078243f8;
      puVar15 = (undefined8 *)PTR_DAT_078243f0;
      plVar24 = (long *)PTR_DAT_07817630;
      puVar5 = PTR_DAT_07784360;
      lVar29 = *(long *)(lVar20 + 0x128);
      plVar16 = (long *)0x7e29000;
      if (lVar29 != 0) {
        iVar9 = 0;
        do {
          if (*(int *)(lVar29 + 0x18) <= iVar9) goto LAB_069baf14;
          lVar29 = func_0x0414419c(lVar29,iVar9,*(undefined8 *)puVar5);
          puVar12 = puVar30;
          plVar16 = plVar24;
          unaff_x24 = puVar15;
          if (lVar29 != 0) {
            if (lVar29 == 0) break;
            (**(code **)(lVar29 + 0x18))
                      (*(undefined8 *)(lVar29 + 0x40),*(undefined8 *)(lVar29 + 0x28));
          }
          lVar29 = *(long *)(lVar20 + 0x128);
          iVar9 = iVar9 + 1;
        } while (lVar29 != 0);
      }
      puVar15 = unaff_x24;
      puVar30 = puVar12;
      plVar24 = plVar16;
      func_0x03280cac();
LAB_069baf14:
      lVar29 = func_0x03280ca0(*puVar15);
      func_0x054221d4(lVar29,lVar20,*puVar30,0);
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if ((bRam0000000007e29498 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07817630,0);
        func_0x03280a18(PTR_DAT_078176a8);
        func_0x03280a18(PTR_DAT_078176b0);
        bRam0000000007e29498 = 1;
      }
      puVar6 = PTR_DAT_078176b0;
      puVar5 = PTR_DAT_07817630;
      iVar9 = 0;
      while( true ) {
        plVar24 = *(long **)puVar5;
        if ((int)plVar24[0x1c] == 0) {
          func_0x03280b8c();
          plVar24 = *(long **)puVar5;
        }
        lVar20 = *(long *)plVar24[0x17];
        if (lVar20 == 0) break;
        if (*(int *)(lVar20 + 0x18) <= iVar9) {
          return plVar24;
        }
        if ((int)plVar24[0x1c] == 0) {
          func_0x03280b8c();
          lVar20 = **(long **)(*(long *)puVar5 + 0xb8);
          if (lVar20 == 0) break;
        }
        uVar13 = func_0x0414419c(lVar20,iVar9,*(undefined8 *)puVar6);
        if (lVar29 == 0) break;
        (**(code **)(lVar29 + 0x18))
                  (*(undefined8 *)(lVar29 + 0x40),uVar13,*(undefined8 *)(lVar29 + 0x28));
        iVar9 = iVar9 + 1;
      }
      plVar24 = (long *)func_0x03280cac();
      puVar5 = PTR_DAT_0774e4e0;
      if ((bRam0000000007e2fb28 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e4e0,0);
        bRam0000000007e2fb28 = 1;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      return plVar24;
    }
    plVar24 = *(long **)PTR_DAT_077eba08;
    puVar8 = &uStack_d0;
    uVar13 = 0x69bad30;
SUB_04145af8:
    lVar20 = auVar35._0_8_;
    *(undefined8 *)((long)puVar8 + -0x20) = uVar13;
    *(undefined1 (*) [16])((long)puVar8 + -0x10) = auVar36;
    uVar10 = func_0x03f898d4(*(undefined8 *)(lVar20 + 0x10),auVar35._8_8_,0,
                             *(undefined4 *)(lVar20 + 0x18),
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)(*(long *)(plVar24[4] + 0xc0) + 0xd0) +
                                                  0x20) + 0xc0) + 0x158));
    if (-1 < (int)uVar10) {
      func_0x04145da4(lVar20,uVar10);
    }
    return (long *)(ulong)(~uVar10 >> 0x1f);
  }
  lVar23 = *(long *)(lVar21 + 0x10);
  lVar27 = *(long *)PTR_DAT_0776a610;
  *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
  if (lVar23 == 0) goto LAB_069bab24;
  uVar10 = *(uint *)(lVar21 + 0x18);
  if (uVar10 < *(uint *)(lVar23 + 0x18)) {
    *(uint *)(lVar21 + 0x18) = uVar10 + 1;
    plVar24 = (long *)(lVar23 + (long)(int)uVar10 * 8 + 0x20);
    *plVar24 = lVar20;
    goto SUB_032809c4;
  }
  lVar23 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70);
  puVar7 = (undefined8 *)&stack0xffffffffffffffd0;
  lVar29 = lStack_48;
  uVar13 = uStack_50;
SUB_0414446c:
  *(undefined8 *)((long)puVar7 + -0x30) = uVar13;
  *(undefined8 **)((long)puVar7 + -0x20) = puVar12;
  *(long *)((long)puVar7 + -0x18) = lVar29;
  *(long *)((long)puVar7 + -0x10) = auVar34._0_8_;
  *(long *)((long)puVar7 + -8) = auVar34._8_8_;
  uVar1 = *(uint *)(lVar21 + 0x18);
  uVar10 = uVar1 + 1;
  lVar29 = *(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(lVar21,(ulong)uVar10);
  lVar23 = *(long *)(lVar21 + 0x10);
  *(uint *)(lVar21 + 0x18) = uVar10;
  if (lVar23 == 0) {
    func_0x03280cac();
  }
  else if (uVar1 < *(uint *)(lVar23 + 0x18)) {
    plVar24 = (long *)(lVar23 + (long)(int)uVar1 * 8 + 0x20);
    *plVar24 = lVar20;
    goto SUB_032809c4;
  }
  auVar34 = func_0x03280cb4();
  lVar27 = auVar34._8_8_;
  lVar23 = auVar34._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x41444d8;
  *(long *)((long)puVar7 + -0x50) = (long)(int)uVar1;
  *(ulong *)((long)puVar7 + -0x48) = (ulong)uVar10;
  *(long *)((long)puVar7 + -0x40) = lVar21;
  *(long *)((long)puVar7 + -0x38) = lVar20;
  lVar21 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar27,0x14);
  lVar20 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c(lVar20);
  }
  if (lVar27 == 0) {
LAB_0414454c:
    lVar11 = 0;
  }
  else {
    lVar11 = func_0x03280b90(lVar27,lVar20);
    if (lVar11 == 0) {
      func_0x03281048(lVar27,lVar20);
      goto LAB_0414454c;
    }
  }
  lVar20 = *(long *)(lVar23 + 0x10);
  lVar25 = *(long *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  if (lVar20 != 0) {
    uVar10 = *(uint *)(lVar23 + 0x18);
    if (uVar10 < *(uint *)(lVar20 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar10 + 1;
      plVar24 = (long *)(lVar20 + (long)(int)uVar10 * 8 + 0x20);
      *plVar24 = lVar11;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar19 = (ulong *)(((ulong)plVar24 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar19,0x10);
          if (bVar3) {
            *puVar19 = *puVar19 | 1L << ((ulong)plVar24 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return plVar24;
    }
    func_0x0414446c(lVar23,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70)
                   );
LAB_041445ac:
    return (long *)(ulong)(*(int *)(lVar23 + 0x18) - 1);
  }
  auVar37 = func_0x03280cac();
  uVar13 = auVar37._0_8_;
  if (auVar37._8_4_ == 1) {
    puVar12 = (undefined8 *)func_0x072ce910(uVar13);
    uVar13 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar14 = func_0x032810d8(uVar13,*(undefined8 *)*puVar12);
    if ((uVar14 & 1) != 0) {
      func_0x072ce920();
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x68);
      lVar20 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar20 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar13 = func_0x057a51c4(uVar13,0);
      func_0x057b7b18(lVar27,uVar13,0);
      goto LAB_041445ac;
    }
    puVar15 = (undefined8 *)func_0x072ce930(8);
    *puVar15 = *puVar12;
    lVar21 = 0;
    uVar13 = func_0x072ce940(puVar15,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar13);
  auVar34 = func_0x02f09514();
  plVar22 = auVar34._8_8_;
  plVar16 = auVar34._0_8_;
  uVar10 = *(uint *)(plVar16 + 3);
  lVar20 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x90);
  auVar36._8_8_ = plVar16;
  auVar36._0_8_ = lVar20;
  uVar14 = (ulong)uVar10;
  puVar8 = (undefined8 *)((long)puVar7 + -0xa0);
  *(undefined8 *)((long)puVar7 + -0xa0) = 0x4144678;
  *(undefined8 *)((long)puVar7 + -0x98) = unaff_x25;
  *(undefined8 **)((long)puVar7 + -0x90) = unaff_x24;
  *(undefined **)((long)puVar7 + -0x88) = puVar5;
  *(undefined8 *)((long)puVar7 + -0x80) = uVar13;
  *(long *)((long)puVar7 + -0x78) = lVar29;
  *(long *)((long)puVar7 + -0x70) = lVar27;
  *(long *)((long)puVar7 + -0x68) = lVar23;
  plVar31 = (long *)0x7e18000;
  plVar24 = plVar22;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar22 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar16 + 3) < uVar10) {
    func_0x057b8434(0);
  }
  lVar29 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  plVar17 = (long *)func_0x03280b90(plVar22,lVar29);
  if (plVar17 == (long *)0x0) {
    if ((int)uVar10 < (int)plVar16[3]) {
      if (plVar22 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar29 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
        }
        lVar21 = *plVar22;
        uVar26 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar26 != 0) {
          piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar29) {
              puVar12 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar26 = uVar26 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar26 != 0);
        }
        plVar24 = (long *)0x0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar22);
LAB_04145868:
        plVar31 = (long *)(*(code *)*puVar12)(plVar22,puVar12[1]);
        puVar5 = PTR_DAT_0774e8e0;
        if (plVar31 != (long *)0x0) {
          do {
            lVar29 = *plVar31;
            uVar26 = (ulong)*(ushort *)(lVar29 + 0x12e);
            if (uVar26 != 0) {
              piVar28 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)puVar5) {
                  puVar12 = (undefined8 *)(lVar29 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar26 = uVar26 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar26 != 0);
            }
            plVar24 = (long *)0x0;
            puVar12 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041458d0:
            plVar18 = (long *)(*(code *)*puVar12)(plVar31,puVar12[1]);
            if (((ulong)plVar18 & 1) == 0) {
              uVar14 = 0;
              iVar9 = 5;
              if (plVar31 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar29 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
              lVar29 = func_0x0325681c(lVar29);
            }
            lVar21 = *plVar31;
            uVar26 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar26 != 0) {
              piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == lVar29) {
                  puVar12 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar26 = uVar26 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar26 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(plVar31,lVar29,0);
LAB_04145948:
            plVar24 = (long *)(*(code *)*puVar12)(plVar31,puVar12[1]);
            func_0x04145380(plVar16,uVar14,plVar24,
                            *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x160));
            uVar14 = (ulong)((int)uVar14 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar37 = func_0x03280ca4(uVar14);
        if (auVar37._8_4_ != 1) {
          if (plVar31 == (long *)0x0) goto LAB_04145ae0;
          lVar20 = *plVar31;
          uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar14 == 0) goto LAB_04145ab8;
          piVar28 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar19 = (ulong *)func_0x072ce910(auVar37._0_8_);
        uVar14 = *puVar19;
        plVar18 = (long *)func_0x072ce920();
        iVar9 = 0;
        if (plVar31 != (long *)0x0) {
LAB_04145988:
          lVar29 = *plVar31;
          uVar26 = (ulong)*(ushort *)(lVar29 + 0x12e);
          if (uVar26 != 0) {
            piVar28 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar12 = (undefined8 *)(lVar29 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar26 = uVar26 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar26 != 0);
          }
          plVar24 = (long *)0x0;
          puVar12 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041459dc:
          plVar18 = (long *)(*(code *)*puVar12)(plVar31,puVar12[1]);
        }
LAB_041459e8:
      } while (uVar14 != 0);
      if (iVar9 == 5) goto LAB_04145a10;
      if (iVar9 != 0) {
        return plVar18;
      }
    }
    plVar18 = (long *)func_0x041462cc(plVar16,plVar22,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar29 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    lVar21 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar14 != 0) {
      piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar29) {
          puVar12 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar14 = uVar14 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar17,lVar29,0);
LAB_04145728:
    plVar18 = (long *)(*(code *)*puVar12)(plVar17,puVar12[1]);
    iVar9 = (int)plVar18;
    if (0 < iVar9) {
      func_0x04144aa0(plVar16,(int)plVar16[3] + iVar9,
                      *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x78));
      iVar4 = (int)plVar16[3] - uVar10;
      if (iVar4 != 0 && (int)uVar10 <= (int)plVar16[3]) {
        func_0x057b9f30(plVar16[2],uVar10,plVar16[2],iVar9 + uVar10,iVar4,0);
      }
      if (plVar16 == plVar17) {
        func_0x057b9f30(plVar16[2],0,plVar16[2],uVar10,uVar10,0);
        plVar18 = (long *)func_0x057b9f30(plVar16[2],iVar9 + uVar10,plVar16[2],uVar10 << 1,
                                          (int)plVar16[3] - uVar10,0);
      }
      else {
        lVar29 = plVar16[2];
        lVar20 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        lVar21 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar14 != 0) {
          piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar20) {
              puVar12 = (undefined8 *)(lVar21 + (long)(*piVar28 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar14 = uVar14 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar17,lVar20,5);
LAB_04145838:
        plVar18 = (long *)(*(code *)*puVar12)(plVar17,lVar29,uVar10,puVar12[1]);
      }
      *(int *)(plVar16 + 3) = (int)plVar16[3] + iVar9;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar16 + 0x1c) = *(int *)((long)plVar16 + 0x1c) + 1;
  return plVar18;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar28 = piVar28 + 4;
    if (uVar14 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar20 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar24 = (long *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar31);
LAB_04145ad4:
  (*(code *)*puVar12)(plVar31,puVar12[1]);
LAB_04145ae0:
  func_0x03365958(auVar37._0_8_);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  uVar13 = 0x4145af8;
  goto SUB_04145af8;
}

