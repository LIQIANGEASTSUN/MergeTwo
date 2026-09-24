/* Ghidra 12.1.2 native pseudocode; RVA 0x6660834; MergeEngine.ECS.Systems.Board.BoardSystem.GetItem; status ok */

/* WARNING: Possible PIC construction at 0x047545a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a024f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a02894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06760d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06760dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067610bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067610f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676111c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067610f8) */
/* WARNING: Removing unreachable block (ram,0x067610c0) */
/* WARNING: Removing unreachable block (ram,0x067610c4) */
/* WARNING: Removing unreachable block (ram,0x06760dd4) */
/* WARNING: Removing unreachable block (ram,0x06760dd8) */
/* WARNING: Removing unreachable block (ram,0x06760df4) */
/* WARNING: Removing unreachable block (ram,0x06760dfc) */
/* WARNING: Removing unreachable block (ram,0x06760e74) */
/* WARNING: Removing unreachable block (ram,0x06760e14) */
/* WARNING: Removing unreachable block (ram,0x06760e80) */
/* WARNING: Removing unreachable block (ram,0x06760eb8) */
/* WARNING: Removing unreachable block (ram,0x06760ed8) */
/* WARNING: Removing unreachable block (ram,0x06760ee4) */
/* WARNING: Removing unreachable block (ram,0x06760eec) */
/* WARNING: Removing unreachable block (ram,0x06760f04) */
/* WARNING: Removing unreachable block (ram,0x06760f1c) */
/* WARNING: Removing unreachable block (ram,0x06760f4c) */
/* WARNING: Removing unreachable block (ram,0x06760f54) */
/* WARNING: Removing unreachable block (ram,0x06760f7c) */
/* WARNING: Removing unreachable block (ram,0x06760f60) */
/* WARNING: Removing unreachable block (ram,0x06760f6c) */
/* WARNING: Removing unreachable block (ram,0x06760f8c) */
/* WARNING: Removing unreachable block (ram,0x06760ff4) */
/* WARNING: Removing unreachable block (ram,0x06761030) */
/* WARNING: Removing unreachable block (ram,0x067610a4) */
/* WARNING: Removing unreachable block (ram,0x06760fb8) */
/* WARNING: Removing unreachable block (ram,0x06760d1c) */
/* WARNING: Removing unreachable block (ram,0x06760d20) */
/* WARNING: Removing unreachable block (ram,0x06a028e0) */
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
/* WARNING: Removing unreachable block (ram,0x06761120) */
/* WARNING: Removing unreachable block (ram,0x06761128) */
/* WARNING: Removing unreachable block (ram,0x06761134) */
/* WARNING: Removing unreachable block (ram,0x06761248) */
/* WARNING: Removing unreachable block (ram,0x06761250) */
/* WARNING: Removing unreachable block (ram,0x06761258) */
/* WARNING: Removing unreachable block (ram,0x06761154) */
/* WARNING: Removing unreachable block (ram,0x0676115c) */
/* WARNING: Removing unreachable block (ram,0x067611a0) */
/* WARNING: Removing unreachable block (ram,0x0676121c) */
/* WARNING: Removing unreachable block (ram,0x067611b0) */
/* WARNING: Removing unreachable block (ram,0x067611b8) */
/* WARNING: Removing unreachable block (ram,0x067611e8) */
/* WARNING: Removing unreachable block (ram,0x0676126c) */
/* WARNING: Removing unreachable block (ram,0x06761270) */
/* WARNING: Removing unreachable block (ram,0x06761274) */
/* WARNING: Removing unreachable block (ram,0x06761278) */
/* WARNING: Removing unreachable block (ram,0x06761298) */
/* WARNING: Removing unreachable block (ram,0x067612a4) */
/* WARNING: Removing unreachable block (ram,0x06761228) */
/* WARNING: Removing unreachable block (ram,0x067612c4) */
/* WARNING: Removing unreachable block (ram,0x067612cc) */
/* WARNING: Removing unreachable block (ram,0x067612d8) */
/* WARNING: Removing unreachable block (ram,0x067612e8) */
/* WARNING: Removing unreachable block (ram,0x067612f0) */
/* WARNING: Removing unreachable block (ram,0x06761204) */

