/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1A910; MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>.OnBoardSwitched; status ok */

/* WARNING: Possible PIC construction at 0x04d1a9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d1ac04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d1acb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d1ac08) */
/* WARNING: Removing unreachable block (ram,0x04d1ac1c) */
/* WARNING: Removing unreachable block (ram,0x04d1ac30) */
/* WARNING: Removing unreachable block (ram,0x04d1ac24) */
/* WARNING: Removing unreachable block (ram,0x04d1ac28) */
/* WARNING: Removing unreachable block (ram,0x04d1ac34) */
/* WARNING: Removing unreachable block (ram,0x04d1ac70) */
/* WARNING: Removing unreachable block (ram,0x04d1ac90) */
/* WARNING: Removing unreachable block (ram,0x04d1acbc) */
/* WARNING: Removing unreachable block (ram,0x04d1aca0) */
/* WARNING: Removing unreachable block (ram,0x04d1aa00) */
/* WARNING: Removing unreachable block (ram,0x04d1aa04) */
/* WARNING: Removing unreachable block (ram,0x04d1aa1c) */
/* WARNING: Removing unreachable block (ram,0x04d1aad0) */
/* WARNING: Removing unreachable block (ram,0x04d1aa24) */
/* WARNING: Removing unreachable block (ram,0x04d1aa40) */
/* WARNING: Removing unreachable block (ram,0x04d1aa48) */
/* WARNING: Removing unreachable block (ram,0x04d1aa84) */
/* WARNING: Removing unreachable block (ram,0x04d1aa54) */
/* WARNING: Removing unreachable block (ram,0x04d1aa60) */
/* WARNING: Removing unreachable block (ram,0x04d1aa94) */
/* WARNING: Removing unreachable block (ram,0x04d1aaa4) */
/* WARNING: Removing unreachable block (ram,0x03bf70e8) */
/* WARNING: Removing unreachable block (ram,0x03bf7104) */
/* WARNING: Removing unreachable block (ram,0x03bf710c) */
/* WARNING: Removing unreachable block (ram,0x03bf7110) */
/* WARNING: Removing unreachable block (ram,0x03bf7114) */
/* WARNING: Removing unreachable block (ram,0x03bf7124) */
/* WARNING: Removing unreachable block (ram,0x03bf7130) */
/* WARNING: Removing unreachable block (ram,0x03bf713c) */
/* WARNING: Removing unreachable block (ram,0x03bf7144) */
/* WARNING: Removing unreachable block (ram,0x03bf716c) */
/* WARNING: Removing unreachable block (ram,0x03bf7150) */
/* WARNING: Removing unreachable block (ram,0x03bf715c) */
/* WARNING: Removing unreachable block (ram,0x03bf7178) */
/* WARNING: Removing unreachable block (ram,0x03bf7188) */
/* WARNING: Removing unreachable block (ram,0x04d1acb8) */

