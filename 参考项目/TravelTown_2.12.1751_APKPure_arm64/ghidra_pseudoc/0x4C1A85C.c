/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1A85C; MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>.DisposeSystem; status ok */

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
MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___DisposeSystem
          (ulong param_1,long param_2,long param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined8 uStack_178;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  
  if ((bRam0000000007e1af16 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07780508);
    bRam0000000007e1af16 = 1;
  }
  if (param_1 != 0) {
    lVar17 = *(long *)(param_1 + 0x28);
    uVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
    param_3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
    func_0x056ed730(uVar8,param_1,param_3,0);
    if (lVar17 != 0) {
      func_0x03ea624c(lVar17,uVar8,*(undefined8 *)PTR_DAT_07780508);
      lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar16 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar8 = func_0x03280ca0();
        lVar13 = *(long *)(*(long *)(lVar17 + 0x20) + 0xc0);
        func_0x054221d4(uVar8,param_1,*(undefined8 *)(lVar13 + 0x28),*(undefined8 *)(lVar13 + 0x38))
        ;
        if (lVar16 != 0) {
          func_0x04d0f3b8(lVar16,uVar8,
                          *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x48));
          auVar20._8_8_ = 0;
          auVar20._0_8_ = param_1;
          return auVar20;
        }
      }
      auVar20 = func_0x03280cac();
      auVar21._0_8_ = auVar20._0_8_;
      if (auVar20._8_8_ == 0) {
        auVar21._8_8_ = 0;
        return auVar21;
      }
                    /* WARNING: Could not recover jumptable at 0x04645190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar20 = (**(code **)(*auVar21._0_8_ + 0x208))
                          (auVar21._0_8_,auVar20._8_8_,*(undefined8 *)(*auVar21._0_8_ + 0x210));
      return auVar20;
    }
  }
  lVar17 = func_0x03280cac();
  if ((bRam0000000007e1af17 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780510);
    bRam0000000007e1af17 = 1;
  }
  if ((lVar17 != 0) &&
     (lVar17 = func_0x03eb68fc(lVar17,*(undefined8 *)PTR_DAT_07780510), lVar17 != 0)) {
    auVar19._0_8_ = (undefined8 *)(lVar17 + 0x40);
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
  auVar20 = func_0x03280cac();
  lVar17 = auVar20._8_8_;
  plVar10 = auVar20._0_8_;
  if ((bRam0000000007e1af18 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780518);
    auVar20 = func_0x03280a18(PTR_DAT_07780510);
    bRam0000000007e1af18 = 1;
  }
  if ((lVar17 == 0) ||
     (auVar20 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220)),
     (auVar20._0_8_ & 1) == 0)) {
    return auVar20;
  }
  func_0x03eb68fc(plVar10,*(undefined8 *)PTR_DAT_07780510);
  lVar16 = *(long *)(lVar17 + 0x18);
  lVar17 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
  uVar8 = 0x7e1a000;
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
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  if (lVar16 == 0) {
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    auVar26 = func_0x03280cac();
    if (auVar26._8_4_ == 1) {
      plVar10 = (long *)func_0x072ce910(auVar26._0_8_);
      lVar16 = *plVar10;
      func_0x072ce920();
      func_0x051159b0(&uStack_110,*(undefined8 *)PTR_DAT_07780520);
      uVar18 = extraout_x1_00;
      if (lVar16 == 0) {
LAB_04d1acec:
        auVar22._8_8_ = uVar18;
        auVar22._0_8_ = uVar8;
        return auVar22;
      }
      func_0x03280ca4(lVar16);
    }
    func_0x051159b0(&uStack_110,*(undefined8 *)PTR_DAT_07780520);
    func_0x03365958(auVar26._0_8_);
    func_0x03280ca4(0);
    auVar23 = func_0x02f09514();
  }
  else {
    uVar2 = *(undefined4 *)(lVar16 + 0x18);
    uVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780558);
    func_0x04143ca8(uVar8,uVar2,*(undefined8 *)puVar7);
    func_0x04145068(&uStack_128,lVar16,*(undefined8 *)puVar6);
    uStack_108 = uStack_120;
    uStack_110 = uStack_128;
    lStack_100 = lStack_118;
    do {
      uVar9 = func_0x051159b4(&uStack_110,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        func_0x051159b0(&uStack_110,*(undefined8 *)PTR_DAT_07780520);
        uVar18 = extraout_x1;
        goto LAB_04d1acec;
      }
    } while (lStack_100 == 0);
    auVar23._8_8_ = *(undefined8 *)(lStack_100 + 0x18);
    auVar23._0_8_ = plVar10;
    lVar17 = *(long *)(lStack_100 + 0x20);
  }
  lVar14 = auVar23._8_8_;
  lVar13 = auVar23._0_8_;
  lVar16 = lVar14;
  if ((bRam0000000007e1af1a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_077803d0);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e1af1a = 1;
    lVar16 = extraout_x1_01;
  }
  puVar5 = PTR_DAT_0777e5d0;
  if (lVar17 == 0) {
LAB_04d1ae98:
    uVar8 = 0;
  }
  else {
    uVar8 = func_0x06a05088(0);
    uStack_178 = 0;
    func_0x0437ba9c(&uStack_178,0x20,*(undefined8 *)puVar5);
    uVar8 = func_0x06a13bc8(uVar8,uStack_178,0,0,0);
    if ((lVar13 == 0) || (plVar10 = *(long **)(lVar13 + 0x18), plVar10 == (long *)0x0))
    goto LAB_04d1af94;
    lVar16 = *(long *)PTR_DAT_0777e5b8;
    if (lVar14 == 0) {
      lVar11 = 0;
    }
    else {
      uVar18 = *(undefined8 *)PTR_DAT_0777e548;
      lVar11 = func_0x03280b90(lVar14,uVar18);
      if (lVar11 == 0) {
        func_0x03281048(lVar14,uVar18);
        lVar16 = extraout_x1_02;
        goto LAB_04d1ae98;
      }
    }
    lVar14 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar16) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04d1aef0;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar10,lVar16,0);
LAB_04d1aef0:
    uVar8 = (*(code *)*puVar12)(plVar10,lVar11,uVar8,puVar12[1]);
    plVar10 = *(long **)(lVar13 + 0x58);
    if (plVar10 == (long *)0x0) {
LAB_04d1af94:
      lVar17 = func_0x03280cac();
      if ((bRam0000000007e1af1b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a608);
        bRam0000000007e1af1b = 1;
      }
      if (*(long *)(lVar17 + 0x50) == 0) {
        auVar25._0_8_ = func_0x03280cac();
        auVar25._8_8_ = 0;
        return auVar25;
      }
      lVar16 = func_0x064819c0(*(long *)(lVar17 + 0x50),0);
      lVar17 = 0;
      if ((lVar16 != 0) && (lVar17 = 0, *(long *)(lVar16 + 0x20) != 0)) {
        lVar17 = func_0x06472e74(*(long *)(lVar16 + 0x20),0);
      }
      if ((lVar17 != 0) && (*(int *)(lVar17 + 0x10) != 0)) {
        return ZEXT816(0);
      }
      return ZEXT816(1);
    }
    lVar16 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077803d0) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04d1af64;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077803d0,0);
LAB_04d1af64:
    (*(code *)*puVar12)(plVar10,uVar8,lVar17,puVar12[1]);
    lVar16 = extraout_x1_03;
  }
  auVar24._8_8_ = lVar16;
  auVar24._0_8_ = uVar8;
  return auVar24;
}

