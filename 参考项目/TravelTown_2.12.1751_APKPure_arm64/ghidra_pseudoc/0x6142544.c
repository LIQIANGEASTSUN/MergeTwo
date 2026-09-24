/* Ghidra 12.1.2 native pseudocode; RVA 0x6142544; MergeEngine.Model.Configuration.ProducerInventoryConfigurationModel.HandleDataLoaded; status ok */


/* WARNING: Possible PIC construction at 0x03e11488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e11714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e119a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03e11718) */
/* WARNING: Removing unreachable block (ram,0x03e1171c) */
/* WARNING: Removing unreachable block (ram,0x03e11720) */
/* WARNING: Removing unreachable block (ram,0x03e11730) */
/* WARNING: Removing unreachable block (ram,0x03e1173c) */
/* WARNING: Removing unreachable block (ram,0x03e11748) */
/* WARNING: Removing unreachable block (ram,0x03e11750) */
/* WARNING: Removing unreachable block (ram,0x03e11778) */
/* WARNING: Removing unreachable block (ram,0x03e1175c) */
/* WARNING: Removing unreachable block (ram,0x03e11768) */
/* WARNING: Removing unreachable block (ram,0x03e11784) */
/* WARNING: Removing unreachable block (ram,0x03e118c4) */
/* WARNING: Removing unreachable block (ram,0x03e11798) */
/* WARNING: Removing unreachable block (ram,0x03e117c0) */
/* WARNING: Removing unreachable block (ram,0x03e117cc) */
/* WARNING: Removing unreachable block (ram,0x03e117d8) */
/* WARNING: Removing unreachable block (ram,0x03e117e0) */
/* WARNING: Removing unreachable block (ram,0x03e11808) */
/* WARNING: Removing unreachable block (ram,0x03e117ec) */
/* WARNING: Removing unreachable block (ram,0x03e117f8) */
/* WARNING: Removing unreachable block (ram,0x03e11818) */
/* WARNING: Removing unreachable block (ram,0x03e1148c) */
/* WARNING: Removing unreachable block (ram,0x03e11490) */
/* WARNING: Removing unreachable block (ram,0x03e11494) */
/* WARNING: Removing unreachable block (ram,0x03e114a4) */
/* WARNING: Removing unreachable block (ram,0x03e114b0) */
/* WARNING: Removing unreachable block (ram,0x03e114bc) */
/* WARNING: Removing unreachable block (ram,0x03e114c4) */
/* WARNING: Removing unreachable block (ram,0x03e114ec) */
/* WARNING: Removing unreachable block (ram,0x03e114d0) */
/* WARNING: Removing unreachable block (ram,0x03e114dc) */
/* WARNING: Removing unreachable block (ram,0x03e114f8) */
/* WARNING: Removing unreachable block (ram,0x03e11638) */
/* WARNING: Removing unreachable block (ram,0x03e1150c) */
/* WARNING: Removing unreachable block (ram,0x03e11534) */
/* WARNING: Removing unreachable block (ram,0x03e11540) */
/* WARNING: Removing unreachable block (ram,0x03e1154c) */
/* WARNING: Removing unreachable block (ram,0x03e11554) */
/* WARNING: Removing unreachable block (ram,0x03e1157c) */
/* WARNING: Removing unreachable block (ram,0x03e11560) */
/* WARNING: Removing unreachable block (ram,0x03e1156c) */
/* WARNING: Removing unreachable block (ram,0x03e1158c) */
/* WARNING: Removing unreachable block (ram,0x03e119a4) */
/* WARNING: Removing unreachable block (ram,0x03e119a8) */
/* WARNING: Removing unreachable block (ram,0x03e119ac) */
/* WARNING: Removing unreachable block (ram,0x03e119bc) */
/* WARNING: Removing unreachable block (ram,0x03e119c8) */
/* WARNING: Removing unreachable block (ram,0x03e119d4) */
/* WARNING: Removing unreachable block (ram,0x03e119dc) */
/* WARNING: Removing unreachable block (ram,0x03e11a04) */
/* WARNING: Removing unreachable block (ram,0x03e119e8) */
/* WARNING: Removing unreachable block (ram,0x03e119f4) */
/* WARNING: Removing unreachable block (ram,0x03e11a10) */
/* WARNING: Removing unreachable block (ram,0x03e11b50) */
/* WARNING: Removing unreachable block (ram,0x03e11a24) */
/* WARNING: Removing unreachable block (ram,0x03e11a4c) */
/* WARNING: Removing unreachable block (ram,0x03e11a58) */
/* WARNING: Removing unreachable block (ram,0x03e11a64) */
/* WARNING: Removing unreachable block (ram,0x03e11a6c) */
/* WARNING: Removing unreachable block (ram,0x03e11a94) */
/* WARNING: Removing unreachable block (ram,0x03e11a78) */
/* WARNING: Removing unreachable block (ram,0x03e11a84) */
/* WARNING: Removing unreachable block (ram,0x03e11aa4) */

