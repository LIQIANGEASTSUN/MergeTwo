/* Ghidra 12.1.2 native pseudocode; RVA 0x6902444; MergeEngine.ECS.Components.Board.BoardComponent.GetItem; status ok */


/* WARNING: Possible PIC construction at 0x047545a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a024f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a02894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a028bc) */
/* WARNING: Removing unreachable block (ram,0x06a02898) */
/* WARNING: Removing unreachable block (ram,0x06a024f4) */
/* WARNING: Removing unreachable block (ram,0x06a02508) */
/* WARNING: Removing unreachable block (ram,0x06a02500) */
/* WARNING: Removing unreachable block (ram,0x06a0250c) */
/* WARNING: Removing unreachable block (ram,0x047545a4) */
/* WARNING: Removing unreachable block (ram,0x047545ac) */
/* WARNING: Removing unreachable block (ram,0x047545d8) */
/* WARNING: Removing unreachable block (ram,0x047545f8) */
/* WARNING: Removing unreachable block (ram,0x04754600) */
/* WARNING: Removing unreachable block (ram,0x04754620) */
/* WARNING: Removing unreachable block (ram,0x04754644) */
/* WARNING: Removing unreachable block (ram,0x04754630) */
/* WARNING: Removing unreachable block (ram,0x047545f0) */
/* WARNING: Removing unreachable block (ram,0x047545b0) */
/* WARNING: Removing unreachable block (ram,0x047545c4) */
/* WARNING: Removing unreachable block (ram,0x047545c8) */
/* WARNING: Removing unreachable block (ram,0x06a028e0) */