undefined1  [16]
MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___OnBoardSwitched
          (long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 uStack_148;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  
  if ((bRam0000000007e1af17 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780510);
    bRam0000000007e1af17 = 1;
  }
  if ((param_1 != 0) &&
     (lVar8 = func_0x03eb68fc(param_1,*(undefined8 *)PTR_DAT_07780510), lVar8 != 0)) {
    auVar19._0_8_ = (undefined8 *)(lVar8 + 0x40);
    *auVar19._0_8_ = 0;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)auVar19._0_8_ >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)auVar19._0_8_ >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    auVar19._8_8_ = 0;
    return auVar19;
  }
  auVar19 = func_0x03280cac();
  lVar8 = auVar19._8_8_;
  plVar10 = auVar19._0_8_;
  if ((bRam0000000007e1af18 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780518);
    auVar19 = func_0x03280a18(PTR_DAT_07780510);
    bRam0000000007e1af18 = 1;
  }
  if ((lVar8 == 0) ||
     (auVar19 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220)),
     (auVar19._0_8_ & 1) == 0)) {
    return auVar19;
  }
  func_0x03eb68fc(plVar10,*(undefined8 *)PTR_DAT_07780510);
  lVar14 = *(long *)(lVar8 + 0x18);
  lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
  uVar17 = 0x7e1a000;
  if ((bRam0000000007e1af19 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780520);
    func_0x03280a18(PTR_DAT_07780528);
    func_0x03280a18(PTR_DAT_07780530);
    func_0x03280a18(PTR_DAT_07780538);
    func_0x03280a18(PTR_DAT_07780540);
    func_0x03280a18(PTR_DAT_07780548);
    func_0x03280a18(PTR_DAT_07780550);
    func_0x03280a18(PTR_DAT_07780558);
    func_0x03280a18(PTR_DAT_07780560);
    bRam0000000007e1af19 = 1;
  }
  puVar7 = PTR_DAT_07780548;
  puVar6 = PTR_DAT_07780540;
  puVar5 = PTR_DAT_07780528;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  if (lVar14 == 0) {
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    auVar24 = func_0x03280cac();
    if (auVar24._8_4_ == 1) {
      plVar10 = (long *)func_0x072ce910(auVar24._0_8_);
      lVar14 = *plVar10;
      func_0x072ce920();
      func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_07780520);
      uVar18 = extraout_x1_00;
      if (lVar14 == 0) {
LAB_04d1acec:
        auVar20._8_8_ = uVar18;
        auVar20._0_8_ = uVar17;
        return auVar20;
      }
      func_0x03280ca4(lVar14);
    }
    func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_07780520);
    func_0x03365958(auVar24._0_8_);
    func_0x03280ca4(0);
    auVar21 = func_0x02f09514();
  }
  else {
    uVar2 = *(undefined4 *)(lVar14 + 0x18);
    uVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780558);
    func_0x04143ca8(uVar17,uVar2,*(undefined8 *)puVar7);
    func_0x04145068(&uStack_f8,lVar14,*(undefined8 *)puVar6);
    uStack_d8 = uStack_f0;
    uStack_e0 = uStack_f8;
    lStack_d0 = lStack_e8;
    do {
      uVar9 = func_0x051159b4(&uStack_e0,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_07780520);
        uVar18 = extraout_x1;
        goto LAB_04d1acec;
      }
    } while (lStack_d0 == 0);
    auVar21._8_8_ = *(undefined8 *)(lStack_d0 + 0x18);
    auVar21._0_8_ = plVar10;
    lVar8 = *(long *)(lStack_d0 + 0x20);
  }
  lVar15 = auVar21._8_8_;
  lVar11 = auVar21._0_8_;
  lVar14 = lVar15;
  if ((bRam0000000007e1af1a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_077803d0);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e1af1a = 1;
    lVar14 = extraout_x1_01;
  }
  puVar5 = PTR_DAT_0777e5d0;
  if (lVar8 == 0) {
LAB_04d1ae98:
    uVar17 = 0;
  }
  else {
    uVar17 = func_0x06a05088(0);
    uStack_148 = 0;
    func_0x0437ba9c(&uStack_148,0x20,*(undefined8 *)puVar5);
    uVar17 = func_0x06a13bc8(uVar17,uStack_148,0,0,0);
    if ((lVar11 == 0) || (plVar10 = *(long **)(lVar11 + 0x18), plVar10 == (long *)0x0))
    goto LAB_04d1af94;
    lVar14 = *(long *)PTR_DAT_0777e5b8;
    if (lVar15 == 0) {
      lVar12 = 0;
    }
    else {
      uVar18 = *(undefined8 *)PTR_DAT_0777e548;
      lVar12 = func_0x03280b90(lVar15,uVar18);
      if (lVar12 == 0) {
        func_0x03281048(lVar15,uVar18);
        lVar14 = extraout_x1_02;
        goto LAB_04d1ae98;
      }
    }
    lVar15 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_04d1aef0;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar10,lVar14,0);
LAB_04d1aef0:
    uVar17 = (*(code *)*puVar13)(plVar10,lVar12,uVar17,puVar13[1]);
    plVar10 = *(long **)(lVar11 + 0x58);
    if (plVar10 == (long *)0x0) {
LAB_04d1af94:
      lVar8 = func_0x03280cac();
      if ((bRam0000000007e1af1b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a608);
        bRam0000000007e1af1b = 1;
      }
      if (*(long *)(lVar8 + 0x50) == 0) {
        auVar23._0_8_ = func_0x03280cac();
        auVar23._8_8_ = 0;
        return auVar23;
      }
      lVar14 = func_0x064819c0(*(long *)(lVar8 + 0x50),0);
      lVar8 = 0;
      if ((lVar14 != 0) && (lVar8 = 0, *(long *)(lVar14 + 0x20) != 0)) {
        lVar8 = func_0x06472e74(*(long *)(lVar14 + 0x20),0);
      }
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) != 0)) {
        return ZEXT816(0);
      }
      return ZEXT816(1);
    }
    lVar14 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077803d0) {
          puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_04d1af64;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077803d0,0);
LAB_04d1af64:
    (*(code *)*puVar13)(plVar10,uVar17,lVar8,puVar13[1]);
    lVar14 = extraout_x1_03;
  }
  auVar22._8_8_ = lVar14;
  auVar22._0_8_ = uVar17;
  return auVar22;
}