long * MergeEngine_Model_Configuration_ProducerInventoryConfigurationModel__HandleDataLoaded
                 (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  undefined8 *puVar16;
  long *plVar17;
  long unaff_x20;
  long lVar18;
  code *pcVar19;
  long *unaff_x21;
  undefined8 uVar20;
  long unaff_x22;
  code *pcVar21;
  undefined8 unaff_x23;
  int iVar22;
  undefined8 unaff_x30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long alStack_120 [4];
  int *piStack_100;
  code *pcStack_f8;
  int iStack_ec;
  long lStack_e8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = PTR_DAT_077db550;
  puVar6 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000007e245e2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db558);
    func_0x03280a18(PTR_DAT_077db560);
    func_0x03280a18(PTR_DAT_077db568);
    func_0x03280a18(PTR_DAT_077db550);
    bRam0000000007e245e2 = 1;
  }
  puVar16 = (undefined8 *)(param_1 + 0x28);
  *puVar16 = param_2;
  func_0x032809c4(puVar16,param_2);
  lVar8 = *(long *)puVar2;
  plVar17 = (long *)*puVar16;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar8 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_077db560;
  lVar18 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar18 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar8 = *(long *)puVar2;
    }
    uVar20 = **(undefined8 **)(lVar8 + 0xb8);
    lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077db558);
    func_0x04e5231c(lVar18,uVar20,*(undefined8 *)PTR_DAT_077db568,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar9 = lVar18;
    func_0x032809c4(plVar9,lVar18);
  }
  lVar11 = *(long *)puVar3;
  lVar12 = *(long *)(lVar11 + 0x38);
  lVar8 = lVar11;
  if (lVar12 == 0) {
    func_0x03256878(lVar11);
    lVar12 = *(long *)(lVar11 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (plVar17 == (long *)0x0) {
LAB_03e1141c:
    plVar9 = (long *)0x1;
  }
  else {
    if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar12 + 0x130)) goto LAB_03e1141c;
    plVar9 = (long *)(ulong)(*(long *)(*(long *)(*plVar17 + 200) +
                                       (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  if ((int)plVar9 == 0) {
    if (plVar17 != (long *)0x0) {
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
            lVar12)) {
          lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x18);
          plVar9 = plVar17;
          goto SUB_04146094;
        }
      }
      func_0x03281048(plVar17);
    }
  }
  else {
    unaff_x21 = (long *)func_0x03280ca0(lVar12);
    lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x20);
    func_0x04143d60(unaff_x21,plVar17);
    plVar9 = (long *)0x0;
    if (unaff_x21 != (long *)0x0) {
      lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x18);
      unaff_x30 = 0x3e1148c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      plVar9 = unaff_x21;
      unaff_x19 = plVar17;
      unaff_x20 = lVar11;
      unaff_x22 = lVar18;