ulong * MergeEngine_ECS_Components_Board_BoardComponent__GetItem
                  (long param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  ulong *puVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long *plVar17;
  undefined8 unaff_x21;
  long lVar18;
  undefined8 unaff_x22;
  ulong uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  code *pcStack_80;
  undefined8 uStack_70;
  undefined8 auStack_50 [2];
  
  auVar23._8_8_ = unaff_x20;
  auVar23._0_8_ = unaff_x21;
  if ((bRam0000000007e29903 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078268f0);
    bRam0000000007e29903 = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    auVar23 = func_0x03280cac();
    auVar3._8_8_ = param_3;
    auVar3._0_8_ = auVar23._8_8_;
    uVar15 = auVar23._0_8_;
    puVar6 = auStack_50;
    auStack_50[0] = 0x6a0249c;
    unaff_x22 = 0x7e29000;
    uVar19 = param_3;
    if ((bRam0000000007e29904 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078268f8);
      bRam0000000007e29904 = 1;
    }
    uVar13 = (uint)uVar19;
    auVar21._8_8_ = auVar23._8_8_;
    auVar21._0_8_ = *(long *)(uVar15 + 0x40);
    if (*(long *)(uVar15 + 0x40) == 0) {
      auVar23 = func_0x03280cac();
      pcStack_80 = MergeEngine_ECS_Components_Board_BoardComponent__GetAdjacentPositions;
      uStack_70 = 0x7e29000;
      if ((bRam0000000007e29905 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07826900);
        bRam0000000007e29905 = 1;
      }
      lVar14 = *(long *)(auVar23._0_8_ + 0x40);
      auVar22._8_8_ = auVar23._8_8_;
      auVar22._0_8_ = lVar14;
      if (lVar14 == 0) {
        auVar23 = func_0x03280cac();
        if ((bRam0000000007e29906 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e758);
          bRam0000000007e29906 = 1;
        }
        puVar4 = PTR_DAT_0774e758;
        plVar17 = (long *)(auVar23._0_8_ + 0x20);
        puVar9 = (ulong *)*plVar17;
        while ((plVar10 = (long *)func_0x057ddb20(puVar9,auVar23._8_8_,0), plVar10 == (long *)0x0 ||
               (*plVar10 == *(long *)puVar4))) {
          puVar11 = (ulong *)func_0x032dd140(plVar17,plVar10,puVar9);
          bVar8 = puVar9 == puVar11;
          puVar9 = puVar11;
          if (bVar8) {
            return puVar11;
          }
        }
        auVar23 = func_0x03281048(plVar10);
        if ((bRam0000000007e29907 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e758);
          bRam0000000007e29907 = 1;
        }
        puVar4 = PTR_DAT_0774e758;
        plVar17 = (long *)(auVar23._0_8_ + 0x20);
        puVar9 = (ulong *)*plVar17;
        while ((plVar10 = (long *)func_0x057ddd18(puVar9,auVar23._8_8_,0), plVar10 == (long *)0x0 ||
               (*plVar10 == *(long *)puVar4))) {
          puVar11 = (ulong *)func_0x032dd140(plVar17,plVar10,puVar9);
          bVar8 = puVar9 == puVar11;
          puVar9 = puVar11;
          if (bVar8) {
            return puVar11;
          }
        }
        auVar23 = func_0x03281048(plVar10);
        if ((bRam0000000007e29908 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077db230);
          bRam0000000007e29908 = 1;
        }
        puVar4 = PTR_DAT_077db230;
        plVar17 = (long *)(auVar23._0_8_ + 0x28);
        puVar9 = (ulong *)*plVar17;
        do {
          lVar14 = func_0x057ddb20(puVar9,auVar23._8_8_,0);
          if (lVar14 == 0) {
            lVar18 = 0;
          }
          else {
            uVar20 = *(undefined8 *)puVar4;
            lVar18 = func_0x03280b90(lVar14,uVar20);
            if (lVar18 == 0) {
              auVar23 = func_0x03281048(lVar14,uVar20);
              if ((bRam0000000007e29909 & 1) == 0) {
                func_0x03280a18(PTR_DAT_077db230);
                bRam0000000007e29909 = 1;
              }
              puVar4 = PTR_DAT_077db230;
              plVar17 = (long *)(auVar23._0_8_ + 0x28);
              puVar9 = (ulong *)*plVar17;
              goto LAB_06a027b8;
            }
          }
          puVar11 = (ulong *)func_0x032dd140(plVar17,lVar18,puVar9);
          bVar8 = puVar9 == puVar11;
          puVar9 = puVar11;
          if (bVar8) {
            return puVar11;
          }
        } while( true );
      }
      uVar19 = (ulong)(uVar13 & 1);
      uVar20 = *(undefined8 *)PTR_DAT_07826900;
      puVar7 = auStack_50;
      goto LAB_04754664;
    }
    uVar20 = *(undefined8 *)PTR_DAT_078268f8;
    uVar20 = 0x6a024f4;
    unaff_x19 = param_3;
  }
  else {
    param_3 = *(ulong *)PTR_DAT_078268f0;
    puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
    lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
    if (lVar14 == 0) {
LAB_04754504:
      func_0x03280cac();
    }
    else if ((uint)((ulong)param_2 >> 0x20) < *(uint *)(lVar14 + 0x18)) {
      lVar14 = *(long *)(lVar14 + (param_2 >> 0x20) * 8 + 0x20);
      if (lVar14 == 0) goto LAB_04754504;
      if ((uint)param_2 < *(uint *)(lVar14 + 0x18)) {
        return *(ulong **)(lVar14 + ((param_2 << 0x20) >> 0x1d) + 0x20);
      }
    }
    uVar20 = 0x475450c;
    auVar21 = func_0x03280cb4();
  }
  puVar7 = (undefined8 *)((long)puVar6 + -0x30);
  *(undefined8 *)((long)puVar6 + -0x30) = uVar20;
  *(undefined8 *)((long)puVar6 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar23;
  *(ulong *)((long)puVar6 + -8) = unaff_x19;
  uStack_70 = 0x7e19000;
  uVar19 = param_3;
  if ((bRam0000000007e196db & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0);
    func_0x03280a18(PTR_DAT_0777ece8);
    func_0x03280a18(PTR_DAT_0777ecf0);
    bRam0000000007e196db = 1;
  }
  lVar14 = *(long *)(auVar21._0_8_ + 0x18);
  if (lVar14 == 0) {
LAB_0475465c:
    func_0x03280cac();
  }
  else if (auVar21._12_4_ < *(uint *)(lVar14 + 0x18)) {
    lVar14 = *(long *)(lVar14 + (auVar21._8_8_ >> 0x20) * 8 + 0x20);
    if (lVar14 == 0) goto LAB_0475465c;
    if (auVar21._8_4_ < *(uint *)(lVar14 + 0x18)) {
      puVar9 = (ulong *)(lVar14 + ((auVar21._8_8_ << 0x20) >> 0x1d) + 0x20);
      *puVar9 = param_3;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar11 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar11,0x10);
          if (bVar8) {
            *puVar11 = *puVar11 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return puVar9;
    }
  }
  pcStack_80 = (code *)0x4754664;
  auVar22 = func_0x03280cb4();
  uVar15 = param_3;
  auVar3 = auVar21;
LAB_04754664:
  puVar5 = PTR_DAT_0777ecd0;
  puVar4 = PTR_DAT_0777ecc8;
  lVar14 = auVar22._0_8_;
  *(code **)((long)puVar7 + -0x50) = pcStack_80;
  *(undefined8 *)((long)puVar7 + -0x40) = unaff_x26;
  *(undefined8 *)((long)puVar7 + -0x38) = unaff_x25;
  *(undefined8 *)((long)puVar7 + -0x30) = unaff_x24;
  *(undefined8 *)((long)puVar7 + -0x28) = unaff_x23;
  *(undefined8 *)((long)puVar7 + -0x20) = uStack_70;
  *(ulong *)((long)puVar7 + -0x18) = uVar15;
  *(undefined1 (*) [16])((long)puVar7 + -0x10) = auVar3;
  if ((bRam0000000007e196dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0);
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196dc = 1;
  }
  uVar20 = *(undefined8 *)puVar4;
  *(undefined8 *)((long)puVar7 + -0x48) = 0;
  puVar9 = (ulong *)func_0x03280ca0(uVar20);
  func_0x040ce3d4(puVar9,*(undefined8 *)puVar5);
  puVar4 = PTR_DAT_0777ece0;
  lVar18 = 0x30;
  if ((uVar19 & 1) == 0) {
    lVar18 = 0x28;
  }
  lVar18 = *(long *)(lVar14 + lVar18);
  if (lVar18 != 0) {
    if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
      uVar19 = 0;
      uVar15 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
      do {
        if (uVar15 <= uVar19) {
          func_0x03280cb4();
          goto LAB_047547f0;
        }
        piVar1 = (int *)(lVar18 + 0x20 + uVar19 * 8);
        func_0x069fdc94((undefined1 *)((long)puVar7 + -0x48),*piVar1 + auVar22._8_4_,
                        piVar1[1] + auVar22._12_4_,0);
        lVar12 = *(long *)((long)puVar7 + -0x48);
        if ((((-1 < (int)lVar12) && (-1 < lVar12)) && ((int)lVar12 < *(int *)(lVar14 + 0x10))) &&
           ((int)((ulong)lVar12 >> 0x20) < *(int *)(lVar14 + 0x14))) {
          if (puVar9 == (ulong *)0x0) goto LAB_047547f0;
          uVar15 = puVar9[2];
          lVar16 = *(long *)puVar4;
          *(int *)((long)puVar9 + 0x1c) = *(int *)((long)puVar9 + 0x1c) + 1;
          if (uVar15 == 0) goto LAB_047547f0;
          uVar13 = (uint)puVar9[3];
          if (uVar13 < *(uint *)(uVar15 + 0x18)) {
            *(uint *)(puVar9 + 3) = uVar13 + 1;
            *(long *)(uVar15 + (long)(int)uVar13 * 8 + 0x20) = lVar12;
          }
          else {
            func_0x040cec28(puVar9,lVar12,
                            *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = (ulong)*(uint *)(lVar18 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)*(uint *)(lVar18 + 0x18));
    }
    return puVar9;
  }
LAB_047547f0:
  auVar23 = func_0x03280cac();
  if (-1 < auVar23._8_4_) {
    puVar9 = (ulong *)0x0;
    if ((-1 < auVar23._8_8_) && (auVar23._8_4_ < *(int *)(auVar23._0_8_ + 0x10))) {
      puVar9 = (ulong *)(ulong)(auVar23._12_4_ < *(int *)(auVar23._0_8_ + 0x14));
    }
    return puVar9;
  }
  return (ulong *)0x0;
LAB_06a027b8:
  lVar14 = func_0x057ddd18(puVar9,auVar23._8_8_,0);
  if (lVar14 == 0) {
    lVar18 = 0;
  }
  else {
    uVar20 = *(undefined8 *)puVar4;
    lVar18 = func_0x03280b90(lVar14,uVar20);
    if (lVar18 == 0) {
      lVar14 = func_0x03281048(lVar14,uVar20);
      puVar5 = PTR_DAT_0774e748;
      puVar4 = PTR_DAT_0774e740;
      if ((bRam0000000007e2990a & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e748);
        func_0x03280a18(PTR_DAT_0774e740);
        bRam0000000007e2990a = 1;
      }
      uVar19 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04fb1810(uVar19,*(undefined8 *)puVar5);
      puVar9 = (ulong *)(lVar14 + 0x30);
      *puVar9 = uVar19;
      goto SUB_032809c4;
    }
  }
  puVar11 = (ulong *)func_0x032dd140(plVar17,lVar18,puVar9);
  bVar8 = puVar9 == puVar11;
  puVar9 = puVar11;
  if (bVar8) {
    return puVar11;
  }
  goto LAB_06a027b8;
}