ulong * MergeEngine_ECS_Systems_Board_BoardSystem__GetItem
                  (long param_1,long param_2,long *param_3,undefined *param_4,undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 uVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 unaff_x21;
  long lVar24;
  undefined *unaff_x22;
  long *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 auStack_50 [2];
  
  auVar29._8_8_ = unaff_x20;
  auVar29._0_8_ = unaff_x21;
  puVar9 = &stack0xfffffffffffffff0;
  lVar13 = *(long *)(param_1 + 0x88);
  if (lVar13 == 0) {
    uVar25 = 0x6760850;
    auVar30 = func_0x03280cac();
SUB_06760850:
    lVar13 = auVar30._8_8_;
    *(undefined8 *)(puVar9 + -0x50) = uVar25;
    *(undefined **)(puVar9 + -0x40) = unaff_x26;
    *(undefined **)(puVar9 + -0x38) = unaff_x25;
    *(undefined **)(puVar9 + -0x30) = unaff_x24;
    *(long **)(puVar9 + -0x28) = unaff_x23;
    *(undefined **)(puVar9 + -0x20) = unaff_x22;
    *(undefined8 *)(puVar9 + -0x18) = unaff_x21;
    *(long *)(puVar9 + -0x10) = unaff_x20;
    *(ulong *)(puVar9 + -8) = unaff_x19;
    unaff_x24 = (undefined *)0x7e28000;
    if ((bRam0000000007e28091 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_07807638);
      func_0x03280a18(PTR_DAT_07807640);
      func_0x03280a18(PTR_DAT_07807648);
      func_0x03280a18(PTR_DAT_07807650);
      func_0x03280a18(PTR_DAT_0777e4f0);
      bRam0000000007e28091 = 1;
    }
    *(undefined8 *)(puVar9 + -0x48) = 0;
    *(undefined8 *)(puVar9 + -0x70) = 0;
    *(undefined8 *)(puVar9 + -0x68) = 0;
    *(undefined8 *)(puVar9 + -0x60) = 0;
    uVar18 = func_0x0675fb4c(auVar30._0_8_,lVar13,param_3,(ulong)param_4 & 0xffffffff,param_5,
                             puVar9 + -0x48);
    if ((uVar18 & 1) == 0) {
      return (ulong *)0x0;
    }
    if (*(long *)(puVar9 + -0x48) != 0) {
      func_0x04145068(puVar9 + -0x88,*(long *)(puVar9 + -0x48),*(undefined8 *)PTR_DAT_07807650);
      param_4 = PTR_DAT_07807640;
      unaff_x24 = PTR_DAT_0777e638;
      unaff_x26 = PTR_DAT_0777e4f0;
      *(undefined8 *)(puVar9 + -0x68) = *(undefined8 *)(puVar9 + -0x80);
      *(undefined8 *)(puVar9 + -0x70) = *(undefined8 *)(puVar9 + -0x88);
      *(undefined8 *)(puVar9 + -0x60) = *(undefined8 *)(puVar9 + -0x78);
      unaff_x25 = (undefined *)0x1;
      while( true ) {
        uVar18 = func_0x051159b4(puVar9 + -0x70,*(undefined8 *)param_4);
        if ((uVar18 & 1) == 0) {
          func_0x051159b0(puVar9 + -0x70,*(undefined8 *)PTR_DAT_07807638);
          goto LAB_067609e0;
        }
        param_3 = *(long **)(puVar9 + -0x60);
        if (param_3 == (long *)0x0) goto LAB_06760a08;
        lVar24 = func_0x03ced81c(param_3,*(undefined8 *)unaff_x24);
        if (lVar24 == 0) goto LAB_06760a0c;
        *(undefined1 *)(lVar24 + 0x78) = 1;
        lVar24 = *(long *)(auVar30._0_8_ + 0x60);
        lVar13 = param_3[6];
        param_3 = (long *)func_0x03280ca0(*(undefined8 *)unaff_x26);
        func_0x06104718(param_3,lVar13,0);
        if (param_3 == (long *)0x0) break;
        uVar25 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
        auVar31._8_8_ = uVar25;
        auVar31._0_8_ = uVar25;
        if (lVar24 == 0) goto LAB_06760a04;
        func_0x06a03448(lVar24,uVar25,0);
      }
      auVar31 = func_0x03280cac();
LAB_06760a04:
      func_0x03280cac(auVar31._0_8_,auVar31._8_8_);
LAB_06760a08:
      func_0x03280cac();
LAB_06760a0c:
      func_0x03280cac();
    }
    auVar34 = func_0x03280cac();
    uVar25 = auVar34._0_8_;
    if (auVar34._8_4_ == 1) {
      plVar22 = (long *)func_0x072ce910(uVar25);
      lVar24 = *plVar22;
      func_0x072ce920();
      func_0x051159b0(puVar9 + -0x70,*(undefined8 *)PTR_DAT_07807638);
      if (lVar24 == 0) {
LAB_067609e0:
        return *(ulong **)(puVar9 + -0x48);
      }
      func_0x03280ca4(lVar24);
    }
    uVar21 = 0;
    func_0x051159b0(puVar9 + -0x70,*(undefined8 *)PTR_DAT_07807638);
    func_0x03365958(uVar25);
    func_0x03280ca4(0);
    uVar26 = 0x6760aa4;
    auVar32 = func_0x02f09514();
    puVar10 = puVar9 + -0x90;
    do {
      *(undefined8 *)(puVar10 + -0x50) = uVar26;
      *(undefined **)(puVar10 + -0x40) = unaff_x26;
      *(undefined **)(puVar10 + -0x38) = unaff_x25;
      *(undefined **)(puVar10 + -0x30) = unaff_x24;
      *(undefined **)(puVar10 + -0x28) = param_4;
      *(long *)(puVar10 + -0x20) = lVar13;
      *(long **)(puVar10 + -0x18) = param_3;
      *(undefined8 *)(puVar10 + -0x10) = uVar21;
      *(undefined8 *)(puVar10 + -8) = uVar25;
      puVar12 = auVar32._0_8_;
      if ((bRam0000000007e28092 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777e638);
        func_0x03280a18(PTR_DAT_07807638);
        func_0x03280a18(PTR_DAT_07807640);
        func_0x03280a18(PTR_DAT_07807648);
        func_0x03280a18(PTR_DAT_07807650);
        puVar12 = (ulong *)func_0x03280a18(PTR_DAT_0777e4f0);
        bRam0000000007e28092 = 1;
      }
      unaff_x24 = PTR_DAT_07807640;
      puVar5 = PTR_DAT_07807638;
      unaff_x25 = PTR_DAT_0777e638;
      unaff_x26 = PTR_DAT_0777e4f0;
      *(undefined8 *)(puVar10 + -0x70) = 0;
      *(undefined8 *)(puVar10 + -0x68) = 0;
      *(undefined8 *)(puVar10 + -0x60) = 0;
      if (auVar32._8_8_ == 0) {
        return puVar12;
      }
      func_0x04145068(puVar10 + -0x88,auVar32._8_8_,*(undefined8 *)PTR_DAT_07807650);
      *(undefined8 *)(puVar10 + -0x68) = *(undefined8 *)(puVar10 + -0x80);
      *(undefined8 *)(puVar10 + -0x70) = *(undefined8 *)(puVar10 + -0x88);
      *(undefined8 *)(puVar10 + -0x60) = *(undefined8 *)(puVar10 + -0x78);
      while( true ) {
        uVar18 = func_0x051159b4(puVar10 + -0x70,*(undefined8 *)unaff_x24);
        if ((uVar18 & 1) == 0) {
          puVar12 = (ulong *)func_0x051159b0(puVar10 + -0x70,*(undefined8 *)puVar5);
          return puVar12;
        }
        plVar22 = *(long **)(puVar10 + -0x60);
        if (plVar22 == (long *)0x0) goto LAB_06760c1c;
        lVar24 = func_0x03ced81c(plVar22,*(undefined8 *)unaff_x25);
        if (lVar24 == 0) goto LAB_06760c20;
        *(undefined1 *)(lVar24 + 0x78) = 0;
        uVar18 = auVar32._0_8_[0xc];
        lVar13 = plVar22[6];
        plVar22 = (long *)func_0x03280ca0(*(undefined8 *)unaff_x26);
        func_0x06104718(plVar22,lVar13,0);
        if (plVar22 == (long *)0x0) break;
        uVar25 = (**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
        auVar33._8_8_ = uVar25;
        auVar33._0_8_ = uVar25;
        if (uVar18 == 0) goto LAB_06760c18;
        func_0x06a035ec(uVar18,uVar25,0);
      }
      auVar33 = func_0x03280cac();
LAB_06760c18:
      func_0x03280cac(auVar33._0_8_,auVar33._8_8_);
LAB_06760c1c:
      func_0x03280cac();
LAB_06760c20:
      auVar34 = func_0x03280cac();
      uVar25 = auVar34._0_8_;
      auVar4._8_8_ = plVar22;
      auVar4._0_8_ = uVar25;
      if (auVar34._8_4_ == 1) {
        plVar14 = (long *)func_0x072ce910(uVar25);
        lVar24 = *plVar14;
        func_0x072ce920();
        puVar12 = (ulong *)func_0x051159b0(puVar10 + -0x70,*(undefined8 *)puVar5);
        if (lVar24 == 0) {
          return puVar12;
        }
        func_0x03280ca4(lVar24);
      }
      unaff_x20 = 0;
      func_0x051159b0(puVar10 + -0x70,*(undefined8 *)puVar5);
      func_0x03365958(uVar25);
      func_0x03280ca4(0);
      auVar29 = func_0x02f09514();
      lVar24 = auVar29._8_8_;
      unaff_x19 = auVar29._0_8_;
      puVar9 = puVar10 + -0xc0;
      *(undefined8 *)(puVar10 + -0xc0) = 0x6760ca4;
      *(undefined **)(puVar10 + -0xb8) = puVar5;
      *(long *)(puVar10 + -0xb0) = lVar13;
      *(long **)(puVar10 + -0xa8) = plVar22;
      *(undefined8 *)(puVar10 + -0xa0) = 0;
      *(undefined8 *)(puVar10 + -0x98) = uVar25;
      if ((lVar24 == 0) || (auVar4 = auVar29, *(long *)(lVar24 + 0x18) == 0)) goto LAB_06760d58;
      puVar12 = (ulong *)func_0x06228b54(*(long *)(lVar24 + 0x18),0);
      if ((int)puVar12 != 0) {
        return puVar12;
      }
      unaff_x20 = *(long *)(lVar24 + 0x38);
      if (*(char *)(lVar24 + 0x10) != '\0') goto code_r0x06760cec;
      if (unaff_x20 == 0) goto LAB_06760d58;
      auVar32._8_8_ = *(undefined8 *)(unaff_x20 + 0x10);
      auVar32._0_8_ = unaff_x19;
      uVar21 = *(undefined8 *)(puVar10 + -0xa0);
      uVar25 = *(undefined8 *)(puVar10 + -0x98);
      lVar13 = *(long *)(puVar10 + -0xb0);
      param_3 = *(long **)(puVar10 + -0xa8);
      uVar26 = *(undefined8 *)(puVar10 + -0xc0);
      param_4 = *(undefined **)(puVar10 + -0xb8);
      puVar10 = puVar10 + -0x90;
    } while( true );
  }
  uVar18 = 0;
  if ((bRam0000000007e29903 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078268f0);
    bRam0000000007e29903 = 1;
  }
  lVar13 = *(long *)(lVar13 + 0x40);
  if (lVar13 == 0) {
    auVar29 = func_0x03280cac();
    auVar3._8_8_ = uVar18;
    auVar3._0_8_ = auVar29._8_8_;
    uVar23 = auVar29._0_8_;
    puVar7 = auStack_50;
    auStack_50[0] = 0x6a0249c;
    unaff_x22 = (undefined *)0x7e29000;
    uVar19 = uVar18;
    if ((bRam0000000007e29904 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078268f8);
      bRam0000000007e29904 = 1;
    }
    uVar17 = (uint)uVar19;
    auVar27._8_8_ = auVar29._8_8_;
    auVar27._0_8_ = *(long *)(uVar23 + 0x40);
    if (*(long *)(uVar23 + 0x40) == 0) {
      auVar29 = func_0x03280cac();
      uStack_80 = 0x6a02524;
      uStack_70 = 0x7e29000;
      if ((bRam0000000007e29905 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07826900);
        bRam0000000007e29905 = 1;
      }
      lVar13 = *(long *)(auVar29._0_8_ + 0x40);
      auVar28._8_8_ = auVar29._8_8_;
      auVar28._0_8_ = lVar13;
      if (lVar13 == 0) {
        auVar29 = func_0x03280cac();
        if ((bRam0000000007e29906 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e758);
          bRam0000000007e29906 = 1;
        }
        puVar5 = PTR_DAT_0774e758;
        plVar22 = (long *)(auVar29._0_8_ + 0x20);
        puVar12 = (ulong *)*plVar22;
        while ((plVar14 = (long *)func_0x057ddb20(puVar12,auVar29._8_8_,0), plVar14 == (long *)0x0
               || (*plVar14 == *(long *)puVar5))) {
          puVar15 = (ulong *)func_0x032dd140(plVar22,plVar14,puVar12);
          bVar11 = puVar12 == puVar15;
          puVar12 = puVar15;
          if (bVar11) {
            return puVar15;
          }
        }
        auVar29 = func_0x03281048(plVar14);
        if ((bRam0000000007e29907 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e758);
          bRam0000000007e29907 = 1;
        }
        puVar5 = PTR_DAT_0774e758;
        plVar22 = (long *)(auVar29._0_8_ + 0x20);
        puVar12 = (ulong *)*plVar22;
        while ((plVar14 = (long *)func_0x057ddd18(puVar12,auVar29._8_8_,0), plVar14 == (long *)0x0
               || (*plVar14 == *(long *)puVar5))) {
          puVar15 = (ulong *)func_0x032dd140(plVar22,plVar14,puVar12);
          bVar11 = puVar12 == puVar15;
          puVar12 = puVar15;
          if (bVar11) {
            return puVar15;
          }
        }
        auVar29 = func_0x03281048(plVar14);
        if ((bRam0000000007e29908 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077db230);
          bRam0000000007e29908 = 1;
        }
        puVar5 = PTR_DAT_077db230;
        plVar22 = (long *)(auVar29._0_8_ + 0x28);
        puVar12 = (ulong *)*plVar22;
        do {
          lVar13 = func_0x057ddb20(puVar12,auVar29._8_8_,0);
          if (lVar13 == 0) {
            lVar24 = 0;
          }
          else {
            uVar25 = *(undefined8 *)puVar5;
            lVar24 = func_0x03280b90(lVar13,uVar25);
            if (lVar24 == 0) {
              auVar29 = func_0x03281048(lVar13,uVar25);
              if ((bRam0000000007e29909 & 1) == 0) {
                func_0x03280a18(PTR_DAT_077db230);
                bRam0000000007e29909 = 1;
              }
              puVar5 = PTR_DAT_077db230;
              plVar22 = (long *)(auVar29._0_8_ + 0x28);
              puVar12 = (ulong *)*plVar22;
              goto LAB_06a027b8;
            }
          }
          puVar15 = (ulong *)func_0x032dd140(plVar22,lVar24,puVar12);
          bVar11 = puVar12 == puVar15;
          puVar12 = puVar15;
          if (bVar11) {
            return puVar15;
          }
        } while( true );
      }
      uVar19 = (ulong)(uVar17 & 1);
      uVar25 = *(undefined8 *)PTR_DAT_07826900;
      puVar8 = auStack_50;
      goto LAB_04754664;
    }
    uVar25 = *(undefined8 *)PTR_DAT_078268f8;
    uVar25 = 0x6a024f4;
    unaff_x19 = uVar18;
  }
  else {
    uVar18 = *(ulong *)PTR_DAT_078268f0;
    puVar7 = (undefined8 *)&stack0xfffffffffffffff0;
    lVar13 = *(long *)(lVar13 + 0x18);
    if (lVar13 == 0) {
LAB_04754504:
      func_0x03280cac();
    }
    else if ((uint)((ulong)param_2 >> 0x20) < *(uint *)(lVar13 + 0x18)) {
      lVar13 = *(long *)(lVar13 + (param_2 >> 0x20) * 8 + 0x20);
      if (lVar13 == 0) goto LAB_04754504;
      if ((uint)param_2 < *(uint *)(lVar13 + 0x18)) {
        return *(ulong **)(lVar13 + ((param_2 << 0x20) >> 0x1d) + 0x20);
      }
    }
    uVar25 = 0x475450c;
    auVar27 = func_0x03280cb4();
  }
  puVar8 = (undefined8 *)((long)puVar7 + -0x30);
  *(undefined8 *)((long)puVar7 + -0x30) = uVar25;
  *(undefined **)((long)puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar29;
  *(ulong *)((long)puVar7 + -8) = unaff_x19;
  uStack_70 = 0x7e19000;
  uVar19 = uVar18;
  if ((bRam0000000007e196db & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0);
    func_0x03280a18(PTR_DAT_0777ece8);
    func_0x03280a18(PTR_DAT_0777ecf0);
    bRam0000000007e196db = 1;
  }
  lVar13 = *(long *)(auVar27._0_8_ + 0x18);
  if (lVar13 == 0) {
LAB_0475465c:
    func_0x03280cac();
  }
  else if (auVar27._12_4_ < *(uint *)(lVar13 + 0x18)) {
    lVar13 = *(long *)(lVar13 + (auVar27._8_8_ >> 0x20) * 8 + 0x20);
    if (lVar13 == 0) goto LAB_0475465c;
    if (auVar27._8_4_ < *(uint *)(lVar13 + 0x18)) {
      puVar12 = (ulong *)(lVar13 + ((auVar27._8_8_ << 0x20) >> 0x1d) + 0x20);
      *puVar12 = uVar18;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar15 = (ulong *)(((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar11) {
            *puVar15 = *puVar15 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return puVar12;
    }
  }
  uStack_80 = 0x4754664;
  auVar28 = func_0x03280cb4();
  uVar23 = uVar18;
  auVar3 = auVar27;
LAB_04754664:
  puVar6 = PTR_DAT_0777ecd0;
  puVar5 = PTR_DAT_0777ecc8;
  lVar13 = auVar28._0_8_;
  *(undefined8 *)((long)puVar8 + -0x50) = uStack_80;
  *(undefined **)((long)puVar8 + -0x40) = unaff_x26;
  *(undefined **)((long)puVar8 + -0x38) = unaff_x25;
  *(undefined **)((long)puVar8 + -0x30) = unaff_x24;
  *(long **)((long)puVar8 + -0x28) = unaff_x23;
  *(undefined8 *)((long)puVar8 + -0x20) = uStack_70;
  *(ulong *)((long)puVar8 + -0x18) = uVar23;
  *(undefined1 (*) [16])((long)puVar8 + -0x10) = auVar3;
  if ((bRam0000000007e196dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0);
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196dc = 1;
  }
  uVar25 = *(undefined8 *)puVar5;
  *(undefined8 *)((long)puVar8 + -0x48) = 0;
  puVar12 = (ulong *)func_0x03280ca0(uVar25);
  func_0x040ce3d4(puVar12,*(undefined8 *)puVar6);
  puVar5 = PTR_DAT_0777ece0;
  lVar24 = 0x30;
  if ((uVar19 & 1) == 0) {
    lVar24 = 0x28;
  }
  lVar24 = *(long *)(lVar13 + lVar24);
  if (lVar24 != 0) {
    if (0 < (int)*(ulong *)(lVar24 + 0x18)) {
      uVar18 = 0;
      uVar19 = *(ulong *)(lVar24 + 0x18) & 0xffffffff;
      do {
        if (uVar19 <= uVar18) {
          func_0x03280cb4();
          goto LAB_047547f0;
        }
        piVar1 = (int *)(lVar24 + 0x20 + uVar18 * 8);
        func_0x069fdc94((undefined1 *)((long)puVar8 + -0x48),*piVar1 + auVar28._8_4_,
                        piVar1[1] + auVar28._12_4_,0);
        lVar16 = *(long *)((long)puVar8 + -0x48);
        if ((((-1 < (int)lVar16) && (-1 < lVar16)) && ((int)lVar16 < *(int *)(lVar13 + 0x10))) &&
           ((int)((ulong)lVar16 >> 0x20) < *(int *)(lVar13 + 0x14))) {
          if (puVar12 == (ulong *)0x0) goto LAB_047547f0;
          uVar19 = puVar12[2];
          lVar20 = *(long *)puVar5;
          *(int *)((long)puVar12 + 0x1c) = *(int *)((long)puVar12 + 0x1c) + 1;
          if (uVar19 == 0) goto LAB_047547f0;
          uVar17 = (uint)puVar12[3];
          if (uVar17 < *(uint *)(uVar19 + 0x18)) {
            *(uint *)(puVar12 + 3) = uVar17 + 1;
            *(long *)(uVar19 + (long)(int)uVar17 * 8 + 0x20) = lVar16;
          }
          else {
            func_0x040cec28(puVar12,lVar16,
                            *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar19 = (ulong)*(uint *)(lVar24 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar24 + 0x18));
    }
    return puVar12;
  }
LAB_047547f0:
  auVar29 = func_0x03280cac();
  if (-1 < auVar29._8_4_) {
    puVar12 = (ulong *)0x0;
    if ((-1 < auVar29._8_8_) && (auVar29._8_4_ < *(int *)(auVar29._0_8_ + 0x10))) {
      puVar12 = (ulong *)(ulong)(auVar29._12_4_ < *(int *)(auVar29._0_8_ + 0x14));
    }
    return puVar12;
  }
  return (ulong *)0x0;
code_r0x06760cec:
  if (*(long *)(lVar24 + 0x18) == 0) {
LAB_06760d58:
    func_0x03280cac();
    puVar5 = PTR_DAT_07807ad8;
    *(undefined8 *)(puVar10 + -0x100) = unaff_d9;
    *(undefined8 *)(puVar10 + -0xf8) = unaff_d8;
    *(undefined8 *)(puVar10 + -0xf0) = 0x6760d5c;
    *(long *)(puVar10 + -0xe0) = lVar13;
    *(long *)(puVar10 + -0xd8) = auVar4._8_8_;
    *(long *)(puVar10 + -0xd0) = unaff_x20;
    *(long *)(puVar10 + -200) = auVar4._0_8_;
    if ((bRam0000000007e28093 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a940);
      func_0x03280a18(PTR_DAT_0776bc20);
      func_0x03280a18(PTR_DAT_07807ae0);
      func_0x03280a18(PTR_DAT_07807ad8);
      bRam0000000007e28093 = 1;
    }
    puVar12 = (ulong *)func_0x03280ca0(*(undefined8 *)puVar5);
    return puVar12;
  }
  param_4 = (undefined *)(ulong)*(uint *)(lVar24 + 0x30);
  unaff_x21 = *(undefined8 *)(lVar24 + 0x20);
  auVar30._8_8_ = unaff_x21;
  auVar30._0_8_ = unaff_x19;
  param_3 = *(long **)(lVar24 + 0x28);
  param_5 = func_0x06228bf4(*(long *)(lVar24 + 0x18),0);
  uVar25 = 0x6760d1c;
  unaff_x22 = param_4;
  unaff_x23 = param_3;
  goto SUB_06760850;
LAB_06a027b8:
  lVar13 = func_0x057ddd18(puVar12,auVar29._8_8_,0);
  if (lVar13 == 0) {
    lVar24 = 0;
  }
  else {
    uVar25 = *(undefined8 *)puVar5;
    lVar24 = func_0x03280b90(lVar13,uVar25);
    if (lVar24 == 0) {
      lVar13 = func_0x03281048(lVar13,uVar25);
      puVar6 = PTR_DAT_0774e748;
      puVar5 = PTR_DAT_0774e740;
      if ((bRam0000000007e2990a & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e748);
        func_0x03280a18(PTR_DAT_0774e740);
        bRam0000000007e2990a = 1;
      }
      uVar18 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x04fb1810(uVar18,*(undefined8 *)puVar6);
      puVar12 = (ulong *)(lVar13 + 0x30);
      *puVar12 = uVar18;
      goto SUB_032809c4;
    }
  }
  puVar15 = (ulong *)func_0x032dd140(plVar22,lVar24,puVar12);
  bVar11 = puVar12 == puVar15;
  puVar12 = puVar15;
  if (bVar11) {
    return puVar15;
  }
  goto LAB_06a027b8;
}