SUB_04146094:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
      *(long **)((long)register0x00000008 + -8) = unaff_x19;
      plVar17 = plVar9;
      if (lVar18 == 0) {
        plVar17 = (long *)func_0x057a867c(0x22);
      }
      lVar11 = plVar9[3];
      if (1 < (int)lVar11) {
        lVar10 = plVar9[2];
        lVar12 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x1b8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar17 = (long *)func_0x04531654(lVar10,0,(int)lVar11,lVar18,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x1b0));
      }
      *(int *)((long)plVar9 + 0x1c) = *(int *)((long)plVar9 + 0x1c) + 1;
      return plVar17;
    }
  }
  auVar23 = func_0x03280cac();
  lVar10 = auVar23._8_8_;
  plVar7 = auVar23._0_8_;
  uStack_60 = 0x3e11654;
  lVar13 = *(long *)(lVar8 + 0x38);
  lVar12 = lVar8;
  uStack_58 = unaff_x23;
  lStack_50 = lVar18;
  plStack_48 = plVar9;
  lStack_40 = lVar11;
  plStack_38 = plVar17;
  if (lVar13 == 0) {
    func_0x03256878(lVar8);
    lVar13 = *(long *)(lVar8 + 0x38);
  }
  lVar18 = *(long *)(lVar13 + 8);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  if (plVar7 == (long *)0x0) {
LAB_03e116a8:
    plVar17 = (long *)0x1;
  }
  else {
    if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar18 + 0x130)) goto LAB_03e116a8;
    plVar17 = (long *)(ulong)(*(long *)(*(long *)(*plVar7 + 200) +
                                        (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) != lVar18);
  }
  lVar18 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c(lVar18);
  }
  if ((int)plVar17 == 0) {
    if (plVar7 != (long *)0x0) {
      if ((*(byte *)(lVar18 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18)
         ) {
        lVar18 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        auVar1._8_8_ = lStack_50;
        auVar1._0_8_ = plStack_38;
        if ((*(byte *)(lVar18 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) ==
            lVar18)) {
          lVar18 = *(long *)(*(long *)(lVar8 + 0x38) + 0x18);
          lVar8 = lStack_40;
          plVar9 = plStack_48;
          unaff_x23 = uStack_58;
          uVar20 = uStack_60;
          goto SUB_041e8434;
        }
      }
      func_0x03281048(plVar7);
    }
  }
  else {
    plVar9 = (long *)func_0x03280ca0(lVar18);
    lVar12 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
    func_0x041e617c(plVar9,plVar7);
    plVar17 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      lVar18 = *(long *)(*(long *)(lVar8 + 0x38) + 0x18);
      puVar6 = &uStack_60;
      plVar7 = plVar9;
      uVar20 = 0x3e11718;
      auVar1 = auVar23;
SUB_041e8434:
      *(undefined8 *)((long)puVar6 + -0x30) = uVar20;
      *(undefined8 *)((long)puVar6 + -0x28) = unaff_x23;
      *(long *)((long)puVar6 + -0x20) = auVar1._8_8_;
      *(long **)((long)puVar6 + -0x18) = plVar9;
      *(long *)((long)puVar6 + -0x10) = lVar8;
      *(long *)((long)puVar6 + -8) = auVar1._0_8_;
      plVar17 = plVar7;
      if (lVar10 == 0) {
        plVar17 = (long *)func_0x057a867c(0x22);
      }
      lVar8 = plVar7[3];
      if (1 < (int)lVar8) {
        lVar12 = plVar7[2];
        lVar11 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x1b8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar17 = (long *)func_0x047e4a70(lVar12,0,(int)lVar8,lVar10,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x1b0));
      }
      *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
      return plVar17;
    }
  }
  auVar24 = func_0x03280cac();
  lVar11 = auVar24._8_8_;
  plVar9 = auVar24._0_8_;
  puVar4 = &uStack_90;
  uStack_90 = 0x3e118e0;
  lVar13 = *(long *)(lVar12 + 0x38);
  lVar18 = lVar12;
  uStack_88 = unaff_x23;
  plStack_78 = plVar17;
  lStack_70 = lVar8;
  if (lVar13 == 0) {
    lStack_80 = lVar10;
    plStack_68 = plVar7;
    func_0x03256878(lVar12);
    auVar23._8_8_ = lStack_80;
    auVar23._0_8_ = plStack_68;
    lVar13 = *(long *)(lVar12 + 0x38);
  }
  lStack_80 = auVar23._8_8_;
  plStack_68 = auVar23._0_8_;
  lVar8 = *(long *)(lVar13 + 8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
    auVar23._8_8_ = lStack_80;
    auVar23._0_8_ = plStack_68;
  }
  lStack_80 = auVar23._8_8_;
  plStack_68 = auVar23._0_8_;
  if (plVar9 == (long *)0x0) {
LAB_03e11934:
    bVar5 = true;
  }
  else {
    if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar8 + 0x130)) goto LAB_03e11934;
    bVar5 = *(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8;
  }
  lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c(lVar8);
    auVar23._8_8_ = lStack_80;
    auVar23._0_8_ = plStack_68;
  }
  lStack_80 = auVar23._8_8_;
  plStack_68 = auVar23._0_8_;
  if (bVar5) {
    plVar17 = (long *)func_0x03280ca0(lVar8);
    lVar18 = *(long *)(*(long *)(lVar12 + 0x38) + 0x20);
    func_0x041e8ba0(plVar17,plVar9);
    auVar23._8_8_ = lStack_80;
    auVar23._0_8_ = plStack_68;
    if (plVar17 != (long *)0x0) {
      lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x18);
      plVar9 = plVar17;
      uVar20 = 0x3e119a4;
SUB_041eae58:
      lStack_80 = auVar23._8_8_;
      plStack_68 = auVar23._0_8_;
      *(undefined8 *)((long)puVar4 + -0x30) = uVar20;
      *(undefined8 *)((long)puVar4 + -0x28) = unaff_x23;
      *(long *)((long)puVar4 + -0x20) = auVar24._8_8_;
      *(long **)((long)puVar4 + -0x18) = plVar17;
      *(long *)((long)puVar4 + -0x10) = lVar12;
      *(long *)((long)puVar4 + -8) = auVar24._0_8_;
      plVar17 = plVar9;
      if (lVar11 == 0) {
        plVar17 = (long *)func_0x057a867c(0x22);
      }
      lVar18 = plVar9[3];
      if (1 < (int)lVar18) {
        lVar10 = plVar9[2];
        lVar12 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x1b8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar17 = (long *)func_0x047e5e00(lVar10,0,(int)lVar18,lVar11,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x1b0));
      }
      *(int *)((long)plVar9 + 0x1c) = *(int *)((long)plVar9 + 0x1c) + 1;
      return plVar17;
    }
  }
  else if (plVar9 != (long *)0x0) {
    auVar24 = auVar23;
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
        auVar24._8_8_ = lStack_80;
        auVar24._0_8_ = plStack_68;
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x18);
        puVar4 = &uStack_60;
        lVar12 = lStack_70;
        plVar17 = plStack_78;
        unaff_x23 = uStack_88;
        uVar20 = uStack_90;
        auVar23 = auVar24;
        goto SUB_041eae58;
      }
    }
    lStack_80 = auVar24._8_8_;
    plStack_68 = auVar24._0_8_;
    func_0x03281048(plVar9);
    auVar23._8_8_ = lStack_80;
    auVar23._0_8_ = plStack_68;
  }
  lStack_80 = auVar23._8_8_;
  plStack_68 = auVar23._0_8_;
  auVar23 = func_0x03280cac();
  plVar17 = auVar23._0_8_;
  lVar8 = tpidr_el0;
  lStack_e8 = *(long *)(lVar8 + 0x28);
  lVar11 = *(long *)(lVar18 + 0x38);
  if (lVar11 == 0) {
    func_0x03256878(lVar18);
    lVar11 = *(long *)(lVar18 + 0x38);
  }
  lVar12 = -((ulong)*(uint *)(*(long *)(lVar11 + 0x38) + 0xfc) + 0xf & 0x1fffffff0);
  pcVar19 = (code *)((long)&piStack_100 + lVar12);
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  if (plVar17 == (long *)0x0) {
LAB_03e11bf8:
    bVar5 = true;
  }
  else {
    if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar11 + 0x130)) goto LAB_03e11bf8;
    bVar5 = *(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11;
  }
  lVar11 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  if (bVar5) {
    lVar11 = func_0x03280ca0(lVar11);
    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x20))(lVar11,plVar17);
    if ((lVar11 != 0) &&
       ((*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x18))(lVar11,auVar23._8_8_),
       plVar17 != (long *)0x0)) {
      iVar22 = 0;
      do {
        lVar10 = *(long *)(*(long *)(lVar18 + 0x38) + 0x48);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar13 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03e11ce0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar17,lVar10,0);
LAB_03e11ce0:
        plVar9 = (long *)(*(code *)*puVar6)(plVar17,puVar6[1]);
        if ((int)plVar9 <= iVar22) goto LAB_03e11e50;
        puVar6 = *(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x30);
        piStack_100 = &iStack_ec;
        pcStack_f8 = pcVar19;
        iStack_ec = iVar22;
        (*(code *)puVar6[2])(*puVar6,puVar6,lVar11,&piStack_100,pcVar19);
        plVar9 = *(long **)(lVar18 + 0x38);
        lVar10 = *plVar9;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          plVar9 = *(long **)(lVar18 + 0x38);
        }
        pcVar21 = pcVar19;
        if (-1 < *(int *)(plVar9[7] + 0x28)) {
          pcVar21 = *(code **)pcVar19;
        }
        lVar13 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar10) {
              lVar10 = lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138;
              iStack_ec = iVar22;
              goto LAB_03e11da0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        iStack_ec = iVar22;
        lVar10 = func_0x03256b10(plVar17,lVar10,1);
LAB_03e11da0:
        lVar10 = *(long *)(lVar10 + 8);
        piStack_100 = &iStack_ec;
        pcStack_f8 = pcVar21;
        (**(code **)(lVar10 + 0x10))
                  (*(undefined8 *)(lVar10 + 8),lVar10,plVar17,&piStack_100,pcVar21);
        iVar22 = iVar22 + 1;
      } while( true );
    }
  }
  else if (plVar17 != (long *)0x0) {
    if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
    {
      lVar11 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
      pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x18);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
         )) {
        plVar9 = (long *)(*pcVar19)(plVar17,auVar23._8_8_,
                                    *(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x18));
LAB_03e11e50:
        if (*(long *)(lVar8 + 0x28) == lStack_e8) {
          return plVar9;
        }
        goto LAB_03e11e88;
      }
    }
    func_0x03281048(plVar17);
  }
  func_0x03280cac();
LAB_03e11e88:
  auVar23 = func_0x072ce990();
  lVar8 = auVar23._8_8_;
  *(undefined8 *)((long)alStack_120 + lVar12) = 0x3e11e8c;
  *(code **)((long)alStack_120 + lVar12 + 8) = pcVar19;
  *(long *)((long)alStack_120 + lVar12 + 0x10) = lVar18;
  *(long **)((long)alStack_120 + lVar12 + 0x18) = plVar17;
  lVar18 = *(long *)(lVar8 + 0x38);
  if (lVar18 == 0) {
    func_0x03256878(lVar8);
    lVar18 = *(long *)(lVar8 + 0x38);
  }
  lVar18 = *(long *)(lVar18 + 8);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c(lVar18);
  }
  lVar18 = func_0x03280b90(auVar23._0_8_,lVar18);
  if (lVar18 == 0) {
    lVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x10))(auVar23._0_8_);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x20) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar17 = (long *)func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x28))(plVar17,lVar18);
  return plVar17;
}

